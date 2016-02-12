#include <iostream>
#define count 5
using namespace std;

	int main(){

		int M[5][5];
		int soma_linha_4 = 0;
		int soma_coluna_2 = 0;
		int soma_diagonal_principal = 0;
		int soma_diagonal_secundaria = 0;
		int soma = 0;

		for (int i = 0; i < count; ++i)
		{
			for (int j = 0; j < count; ++j)
			{
				std::cin >> M[i][j];
			}
		}
		
		//soma da linha 4 de M
			for (int j = 0; j < count; ++j)
			{
					soma_linha_4 += M[3][j];
					soma_coluna_2 += M[j][1];
					soma_diagonal_principal += M[j][j];

			}
			for (int j = 0; j < count; ++j)
			{

					soma_diagonal_secundaria += M[j][4-j];
				
			}

			for (int i = 0; i < count; ++i)
			{
				for (int j = 0; j < count; ++j)
				{
					soma+=M[i],M[i];
				}
			}


			std::cout << "Soma da linha 04" <<soma_linha_4 << endl;
			std::cout << "Soma da soma diagonal principal"<< soma_diagonal_principal << endl;
			std::cout << "Soma da couluna 2"<<soma_coluna_2 << endl;
			std::cout << "soma_diagonal_secundaria"<< soma_diagonal_secundaria << endl;
			std::cout << "soma total" << soma << endl;

		return EXIT_SUCCESS;
	}
