//Arrays in Javascript are the objects which can store multipe type of data

let arr = [12, 34, 23, 45, 4, true, false, "hello here"]
console.log(typeof arr)
console.log(arr[0])
console.log(arr[3])
arr[4] = 35
arr[5] = 9
arr[8] = 34.4
console.log(arr)

let a1 = []
let n = 0
while(n < 10){
    a1[n] = n
    n++
}
console.log(a1)

let s = arr.toString() //converts an array into a string
console.log(s)

let c = arr.join("_")
console.log(c)
console.log(typeof c)

arr.pop() //deletes the last element of the array and returns the deleted element
console.log(arr)

arr.push(99999901)
console.log(arr, arr.length)

arr.shift() //deletes the first element of the array
console.log(arr)

arr.unshift("start") //adds an element in the start of the array
console.log(arr)

console.log(arr.length)
delete arr[0] //delete operator removes the element from an array, but it doesn't removes the allocated memory
console.log(arr)
console.log(arr.length)
arr[0] = 'sih'
console.log(arr)

let new_arr = arr.concat(a1) //it creates a new array with elements of array on which it is operated and elements of array which is passed
//you can pass more than one arrays by using comma separated arrays.
console.log(new_arr) 

let num = [342, 36, 31, 14, 1, 23, 19, 670, 54, 5]
num.sort() //sort function sorts the array in alphabetical order(i.e. it will give the output as 1, 14, 19, 23, 31, 36, 342, 5, 54, 670)
console.log(num)
//inorder to do the sorting in normal ascending or descending order we have to pass a compare function with the sort funtion
let compare = (a, b) => {
    return a - b //this goes for ascending order 
    //for descending order return b - a
}
num.sort(compare)
console.log(num)

num.reverse() //reverses the array
console.log(num)

let splicenum = num.splice(2, 3, 9991, 9992, 9993) 
/*
  first argument - starting index from which the operation will begin
  second argumen - no. of elements you want to delete starting from first passed argument
  remaining elements - new elements to add from the starting index
  it returns an array filled with the deleted elements
  note - you can add as many elements you want 
*/
console.log(num)
console.log(splicenum)

let slicenum = num.slice(2) //creates a new array strating from the index 2 till the end of the array
let slicenum2 = num.slice(4, 7) //creates a new array strating from first index till one less than the second index
console.log(slicenum)
console.log(slicenum2)