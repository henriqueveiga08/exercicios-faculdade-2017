Algoritmo 8: Método de LU



//Programador:

// Data:

// O programa resolverá o sistema linear utilizando o método LU, sem pivotamento.

clear;

clc;

function A=linearLU(A)

n = size(A,1);

for k = 1 : n-1

for i = k+1 : n

A(i,k) = A(i,k) / A(k,k);

for j = k+1 : n

A(i,j) = A(i,j) - A(i,k) * A(k,j);

end

end

end

endfunction

function x=linearLUsubstituto(A, b)

n = length(b);

y = zeros(b);

for i=1:n //aplicando a substituição, utilizando a matriz Ly=b, para encontrar os valores de y.

y(i) = b(i);

for j=1:i-1

y(i) = y(i)-A(i,j)*y(j); //A(i,j) = L(i,j) para j<i

end

end

x = zeros(b);

for i=n:-1:1 ////aplicando a substituição, utilizando a matriz Ux=y, para encontrar os valores de x.

x(i) = y(i);

for j=i+1:n

x(i) = x(i)-A(i,j)*x(j); //A(i,j) = U(i,j)para j>i

end

x(i) = x(i)/A(i,i);

end

endfunction
