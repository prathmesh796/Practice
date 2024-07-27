console.log('hi there')

let a = setTimeout(function() {
    console.log('hey again')
}, 3000)

let sum = (a, b, c) => {
    console.log('the sum is :', (a + b + c))
}

setTimeout(sum, 3000, 1, 2, 3)

setInterval(function(){
    console.log('good bye')
}, 3000)