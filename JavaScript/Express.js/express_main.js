//ref - https://expressjs.com/

const express = require('express')
const app = express()
const port = 3000

//this is used to serve static file in the website(static files means those file which are made public avaliable to the end user)
app.use(express.static('public'))

//syntax - app.get(path, handler)
app.get('/', (req, res) => {
    res.send('Hello World!, hi ')
})

//creating multiple pages
app.get('/home', (req, res) => {
    res.send('this is a home page ')
})

app.get('/about', (req, res) => {
    res.send('this is a about page ')
})

app.get('/contact', (req, res) => {
    res.send('this is a contact page ')
})

//varibles in pages
app.get('/contact/:first', (req, res) => {
    //console.log(req) //very big obj
    console.log(req.params)
    console.log(req.query)
    res.send(`this is a contact page with ${req.params.first} subpage`)
})

app.get('/about/:one/:two', (req, res) => {
    res.send(`this is a contact page with ${req.params.one} and ${req.params.two} subpage`)
})

app.listen(port, () => {
    console.log(`Example app listening on port ${port}`)
})