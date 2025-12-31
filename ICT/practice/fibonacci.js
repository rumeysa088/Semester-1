function fib(){
    let n=Number(prompt("Enter a number"));
    let a=0;let b=1;let c;
     console.log(a ); console.log(b );
    for(let i=2;i<n;i++){
        c=a+b;
        console.log(c );
        a=b;b=c;
    }
}

function fact(){
    let n=Number(prompt("Enter a number: "));
    let fact=1;
    for(let i=1;i<=n;i++){
        fact=fact*i;
    }console.log("Factorial is "+fact);
}

function reverseNumber() {
    let num = Number(prompt("Enter a number: "));
    let reversed = 0;
    let temp = num;

    while (temp > 0) {
        let digit = temp % 10;            // get last digit
        reversed = reversed * 10 + digit; // append digit
        temp = Math.floor(temp / 10);     // remove last digit
    }

    console.log("Reversed Number: " + reversed);
}

reverseNumber();

function sum() {
    let num = Number(prompt("Enter a number: "));
    let sum= 0;
    let temp = num;

    while (temp > 0) {
        let digit = temp % 10;            // get last digit
        sum+=digit;// append digit
        temp = Math.floor(temp / 10);     // remove last digit
    }

    console.log("sum: " + sum);
}

sum();

function check() {
    let num = Number(prompt("Enter a number: "));
    let count= 0;
  
  for(let i=2;i<=num;i++){
    if(num%i===0)count++;
  }
     if(count===1)console.log("Number is prime");
    else console.log("Number is not prime");
}

check();

