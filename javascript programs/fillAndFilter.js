var newArray = [2, 4, 66, 88, 234, 543, 34543, 234543];
console.log(newArray.fill("empty", 2, 5));

var newArray2 = [123333, 2343, 443, 234, 24, 55, 67654, 3, 45654, 45];

var result = newArray2.filter((num) => num < 55);
console.log(result);
