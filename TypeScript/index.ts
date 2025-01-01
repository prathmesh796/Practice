let user = { name: "prathmesh", age: 20 }

console.log("hello world!");

console.log(user.name);
// console.log(user.email);

//const assertion
const user1 = { name: "prathmesh", age: 20 } as const; //this tells TypeScript that the object is constant
const arr = [1, 2, 3] as const; //this tells TypeScript that the array is constant