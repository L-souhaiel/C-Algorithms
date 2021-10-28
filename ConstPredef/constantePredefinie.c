#include<stdio.h>
#include<stdlib.h>
#define age 25

/*this program show how define Constante Fonction*/

#define erzehle_lebenslauf() printf("\nich Heisse Souhaiel Louati\n"); \
                             printf("\nich bin %d jahre alt\n" , age); \
                             printf("\nich liebe Gott\n");

                             //Define the function with #define preprocess



int main (int argc , char *argv[])


{

erzehle_lebenslauf();





return 0;
}

