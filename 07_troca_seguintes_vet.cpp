#include <iostream>
#define count 20

	using namespace std;

		int main(){

			int vet[20];
			int menor;
			int posicao;
			int impar;

				for (int i = 0; i < count; ++i)
				{
					std::cin >> vet[i];
				}

				for (int i = 0; i < count; ++i)
				{
					std::cout << vet[i] << " ";
					
				} 


				for (int i = 0; i <= count-1; i = i+2)
				{
						impar = vet[i];
						vet[i] = vet[i+1];
						vet[i+1] = impar;
					
				} 

				std::cout << "\n";

				for (int i = 0; i < count; ++i)
				{
					std::cout << vet[i] << " ";
				}

			return EXIT_SUCCESS;
		}
