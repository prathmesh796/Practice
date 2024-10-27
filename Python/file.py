file = open('Python\pytemp.txt', 'r')

#this will print the buffer value of the file
#file.read()
#print(file)

#this will print the actual vvalue of the file
text = file.read()
print(text)

file.close()

#same job is done by
with open('Python\pytemp.txt', 'r') as file:
    file.read()