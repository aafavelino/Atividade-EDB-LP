#include <iostream>
#include <cstdlib>
#include <new>
	
	using std::bad_alloc;
	using namespace std;


	char * intercalaVetores( const char * vetA, int tamA, const char * vetB, int tamB );

		int main(int argc, char const *argv[])
		{
			int tamA,tamB;

				std::cout << "Informe o tamanho de A:";
				std::cin >> tamA;
			char vetA [tamA];

			for (int i = 0; i < tamA; ++i)
			{
				std::cin >> vetA[i];
			}

				std::cout << "\nInforme o tamanho de B:";
				std::cin >> tamB;
			char vetB [tamB];

			for (int i = 0; i < tamB; ++i)
			{
				std::cin >> vetB[i];
			}

	
			std::cout << ">>> Vetor intercalado: " << intercalaVetores(vetA,tamA,vetB,tamB) << endl;
		

			return EXIT_SUCCESS;
		}



			char * intercalaVetores( const char * vetA, int tamA, const char * vetB, int tamB ){
				char *vetInter = new char[*vetA+*vetB];
					int a = 0;
					int b = tamB - 1;
					for (int i = 0; i < (tamA+tamB); ++i)
					{	
						if (i%2==0)
						{
							vetInter [i] = vetA[a];
							a++;
						}else{
							vetInter [(tamA+tamB)-i] = vetB[b];
								b--;
						}
						
					}


					return vetInter;

			}









