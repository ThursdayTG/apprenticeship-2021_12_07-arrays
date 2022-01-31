// inclusion of libraries
	#include <iostream>
	#include <string>



void cls() {		// cls, clear screen -	derived from system("cls")

	/*	string of special characters that will translate to a clear screen command in the console. should work on any OS.	*/
	std::cout	<< "\033[2J\033[1;1H";
	/**/

}


void pause() {		// 						derived from system("pause")

	/*	use this block to pause progress in console, unpauses on pressing any button input.	*/
	std::cin.ignore();	// may not always be necessary. in that case, use 'cin.get();' instead of 'pause();'.
	std::cin.get();
	/**/

}


bool queryRestart() {

	std::string	restartOperator = "0";
		// default value tries to prevent do-while loop from repeating in case of unexpected error

	std::cout	<< "\n\n restart? (0/1): ";
	std::cin	>> restartOperator;

	if		(	restartOperator == "1"
			||	restartOperator == "y"		||	restartOperator == "Y"
			||	restartOperator == "t"		||	restartOperator == "T"
			||	restartOperator == "true"	||	restartOperator == "not false")
		return true;
	else
		return false;

}



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

		/*	local variable declaration	*/
			//lorem_ipsum
		/*	local variable declaration	*/

		/*	primary execution block	*/
		cout	<< " test 1 ..."
				<< " \n";

		cout	<< " test 2 ...";
		cout	<< " \n";
		/*	primary execution block	*/

		/*	end block	*/
		restartOperator = queryRestart();	// asks user whether current section of program should be looped
		cls();								// clears screen
		/*	end block	*/

	}	while (restartOperator == true);

	return 0;

}

/*	using C++ compiler from GCC via console

	compile for debug:
g++ -Og main-source-b000-v0_0_0.cpp -o main-newest.debug

	clear and compile as final executable:
clear && g++ -O3 main-source-b000-v0_0_0.cpp -o main-newest.release

	clear console, compile debug executable, compile release executable, and run program:
g++ -Og main-source-b000-v0_0_0.cpp -o main-newest.debug && g++ -O3 main-source-b000-v0_0_0.cpp -o main-newest.release && clear && ./main-newest.release

   g++ -Og main-source-b000-v0_0_0.cpp -o main-newest.debug
&& g++ -O3 main-source-b000-v0_0_0.cpp -o main-newest.release
&& clear
&& ./main.release
*/
