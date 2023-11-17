0x09. C - Static libraries

C Library - This is a file containiung object files used singly in linking a phase of the program. On most occassions, these are always indexed making it easy to find symbols in them speeding up the linking process.

Shared lib/Dynamic lib - these files are linked to the program in two stages. During compilation, the linker verifies if all symbols (functions, variables etc) are linked to the program or are in one of the shared lib.


How Do We create a Static Lib in C?

The tool for creating a static lib in C is the 'ar' for 'archiver'

        Example: ar rc libutil.a util_file.o util_net.o util_math.o

                ar: - the archive command used to create ,modify or extract files from the archives.
                rc: - r inserts specified files or directories into the archive. If it exists, it will replace
                    - c creates the archive if it doesnt exist.
         libutil.a: - This is the archive name to be created. Static libraries start with "lib" and have an extension ".a"
        util_file.o util_net.o util_math.o - All these are object files to be added to the static lib. They contain compiled code that correspond to the functions being implemented.


Static libs are created from linking multiple object files.

What are object files?

These are files generated during compilation of the source code, they always have formats like EFL (Executable and Linkable Formats) and/or COFF (Common Object File Format) on windows.

During compliation, each source code file is compiled into a corresponding object file

        Example: - '.c' file will have a corresponding '.o' file compiled.

Object files are divided into four sections:

        > .text: - contains machine code for executible instructions
        > .data: - holds initialized data
        > .bss:  - reserves space for uninitialized data
        > .rodata: - stores read-only data

We use this to compile:

        gcc -c example.c -o example.o

        "gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 fileName"

        -c: - indicates that compilation should stop after the compilation phase.

        -o example.o: - specifies the output name of the object file.
