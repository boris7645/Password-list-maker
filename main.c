#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void generator();
void password();

int main()
{
    int choice = 0;
    while (free){

printf("1. Wordlist generator\n");
printf("2. Password strength tool\n");
printf("3. Exit\n");
printf("Choose option:");
scanf("%d",&choice);

switch (choice)
    {
    case 1:;
        generator();
        break;

    case 2:;
        password();
        break;

    case 3:;
        printf("Restart program\n");
        exit(0);
    }
}
    return 0;
}

void generator(){
    char filename[30];
    FILE * fPtr;
    printf(" Enter the filename: ");
    scanf("%s", &filename);
    strcat(filename,".txt");
    fPtr = fopen(filename, "w");

    char elements[7][1000];

    printf("What is the name\n");
    scanf("%s", elements[0]);
    printf("What is the surname\n");
    scanf("%s", elements[1]);
    printf("What is the family name\n");
    scanf("%s", elements[2]);
    printf("What is birth date\n");
    scanf("%s", elements[3]);
    printf("What is the birth year\n");
    scanf("%s", elements[4]);
    printf("What is the name of the pet\n");
    scanf("%s", elements[5]);
    printf("What is the keyword\n");
    scanf("%s", elements[6]);

    int a, b, c, d, e, f, g;

    for(a = 0; a <= 6; a++)
    {
        for(b = 0; b <= 6; b++)
        {
            for(c = 0; c <= 6; c++)
            {
                for(d = 0; d <= 6; d++)
                {
                    for(e = 0; e <= 6; e++)
                    {
                        for(f = 0; f <= 6; f++)
                        {
                            for(g = 0; g <= 6; g++)
                            {
                                if (elements[a]!=elements[b] && elements[a]!=elements[c] && elements[a]!=elements[d] && elements[a]!=elements[e] && elements[a]!=elements[f] && elements[a]!=elements[g] && elements[b]!=elements[c] && elements[b]!=elements[d] && elements[b]!=elements[e] && elements[b]!=elements[f] && elements[b]!=elements[g] && elements[c]!=elements[d] && elements[c]!=elements[e] && elements[c]!=elements[f] && elements[c]!=elements[g] && elements[d]!=elements[e] && elements[d]!=elements[f] && elements[d]!=elements[g] && elements[e]!=elements[f] && elements[e]!=elements[g] && elements[f]!=elements[g]){
                                    fputs(elements[a], fPtr);
                                    fputs(elements[b], fPtr);
                                    fputs(elements[c], fPtr);
                                    fputs(elements[d], fPtr);
                                    fputs(elements[e], fPtr);
                                    fputs(elements[f], fPtr);
                                    fputs(elements[g], fPtr);
                                    fputs("\n", fPtr);
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for(b = 0; b <= 6; b++)
        {
            for(c = 0; c <= 6; c++)
            {
                for(d = 0; d <= 6; d++)
                {
                    for(e = 0; e <= 6; e++)
                    {
                        for(f = 0; f <= 6; f++)
                        {
                            for(g = 0; g <= 6; g++)
                            {
                                if (elements[b]!=elements[c] && elements[b]!=elements[d] && elements[b]!=elements[e] && elements[b]!=elements[f] && elements[b]!=elements[g] && elements[c]!=elements[d] && elements[c]!=elements[e] && elements[c]!=elements[f] && elements[c]!=elements[g] && elements[d]!=elements[e] && elements[d]!=elements[f] && elements[d]!=elements[g] && elements[e]!=elements[f] && elements[e]!=elements[g] && elements[f]!=elements[g]){
                                    fputs(elements[b], fPtr);
                                    fputs(elements[c], fPtr);
                                    fputs(elements[d], fPtr);
                                    fputs(elements[e], fPtr);
                                    fputs(elements[f], fPtr);
                                    fputs(elements[g], fPtr);
                                    fputs("\n", fPtr);
                                }
                            }
                        }
                    }
                }
            }
        }

    for(c = 0; c <= 6; c++)
        {
            for(d = 0; d <= 6; d++)
            {
                for(e = 0; e <= 6; e++)
                {
                    for(f = 0; f <= 6; f++)
                    {
                        for(g = 0; g <= 6; g++)
                        {
                            if (elements[c]!=elements[d] && elements[c]!=elements[e] && elements[c]!=elements[f] && elements[c]!=elements[g] && elements[d]!=elements[e] && elements[d]!=elements[f] && elements[d]!=elements[g] && elements[e]!=elements[f] && elements[e]!=elements[g] && elements[f]!=elements[g]){
                                fputs(elements[c], fPtr);
                                fputs(elements[d], fPtr);
                                fputs(elements[e], fPtr);
                                fputs(elements[f], fPtr);
                                fputs(elements[g], fPtr);
                                fputs("\n", fPtr);
                            }
                        }
                    }
                }
            }
        }

    for(d = 0; d <= 6; d++)
        {
            for(e = 0; e <= 6; e++)
            {
                for(f = 0; f <= 6; f++)
                {
                    for(g = 0; g <= 6; g++)
                    {
                        if (elements[d]!=elements[e] && elements[d]!=elements[f] && elements[d]!=elements[g] && elements[e]!=elements[f] && elements[e]!=elements[g] && elements[f]!=elements[g]){
                            fputs(elements[d], fPtr);
                            fputs(elements[e], fPtr);
                            fputs(elements[f], fPtr);
                            fputs(elements[g], fPtr);
                            fputs("\n", fPtr);
                        }
                    }
                }
            }
        }

    for(e = 0; e <= 6; e++)
                {
                    for(f = 0; f <= 6; f++)
                    {
                        for(g = 0; g <= 6; g++)
                        {
                            if (elements[e]!=elements[f] && elements[e]!=elements[g] && elements[f]!=elements[g]){
                                fputs(elements[e], fPtr);
                                fputs(elements[f], fPtr);
                                fputs(elements[g], fPtr);
                                fputs("\n", fPtr);
                            }
                        }
                    }
                }

    for(f = 0; f <= 6; f++)
                    {
                        for(g = 0; g <= 6; g++)
                        {
                            if(elements[f]!=elements[g]){
                                fputs(elements[f], fPtr);
                                fputs(elements[g], fPtr);
                                fputs("\n", fPtr);
                            }
                        }
                    }

    for(g = 0; g <= 6; g++)
                        {
                                fputs(elements[g], fPtr);
                                fputs("\n", fPtr);

                        }

    if(fPtr == NULL)
    {
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }
    fclose(fPtr);

    printf("The wordlist was successfully created.\n");
}

void password(){

    char pass[100];

    printf("Enter password:");
    scanf("%s", &pass);

    int Upper = 0;
    int Lower = 0;
    int Digit = 0;
    char* password = pass;
    char c;

    for (int i = 0; i < strlen(password); ++i)
    {
        c = password[i];
        if (islower(c))
            Lower=1;
        if (isupper(c))
            Upper=1;
        if (isdigit(c))
            Digit=1;
    }
        if(Lower != 0 && Upper !=0 && Digit !=0 && strlen(password) > 8 )
        {
            printf("The password is strong!\n");
        }
        else{
            printf("The password is weak!\n");
        }

    return 0;

}
