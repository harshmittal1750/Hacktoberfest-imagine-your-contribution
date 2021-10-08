let showAll = document.querySelector('.all');
let showCars = document.querySelector('.cars');
let showAnimals = document.querySelector('.animals');
let showFruits = document.querySelector('.fruits');
let showColors = document.querySelector('.colors');
let allItems = document.querySelectorAll('.item');
let btns = document.getElementsByTagName('button');

for (let i = 0; i < btns.length; i++) {
  btns[i].addEventListener('click', function () {
    for (let i = 0; i < btns.length; i++) {
      if (btns[i].classList.contains('active')) {
        btns[i].classList.remove('active');
      }
    }
    this.classList.add('active');
  });
}

//show all items

showAll.addEventListener('click', function (e) {
  for (let i = 0; i < allItems.length; i++) {
    allItems[i].style.display = 'block';
  }
});

//show cars only

showCars.addEventListener('click', function (e) {
  for (let i = 0; i < allItems.length; i++) {
    if (allItems[i].classList.contains('cars')) {
      allItems[i].style.display = 'block';
    } else {
      allItems[i].style.display = 'none';
    }
  }
});

//show animals only

showAnimals.addEventListener('click', function (e) {
  for (let i = 0; i < allItems.length; i++) {
    if (allItems[i].classList.contains('animals')) {
      allItems[i].style.display = 'block';
    } else {
      allItems[i].style.display = 'none';
    }
  }
});

//show fruits only

showFruits.addEventListener('click', function (e) {
  for (let i = 0; i < allItems.length; i++) {
    if (allItems[i].classList.contains('fruits')) {
      allItems[i].style.display = 'block';
    } else {
      allItems[i].style.display = 'none';
    }
  }
});

//show colors only

showColors.addEventListener('click', function (e) {
  e.preventDefault();
  for (let i = 0; i < allItems.length; i++) {
    if (allItems[i].classList.contains('colors')) {
      allItems[i].style.display = 'block';
    } else {
      allItems[i].style.display = 'none';
    }
  }
});
