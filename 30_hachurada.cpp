#include <iostream>
	
	using namespace std;

		int main(){

			int n, contador = 1, soma1 = 0, soma2 = 0,soma3 = 0, soma4 = 0, cont = 4;

			

			int matriz [6][6];

				for (int i = 0; i < 6; ++i)
				{
					for (int j = 0; j < 6; ++j)
					{
						matriz[i][j] = contador;
						contador ++;
					}
					
				}

				for (int i = 0; i < 6; ++i)
				{
					for (int j = 0; j < 6; ++j)
					{
						std::cout << matriz[i][j] << " ";
					}
						std::cout << endl;
				}
				

				std::cout << endl;


				for (int i = 0; i < 6; ++i)
				{
					for (int j = i+1; j < 6; ++j)
					{
						soma1+= matriz[i][j];
					}
						
				}

				std::cout << ">>> Primeira hachuriada: " << soma1 <<endl;

				std::cout << endl;

				for (int i = 0; i < 6; ++i)
				{
					for (int j = cont; j >= 0 ; --j)
					{
						soma2+= matriz[i][j];
					}

					cont--;		
				}

				std::cout << ">>> Segunda hachuriada: " << soma2 <<endl;
				std::cout << endl;

				soma3 = matriz[0][1] + matriz[0][2] + matriz[0][3] + matriz[0][4] + matriz[1][2] + matriz[1][3];
				std::cout << ">>> Terceira hachuriada: " << soma3 <<endl;
				std::cout << endl;

				soma4 = matriz[1][0] + matriz[2][0] + matriz[2][1] + matriz[3][0] + matriz[3][1] + matriz[4][0];
				std::cout << ">>> Quarta hachuriada: " << soma4 <<endl;
			
			




			return EXIT_SUCCESS;
		}
