 #include <iostream>
	using namespace std;

		 int maiores (const int* const vet, const int n, const int x){
		 		int contador = 0;
		 	for (int i = 0; i < n; ++i)
		 	{
		 	 	if (vet[i] > x)
		 	 	{
		 	 		contador++;
		 	 	}
		 	}
		 	return contador;
 		}

 			int main(){
 				

 				int n, x;

	
					std::cout << ">>> Entre com o tamanho do vetor: ";
					std::cin >> n;

	
				int vet[n];


						for (int i = 0; i < n; i++) {
							srand(time(0)+i);
							vet[i] = rand()%100;
						}

	
					std::cout << ">>> Entre com o valor de x: ";
					std::cin >> x;

	
					std::cout << ">>> Existem " << maiores(vet, n, x) << " números maiores que x"<< endl;



 				return EXIT_SUCCESS;
 			}
