// This is the official URL for C "https://www.c-language.org/"

/* --- Types of comments in C --- */
// Single line comment
/* Multi line comment */

/* --- Creating a Const variable ---
** Is good practice to always use capital letter for
** const variables for readability
*/
#include <stdio.h>

const float PI = 3.14; // const + data_type + data_name = value;

/* --- All data types from C --- */
char myChar = 'M';              //Size: 1byte; Format specifier: %c
int myNum = 5;                  //Size: 4bytes; Format specifier: %d  
float myDec = 5.34;             //Size: 4bytes; Format specifier: %f
double myDob = 5.34343;         //Size: 8bytes; Format specifier: %lf
long longInt = 132344546;       //Size: 8bytes; Format specifier: %ld 
short shortInt = 128;           //Size: 2bytes ; Format specifier: %hd

/* --- Special Data Types ---
** A variable of type int, char, long, short is signed
** as default. This means it can store + or - values.
** If you type unsigned before the data type, the value
** can't hold a - value but in exchange it doubles
** the + value space it can hold.
*/

signed int signedNum = -5; //Capable of containing at least the[−32767, +32767] range. Format specifier: %d
unsigned int unsignedNum = 5; //Contains at least the [0, 65535] range. Format specifier: %u

// Check ASCII table to see the values of each number: https://www.ascii-code.com/
signed char signedChar = 'Z';     // Capable of containing at least the [−127, +127] range. Format specifier: %c
unsigned char unsignedChar = 'Z'; // Contains at least the [0, 255] range. Format specifier: %c

int main(void)
{
    printf("Hello World\n");

    //Format specifier %zu used in printf() for sizeof()
    printf("Const float: %.2f; Size: %zu\n", PI, sizeof(PI));
    printf("Char: %c; Size: %zu\n", myChar, sizeof(myChar));
    printf("Int: %d; Size: %zu\n", myNum, sizeof(myNum));
    printf("Float: %.2f; Size: %zu\n", myDec, sizeof(myDec));
    printf("Double: %lf; Size: %zu\n", myDob, sizeof(myDob));
    printf("Long: %ld; Size: %zu\n", longInt, sizeof(longInt));
    printf("Short: %hd; Size: %zu\n", shortInt, sizeof(shortInt));

    return (0);
}