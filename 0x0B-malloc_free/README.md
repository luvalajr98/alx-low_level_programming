Readme file on Memory Allocation

Malloc is a function in C and stands foe memory allocation. It is used to dynamically allocate bytes of memory during execution of a program. Its is a function defined in the stadlib header file.

Main purpose is to reserve blocks of memory in the "heap", which is a region of the memory of the computer used for local variables on stack and static memory. Always note: Memory allocated by malloc is not initialized, it contains garbage values.

		example is as follows:
					 void* malloc(size_t); 
					 size: Number of bytes to allocate the int data type.

					 On success, a pointer to the first byte of allocated memory is returned, 
					 Will return Null if there is an error.
 Below is how we can allocate memory for an integer.

	#include <stdio.h>
	#include <stdlib.h>

	int main(){

	int *arr //initializing the pointer by declaring a pointer to an integer named arr
	
	//Allocate space for the array of 6 integers
	arr = (int*)malloc(6* sizeof(int));

	if (arr == Null) {

		fprintf(stderr, "Memory allocation failed\n"); //Prints text followed by a new line
		retun 1; //returns an error code if the program has errors
		}

	//use the allocated memory
	// free allocated memory when done

		free(arr);
		return 0;

	}


