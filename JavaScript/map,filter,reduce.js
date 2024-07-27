let n1 = [2, 4, 6, 8, 10 ,12, 14]

//map(value, index, array) -
//value - holds the element of the array
//index - holds the index value of the element
//array - holds the entire array on which the map function is performed
let a = n1.map((value) => { //returns a new array by performing the given instruction 
    return value + 5
})
console.log(a)

let n2 = [1, 3, 5, 7, 9 , 11, 13]

//filter(value, index, array) - same as map
let b = n2.filter((value) => { //returns a new array with the elements fitting in the given condition
    return value < 9
})
console.log(b)

let n3 = [1, 1, 2, 3, 5, 8, 13]

//reduce(arg1, arg2,...)
let c = n3.reduce((x, y) => { //returns a single value by recurrsively performing the given instruction on the element a[n] and a[n+1]
    return y - x
})
console.log(c)