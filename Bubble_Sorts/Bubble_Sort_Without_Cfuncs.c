#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */


#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */

int StringCmp(const char str1[], const char str2[]);
char *StringCpy(char dest[], const char src[]);

main()
{
  char Strings[NUM][LEN];

  /* Write a for loop here to read NUM strings.
 
        
     Use fgets(), with LEN as an argument to ensure that an input line that is too
     long does not exceed the bounds imposed by the string's length.  Note that the
     newline and NULL characters will be included in LEN.
  */
  printf("Please enter %d strings, one per line:\n", NUM);
        int i;
        for (i = 0; i < NUM - 1; i++){
               fgets(Strings[i], LEN - 2, stdin);
        }

 
  /* Write a for loop here to print all the strings. */
   printf("\nHere are the strings in the order you entered:\n");
        int j;
        for (j = 0; j < NUM - 1; j++){
              printf("%s", Strings[j]);
        }

        int c, d;
        char temp[1][LEN];

        for (c = 0; c < NUM; c++){
                for(d = 0; d < NUM - 1; d++){
                        if (StringCmp(Strings[d], Strings[d + 1]) > 0){
                                StringCpy(temp[0], Strings[d]);
                                StringCpy(Strings[d], Strings[d + 1]);
                                StringCpy(Strings[d + 1], temp[0]);
                }
        }
}

   printf("\n");
   puts("\nIn alphabetical order, the strings are:\n");
        int k;
        for (k = 0; k < NUM; k++){
                printf("%s", Strings[k]);
        }

        return 0;
}

int StringCmp(const char str1[], const char str2[]){
        int a;
        for (a = 0; a < LEN; a++){
                if (str1[a] < str2[a]){
                        return -1;
                } else if (str1[a] > str2[a]){
                        return 1;
                } else if (str1[a] == str2[a]){
                        continue;
                }
        }
}
char *StringCpy(char dest[], const char src[]){
        int b = 0;
        while (src[b] != '\0'){
                dest[b] = src[b];
                b++;
        }
        dest[b] = '\0';
        return(dest);
}
  /* Bubble sort */
  /* Write code here to bubble sort the strings in ascending alphabetical order

     Your code must meet the following requirements:
        (i) The comparison of two strings must be done by checking them one
            character at a time, without using any C string library functions.
            That is, write your own while/for loop to do this.
        (ii) The swap of two strings must be done by copying them 
            (using a temp variable of your choice) one character at a time,
            without using any C string library functions.
            That is, write your own while/for loop to do this.
        (iii) You are allowed to use strlen() to calculate string lengths.
  */
