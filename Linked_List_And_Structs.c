#include <stdio.h>
#include <stdlib.h>

struct point {
        int x;
        int y;
        struct point *next;
};

main () {
        //create list head and current node
        struct point *head = NULL;
        struct point *current = NULL;
        current = malloc(sizeof(struct point));
        head = malloc(sizeof(struct point));

        //make linked list
        int a, b;
        do{
                scanf("%d %d", &a, &b);
                if (head == NULL && a && b != 0){
                        head->next = malloc(sizeof(struct point));
                        head->next->x = a;
                        head->next->y = b;
                        head->next->next = NULL;
                }
                else if (a || b != 0) {
                        current = head;
                        while (current->next != NULL){
                                current = current->next;
                        }
                        current->next = malloc(sizeof(struct point));
                        current->next->x = a;
                        current->next->y = b;
                        current->next->next = NULL;
                }
        }while (a || b != 0);

        //calculate and print the distance from the origin (0,0)
        current = head->next;
        while(current != NULL){
                int c, d, e;
                c = current->x;
                d = current->y;
                e = (c*c) + (d*d);
                printf("%d\n", e);
                current = current->next;
        }
}
