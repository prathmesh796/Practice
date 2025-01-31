//Date.now() returns the number of milliseconds since January 1, 1970.

console.log(Date.now());

const minute = 1000 * 60;
const hour = minute * 60;
const day = hour * 24;
const year = day * 365;

let hours = Math.round(Date.now() / hour);
console.log(hours); 