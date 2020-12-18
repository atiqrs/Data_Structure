#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

int main(){
    int i,n,item;
    struct node *p, *q, *head;
    //Input Section
    printf("Enter how many nodes: ");
    scanf("%d",&n);
    printf("\nEnter First Item: ");
    scanf("%d",&item);

    q=(struct node *) malloc(sizeof(struct node));
    q-> data = item;
    q-> next = NULL;
    head = q;
    p= head;
    for(i=0; i<n-1; i++){
        printf("\nEnter Next Item: ");
        scanf("%d",&item);

        q=(struct node *) malloc(sizeof(struct node));
        q-> data = item;
        q-> next = NULL;
        p-> next = q;
        p = p -> next;
    }
    p=head;
    //Output Section (Traversing)
    printf("\nYour sorted number shorted numbers:\n");
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    }

    return 0;
}

