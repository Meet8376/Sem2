// Output: The sum of 10 and 20 is 30
//Function Calls:
const greet = (name) => `Hello, ${name.toUpperCase()}!`;
console.log(greet('ADVAIT')); 
// Output: Hello, RAHUL!
const z = {
    name: "Sifat bhai",
    role: "DEV",
    exp: 0,
    show: function(){
        console.log(`The name is ${this.name}`);
        console.log(`The role is ${this.role}`);
    }
};
z.show();