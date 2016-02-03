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


				for (int i = 0; i < count; i ++)
				{

						if (vet[i] <= 0)
						{
							vet[i] = NULL;	
						}						
					
				} 

				std::cout << "\n";

				for (int i = 0; i < count; ++i)
				{
					std::cout << vet[i] << " ";
				}


			return EXIT_SUCCESS;
		}
