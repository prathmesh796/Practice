//Run this code in console of any browser this won't run in terminal.

let a = prompt("what is your name?"); //prompt() is use to ask the user of any input.
console.log(a);
console.log(typeof a);
alert("okay so your name is", a); //alert() is use to show a message to the user

let w = confirm("do you want to do some activity on your page?")
if(w){
    console.log("okay")
    document.write("this will write on the page")
}
else{
    console.log("hmmm... it will look very dry")
}
