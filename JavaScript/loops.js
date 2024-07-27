//for loop
let i = 0
for(i = 0; i < 10; i++){
    console.log(i ** 2)
}
i = Number.parseInt(i) //It is always a safer side to convert any variale to its assigned value type 
console.log(typeof i)

//for in loop
let obj = {
    prathm : 45,
    shiva : 34,
    prem : 56,
    kavya : 67
}

for(let i in obj){
    console.log(i, " : " , obj[i])
}

//for of loop
let s = "prathmesh" // this loop also works on arrays
for(let i in s){
    console.log(i)
}

//while loop
i = 0
while(i < 24){
    console.log("this is hi no ", i)
    i++
}

//do while loop
i = 0
do{
    console.log("this is hello no ", i)
    i++
}while(i < 10)