console.log(console) //list outs aal the console methods that are present in the javascript

console.info("this work same as log method")

console.warn("this will give a warning to the console output")

console.error("this will give an error on the console")

console.assert(true) //assert method will check the passed condition and give the appropritate result
console.assert(false) //if the condition is true then it will not do anything, but if the condition is false the it will say that assertion failed!

//the time() and timeEnd() methods are used to measure the time elsped between them. That is, it will start counting the time from time() method till the timeEnd() method is not encountered
console.time("lebal")

//this example demonstrates the calculation of time taken by the following loop to be executed
let i
for(i = 0; i < 10; i++){
    console.log("hello there")
}

console.timeEnd("lebal")//remember that you have to use corresponding label which is passed in the corresponding time() function.



//console.clear() //this will clear out the console and leave a message the says "console was cleared"