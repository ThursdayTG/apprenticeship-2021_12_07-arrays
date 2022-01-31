// inclusion of libraries
	#include <iostream>

// inclusion of files
	#include "main-header-b001.hpp"



//	main function
int main() {

	/*	using directives	*/
	using	std::cout;
	using	std::cin;
	/*	using directives	*/

	/*	local variable declaration	*/
	bool	restartOperator;
		// used to determine whether do-while loop should be repeated manually
	/*	local variable declaration	*/


	do {

		cout	<< "\n";

		/*	primary execution block	*/
		char	inbox[20], outbox[20];
		char	vokal[] = {'a','A','e','E','i','I','o','O','u','U'};

		int		inboxLoopCount = 0, outboxLoopCount = 0;
		int		flag = 0;

		cout	<< " eingabe: \t";
		cin.getline(inbox, 19);

		for (	inboxLoopCount = 0;
				inboxLoopCount < 20 && inbox[inboxLoopCount] != '\0';
				inboxLoopCount++) {
			flag = 0;

			for (	int i = 0;
					i < 10;
					i++) {		// suchroutine
				if	(inbox[inboxLoopCount] == vokal[i]) {
					flag = 1;
					break;
				}
			}

			if	(flag == 0) {
				outbox[outboxLoopCount] = inbox[inboxLoopCount];
				outboxLoopCount++;
			}
		}
		outbox[outboxLoopCount] = '\0';

		cout	<< " ausgabe: \t"
				<< outbox;
		/*	primary execution block	*/

		/*	end block	*/
		restartOperator = queryRestart();	// asks user whether current section of program should be looped
		cls();								// clears screen
		/*	end block	*/

	}	while (restartOperator == true);

	return 0;
}



/*	using C++ compiler from GCC via console

	compile for debug and check for errors:
g++ -Og -Wall -Wextra -Wpedantic -Werror main-source-b006.cpp -o main-newest.debug

	clear and compile as final executable:
clear && g++ -O3 main-source-b006.cpp -o main-newest.release

	clear console, compile debug executable, compile release executable, check for errors, and run program:
g++ -Og main-source-b006.cpp -o main-newest.debug && clear && g++ -O3 -Wall -Wextra -Wpedantic -Werror main-source-b006.cpp -o main-newest.release && ./main-newest.release

	g++ -Og main-source-b006.cpp -o main-newest.debug
 && clear
 && g++ -O3 -Wall -Wextra -Wpedantic -Werror main-source-b006.cpp -o main-newest.release
 && ./main-newest.release
*/
