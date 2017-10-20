
void create(struct term **h,int cons, int exp){
    struct term *temp=h,*q,*t,*hh=h;
    t=(struct term *)malloc(sizeof(struct term));
    t->c = cons;
    t->e = exp;
    if(temp==NULL){
        temp=t;
        t->p=NULL;
        printf("\nf1 created");
    }
    else{

        if(t->e > temp->e){
            t->p=h;
            h=t;
            printf("\nelse part1");
        }
        else if(t->e < temp->e){
            while(temp->p!=NULL){
                if(t->e < temp->e)
                    q=temp;
                temp=temp->p;
            }
            printf("\nelse part2");
            t->p=q->p;
            q->p=t;
        }
        else{
            while(temp->p!=NULL){
                if(t->e == temp->e)
                    temp=temp->p;
            }
            printf("\nelse part3");
            t->p=temp->p;
            temp->p=t;
        }
    }
}

void display(struct term **h){
    struct term *th=h;
    printf("err1");
    while(th!=NULL){
            printf("err2");
        if(th->e != 0){
            printf("%dx^%d+",th->c,th->e);

        }
        else
            printf("%d",th->c);
        th=th->p;
    }
}
