#include <stdio.h>
#include <main.h>

unsigned int binary_to_uint(const char *b) 

{
    unsigned int result = 0;

    if (b == NULL)
        return 0;

    for (int i = 0; b[i] != '\0'; i++) 
    
    {
        // If the current character is not '0' or '1', return 0
        if (b[i] != '0' && b[i] != '1')
            return 0;

        // Shift the result to the left by 1 bit and add the current bit
        result = (result << 1) | (b[i] - '0');
    }

    return result;
}

int main() {
    const char *binary = "1101";
    unsigned int decimal = binary_to_uint(binary);
    printf("Binary: %s\nDecimal: %u\n", binary, decimal);

    return 0;
}

