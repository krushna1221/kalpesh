#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len;

    printf("Enter a binary string: ");
    scanf("%99s", str);

    len = strlen(str);

    // Check if the string is empty
    if (len == 0)
    {
        printf("\nString Rejected.\n");
        return 0;
    }

    // Validate binary string
    for (i = 0; i < len; i++)
    {
        if (str[i] != '0' && str[i] != '1')
        {
            printf("Invalid input! Enter only 0 and 1.\n");
            return 0;
        }
    }

    // Check first and last symbol
    if (str[0] == '0' && str[len - 1] == '1')
    {
        printf("String Accepted\n");
    }
    else
    {
        printf("String Rejected\n");
    }

    return 0;
}