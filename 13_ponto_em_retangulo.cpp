#include <iostream>
	using namespace std;

		
		int main(){
			float Xp, Yp;
			float Xie, Yie;
			float Xsd, Ysd;

			std::cout << ">>> Informe as cordenadas do ponto SD: " << endl;
				std::cin >> Xsd;
				std::cin >> Ysd;
			std::cout << ">>> Informe as cordenadas do ponto IE: " << endl;
				std::cin >> Xie;
				std::cin >> Yie;
			std::cout << ">>> Informe as cordenadas do ponto teste: " << endl;
				std::cin >> Xp;
				std::cin >> Yp;	

				if ((Xp < Xsd && Xp > Xie || Xp > Xsd && Xp < Xie) || (Yp < Ysd && Yp > Yie || Yp > Ysd && Yp < Yie))
						{
							std::cout << ">>> O ponto teste está dentro das cordenadas!" << endl;
						}else if ((Xp == Xie || Xp == Xsd) || (Yp == Yie || Yp == Ysd))
						{ 	
							std::cout << ">>> O ponto teste está na borda das cordenadas!" << endl;	
						}else {
							std::cout << ">>> O ponto teste está fora das cordenadas!" << endl;
						}
			return EXIT_SUCCESS;
		}
