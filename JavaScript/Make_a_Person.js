"freeCodeCamp project"

const Person = function(firstAndLast) {
    // Only change code below this line
    // Complete the method below and implement the others similarly
    this.getFullName = function() {
      return firstAndLast;
    };
    this.getLastName = function(){
      return firstAndLast.split(" ")[1];
    };
    this.getFirstName = function(){
      return firstAndLast.split(" ")[0];
    };
    this.setFirstName = function(firstname){
      firstAndLast = firstname + " " + this.getLastName();
    };
    this.setLastName = function(lastname){
      firstAndLast = this.getFirstName() + " " + lastname;
    };
    this.setFullName = function(fullname){
      firstAndLast = fullname;
    };
  };
  
  const bob = new Person('Bob Ross');
  console.log(bob.getFullName());
  
  console.log(Object.keys(bob).length);
  
  console.log(bob.getFirstName());
  
  console.log(bob.setFirstName("Haskell"));
  
  console.log(bob.getFullName());

  /* Description

  Fill in the object constructor with the following methods below:

getFirstName()
getLastName()
getFullName()
setFirstName(first)
setLastName(last)
setFullName(firstAndLast)
Run the tests to see the expected output for each method. The methods that take an argument must accept only one argument 
and it has to be a string. These methods must be the only available means of interacting with the object.

*/