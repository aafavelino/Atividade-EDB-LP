#include <iostream>

using namespace std;

	int main(){

		int m, n, soma;
		
		std::cout << "Entre com valores inteiros (Ctrl+d p/ encerrar): " << endl;
			
			while(cin >> m && cin >> n){
				for (int i = 1; i <= n; ++i)
					soma = soma + m + i;
				

				std::cout << ">>> Soma de " << n << " inteiros seguidos de " << m << " somando "<< soma <<" números.";
					soma = 0;
			}

		return EXIT_SUCCESS;
	}
