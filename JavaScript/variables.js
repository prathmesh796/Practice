console.log("Hello there")

var a = 4
console.log(a)

{
    var a = 'hi'
    console.log(a)
}

a = 'prathmesh'
console.log(a)

//remember never use 'var' declare variables in js as the variables declared by var are not block bound
//instead of var us 'let' and 'const' 

let b = 10
console.log(b)

b = "0123"
console.log(b)

{
    let x = 1299
    console.log(b)
}

b = 34
x = 34
console.log(b)
console.log(x)

const w = 1.2344
//w = 12 this will throw error
