#include <iostream>
#include <cmath>
	
	using namespace std;

	int avalia (int t1,int t2,int t3,int t4,int t5 ,int t6,int t7,int t8,int x);

		int main(){
				int t1, t2, t3, t4, t5 , t6, t7, t8, x;

				std::cout << ">>> Entre com os valores para preencher o polinomio:" << endl;
				std::cin >> t1;
				std::cin >> t2;

				std::cin >> t3;
				std::cin >> t4;

				std::cin >> t5;
				std::cin >> t6;

				std::cin >> t7;
				std::cin >> t8;

				std::cin >> x;
 


				std::cout << "f(x) =";
    
        if (t1 != 0) {
          		std::cout << (t1 < 0 ? " - " : (t1 ? " " : " ")) << abs(t1) << "x";
        if (t2 != 0)
                std::cout << "^" << t2;
        if (t3 != 0) 
           		std::cout << (t3 < 0 ? " - " : (t3 ? " + " : " ")) << abs(t3) << "x";
        if (t4 != 0)
                std::cout << "^" << t4;
        if (t5 != 0) 
            	std::cout << (t5 < 0 ? " - " : (t5 ? " + " : " ")) << abs(t5) << "x";
        if (t6 != 0)
                std::cout << "^" << t6;
        if (t7 != 0) 
            	std::cout << (t7 < 0 ? " - " : (t7 ? " + " : " ")) << abs(t7) << "x";
        if (t8 != 0)
                std::cout << "^" << t8;
        
    			std::cout << ", f(" << x << ") = " << avalia( t1, t2, t3, t4, t5 , t6, t7, t8, x) << endl;

			return EXIT_SUCCESS;
		}
}
		int avalia (int t1,int t2,int t3,int t4,int t5 ,int t6,int t7,int t8,int x){
			return (t1* pow(x, t2)) + (t3* pow(x, t4)) + (t5* pow(x, t6))+ (t7* pow(x, t8));
		}
