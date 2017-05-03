#include <stdio.h>
#include <string.h>

void i_to_a(char *str, int num);
char *strrev(char *str);

main() {

char str [20];
int num;

do {
        scanf("%d", &num);
        i_to_a(str, num);
        printf("%s\n", str);
        } while (num != 0);
}

void i_to_a(char *str, int num){

        int i = 0;
        int sign = 1;

        if (num == 0){
                str[i++] = '0';
                str[i] = '\0';
                return;
        }

        if (num < 0){
                sign = -1;
                num = -num;
        }
        while (num != 0){
                int rem = num % 10;
                str[i++] = (rem > 9)? (rem - 10) + 'a' : rem + '0';
                num = num/10;
        }
        if (sign == -1){
        str[i++] = '-';
        }
        str[i] = '\0';
        strrev(str);

return;
}

char *strrev(char *str){
         char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}
