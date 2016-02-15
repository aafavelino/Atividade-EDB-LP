#include <iostream>
using namespace std;
int mdc(int m, int n);

	int main(){

		std::cout << ">>> MDC: "<< mdc(3,2) <<endl;
		std::cout << (mdc(3,2) == 1 ? 1:0) << endl;


		return EXIT_SUCCESS;
	}

	int mdc(int m, int n){
		if (n == 0)
		{
			return m;
		}else{
			return mdc (n,m%n);
		}
	}
