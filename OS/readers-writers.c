#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

int read_count = 0; // Number of active readers
sem_t rw_mutex; // Semaphore for read/write access
sem_t read_count_mutex; // Semaphore to protect read_count

void* reader(void* arg) {
    while (1) {
        // Enter critical section to update read_count
        sem_wait(&read_count_mutex);
        read_count++;
        if (read_count == 1) {
            sem_wait(&rw_mutex); // First reader locks the resource
        }
        sem_post(&read_count_mutex);

        // Reading the resource
        printf("Reader %d is reading\n", *((int*)arg));

        // Exit critical section
        sem_wait(&read_count_mutex);
        read_count--;
        if (read_count == 0) {
            sem_post(&rw_mutex); // Last reader unlocks the resource
        }
        sem_post(&read_count_mutex);

        sleep(1); // Simulate reading time
    }
    return NULL;
}

void* writer(void* arg) {
    while (1) {
        // Wait to get exclusive access to the resource
        sem_wait(&rw_mutex);

        // Writing to the resource
        printf("Writer %d is writing\n", *((int*)arg));

        // Release the resource
        sem_post(&rw_mutex);

        sleep(1); // Simulate writing time
    }
    return NULL;
}

int main() {
    pthread_t readers[5], writers[2];
    int reader_ids[5] = {1, 2, 3, 4, 5};
    int writer_ids[2] = {1, 2};

    // Initialize semaphores
    sem_init(&rw_mutex, 0, 1); // Initialize rw_mutex to 1 (available)
    sem_init(&read_count_mutex, 0, 1); // Initialize read_count_mutex to 1

    // Create reader and writer threads
    for (int i = 0; i < 5; i++) {
        pthread_create(&readers[i], NULL, reader, &reader_ids[i]);
    }
    for (int i = 0; i < 2; i++) {
        pthread_create(&writers[i], NULL, writer, &writer_ids[i]);
    }

    // Join threads (they will never actually terminate)
    for (int i = 0; i < 5; i++) {
        pthread_join(readers[i], NULL);
    }
    for (int i = 0; i < 2; i++) {
        pthread_join(writers[i], NULL);
    }

    // Destroy the semaphores
    sem_destroy(&rw_mutex);
    sem_destroy(&read_count_mutex);

    return 0;
}
