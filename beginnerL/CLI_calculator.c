#include <stdio.h>

float math(int fNum, int sNum, char op){
    float result; 
    switch (op)
    {
    case '+':
        result = fNum + sNum;   
        break;
    case '-':
        result = fNum - sNum;
        break;
    case '/':
        result = fNum / sNum;
        break; 
    case '*': 
        result = fNum * sNum;
        break; 
    default:
        printf("Sorry we dont have this :(");
        break;
    }
    return result;
}

void start(){
    printf("\n1Hello!\n");
    printf("Welcome to CLI Calculator\n");
    printf("Choose what do you want to do: \n");
    printf("1. Use a calculator\n");
    printf("2. EIXIT\n");
    int choice;
    scanf(" %d", &choice);
    switch (choice)
    {
    case 1:
        int firstNumber, secondNumber;
        char operator;
        printf("Entre your first number: \n");
        scanf("%d", &firstNumber);
        printf("\n Enter type of an operation (+, -, *, /):\n");
        scanf(" %c", &operator);
        printf("\n Enter your seconf number \n");
        scanf("%d", &secondNumber);
        printf("\nThe result is:  %f", math(firstNumber,secondNumber,operator));
        start();
        break;
    case 2:
        printf("\n Bye bye");
        start();
        break; 
    default:
        printf("\n sorry can't help :(");

        break;
    }
}

int main(){
    start();
    return 0;
}