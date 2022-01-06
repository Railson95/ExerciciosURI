var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

const pi = 3.14159;

function calculaArea(raio){
    var area = 0;

    area = pi * Math.pow(parseFloat(raio), 2);

    console.log("A="+area.toFixed(4));
}

var a = lines.shift();

calculaArea(a);