#include<stdio.h>
//#include<alloc.h>
#include<conio.h>

struct node{
    int a;
    struct node *p;
};

struct node *header;
struct node *ptrs[10];

void create(int);
void show();
int count_rec(struct node *);
void partition(int);

void main(){

    header = NULL;
    create(1);
    create(2);
    create(3);
    create(4);
    create(5);
    create(6);
    create(7);
    create(8);
    create(9);

    printf("Full Node\n  ");
    show();

    partition(3);

    getch();
}

void partition(int n){
    struct node *temp=header;
    int num = count_rec(temp);
    printf("\n");
    while(temp!=NULL){
        printf("%d",temp->a);
        if(temp->a%n==0){
            printf("\n");
        }
        temp=temp->p;
    }
}


void create(int t){
    struct node *temp;
    struct node *t1;
    temp = (struct node *) malloc(sizeof(struct node));

    temp->a=t;
    temp->p=NULL;

    if(header==NULL){
        header=temp;
    }
    else{
        t1=header;
        while(t1->p!=NULL)
            t1=t1->p;
        t1->p=temp;
    }
}

void show(){
    struct node *temp=header;
    while(temp!=NULL){
        printf("->%d",temp->a);
        temp=temp->p;
    }
}

int count_rec(struct node *h){
    if(h==NULL)
        return 0;
    return(1+count_rec(h->p));
}
