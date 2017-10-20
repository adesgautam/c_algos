// Author: Adesh Gautam
// Stack using Linked List

// Structure of the stack
struct stack{
    int a;
    struct stack *p;
};

struct stack *top=NULL, *bottom=NULL;

// Push(Enter) a value in the Stack
void push(int t){
    struct stack *ptr=top,*temp;
    temp = (struct stack *) malloc(sizeof(struct stack));
    temp->a=t;
    temp->p=NULL;
    if(top==NULL){
        printf("Empty stack !");
        bottom=top=temp;
    }
    else{
        temp->p=top;
        top=temp;
    }
}

// Pop(Delete) a value t from the Stack
void pop(int t){
    struct stack *temp=top;
    while(temp!=NULL){
            if(temp->p->a == t){
                break;
            }
            else
                temp=temp->p;
    }
    temp->p=temp->p->p;
}

// Display all the elements in the Stack
void display(){
    struct stack *ptr=top;
    while(ptr!=NULL){
        printf("%d-",ptr->a);
        ptr=ptr->p;
    }
}
