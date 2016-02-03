#include <iostream>
#include <Cmath>

	using namespace std;

		int main(){

			double x1, x2, y1, y2;
			double dist;

			std::cout << ">>>Informe os valores dos pontos P1 e P2 respectivamente..."<<endl;
			
			std::cout << ">>>Informe o Valor de x1:"<<endl;
			std::cin >> x1;
			std::cout << ">>>Informe o Valor de y1:"<<endl;
			std::cin >> y1;
			std::cout << ">>>Informe o Valor de x2:"<<endl;
			std::cin >> x2;
			std::cout << ">>>Informe o Valor de y2:"<<endl;
			std::cin >> y2;

			dist = sqrt(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));

			std::cout << ">>>O valor da distancia Euclidiana entre os pontos é: " <<dist;

			return EXIT_SUCCESS;
		}
