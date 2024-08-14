import fs from "fs/promises"

let a = await fs.readFile('temp1.txt')

let b = await fs.writeFile('temp2.txt', 'written using promises') //fs.appendFile() also has the similar implementation

console.log(a.toString())
console.log(b) //this will give undefined as output but it will do the given operation in the passed file

