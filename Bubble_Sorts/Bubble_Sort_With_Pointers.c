/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for string functions */
#include <stdlib.h>


#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */

main()
{
  char* Strings[NUM];
  char temp[LEN];

  printf("Please enter %d strings, one per line:\n", NUM);

  /* Write a for loop here to read NUM strings, using fgets(). */
  int i, z;
  for (i = 0; i < NUM - 1; i++){
               fgets(temp, LEN - 2, stdin);
               int length = strlen(temp);
               Strings[i] = malloc(length + 1);
               for (z = 0; z < length; z++){
                        Strings[i][z] = temp[z];
        }
}
  /* Read one line of input into a temp string that is long enough (LEN long) */


    /* Allocate memory space for String[i] that is only large enough to copy the
       string just read into it.  Suppose the length of the string read into
       temp is "length", then you can use the following: */

     printf("\nHere are the strings in the order you entered:\n");
        int j;
        for (j = 0; j < NUM; j++){
              printf("%s", Strings[j]);
        }

  /* Write a for loop here to print all the strings. */

  int a, b;

   for (a = 0; a < NUM; a++){
                for(b = 0; b < NUM - 1; b++){
                        if (strcmp(Strings[b], Strings[b + 1]) > 0){
                                char* temp = Strings[b];
                                Strings[b] = Strings[b + 1];
                                Strings[b + 1] = temp;
                        }
                }
        }
  /* Bubble sort */
  /* Write code here to bubble sort the strings in ascending alphabetical order

     Your code must meet the following requirements:
        (i) The comparison of two strings must be done by strcmp() or strncmp().

       (ii) The swap of two strings must be done by swapping pointer values.
            You must not swap two string using strcpy()/strncpy() or using your 
            own loop to swap them a character at a time.
  */

  
  
  /* Output sorted list */
  printf("\n");
   puts("\nIn alphabetical order, the strings are:\n");
        int k;
        for (k = 0; k < NUM; k++){
        printf("%s", Strings[k]);
        }
  /* Write a for loop here to print all the strings. */
  int l;
  for (l = 1; l < NUM; l++){
        free(Strings[l]);
}
  /* Write a loop here to use free() to free up space allocated 
     for all of the strings above.  */


  return 0;
}
