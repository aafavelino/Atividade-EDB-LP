#include <iostream>
#include <string>
#include <new>
	
	using namespace std;
	using std::bad_alloc;

	char * reverse ( const char * str );

		int main(){
			
			char *str =  new char[sizeof(char) * 10];

			gets(str);

			std::cout << str << endl;
			std::cout << reverse(str) << endl;
			return EXIT_SUCCESS;
		}

		 char * reverse ( const char * str ){
		 	char *reverso =  new char [strlen(str)];
		 	int j = 0;

		 	for (int i = strlen(str)-1 ; i >= 0  ; --i)
		 	{
		 		reverso [j] = str [i];
		 		j++;
		 	}

		 	return reverso;


		 }
