//there are 7 primitive data types in Javascript:

let a = null //null data type                       n
let b = 356 //number data type                      n
let c = true //boolean data type                    b
let d = BigInt(345) //BigInt data type              b
let e = "Pratmesh" //String data type               s
let f = Symbol("hello there ") //Symbol data type   s
let g = undefined //Undefined data type             u

console.log(a, b, c, d, e, f, g)

//Objects in Javascript are used to hold the data in key-value pairs

const item = {
    "prathm" : 123,
    456 : "dfr",
    "marks" : 234,
    "location" : undefined,
    "college" : null,
    "job" : false
}

console.log(item[456])
console.log(item.job)

//note - "item" is just a ref. to the created object. we can add more key-value pairs in the object even if it is declared as const. But we can't change the oject stored in item.

// item = 45
// item = {}

// the above two statements actually tries to change the value of the item.

item ['assignment'] = 'submitted' //this statement doesn't change the actual value of item instead it just changes the contents of the object stored in it.

console.log(item)