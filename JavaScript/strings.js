//ref - https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String

//String datatype in javascript is used to store a contignuous sequence of characters in a variable
//remember tha tstring datatype in javascript is immutable. we cannot update any declared string

let s = "hello there"
let s1 = 'hey there'
console.log(s)
console.log(s1)

//template literals - also called as string interpolation
let a = "     prathmesh    "
let b = "brillant"
let c1 = 'a is a b student'
let c = `${a} is a ${b} student`
console.log(c1)
console.log(c)

//String Indexing
let x = "this is a long string"
console.log(x[1])
console.log(x.length) // returns the length of the string

console.log(x.toUpperCase()) //converts entire string in upper case
console.log(x.toLowerCase()) //converts entire string in lower case

//slicing
console.log(x.slice(2)) //returns the string from passed index to the end of the string
console.log(x.slice(2, 10)) //returns the string from first passed index to the one less than the second passed index

console.log(x.replace("this", "that")) //returns the entire string with the replacement in first passed substring by the second passed substring 

console.log(s.concat(" ", a, " is a good guy")) //returns the string with addition of the passed arg in the given sequence

console.log(a) //returns the normal string with all the characters
console.log(a.trim()) //returns the string by trimming the unnecessary spaces from both front and back of the string