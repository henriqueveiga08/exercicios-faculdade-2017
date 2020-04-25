function norm(Matrix) {
    //Requer implementa��o ou inclus�o de bibliotecas de terceiros
}
/*
* A = Matriz
* b = Resultado da matriz
*/
function gaussSeidel(A, b) {
	var X = new Array();
	var x = new Array();
	for (var k = 0; k < b.length; k++)
	{
		X[k] = 0; //Math.floor((Math.random() * 10000) + 1);
	}
	var E = 0.00001; //precisao, toler�ncia
	var m = 1000; //n�mero m�ximo de itera��es
	var ni = 0; //contador de itera��es
	var continuar = true;

	while (continuar && ni < m) {
	    for (var i=0; i < b.length; i++) {
	        soma = 0;
	        for (var j = 0; j < i; j++) {
                	soma = soma + A[i][j] * x[j];
	        }
	        for (var j = i + 1; j < b.length; j++) {
                	soma = soma + A[i][j] * X[j];
	        }
		x[i] = (b[i] - soma) / A[i][i];
	    }
	    // se | x - xo | < Toler�ncia
	    if (Math.abs(math.norm(x) - math.norm(X)) < E) {
	        continuar = false;
	    } else {
	        X=x.slice(0);
	    }
	    ni = ni + 1;
	}
	return x;
}
