#include <iostream>
#define count 5
	using namespace std;

		int main(){
			int A[5], B[5], entrada, i= 0, j =0;

			std::cout << ">>> Entre com o preenchimento do vetor: (Para sair pressione CTRL + D)"<< endl;

				while(std::cin >> entrada){
					if(entrada % 2 == 0){
						A[i] = entrada;
						
						i++;

						if(i == 5){
							for (int c = 0; c < count; ++c)
							{
								std::cout << A[c] << " ";
							}
							
							i = 0;
						}
					}else{
						B[j] = entrada;
						
						j++;

						if(j == 5){
							for (int d = 0; d < count; ++d)
							{
								std::cout << B[d] << " ";
							}
							
							j = 0;
						}

					}
				}

				std::cout << ">>> Valores armazenados nos vetores A e B respectivamente:" << endl;

				for (int e = 0; e < count; ++e)
				{
					std::cout << A[e] << " ";
				}
				std::cout << endl;
				for (int e = 0; e < count; ++e)
				{
					std::cout << B[e] << " ";
				}

		return EXIT_SUCCESS;
		}
