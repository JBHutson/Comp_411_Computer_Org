#include <stdio.h>

main()
{
        int a;
        int x = 1;
        
        printf("Please enter a number from 1 to 5:\n");
        scanf("%i", &a);
        if (a > 5 || a < 1)
        {
                printf("Number is not in the range from 1 to 5\n");
                return 0;
        }
        while (x <=  a) {
           printf("%i Hello World\n", x);
           x++;
        }
return 0;
}
