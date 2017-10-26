#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char marca[20];
    char modelo[15];
    float precio;
} eNotebook;

eNotebook* new_notebook();
void printNotebook(eNotebook*);
eNotebook* new_notebookParam(int, char[], char[], float);
int main()
{
    eNotebook* unaNotebook;
    eNotebook* otraNotebook;
    unaNotebook = new_notebook();
    if(unaNotebook == NULL)
    {
        printf("\nno se pudo asignar memoria");
        exit(1);
    }
    eNotebook* x=new_notebook();
    if(x!=NULL)
    {
        unaNotebook->id=0;
        strcpy(unaNotebook->marca,"");
        strcpy(unaNotebook->modelo,"");
        unaNotebook->precio=0;
    }
    otraNotebook = new_notebookParam(123,"Compaq","HH22",10000);
    if(otraNotebook ==NULL)
    {
        printf("\nnose pudo asignar memoria");
        exit(1);
    }
    /*unaNotebook->id=8;
    strcpy(unaNotebook->marca,"HP");
    strcpy(unaNotebook->modelo,"Envy");
    unaNotebook->precio=30000;*/

    printNotebook(unaNotebook);
    printNotebook(otraNotebook);
    free(unaNotebook);
    free(otraNotebook);
    return 0;
}

eNotebook* new_notebook()
{
    return (eNotebook*)malloc(sizeof(eNotebook));
}
void printNotebook(eNotebook*n)
{
    printf("ID:%d\tMARCA:%s\tMODELO:%s\tPRECIO:%.2f\n", n->id,n->marca,n->modelo,n->precio);
}

eNotebook* new_notebookParam(int id, char marca[], char modelo[], float precio)
{
    eNotebook* x=(eNotebook*)malloc(sizeof(eNotebook));
    x->id=id;
    strcpy(x->marca,marca);
    strcpy(x->modelo,modelo);
    x->precio = precio;

    return x;
}

