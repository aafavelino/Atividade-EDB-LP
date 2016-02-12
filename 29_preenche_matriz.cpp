#include <iostream>
	
	using namespace std;

		int main(){

			int n, contador = 1;

			std::cin >> n;

			int matriz [n][n];

				for (int i = 0; i < n; ++i)
				{
					for (int j = 0; j < n; ++j)
					{
						matriz[i][j] = contador;
						contador ++;
					}
					
				}

				for (int i = 0; i < n; ++i)
				{
					for (int j = 0; j < n; ++j)
					{
						std::cout << matriz[i][j] << " ";
					}
						std::cout << endl;
				}


			return EXIT_SUCCESS;
		}
