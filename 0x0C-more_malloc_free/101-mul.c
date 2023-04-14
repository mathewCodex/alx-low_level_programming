#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void print_error(void);
int is_valid_number(char *number);
void multiply(char *num1, char *num2);
void reverse_string(char *str);

int main(int argc, char *argv[])
{
    if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2])) {
        print_error();
    }
    else {
        multiply(argv[1], argv[2]);
    }

    return 0;
}

void print_error(void)
{
    printf("Error\n");
    exit(98);
}
int is_valid_number(char *number)
{
    for (int i = 0; number[i] != '\0'; i++) {
        if (!isdigit(number[i])) {
            return 0;
        }
    }
    return 1;
}

void multiply(char *num1, char *num2)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int result_len = len1 + len2;
    int carry = 0;
    int digit1, digit2, product;
    int result[result_len];
    memset(result, 0, result_len * sizeof(int));

    // Perform multiplication
    for (int i = len1 - 1; i >= 0; i--) {
        carry = 0;
        digit1 = num1[i] - '0';

        for (int j = len2 - 1; j >= 0; j--) {
            digit2 = num2[j] - '0';
            product = digit1 * digit2 + carry + result[i + j + 1];
            result[i + j + 1] = product % 10;
            carry = product / 10;
        }
        result[i] += carry;
    }

    // Convert result array to string
    char result_str[result_len + 1];
    memset(result_str, '\0', result_len + 1);
    for (int i = 0; i < result_len; i++) {
        result_str[i] = result[i] + '0';
    }

    // Remove leading zeros
    int i = 0;
    while (result_str[i] == '0' && i < result_len - 1) {
        i++;
    }
    reverse_string(result_str + i);

    // Print result
    printf("%s\n", result_str);
}

void reverse_string(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
    }
}

