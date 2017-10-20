// Author: Adesh Gautam

// Structure of a node
struct node{
    int a;
    struct node *p;
};

// Header of the linked list
struct node *header=NULL;

// Function to create a node with a value t passed to the function
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

// Display all the values stored in a linked list
void show(){
    struct node *temp=header;
    while(temp!=NULL){
        printf("->%d",temp->a);
        temp=temp->p;
    }
}

// Reverse a linked list
void reverse(){
    struct node *c, *n, *p1;
    c = header;
    p1 = NULL;
    while(c!=NULL){
        n=c->p;
        c->p=p1;
        p1=c;
        c=n;
    }
    header = p1;
}

// Count number of nodes in linked list without recursion
void no_of_nodes(){
    struct node *t=header;
    int i=0;
    while(t!=NULL){
        i++;
        t=t->p;
    }
    printf("%d", i);
}

// Delete a node having value passed as t
void deleten(int t){
    struct node *temp=header;
    while(temp!=NULL){
            if(temp->p->a == t){
                break;
            }
            else
                temp=temp->p;
    }
    temp->p=temp->p->p;
}

// Sort a linked list
void sort(){
    struct node *ptr,*cpt;
    int temp;
    ptr=header;
    while(ptr->p!=NULL){
        cpt=ptr->p;
        while(cpt!= NULL){
            if(ptr->a > cpt->a){
                temp = ptr->a;
                ptr->a=cpt->a;
                cpt->a=temp;
            }
            cpt=cpt->p;
        }
        ptr=ptr->p;
    }
}

// Count number of nodes using recursion
int count_rec(struct node *h){
    if(h==NULL)
        return 0;
    return(1+count_rec(h->p));
}

// Has a small bug
/*
void alternate(){
    struct node *temp=header;
        while(temp!=NULL){
            printf("->%d",temp->a);
            temp=temp->p->p;
        }
}
*/
