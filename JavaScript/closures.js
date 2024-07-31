//https://developer.mozilla.org/en-US/docs/Web/JavaScript/Closures
// A closure is the combination of a function bundled together (enclosed) with references to its surrounding state (the lexical environment). In other words, a closure gives you access to an outer function's scope from an inner function. In JavaScript, closures are created every time a function is created, at function creation time.

let msg = "hello 1"

function a(){
    let msg = "hello a"
    console.log(msg)
    {
        let msg = "hello a inner"
        console.log(msg)
    }

    let b = function b1(){
        let msg = "hello b"
        console.log(msg)
    }
    //b() //--> this also works
    return b()
}

console.log(msg)
a()