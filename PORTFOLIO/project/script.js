/* ========================= */
/* GET HTML ROOT */
/* ========================= */

const html = document.documentElement;


/* ========================= */
/* LOAD SAVED THEME */
/* ========================= */

const savedTheme = localStorage.getItem("theme");

if(savedTheme){

html.setAttribute("data-theme", savedTheme);

}
else{

/* Default theme = DARK */

html.setAttribute("data-theme","dark");

}


/* ========================= */
/* THEME TOGGLE FUNCTION */
/* ========================= */

function toggleTheme(){

const current = html.getAttribute("data-theme");

const next = current === "dark" ? "light" : "dark";

html.setAttribute("data-theme", next);

localStorage.setItem("theme", next);

/* Change button icon */

const button = document.querySelector(".theme-toggle");

if(button){

button.textContent = next === "dark" ? "🌙" : "☀️";

}

}


/* ========================= */
/* SEARCH FUNCTION */
/* ========================= */

const searchInput = document.getElementById("search-input");

if(searchInput){

searchInput.addEventListener("keypress", function(e){

if(e.key === "Enter"){

let value = searchInput.value.toLowerCase().trim();

const pages = {

heart:"heart.html",
"heart disease":"heart.html",

cancer:"cancer.html",

diabetes:"diabetes.html",

malaria:"malaria.html",

tuberculosis:"tuberculosis.html",
tb:"tuberculosis.html"

};

if(pages[value]){

window.location = pages[value];

}
else{

alert("Disease not found. Try: heart, cancer, diabetes, malaria, tuberculosis");

}

}

});

}