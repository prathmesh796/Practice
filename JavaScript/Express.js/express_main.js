//ref - https://expressjs.com/

const express = require('express')
const blogs = require('./routes/blog.js')

const app = express()
const port = 3000

//this is used to serve static file in the website(static files means those file which are made public avaliable to the end user)
app.use(express.static('public'))
app.use('/blog', blogs)

//Middlewares in Express js
// Middleware functions are functions that have access to the request object (req), the response object (res), and the next function in the application’s request-response cycle. The next function is a function in the Express router which, when invoked, executes the middleware succeeding the current middleware.
const myLogger = function (req, res, next) {
    console.log('LOGGED')
    next()
}

app.use(myLogger)

//this middleware can be also created as :
// app.use((req, res, next) =>  {
//     console.log('LOGGED')
//     next()
// })

//we can create as many middleware as we want
/*
middleware ref - 
1. https://expressjs.com/en/guide/writing-middleware.html
2. https://expressjs.com/en/guide/using-middleware.html
*/

//EJS using Express.js
//ejs ref - https://github.com/mde/ejs/wiki/Using-EJS-with-Express
//configuring 'view engine' as 'ejs'
app.set('view engine', 'ejs');

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


//POST req
app.post('/', (req, res) => {
    console.log("this is a post req")
    res.send('Hello World!')
})

//PUT req
app.put('/', (req, res) => {
    console.log("this is a put req")
    res.send('Hello World!')
})

/*
we can also use the chaining syntax to write all the GET, POST, PUT, etc. req with a single app as follows:

app.get('/', (req, res) => {
    res.send('Hello World!, hi ')
}).post('/', (req, res) => {
    console.log("this is a post req")
    res.send('Hello World!')
}).put('/', (req, res) => {
    console.log("this is a put req")
    res.send('Hello World!')
})

this is called as Chaining of Request
this will also work same
*/

//rendering html files
app.get('/home', (req, res) => {
    console.log("this is rendering of home.html")
    res.sendFile('templates/home.html', { root: __dirname })
})

//EJS rendering
app.get('/testejs', (req, res) => {
    //res.send('Hello World!, hi ')
    let v = "prathmesh"
    res.render('index', {foo: 'FOO', name: v})
})


app.listen(port, () => {
    console.log(`Example app listening on port ${port}`)
})