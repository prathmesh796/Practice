const mongoose = require('mongoose')

const todoSchema = new mongoose.Schema({
    title: String,
    desc: String,
    isDone: Boolean
})

const todo = mongoose.model('Todo', todoSchema)