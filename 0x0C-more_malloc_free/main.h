#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b); /* This is a prototype function that allocates memory using Malloc*/
char *string_nconcat(char *s1, char *s2, unsigned int n); /*a function that concatenates two strings*/
void *_calloc(unsigned int nmemb, unsigned int size); /* A function that allocates memory for an array using Malloc*/
int *array_range(int min, int max); /* A function that creates an array of integers*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size); /* A function that relocates memory block using malloc and free*/

#endif /* MAIN_H*/
