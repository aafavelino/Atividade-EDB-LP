#include <iostream>
#include <Cmath>

using namespace std;
   

    int raizes (double a, double b, double c, double * x1, double * x2){

		*x1 = ((-b + sqrt(pow(b, 2) - 4*a*c))/(2*a)); 
		*x2 = ((-b - sqrt(pow(b, 2) - 4*a*c))/(2*a));

		return 1;
	
    }

		int main(){
			double x1,x2,a,b,c;

	std::cout << ">>>Coeficientes da função" << endl;
	std::cout << ">>>Entre com o a = ";
	std::cin >> a;
	std::cout << ">>>Entre com o b = ";
	std::cin >> b;
	std::cout << ">>>Entre com o c = ";
	std::cin >> c;
			raizes(a, b, c, &x1, &x2);
		std::cout << "As raizes da equação são: \n"<<"x': " << x1<< "\n" << "x'': "<< x2 << endl;
			

			return EXIT_SUCCESS;
		}


