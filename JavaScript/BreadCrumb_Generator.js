function generateBC(url, separator) {
  
    console.log(url, separator);
    
    let upperExpressions = ["HOME"]
    
    const listReplace = [".html", ".htm", ".php", ".asp"];
    
    let myList = url.split("/");
    
    for (let i=0; i< myList.length; i++){
      if(myList[i] === "") myList.splice(i,1); 
    }
    
    if (myList[0]=='http:' || myList[0] === "https:"){
      myList.splice(1,1);
    }
    
    let includesTag = myList[myList.length-1].includes("#");
    let forbiddenCharacters = ["?", "index"];
    
    for(let element of listReplace){
      if(myList[myList.length-1].includes(element)){
        console.log(element);
        myList[myList.length-1] = myList[myList.length-1].slice(0, myList[myList.length-1].indexOf(element));
      }
    }
    
    let urlSplit = null;
    
    let acronimize = function(string){
      
      let listIgnore = ["the","of","in","from","by","with","and", "or", "for", "to", "at", "a"];
      
      let listSplit = string.split("-");
      
      let acronym = "";
      
      for(let element of listSplit){
        if(listIgnore.includes(element)) continue;
        acronym += element[0].toUpperCase();
      }
      
      return acronym;
    }
    
    console.log('purged', myList, upperExpressions);
    
    for (let i=1; i < myList.length; i++){
      if(myList[i].length>30) {upperExpressions.push(acronimize(myList[i]));}
      else{upperExpressions.push(myList[i].toUpperCase());}
    }
    
    /*
    
    if (myList[myList.length-1]==="index") {
      myList.pop();
      upperExpressions.pop();
    }
    */
    
    if(includesTag){
      myList.pop();
      upperExpressions.pop()
    }
    
    for (let i=0; i< forbiddenCharacters.length; i++){
      for (let j=0; j < myList.length; j++){
        if(myList[j]===forbiddenCharacters[i]){
          myList[j] = "";
        }
        if (myList[j].includes(forbiddenCharacters[i])){
          myList[j] = myList[j].slice(0, myList[j].indexOf(forbiddenCharacters[i]));
        }
      }
      for (let j=0; j < upperExpressions.length; j++){
        if(upperExpressions[j]===forbiddenCharacters[i].toUpperCase()){upperExpressions[j]="";}
        if(upperExpressions[j].includes(forbiddenCharacters[i])){
          upperExpressions[j] = upperExpressions[j].slice(0, upperExpressions[j].indexOf(forbiddenCharacters[i]));
        }
      }
    }
    
    myList = myList.filter(element => element != "");
    upperExpressions = upperExpressions.filter(element => element != "");
    
    console.log("after", includesTag, myList, upperExpressions)
    
    let string = "<a href=\"/\">" + upperExpressions[0] + "</a>" + separator;
    
    let middleString = "";
    
    let count = 0;
    
    for (let i=1; i < myList.length-1; i++){
      if(count>=1) middleString += "/";
      middleString += myList[i]
      string += "<a href=\"/" + middleString + "/\">" + upperExpressions[i] + "</a>" + separator;
      count++;
    }
    
    console.log(myList, upperExpressions);
    
    if (upperExpressions.length===1){
      string = "<span class=\"active\">HOME</span>";
      return string
    }
    
    let stringReplacement = "";
    
    for(let i=0; i< upperExpressions.length; i++){
      if(upperExpressions[i].includes("-")){
        upperExpressions[i] = upperExpressions[i].replace("-", " ");
      }
    }
    
    if(includesTag=true) string += "<span class=\"active\">" + upperExpressions[upperExpressions.length-1] + "</span>";
    
    else {
      string += "<span class=\"active>" + upperExpressions[upperExpressions.length-1] + "</span>";
    }
    
    return string;
    
    /*
    &lt;a href="/"&gt;HOME&lt;/a&gt; / &lt;a href="/users/"&gt;USERS&lt;/a&gt; / &lt;span class="active"&gt;GIACOMOSORBI&lt;/span&gt;
    &lt;a href="/"&gt;HOME&lt;/a&gt; / &lt;a href="/users/"&gt;USERS&lt;/a&gt; / &lt;span class="active"&gt;GIACOMOSORBI?REF=CODEWARS&lt;/span&gt;
  */
  
  }