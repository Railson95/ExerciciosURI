var input = require("fs").readFileSync("stdin", "utf8"); // realiza a leitura do arquivo

var teste = input.split("\n"); // transforma a entrada (string) em um array, podendo ser acessada por possição
                              // ex: teste[0] 


console.log(teste);

var a = parseInt(teste.shift());
var b = parseInt(teste.shift());

                              

function soma(a, b){
    var soma = 0;

    soma = a + b;

    console.log("X = " + soma);
}

soma(a,b);






