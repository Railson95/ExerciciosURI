var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var posAtual = 1;
var list = [];


while((lines.length-1) > 0){
    a = parseInt(lines.shift());

    //console.log("Valor do a: " +a)

    if(a === 0){
        console.log("Caso " + posAtual + ": 1 numero")
        console.log(a)
        console.log("\n");
        posAtual++;
    } else {
        if(a === 1){
            console.log("Caso " + posAtual + ": 2 numeros")
            console.log(0 +" "+1);
            console.log("\n");
            posAtual++;
        } else {
            list.push(0);
            list.push(1);
    
            var x = 2;
            contador = 0;

            while(a >= x){

                while(contador < x){
                    list.push(x);
                    contador++;
                }
                x++;
                contador = 0;
            }

            console.log("Caso " + posAtual + ": "+ list.length + " numeros");

            var texto = "";

            for (var i = 0; i < list.length; i++) texto += list[i] + " ";

            console.log(texto);
            console.log("\n");

            posAtual++;

            list = [];

        }
    } 

}
