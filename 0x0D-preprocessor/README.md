Macros

Object-like macros is a simple indentifier that is replaced by a code fragment. It is named so becuase it looks like a data object in code that uses it.
MAcros are created using the "#define" directive followed by the macros name then the token sequence if abbreviates.Variously called macro's body, expansion or replacement list. 

	Example: #define BUFFER_SIZE 1024

This defines a macro named BUFFER_SIZE as an abbreviation for 1024. If a C statement comes after the #define in the form of:

	foo = (char *) malloc (BUFFER_SIZE);

The C preprocessor will expand the macro named as tokens:

	foo = (char *) malloc(1024);

Macro names are written in uppercase to make it easy to read and tell which one are macro names.

THe macro's bodyalways ends at the end of the #define line. You can however continue the definition to multiple lines using the backslash (\), when expanded by the preprocessor, all this will be displayed in a single line.

	Example: 
		#define NUMBERS 1, \
				2, \
				3
		int x[] = {NUMBERS};
		   ==> int x[] = {1, 2, 3};
