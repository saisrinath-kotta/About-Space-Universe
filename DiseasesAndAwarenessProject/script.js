const toggleBtn = document.getElementById("themeToggle");

/* SET ICON WHEN PAGE LOADS */

if(localStorage.getItem("theme")==="dark"){

document.documentElement.classList.add("dark");

if(toggleBtn){
toggleBtn.textContent="☀️";
}

}
else{

if(toggleBtn){
toggleBtn.textContent="🌙";
}

}

/* TOGGLE THEME */

if(toggleBtn){

toggleBtn.onclick=()=>{

document.documentElement.classList.toggle("dark");

if(document.documentElement.classList.contains("dark")){

localStorage.setItem("theme","dark");

toggleBtn.textContent="☀️";

}
else{

localStorage.setItem("theme","light");

toggleBtn.textContent="🌙";

}

};

}