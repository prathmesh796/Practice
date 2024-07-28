//JavaScript Hoisting refers to the process whereby the interpreter appears to move the declaration of functions, variables, classes, or imports to the top of their scope, prior to execution of the code.

console.log(a)

var a = 9
console.log(a)

hello()
function hello(){
    console.log("hello")
}

//this runs in case of var, but in case of let or const the situation is different
//following will throw error
/*
console.log(b)

let b = 'e'   //here declaration is hoisted at the top but is not initialised
console.log(b)

*/

//following will throw error
/*
console.log(b)  

let b = 'e'  //here declaration is hoisted at the top but is not initialised
console.log(b)

*/

//following will throw error
/*
greet()
let g = function greet(){ //same goes for const
    console.log("greet")
}

*/