#include <iostream>

	using namespace std;
	int fibonacci (int num);

		int main(){

			int L = 0;

			std::cout << ">>>Informe o número desejado para entrada:";

			std::cin >> L;

			for (int i = 0;  fibonacci(i+1) < L; ++i)
			{
				
				std::cout << fibonacci(i+1) << endl;


			}



			return EXIT_SUCCESS;
		}

		int fibonacci (int num){
			if(num == 1 || num ==2)
				return 1;
			else
				return fibonacci(num - 1) + fibonacci(num - 2) ;
		}
