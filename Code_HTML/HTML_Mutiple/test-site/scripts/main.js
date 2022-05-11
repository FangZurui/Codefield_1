let myHeading=document.querySelector('h1');
myHeading.textContent='YASUO';

var i=1;
function nextImg(){
    i++;
    myImage.src="images/yasuo"+i+".jpg";
    if(i===3){
        i=0;
    }
}
let myImage=document.querySelector('img');
myImage.onclick=function(){
    nextImg();
}
/*
let myImage=document.querySelector('img');
var i=1;
myImage.onclick=function(){
    let mySrc=myImage.getAttribute('src');
    i++;
    myImage.setAttribute('src','images/yasuo'+i+'.jpg');
    if(i===3){
        i=0;
    }
}
*/

let myButton=document.querySelector('button');
let myHeading2=document.querySelector('h2');
function setUserName(){
    let myName=prompt('请输入你的名字！');
    if(!myName||myName===null){
        setUserName();
    }
    localStorage.setItem('name',myName);
    myHeading2.textContent=myName+'的战绩：0/12/0';
}
if(!localStorage.getItem('name')){
    setUserName();
}else{
    let storedName=localStorage.getItem('name');
    myHeading2.textContent=storedName+'的战绩:0/12/0'
}
myButton.onclick=function(){
    setUserName();
}
