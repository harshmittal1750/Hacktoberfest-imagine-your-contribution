var listPrice = 499;
var sellingPrice = 12000;

var discountPrice = ((sellingPrice - listPrice) / sellingPrice) * 100;

console.log(Math.round(discountPrice) + "% off");
