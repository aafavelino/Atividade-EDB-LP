//Swap: Trocar o conteu ́do de duas vari ́aveis passadas por referência.
void swap(int *x, int *y){
	auto aux (0);

	aux = x;
	x = y;
	y = aux;	
}

//EhPrimo: Verifica se um nu ́mero recebido como parâmetro  é primo.
void primo (int x){
	int contador = 0;
	for (int i = 1; i <= x; ++i)
	{
		if (i % x ==0)
		{
			contador ++;
		}
	}
	if(contador == 2){
		std::cout << "Eh primo" << endl;
	}else {
		std::cout << "não eh primo" << endl;
	}
}

 //mdc: Retorna o Máximo Divisor Comum3 de 3 números recebidos como parâmetros.

int mdc (int a, int b){
	if(b == 0)
		return a;
	else
		return mdc(b, a%b)
}

//Fatorial: Retorna o fatorial do número recebido como parâmetro.

int fatorial(int n){
	int aux;
	for (int i = n; i > 1; --i)
	{
		aux = aux * i;
	}
	return aux;

}



