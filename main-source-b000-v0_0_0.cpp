// inclusion of libraries
	#include <iostream>

// inclusion of files
	#include "main-header-b001.hpp"



//	main function
int main() {

	/*	using directives	*/
	using	std::cout;
	using	std::cout;
	using	std::cin;
	/*	using directives	*/

	/*	local variable declaration	*/
	bool	restartOperator;
		// used to determine whether do-while loop should be repeated manually
	/*	local variable declaration	*/


	do {

		cout	<< "\n";

		/*	example block	*/
		//local variable declaration

		cout	<< " test 1 ... "
				<< " \n";

		cout	<< " test 2 ... ";
		cout	<< " \n";
		/*	example block	*/

		/*	end block	*/
		restartOperator = queryRestart();	// asks user whether current section of program should be looped
		cls();								// clears screen
		/*	end block	*/

	}	while (restartOperator == true);

	return 0;
}



/*	using C++ compiler from GCC via console

	compile for debug and check for errors:
g++ -Og -Wall -Wextra -Wpedantic -Werror main-source-b001-v0_0_0.cpp -o main-newest.debug

	clear and compile as final executable:
clear && g++ -O3 main-source-b001-v0_0_0.cpp -o main-newest.release

	clear console, compile debug executable, compile release executable, check for errors, and run program:
g++ -Og main-source-b001-v0_0_0.cpp -o main-newest.debug && clear && g++ -O3 -Wall -Wextra -Wpedantic -Werror main-source-b001-v0_0_0.cpp -o main-newest.release && ./main-newest.release

	g++ -Og main-source-b001-v0_0_0.cpp -o main-newest.debug
 && clear
 && g++ -O3 -Wall -Wextra -Wpedantic -Werror main-source-b001-v0_0_0.cpp -o main-newest.release
 && ./main-newest.release
*/
