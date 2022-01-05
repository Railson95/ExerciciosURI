var input = require("fs").readFileSync("stdin", "utf8"); // realiza a leitura do arquivo linha a linha

var teste = input.split("\r"); // transforma a entrada (string) em um array, podendo ser acessada por possição
                              // ex: teste[0] 


var list = [];

var soma = 0;

/*
    Lê as entradas de valores parecidos com um que possuem um grafo, retira os caracteres \n
    e soma as entradas, retornando o valor total delas.
*/

for(var i = 0; i < teste.length; i++){
    var teste3 = teste[i].split('\n');
    //teste3.shift();
    if(teste3.length > 1){
        teste3.shift();
    }
    var teste4 = teste3.toString();
    teste4 = teste4.split(" ")
    console.log(teste4);

    for(var j = 0; j < teste4.length; j++){
        soma = soma + parseInt(teste4[j]);
    }
}

console.log("A soma das entradas são: " + soma);

teste3 = teste[1].split('\n');
//teste[1].shift();
//teste3 = teste3.split(" ");
teste3.shift();

/*
var string = teste3.toString();

console.log(typeof(input));

var x = string.split(" ");

console.log(x);
 */                         

/*
var a = teste.shift();
var b = teste[0].split('\r');
var c = b.shift();
//var c = parseInt(teste.shift());                              

console.log(a);
console.log(b);
console.log(c);
*/

//console.log("soma total: " + soma);

/*
a = parseInt(teste.shift())
b = parseInt(teste.shift())
console.log(teste.shift());
console.log(teste.shift());
console.log(teste.shift());
console.log(teste.shift());

var soma = a + b;

console.log("Soma: " + soma);
*/
/*
Caso a entrada tenha apenas 2 valores
Converte todos os dados da entrada que antes era do tipo String para inteiro
var [x, y] = input.split(" ").map(item=>parseInt(item));
console.log("qtdLinhas: " + x);
console.log("qtdColunas: " + y);
*/



