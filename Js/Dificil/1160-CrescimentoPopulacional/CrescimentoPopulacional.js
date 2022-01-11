var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var totalEntradas = lines.shift();
var a;
var PA;
var PB;
var GA;
var GB;
var anos = 0;
var maisQueUmSeculo = false;

for(var i = 0; i < totalEntradas; i++){

    maisQueUmSeculo = false;

    a = lines.shift();

    a = a.split(" ");

    PA = parseInt(a.shift());
    PB = parseInt(a.shift());
    GA = parseFloat(a.shift())/100;
    GB = parseFloat(a.shift())/100;

    while(PA <= PB){
        PA = parseInt(PA + (GA*PA));
        PB = parseInt(PB + (GB*PB));
        anos++;

        if(anos>100){
            console.log("Mais de 1 seculo.");
            anos = 0;
            maisQueUmSeculo = true;
            break;
        }

    }

    if(!maisQueUmSeculo){
        if(anos <= 100){
            console.log(anos + " anos.");
            anos = 0;
        }    
    }  
}



