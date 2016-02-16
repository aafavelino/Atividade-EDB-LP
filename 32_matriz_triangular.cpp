#include <iostream>
	using namespace std;

		int ehTrianguloSuperior ( const int *mat, int n );

		int main(int argc, char const *argv[])
		{
			int m[4][4] =  {{1, 2, 3, 4}, {0, 5, 6, 7}, {0, 0, 8, 9}, {0, 0, 0, 10}} , n = 4;
			int contador = 0;

			std::cout << ehTrianguloSuperior(*m, n);

			return EXIT_SUCCESS;
		}
		
		int ehTrianguloSuperior ( const int *mat, int n ){
			int t = 0;
			for (int i = 0; i < n; ++i){
				for (int j = 0; j < n; ++j){
					if (i > j && *(mat+t) != 0)
					{
						return 0;
					}
					t++;
				}
			}
			return 1;
		}






