#include <iostream>
	
	using namespace std;

		int main (){

				int vet [30];
				int aux = 0;

				std::cout << ">>> Informe os valores do vetor:\n";

				for (int i = 0; i < 30; ++i)
				{
					std::cin >> vet[i];
				}

				for (int fim = 29; fim > 0; --fim)
				{
					for (int j = 0; j < 30; ++j)
					{
					
					
					if (vet[j] > vet[j+1])
					{
						aux = vet[j];
						vet[j] = vet[j+1];
						vet[j+1] = aux;

							}
						}
					}

				for (int k = 0; k < 30; ++k)
				{
					std::cout << vet[k] << " ";
				}



			return EXIT_SUCCESS;
		}
