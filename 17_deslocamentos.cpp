#include <iostream>

using namespace std;

	void shift_n(int *n1, int *n2, int *n3, int *n4, int d);

	int main(){
		int n1,n2,n3,n4;
		int d;

	std::cout << ">>> Informe o valor de n1:" << endl;
		std::cin >> n1;
	std::cout << ">>> Informe o valor de n2:" << endl;	
		std::cin >> n2;
	std::cout << ">>> Informe o valor de n3:" << endl;
		std::cin >> n3;
	std::cout << ">>> Informe o valor de n4:" << endl;
		std::cin >> n4;
	std::cout << ">>> Informe o valor do deslocamento:" << endl;
		std::cin >> d;

		shift_n(&n1,&n2,&n3,&n4,d);

		std::cout << n1 << " " << n2 << " "<< n3 << " "<< n4 << endl;

		return EXIT_SUCCESS;
	}

	void shift_n(int *n1, int *n2, int *n3, int *n4, int d) {
			
			int aux;

			d = d % 4;

			if (d > 0)
			{
				for (int i = 0; i < d; ++i)
					{
						aux = *n4;
						*n4=*n3;
						*n3=*n2;
						*n2=*n1;
						*n1=aux;
					}

			}else{
				for (int i = 0; i < d; ++i)
					{
						aux = *n1;
						*n1=*n2;
						*n2=*n3;
						*n3=*n4;
						*n4=aux;
					}
			}
	}
