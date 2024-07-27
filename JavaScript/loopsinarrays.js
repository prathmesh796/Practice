let n = [3, 67, 344, 4, 34, 3512]

for(let i = 0; i < n.length; i++){ //basic for loop
    console.log(n[i])
}

for (let i of n){ //for...of loop
    console.log(i)
}

for (let i in n){ //for...in loop
    console.log(i) //this will print the index of the element
    console.log(n[i]) //this will actually print the element 
}

n.forEach((element) => { //forEach is a method used to iterate in an array
    console.log(element)
})

let s = "hello there"
let x = Array.from(s) //creates an array from the passed object
console.log(x)