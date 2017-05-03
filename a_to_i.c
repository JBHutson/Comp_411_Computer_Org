#include <stdio.h>

int a_to_i(char *str);

main() {

char str [20];
int binNum = 0;

do {
        fgets(str, 20, stdin);
        binNum = a_to_i(str);
        printf("%d\n", binNum);
        } while (binNum != 0);
}

int a_to_i(char *str){
        int result = 0;
        int i = 0;
        while ( isdigit( *str ) ){
                result *= 10;
                result += (int) (*str-'0');
                str++;
        }
        return result;
}
