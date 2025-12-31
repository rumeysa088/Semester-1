// const header = document.querySelector("header h1");
// if (header) {
//   const hour = new Date().getHours();
//   const greeting =
//     hour < 12 ? "Good Morning 🌅" :
//     hour < 18 ? "Good Afternoon ☀️" :
//     "Good Evening 🌙";
//   header.innerText = `${greeting} - EduLearn`;
// }

// const navLinks = document.querySelectorAll("nav ul li a");
// navLinks.forEach(link => {
//   link.addEventListener("click", () => {
//     navLinks.forEach(l => l.style.color = "white");
//     link.style.color = "#f7dc6f";
//   });
// });

// const joinBtn = document.querySelector("section:nth-of-type(1) button");
// if (joinBtn) {
//   joinBtn.addEventListener("click", () => {
//     alert("Thanks for joining EduLearn! 🎓");
//   });
// }

// const categories = document.querySelectorAll("section:nth-of-type(2) > div");
// const descContainer = document.createElement("p");
// descContainer.style.textAlign = "center";
// descContainer.style.fontStyle = "italic";
// document.querySelector("section:nth-of-type(2)").after(descContainer);

// categories.forEach(cat => {
//   cat.addEventListener("mouseover", () => {
//     descContainer.innerText = `Category: ${cat.textContent}`;
//   });
//   cat.addEventListener("mouseout", () => {
//     descContainer.innerText = "";
//   });
// });

// const enrollButtons = document.querySelectorAll("section:nth-of-type(3) button");
// enrollButtons.forEach(btn => {
//   btn.addEventListener("click", function() {
//     const courseName = this.parentElement.querySelector("strong").innerText;
//     alert(`You have enrolled in: ${courseName}! ✅`);
//   });
// });

function calculator(){
    let a=Number(prompt("Enter first number:"));
    let b=Number(prompt("Enter second number: "));
    let op=prompt("Enter operation to perform: ");

    let result;

    if(op==='+'){result=a+b;}
     if(op==='-'){result=a-b;}
      if(op==='*'){result=a*b;}
       if(op==='/'){result=a/b;}
    
    console.log("result : "+result);
}
calculator();