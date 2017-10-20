// Author: Adesh Gautam

// Structure of the doubly linked list
// a = info part
// lptr = left pointer
// rptr = right pointer
struct node{
    int a;
    struct node *lptr;
    struct node *rptr;
};

// Header for storing address of first node
struct node *header = NULL;

// Create a node with value t in it
void create(int t){
    struct node *temp,*t1;
    temp=(struct node *)malloc(sizeof(struct node));
    if(header==NULL){
        temp->a=t;
        temp->lptr=NULL;
        temp->rptr=NULL;
        header=temp;
    }
    else{
        t1=header;
        while(t1->rptr!=NULL){
            t1=t1->rptr;
        }
        temp->a=t;
        temp->lptr=t1;
        t1->rptr=temp;
        temp->rptr=NULL;
    }
}

// Insert value t at the beginning
void insert_beg(int t){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(header==NULL){
        printf("\nList is Empty!");
    }
    else{
        temp->a=t;
        temp->rptr=header;
        header->lptr=temp;
        temp->lptr=NULL;
        header=temp;
    }
}

// Insert value t at last
void insert_last(int t){
    struct node *temp,*t1=header;
    temp=(struct node *)malloc(sizeof(struct node));
    while(t1->rptr!=NULL){
        t1=t1->rptr;
    }
    temp->a=t;
    temp->lptr=t1;
    t1->rptr=temp;
    temp->rptr=NULL;
}

// Delete a node from beginning of the doubly linked list
void delete_beg(){
    struct node *t1=header;
    header->rptr->lptr=NULL;
    header=header->rptr;
}

// Delete a node from the last of the doubly linked list
void delete_last(){
    struct node *t1=header;
    while(t1->rptr!=NULL){
        t1=t1->rptr;
    }
    t1->lptr->rptr=NULL;
}

// Delete a node with value t stored in it
void delete_val(int t){
    struct node *t1=header;
    while(t1->rptr!=NULL){
        if(t1->a==t){
            break;
        }
        t1=t1->rptr;
    }
    t1->lptr->rptr=t1->rptr;
}

// Display all the nodes
void show(){
    struct node *temp=header;
    while(temp!=NULL){
        printf("->%d",temp->a);
        temp=temp->rptr;
    }
}
