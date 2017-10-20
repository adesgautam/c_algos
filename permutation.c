// Calculate permutation of an array

#include<stdio.h>
#include<conio.h>
#define SWAP(x,y,t) ((t)=(x), (x)=(y), (y)=(t))

void perm(char *, int,int);

void main(){
    int j,n=3;
    char list[]={'a','b','c','d'};
    perm(list,0,3);

}

void perm(char *list, int i, int n){
    int j, temp;
    if(i==n){
        for(j=0;j<=n;j++)
            printf("%c",list[j]);
        printf("\n");
    }
    else{
        for(j=i;j<=n;j++){
            SWAP(list[i],list[j],temp);
            perm(list,i+1,n);
            SWAP(list[i],list[j],temp);
        }
    }
}

/*
void perm(char *list,int i, int n){
    int j,k,temp;
    for(j=0;j<=n;j++){
        for(k=j;k<=n;k++){
            //SWAP(list[j],list[k],temp);
            printf("%c",list[k]);
            //SWAP(list[j],list[k],temp);
        }
        printf("\n");
    }
}
*/
