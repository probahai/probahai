#include <stdio.h>
#include <stdlib.h>
float a, b;
char c;
void welcomemessage()
{
    system("clear||cls");
    printf("\033[92;1m------------------------------------------------------------------------\n");
    printf("|   KEYWORD   |     FOR     |             OPERATOR                     |\n");
    printf("------------------------------------------------------------------------\n");
    printf("|    '+'      |     FOR     |            ADDICTION                     |\n");
    printf("------------------------------------------------------------------------\n");
    printf("|    '-'      |     FOR     |            SUBTRACTION                   |\n");
    printf("------------------------------------------------------------------------\n");
    printf("|    '*'      |     FOR     |             MULTIPHY                     |\n");
    printf("------------------------------------------------------------------------\n");
    printf("|    '/'      |     FOR     |              DIVIDE                      |\n");
    printf("------------------------------------------------------------------------\n");
    printf("|    'S'      |     FOR     |              SQUARE                      |\n");
    printf("------------------------------------------------------------------------\n");
    printf("|    'C'      |     FOR     |               CUBE                       |\n");
    printf("------------------------------------------------------------------------\n");
    printf("|    'p'      |     FOR     |            PERCENTAGE                    |\n");
    printf("------------------------------------------------------------------------\n");
    printf("|    'Q'      |     FOR     |               EXIT                       |\n");
    printf("------------------------------------------------------------------------\n");
    printf("please enter the keyword for calculation\n>>");
    scanf("%c", &c);
}
void addiction()
{
    printf("please enter the frist number\n");
    scanf("%f", &a);
    printf("please enter the second number\n");
    scanf("%f", &b);
    printf("This is your answer :)__%f\n", a + b);
}
void subtract()
{
    printf("please enter the frist number\n");
    scanf("%f", &a);
    printf("please enter the second number\n");
    scanf("%f", &b);
    printf("This is your answer :)__%f\n", a - b);
}
void multiphy()
{
    printf("please enter the frist number\n");
    scanf("%f", &a);
    printf("please enter the second number\n");
    scanf("%f", &b);
    printf("This is your answer :)__%f\n", a * b);
}
void divide()
{
    printf("please enter the frist number\n");
    scanf("%f", &a);
    printf("please enter the second number\n");
    scanf("%f", &b);
    printf("This is your answer :)__%f\n", a / b);
}
void square()
{
    printf("please enter your number which you want sqaure\n");
    scanf("%f", &a);
    printf("%2.f is your square\n", a * a);
}
void cube()
{
    printf("please enter your number which you want cube\n");
    scanf("%f", &a);
    printf("%2.f is your cube\n", a * a * a);
}
void percentage()
{
    printf("Please enter your number which you want to percentage\n ");
    scanf("%f", &a);
    printf("please enter your total number \n");
    scanf("%f", &b);
    printf("%2.f-percent is  your answer \n", a / b * 100);
}
void userchoice()
{
    switch (c)
    {
    case '+':
        addiction();
        break;
    case '-':
        subtract();
        break;
    case '*':
        multiphy();
        break;
    case '/':
        divide();
        break;

    case 's':
        square();
        break;
    case 'c':
        cube();
        break;
    case 'p':
        percentage();
        break;
    case 'Q':
        exit(0);
        break;

    default:
        printf("command not found\n");
        break;
    }
}

int main()
{
    welcomemessage();
    getchar();
    userchoice();
    getchar();
}
