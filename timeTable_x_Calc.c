
//timeTable_x_Calculator,
//by Wilkho Tshink


void Calculator();
void MultiplicationTT();

#include<stdio.h>
#include<windows.h>
#include<conio.h>

void main(void)
{
    char option;

    system("CLS");
    system("COLOR 70");

    printf("\n\t\t Options\n\t\t_________\n\n");
    printf("%20s\n\n%20s\n", "Calculator [C]", "Time table [X]");

    printf("\n\n\tPlease type in your selection here: ");

    option = toupper(getch());
    printf("\n\n");
    system("pause");

    switch(option)
    {
        case 'C':
        {
            Calculator();
        }

        break;

        case 'X':
        {
            MultiplicationTT();
        }

        break;

        default:
        {
            printf("OPTION INVALID ! PROGRAM WILL NOW TERMINATE.");
        }

    }

    Sleep(3000);
}

void Calculator()
{
        system("CLS");
        system("COLOR 0A");

        double num1;
        double num2;
        char op;

        printf ("\n\n\n\t\tEnter first number: ");
        scanf ("%lf", &num1);

        printf ("\n\n\t\tEnter operation of choice: ");
        scanf (" %c", &op);

        printf("\n\n\t\tEnter second number: ");
        scanf ("%lf", &num2);

        if (op == '+'){
                printf("\n\n\tanswer: %.2f\n\n", num1 + num2);
        }else if(op == '-'){
                printf("\n\n\tanswer: %.2f\n\n", num1 - num2);
        }else if(op == '*'){
                printf("\n\n\tanswer: %.2f\n\n", num1 * num2);
        }else if(op == '/'){
                printf("\n\n\tanswer: %.2f\n\n", num1 / num2);
        }else{
                printf("\n\n\tError !\n\n");
        }

        Sleep(5000);

        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tTHANK YOU !\n\n\n\n\n");
        Sleep(5000);

}

void MultiplicationTT()
{
    system("CLS");
    system("COLOR 0A");

    int col, row, value;

    system("CLS");
    system("COLOR 0A");

    Sleep(2000);
    printf("\n\t\t Multiplication Time Table");
    printf("\n\t\t___________________________\n\n");

    Sleep(2000);

    for(row=1; row<13; row++)
        {
            printf("\n\n");

            for(col=1; col<13; col++)
                {

                    value = row * col;
                    printf("%5d", value);
                }

            Sleep(3000);
        }
    printf("\n\n\n\n");
    system("pause");
    system("CLS");
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tTHANK YOU !\n\n\n\n\n");
    Sleep(5000);

}


