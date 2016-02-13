#include <iostream>
#include <string>
#include <new>
#include <cctype>

	using namespace std;
	using std::bad_alloc;

	char * invertCase ( const char * str );

		int main(){

			char *str =  new char[sizeof(char) * 10];

			gets(str);

			std::cout << str << endl;
			std::cout << invertCase(str) << endl;
			return EXIT_SUCCESS;
		}

		 char * invertCase ( const char * str ){
		 	char *troca =  new char [strlen(str)];


				 for (int i = 0; i <= strlen(str); ++i)
				 {		if ((int)str[i] >= 65 && (int)str[i] <=90 )
						 {
				 			troca [i] = tolower(str [i]);				 	 		
				 		}else{
				 	 		troca [i] = toupper(str [i]);
				 		}
				 }

		 	return troca;


		 }
