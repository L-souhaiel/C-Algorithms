#include<stdio.h>
#include<stdlib.h> 

/*this program is about to empty the stdin FIFO with the Function getchar*/

void takechain(char *chain);
void viderBuffer();

int main ( int argc , char *argv[])
{
    
char chain[10];
printf("\nEnter you Name\n");
takechain(chain);
printf("you name is : %s\n",chain);
takechain(chain);
printf("you name is : %s\n",chain); 


return EXIT_SUCCESS;
}



void takechain( char *chain )
{
fgets(chain,10,stdin);  //save the Input Buffer Into input FIFO
viderBuffer();
}

void viderBuffer()
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();  //using getchar() to empty the FIFO
    }
}