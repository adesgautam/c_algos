// Author: Adesh Gautam
// Queue using Linked List

// Structure of the Queue
// a = info part
// p = link part
struct queue{
    int a;
    struct stack *p;
};

// Front and Rear to hold the addresses
struct queue *front=NULL, *rear=NULL;

// Enqueue(Insert) value t into the Queue from Rear
void enqueue(int t){
    struct queue *ptr=front,*temp;
    temp = (struct queue *) malloc(sizeof(struct queue));
    temp->a=t;
    temp->p=NULL;
    if(rear==NULL){
        front=rear=temp;
    }
    else{
        rear->p=temp;
        rear=temp;
    }
}

// Dequeue(delete) the last element from the Queue
void dequeue(){
    if(rear==NULL){
        printf("Empty...");
        return;
    }
    front=front->p;
}

// Display all the elements in the Queue
void show(){
    struct queue *ptr=front;
    while(ptr!=NULL){
        printf("--%d",ptr->a);
        ptr=ptr->p;
    }
}
