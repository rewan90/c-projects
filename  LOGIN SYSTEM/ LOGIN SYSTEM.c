#include <stdio.h>
#include <conio.h>

struct user
{
    char fullName[50];
    char email[50];
    char password[50];
    char username[50];
    char phone[50];
};

void takeinput(char ch[50])
{
    fgets(ch, 50, stdin);
    ch[strlen(ch) - 1] = 0;
}

char generateUsername(char email[50], char username[50])
{

    for (int i = 0; i < strlen(email); i++)
    {
        if (email[i] = '@')
            break;
        else
            username[i] = email[i];
    }
}

void takepassword(char pwd[50]) {}

int main()
{
    system("color 0b"); // color of background and text
    int opt;

    printf("\n\t\t\t\t----------Welcome to authentication system----------");
    printf("\nPlease choose your operation");
    printf("\n1.Signup");
    printf("\n2.Login");
    printf("\n3.Exit");

    printf("\n\nYour choice:\t");
    scanf("%d", &opt);
    fgetc(stdin);

    switch (opt)
    {
    case 1:

        break;

    case 2:
        /* code */
        break;
    case 3:
        printf("\t\t\tBye Bye");
        return 0;
    }

    return 0;
}