#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount,total_notes;
    int note_of_100,note_of_50,note_of_10;
    int note_of_5,note_of_2,note_of_1;

    printf("Enter Total Money");
    scanf("%d",&amount);

    note_of_100=amount/100;
    amount=amount%100;

    note_of_50=amount/50;
    amount=amount%50;

    note_of_10=amount/10;
    amount=amount%10;

    note_of_5=amount/5;
    amount=amount%5;

    note_of_2=amount/2;
    amount=amount%2;

    note_of_1=amount/1;
    amount=amount%1;

    total_notes=note_of_100+note_of_50+note_of_10+note_of_5+note_of_2+note_of_1;

    printf("We will require \n");
    printf("%d notes of 100 \n",note_of_100);
    printf("%d notes of 50 \n",note_of_50);
    printf("%d notes of 10 \n",note_of_10);
    printf("%d notes of 5 \n",note_of_5);
    printf("%d notes of 2 \n",note_of_2);
    printf("%d notes of 1 \n",note_of_1);
    printf("So You Require Total of %d Notes",total_notes);
    return 0;
}
