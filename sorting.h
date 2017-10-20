// Author: Adesh Gautam

int count;

void show(int *ar){
    int i;
    for(i=0;i<8;i++){
        printf("%d ",ar[i]);
    }
    printf("\n");
}

void bubble_sort(int *ar){
    int i,j,temp;

    for(i=0;i<8;i++){
        for(j=0;j<8;j++){

            if(ar[i]<ar[j]){
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
                count++;
            }
        }
        show(ar);
    }
}

    void selectionSort(int *a)
    {
        int i, j, min, temp;
        for(i=0; i < 8;i++)
        {
            min = i;   //setting min as i
            for(j=i+1; j < 8; j++)
            {
              if(a[j] < a[min])   //if element at j is less than element at min position
              {
               min = j;    //then set min as j
              }
            }
           temp = a[i];
           a[i] = a[min];
           a[min] = temp;
          }
    }
                                             //    j    i
void insertion_sort(int *ar){                //{5,11,12,2,0,6,10,6};
    int i,j,k,temp;

    for(i=0;i<8;i++){
        temp=ar[i];
        for(j=i-1;j>=0 && temp<ar[j];j--){
            ar[j+1]=ar[j];
        }
        ar[j+1]=temp;
        //show(ar);
    }
}


void shell_sort(int *ar){

}
