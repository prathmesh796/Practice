//these modules are called as common modules

const hello = () =>  {
    console.log("hello")
}

const hello_name = (name) => {
    console.log("hello" + name)
}

module.exports = {hello, hello_name}; // same as below line
// module.exports = {hello: hello, hello_name: hello_name}
