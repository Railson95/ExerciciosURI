var input = require("fs").readFileSync("stdin", "utf8"); // realiza a leitura do arquivo


var teste = input.split(" "); // transforma a entrada (string) em um array, podendo ser acessada por possição
                              // ex: teste[0] 


                             
while(teste.length != 0){
    console.log(teste.shift()); // remove da primeira posição do array e retorna o resultado 
}



//console.log(teste[2]);

/*
Caso a entrada tenha apenas 2 valores
Converte todos os dados da entrada que antes era do tipo String para inteiro
var [x, y] = input.split(" ").map(item=>parseInt(item));
console.log("qtdLinhas: " + x);
console.log("qtdColunas: " + y);
*/

//pequena mudança


