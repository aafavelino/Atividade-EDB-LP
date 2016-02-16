#include <iostream>
	using namespace std;

	
   		int ehMatrizIdentidade ( const int * mat, int n );

		int main(int argc, char const *argv[])
		{
			int m[4][4] =  {{1, 1, 1, 1}, {0, 1, 1, 1}, {0, 0, 1, 1}, {0, 0, 0, 1}} , n = 4;
			int contador = 0;

			std::cout << ehMatrizIdentidade(*m, n);

			return EXIT_SUCCESS;
		}
		
		int ehMatrizIdentidade ( const int *mat, int n ){
			int t = 0;
			for (int i = 0; i < n; ++i){
				for (int j = 0; j < n; ++j){
					if (i > j && *(mat+t) == 1)
					{
						return 0;
					}
					t++;
				}
			}
			return 1;
		}






