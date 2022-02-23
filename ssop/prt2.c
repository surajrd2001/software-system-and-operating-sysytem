#include <stdio.h>
#include <string.h>

char arr[100];
int i, vovel = 0, consonent = 0, digit = 0, space = 0, acout = 0, ecout = 0, icout = 0, ocout = 0, ucout = 0;

int main()
{
    printf("\n PROGRAM FOR VOWEL,CONSONENT,SPACES,DIGITS,VOVEL COUNT");
    printf("\ndevolope by Suraj Diwate");
    printf("\nenter the string\n");

    fgets(arr, sizeof(arr), stdin);

    printf("\nyou enter the string\n");
    puts(arr);

    for (i = 0; arr[i] != '\0'; ++i)
    {
        arr[i] = tolower(arr[i]);

        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' ||
            arr[i] == 'o' || arr[i] == 'u')
        {

            ++vovel;

            if (arr[i] == 'a')
            {
                ++acout;
            }

            else if (arr[i] == 'e')
            {
                ++ecout;
            }

            else if (arr[i] == 'i')
            {
                ++icout;
            }

            else if (arr[i] == 'o')
            {
                ++ocout;
            }

            else if (arr[i] == 'u')
            {
                ++ucout;
            }
        }

        else if ((arr[i] >= 'a' && arr[i] <= 'z'))
        {
            ++consonent;
        }

        else if (arr[i] >= '0' && arr[i] <= '9')
        {
            ++digit;
        }

        else if (arr[i] == ' ')
        {
            ++space;
        }
    }

    printf("Vowels: %d", vovel);
    printf("\nConsonants: %d", consonent);
    printf("\nDigits: %d", digit);
    printf("\nWhite spaces: %d", space);
    printf("\n count of a: %d", acout);
    printf("\n count of e: %d", ecout);
    printf("\n count of i: %d", icout);
    printf("\n count of o: %d", ocout);
    printf("\n count of u: %d", ucout);
    return 0;
}