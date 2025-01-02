function getRandomElement<T>(arr: T[]): T {
  const randomIndex = Math.floor(Math.random() * arr.length);
  return arr[randomIndex];
}

const names = ['Alice', 'Bob', 'Eve'];
const numbers = [1, 2, 3, 4, 5, 6];

console.log(getRandomElement(names));
console.log(getRandomElement(numbers));