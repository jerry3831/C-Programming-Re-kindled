#include<stdio.h>
#include<string.h>

int summation(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);
float float_summation(float c, float d);
float float_subtraction(float c, float d);
float float_multiplication(float c, float d);
float float_division(float c, float d);
void operandInitialization();

int strcomp(const char* a, const char* b) 
{
    while (*a && (*a == *b)) {
        a++;
        b++;
    }
    return *(const char*)a - *(const char*)b;
}

int main(void) {
    char operator;
    int a, b;
    float c, d;
    char operandType[10];

    //? initializing operands
    

    //? matching operators to actions
    // TODO: FUFUZA & fix the error {implicit declarion of function(args)}
    //* DONE
    switch (operator)
    {
    case '-':
        if(operandType == "integer") {
            int result = subtraction(a, b);
            printf("result: %d", result);
        } else {
            float result = float_subtraction(c, d);
            printf("result: %f", result);
        }
        break;
    case '+':
        if(operandType == "integer") {
            int result = summation(a, b);
            printf("result: %d", result);
        } else {
            float result = float_summation(c, d);
            printf("result: %f", result);
        }
        break;
    case '/':
        if(operandType == "integer") {
            int result = (float) division(a, b);
            printf("result: %d", (float) result);
        } else {
            float result = float_division(c, d);
            printf("result: %f", result);
        }
        break;
    case '*':
        if(operandType == "integer") {
            int result = multiplication(a, b);
            printf("result: %d", result);
        } else {
            float result = float_multiplication(c, d);
            printf("result: %f", result);
        }
        break;
    default:
        printf("enesure matching operands and operators.");
        break;
    }

    return 0;
}

int summation(int a, int b) 
{ 
    return a + b;
}
float float_summation(float a, float b)
{
    return a + b;
}

int division(int a, int b)
{   if (b != 0) {
        return a / b;
    }
}
float float_division(float a, float b)
{   if (b != 0) {
        return a / b;
    }

    char operator;
    int a, b;
    float c, d;
    char operandType[10];

    printf("input an operator among the following symbols (/,+,-,*): ");
    scanf("%c", &operator); //? operator selection
    printf("select type of operands {integer, float}: "); //? operand types
    scanf("%s", &operandType);

    //? logic handling integer types
    if(operandType == "integer" || strcomp(operandType, "integer") == 0) {
        printf("input operands:");
        scanf("%d", &a);
        scanf("%d", &b);
    }//? logic handling integer types 
    else if(operandType == "float" || strcomp(operandType, "float") == 0) {
        printf("input operands:");
        scanf("%f", &c);
        scanf("%f", &d);
    }
    else {
        printf("invalid operand or operand type declaration");  
        //TODO: make a base case to stop recursion when it is met
        int i = 5;
        while (i > 0) {
            operandInitialization();
            i--;
        }

        printf("You have %d trials left", i);
    }
}

int subtraction(int a, int b)
{
    return a - b;
}
float float_subtraction(float a, float b)
{
    return a - b;
}
int multiplication(int a, int b)
{
    return a * b;
}
float float_multiplication(float a, float b)
{
    return a * b;
}