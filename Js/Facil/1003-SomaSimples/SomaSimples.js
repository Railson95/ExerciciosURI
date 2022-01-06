var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

console.log("SOMA = " + (parseInt(lines.shift()) + parseInt(lines.shift())));