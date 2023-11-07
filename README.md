This README file contains scripts and solved programs in the C language




0x05. C - Pointers, arrays and strings

Pointers in C
		
		A pointer is a variable whose address is the value of another variable. You must declare a pointer before using it, this should be noted. 

			Example: type *var-name;

			//type is the data type, var_name is the pointer variable name and * is used to denotethe variable as a pointer.

				other examples of valid pointer variables are as:
					1. int *ip; /* pointer to an integer */
					2. double *dp; /* pointer to a double */
					3. float *fp; /* pointer to a float */
					4. char *ch; /* pointer to a character */

		Pointers in C basically are used when we are accessing memory for a program. We all know that variables are memory locations that can be accessed using the & operator. Pointers store the addresses in Hexadecimal numbers. 


Eager to See pointers in use? 
		
		Here is an example: #include <stdio.h>

int main () {

   int  var = 20;   /* actual variable declaration */
   int  *ip;        /* pointer variable declaration */

   ip = &var;  /* store address of var in pointer variable*/

   printf("Address of var variable: %x\n", &var  );

   /* address stored in pointer variable */
   printf("Address stored in ip variable: %x\n", ip );

   /* access the value using the pointer */
   printf("Value of *ip variable: %d\n", *ip );

   return 0;
} 



		The output of the above will be as follows: 

			Address of var variable: bffd8b3c
			Address stored in ip variable: bffd8b3c
			Value of *ip variable: 20


		N/B: On occasions where you do not have a clear address to point tobe sure to use the Null pointer. This will assign a constant zero (0) to your pointer.
	
		Also note, programs in most OS are not permited to use the memory address Zero (0) as it is reserved for the operating system. To check for Null pointers, we can use the if as follows: 
			if (ptr)- Checks whether the pointer points to a valid address
			if (!ptr)- checks whether the pointer is null.

C - Pointer arithmetic
	
			








	Arrays in C

		Array is a kind of a data structure that stores fixed size of sequential collection of elements of the same data type.Eases of the time one will take to declare variables. The lowest Address corresponds to the first element an the highest address corresponds to the last element. To get the address of the last element, use n-1. Addresses are assigned with zero (0) being the first element of the array.
		
	Declaring of Arrays

		A user declares an array byu stating the number of elements required tied tot he data type.
		
			eg: dataType arrayName [arraySize];
				double balance [10];

		This is a type of a single-dimensional array. The arraySize should and must be an integer constant greater than zero (0) tied to valid data types in C language. In the above example, balance is a variable array that canhold ten (10) elements.

	This is How we Initialize an array

			example: double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};

		The number of values in braces {} can and should not be larger than the number of elements declared in the brackets []. You can however omit the size of array, an array that fits all your elements initialized will be created. See below- no size is declared.

			example: double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};


	This is how we assign values to elements in an array

		To assign, user must specify the element address they wish to initialize. See below;

			example: balance[4] = 50.0;
	 			double balance[5] = {1000.0(el0), 2.0(el1), 3.4(el2), 7.0(el3), 50.0(el4)}; //el denotes element!

		In the above, array element 4 will be assigned and intialized to 50.0. It should be noted that array addresses are assigned with zero (0) being the first element.

	Can we try Accessing the Array?

		Accesing the addresses for elements of an array turns out to be so easy. This is done by indexing the array name! Below is an example. 
		
			example: double pay = balance[9]; //In this statement, the array will take the tenth element and assin to the viaraible 'pay'

