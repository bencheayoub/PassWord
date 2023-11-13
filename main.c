#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define MIN_LEGTH 4

int main()
{
    //the user creat a password
    char p[50], P[50], pa[50];
    int i, s;

    do {//the user enter the password for the first time
        printf("Enter the password at least 4 characters: ");
        scanf("%s", p);
        system("cls");

        if (strlen(p) < MIN_LEGTH) {
            printf("Password must be at least 4 characters.\n");
            sleep(1);
            system("cls");

        }

    } while (strlen(p) < MIN_LEGTH);


    while(strcmp(p,P)!=0) {//the user enter the password for the second time to confime
        printf("Enter the password again to confirm: ");
        scanf("%s", P);
        sleep(1);
        system("cls");
        if (strcmp(p, P) != 0) {
            printf("Passwords do not match. Try again.\n");
            sleep(2);
            system("cls");
        }
    }

    printf("Password confirmed. Access granted.\n");

    //the user try open the phone

    printf("Enter the password : ", MIN_LEGTH);
        scanf("%s", pa);

        if(strcmp(pa,P) != 0)
        {
            do
            {
                if(strcmp(pa,P) != 0)
                for(i=1; i<=5; i++)
                {
                    system("cls");
                    printf("Enter the password correctly : ");
                    scanf("%s", pa);
                    if(strcmp(pa,P)==0)
                    {
                        printf("The phone is open now , welcome");
                        return 0;
                    }
                    if(i==5)
                        break;
                }
                if(i==5)
                {//the user enter the password 5 times incorrect
                    printf("sorry the password you have been enter is incorrect\n");
                    for(s=5; s<=5 && s>0; s--)
                    {
                        printf("Try again after %d seconds.\n", s);
                        sleep(1);
                        system("cls");
                    }
                }
            }while(strcmp(pa,P) != 0);
        }
        else
        {
            printf("The phone is open now , welcome");
        }
return 0;

}
