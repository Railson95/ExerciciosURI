var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var dinheiro = parseFloat(lines);

//console.log(dinheiro);

var bancoDeNotasMoedas = [100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01];


function calculaQtdDeTroco(dinheiro, bancoDenotasMoedas){

    listaNotas = [] // contem a quantidade de notas 
    listaMoedas = []

    for(var i = 0; i <= 5; i++){
        if(dinheiro >= bancoDeNotasMoedas[i]){
            var resultado = dinheiro/bancoDeNotasMoedas[i];
            resultado = ~~resultado;
            dinheiro = dinheiro - bancoDeNotasMoedas[i] * resultado;
            listaNotas.push(resultado, bancoDeNotasMoedas[i].toFixed(2));
        } 
        else {
            listaNotas.push(0, bancoDenotasMoedas[i].toFixed(2));
        }  
    }

    console.log("NOTAS:");
    for(var i = 0; i < listaNotas.length; i++){
        if(i%2 === 0) {
            console.log(listaNotas[i] + " nota(s) de R$ " + listaNotas[i+1]);
        }     
    }

    for(var j = 6; j < bancoDeNotasMoedas.length; j++){
        if(dinheiro >= bancoDeNotasMoedas[j]){
            var resultado = dinheiro/bancoDeNotasMoedas[j];
            resultado = ~~resultado;
            dinheiro = dinheiro - bancoDeNotasMoedas[j] * resultado;
            listaMoedas.push(resultado, bancoDeNotasMoedas[j].toFixed(2));
        }
        else {
            listaMoedas.push(0, bancoDenotasMoedas[j].toFixed(2));
        }   
    }

    console.log("MOEDAS:");
    for(var i = 0; i < listaMoedas.length; i++){
        if(i%2 === 0){
            console.log(listaMoedas[i] + " moeda(s) de R$ " + listaMoedas[i+1]);
        }
    }
}

calculaQtdDeTroco(dinheiro, bancoDeNotasMoedas);



