let a = "himanshu";
let b = "raju";
console.log(a+b); // string concatination happend here , it will add both strings 
console.log(a*b);
console.log(a-b);
console.log(a/b);

let c= 2;
console.log(typeof(b+c)); // this is coersion , it automatically convert number into string 
console.log(typeof c);

// basically coersion is two type - implicit and exlicit coersion , coersion is a method in which one datatype convert into other type.

console.log("$"+2+3);
console.log("$"+(2+3));
console.log('$2'+'$3');


console.log('items (' +(1+1) +'):$' + (6+5));



// escape character -   \' 
// using backtick - template string - easier than string concatination 

console.log(`${"hello"+(2+3)}`) //${} - calculate as a string 
console.log(`"hello"+(2+3)`);// everything here is a literal text 

