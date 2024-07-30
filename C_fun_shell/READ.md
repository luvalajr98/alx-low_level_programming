/*This readme file is for the Simple shell project that I am working on.*/

We shall have to understand what a shell is and how the programs work

We first have to know whether the script is running in interactive mode or the non-interactive mode. This is done by using the "isatty()" function. This checks if the file descriptors refers to a terminal or doesnt. We provide a prompt for the user if the  "isatty() function returns true because that will mean the shell is in interactive mode."

		#include <unistd.h>
		
		int main(int arg, char **argv){
	
			 if (isatty(STDIN_FILENO)){
			
The "execve() function" checks for executible files in the system.

