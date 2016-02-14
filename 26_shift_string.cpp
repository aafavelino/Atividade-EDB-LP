#include <iostream>
#include <new>
	using std::bad_alloc;
	using namespace std;

	char* shiftString ( const char * str );

	int main(int argc, char const *argv[]){

		char *str = new char[sizeof(char)*10];
		std::cout << ">>> Informe o texto para o vetor A: ";
		gets(str);

		for (int i = 0; i < strlen(str); ++i)
		{
			std::cout << str[i];

		}

		std::cout << endl;

		shiftString(str);



		
		return EXIT_SUCCESS;
	}

	char* shiftString ( const char * str ){
		for (int i = 0; i < strlen(str); ++i)
		{

			if ((int)str[i] > 65 && (int)str[i] < 122)
			{
				
			 	std::cout << (char)((int)str[i] == 122 ? (int)str[i] - 25 : (int)str[i]+1);
			}else{
				std::cout << str[i];
			}
		}

	}
