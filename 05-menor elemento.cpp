#include <iostream>
#define count 20

	using namespace std;

		int main(){

			int vet[20];
			int menor;
			int posicao;

				for (int i = 0; i < count; ++i)
				{
					std::cin >> vet[i];
				}
					menor = vet[0];
				for (int i = 0; i < count; ++i)
				{
					if(vet[i] < menor){
						menor = vet[i];
						posicao = i;
					}
				}

				std::cout << "O menor elemento do vetor é: " <<menor<< " e sua posição é: " << posicao << endl;


			return EXIT_SUCCESS;
		}
