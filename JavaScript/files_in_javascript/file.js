const { error } = require('console')
const fs = require('fs')

console.log(fs)


//this is a very static way to work with files
console.log("initiate")

fs.writeFileSync('temp1.txt', "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.")

console.log("finished")

// here is a more dynamic approach

console.log("start")

fs.writeFile('temp2.txt', 'Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industrys standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.', ()=> {
    console.log('end')

    fs.readFile('temp2.txt', (error, data)=>{
        console.log(error, data)
        console.log(error, data.toString())
    })
})

fs.appendFile('temp1.txt', '\n this file is created by prathmesh', (error, data)=>{
    console.log(data)
})