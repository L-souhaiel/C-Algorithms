#include"liste_chain.h"

/*This Algorithm define Function to manipulate List in C*/

Liste *intilise()                                             // Initilaze List
{
    Liste *liste= malloc(sizeof(Liste)); 
    Element *element1 =malloc(sizeof(Element)); 
    if(element1==NULL || liste==NULL) { exit(EXIT_FAILURE);}

    element1->element=0; 
    element1->next=NULL; 
    liste->first=element1; 
    return liste;
}



void AddElementAtLastListe(Liste *liste , int number)        // Adding Element at the end of a list 
{
    /*
       liste : at which List should the number added
       Number: which number should be added
    */  
    Element *element = liste->first;
    Element *addtetElemnt=malloc(sizeof(Element)); 
    if (liste==NULL || addtetElemnt==NULL ){exit(EXIT_FAILURE);}
    addtetElemnt->element=number; 

    while(element->next!=NULL)
    {   

        element=element->next; ; 
    }

    element->next=addtetElemnt; 
    addtetElemnt->next=NULL; 

}


void showListe(Liste *liste)                                  // Print the List data
{
    if (liste == NULL) { printf("\ncondo\n");exit(EXIT_FAILURE);}
    Element *element = liste->first; 
    do 
    {  
    printf("\n%d.",element->element);
    element = element->next; 
    }while(element!=NULL);
}

void AddElemntAtMidList(Liste *liste , int number , int adresse ,  int adresse_apres)  // Added Element in the middle of the List   
{

/*

    liste:   List in there should the Element be Added. 
    number:  number should be added
    address: address in there the element should be added
    address_apres: the first address after the added element

 */    

Element *newElemnt = malloc(sizeof(Element)); 
newElemnt->element=number; 
if (liste==NULL || newElemnt==NULL){printf("\ncondo\n");exit(EXIT_FAILURE);}
Element *elemnt1=liste->first;

while(elemnt1->element!=adresse && elemnt1->next->element!=adresse_apres)
{
    
    elemnt1=elemnt1->next;;
}


newElemnt->next=elemnt1->next;
elemnt1->next=newElemnt; 

}



int sizeList(Liste *liste)     //size of the list
{
    int size = 0;
    Element *elemt = liste->first; 
    while(elemt!=NULL)
    {
        elemt=elemt->next;
        size++;
    } 

    return size ;

}