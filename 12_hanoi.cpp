#include <iostream>

	using namespace std;


	void hanoi(int n, char *A, char *C, char *B) {
   		 if ( n == 0 ) return ;
   		 	hanoi(n-1, C, A, B) ;
    		
    				printf("Mova disco de %s para %s\n", A, C) ;
   			hanoi(n-1, A, B, C) ;
	}

		int main(){

				int i;
 				std::cout << ">>> Informe a quantidade de discos desejadas:"<< endl;
 				std::cin >> i;
        

    			hanoi(i, "A", "B", "C") ;


			return EXIT_SUCCESS;
		}
