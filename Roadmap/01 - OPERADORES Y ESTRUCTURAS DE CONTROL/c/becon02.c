#include <stdio.h>

void operators();
void conditionals();
void iteratives();
void challenge();

int main(void)
{
    operators();
    conditionals();
    iteratives();
    challenge();

    return(0);
}

/* Operators
This program showcase the most common operators in C, sorted by:
- Arithmetic: To do mathematic calculations
- Comparison: To compare values and generate boleans
- Logic: To make operations with conditions (AND, OR, NOT)
- Assignment: To modify the value of a variable
- Bits: To work with operations at bit level (AND, OR, displacement) 
*/
void operators()
{
    // Global variables for function 
    int a = 5;
    int b = 10; 
    int c = 3;

    // Arithmetic Operators
    printf("--- Arithmetic Operators ---\n");
    {
        printf("Addition: %d + %d = %d\n", a, b, a + b);
        printf("Subtraction: %d - %d = %d\n", a, b, a - b);
        printf("Division: %d / %d = %f\n", a, b, (float)a / b); //Division with 0 gives ERROR inf
        printf("Product: %d * %d = %d\n", a, b, a * b);
        printf("Modulus: %d %% %d = %d\n", a, c, a % c); //Use %% in printf() to print the symbol 
        printf("Negative symbol: %d -> %d\n", a, -a);
        
        a++; //Increment
        printf("Increment: Before a = 5; After a++ = %d\n", a); //Show value before and after increment

        b--; //Decrement
        printf("Decrement Before b = 10; After b-- = %d\n\n", b); //Show value before and after decrement
    }

    //Comparison Operators
    printf("--- Comparison Operators ---\n");
    printf(" (0) = False; (1) = True\n\n"); //In C theres no Bool type, everything except 0 or '\0' is True
    {
        printf("Equal: (%d == %d) = %d\n", a, b, a == b);
        printf("Not equal: (%d != %d) = %d\n", a, b, a != b);
        printf("Greater than: (%d > %d) = %d\n", a, b, a > b);
        printf("Smaller than: (%d < %d) = %d\n", a, b, a < b);
        printf("Greater than || Equal to: (%d >= %d) = %d\n", a, b, a >= b);
        printf("Smaller than || Equal to: (%d <= %d) = %d\n", a, b, a <= b);
    }

    //Logic Opetators
    printf("--- Logic Operators ---\n");
    printf(" (0) = False; (1) = True\n\n");
    {
        //AND (&&) -> True if both comparison are True
        printf("AND -> Both are True?: (%d < %d && %d > %d) = %d\n", a, b, b, a , (a < b && b > a));

        //OR (||) -> True if one of the comparison is True
        printf("OR -> Is one True?:(%d == %d || %d <= %d) = %d\n", a, c, c, b, (a == c || c <= b));
    
        //NOT (!) -> Reverses the result
        printf("NOT -> Reverse the result (6 == 3) = 0; !(%d == %d) = %d", a, c, !(a == c));
    }
}

void conditionals()
{

}

void iteratives()
{

}

void challenge()
{

}