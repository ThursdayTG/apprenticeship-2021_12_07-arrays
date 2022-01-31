// inclusion of libraries
	#include <iostream>
	#include <string>

// inclusion of files
	#include "main-header-b001.hpp"



/*	main function	*/

int main() {

	/**/
	using	std::cout;
	using	std::cin;
	/**/

	/*	local variable declaration	*/
	bool	restartOperator;
		// used to determine whether do-while loop should be repeated manually
	/**/


	do {

	    cout	<< "\n";

		/*	local variable declaration - char array	*/
		char	x = 'a';

//		char	ax[6]	= {'a','b','c','d','e','f','g','h'};
			// invalid - amount of initialisers is higher than defined size

//		char	ax[20]	= {'a','b','c','d','e','f','g','h'};
			// valid - manually fixes array size to 20; size may be inappropriately large

//		char	ax[8]	= {'a','b','c','d','e','f','g','h'};
			// valid - manually fixes array size to 8

		char	ax[]	= {'a','b','c','d','e','f','g','h'};
			// valid - automatically fixes array size to amount of defined initialisers (in this case 8);
			// requires immediate definition
			// it's generally recommended to put a null terminator as last value in this case ('\0')
		/*	local variable declaration - char array	*/

		/*	execution block - char array	*/
		cout	<< " cout ax[0]: "
				<< ax[0]			// output of value at index 0 of array ax
				<< " \n";

		cout	<< " cout ax[1]: "
				<< ax[1]			// output of value at index 1 of array ax
				<< " \n";

		cout	<< " cout ax[2]: "
				<< ax[2]			// output of value at index 2 of array ax
				<< " \n";

		cout	<< " cout ax: "
				<< ax				// output of all values of array ax
				<< " \n"
				<< " \n"
				<< " \n";
			// output may be flawed, because there is no null terminator
		/*	execution block - char array	*/



		/*	local variable declaration - int array	*/
		int		ay[]	= {5, 34, 347, 5, 78};
		/*	local variable declaration - int array	*/

		/*	execution block - int array	*/
		cout	<< " cout ay[0]: "
				<< ay[0]
				<< " \n";

		cout	<< " cout ay[1]: "
				<< ay[1]
				<< " \n";

		cout	<< " cout ay[2]: "
				<< ay[2]
				<< " \n";

		cout	<< " cout ay: "
				<< ay				// outputs memory address of array ay
				<< " \n"
				<< " \n"
				<< " \n";
		/*	execution block - int array	*/



		/*	local variable declaration - char array input	*/
		char	az[20];
		/*	local variable declaration - char array input	*/

		/*	execution block - char array input	*/
		cout	<< " cin  az: ";
		cin		>> az;

		cout	<< " cout az: "
				<< az
				<< " \n";
		/*	execution block - char array input	*/

		/*	end block	*/
		restartOperator = queryRestart();	// asks user whether current section of program should be looped
		cls();								// clears screen
		/*	end block	*/

	}	while (restartOperator == true);

	return 0;

}

/*	using C++ compiler from GCC via console

	compile for debug:
g++ -Og main-source-b004.cpp -o main-newest.debug

	clear and compile as final executable:
clear && g++ -O3 main-source-b004.cpp -o main-newest.release

	clear console, compile debug executable, compile release executable, and run program:
g++ -Og main-source-b004.cpp -o main-newest.debug && g++ -O3 main-source-b004.cpp -o main-newest.release && clear && ./main-newest.release

   g++ -Og main-source-b004.cpp -o main-newest.debug
&& g++ -O3 main-source-b004.cpp -o main-newest.release
&& clear
&& ./main.release
*/
