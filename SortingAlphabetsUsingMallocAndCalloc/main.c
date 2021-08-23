#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

struct alphabets
{
    char c;
};

void sort_array(struct alphabets **);
main()
{
    struct alphabets *p[SIZE];
    int i;
    for(i=0; i<SIZE; i++)
        p[i]=(struct alphabets*)malloc(sizeof(struct alphabets));

    printf("Enter a word: \n");
    for(i=0; i<SIZE; i++)
        scanf(" %c", &p[i]->c);
    printf("\nCharacters: \n");
    for(i=0; i<SIZE; i++)
        printf("%c\t", p[i]->c);

    sort_array(p);
    printf("\nSorted characters: \n");
    for(i=0; i<SIZE; i++)
        printf("%c\t", p[i]->c);
}
void sort_array(struct alphabets **p)
{
    int i,j;
    char temp;
    for(i=SIZE-1; i>=0; i--)
    {
        for(j=0; j<i; j++)
        {
            if((p[j]->c)>(p[j+1]->c))
            {
                temp=p[j]->c;
                p[j]->c=p[j+1]->c;
                p[j+1]->c=temp;
            }
        }
    }
}
