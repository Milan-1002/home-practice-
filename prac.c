#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define ARR_SIZE 10

// function to printing an array using pointer
void printArray(int *arr, int size){
    for(int i = 0; i< size; i++){
        printf("%d ", *(arr+i));
    }
}

// taking input for the array using pointer
void inputArry(int *arr, int size){
    for(int i = 0; i<size; i++){
        scanf("%d",arr+i);
    }
}


// function to do product if the element in the array is -ve and sum if the element is +ve using pointer
void sumProduct(int *a, int size){
    int sum = 0;
    int prod = 1;

    int *ptr = a;

    for(int i = 0; i<10; i++){
        if(*(ptr+i) < 0 ){
            prod = prod * *(ptr + i);
        }
        else{
            sum = sum + *(ptr+i);
        }     
}
printf("The product is: %d\n",prod);
printf("the sum is: %d\n",sum);
}

//function to reverse an array using pointer
void reverseArray(int *a, int size){
    int *lastElement = a + (size - 1);
    for(int i = 0; i < size; i++){
        printf("%d ",*(lastElement-i));
    }


}

int main(){
    int a[ARR_SIZE];
    int size;
    printf("Enter the size of an array\n");
    scanf("%d",&size);

    inputArry(a,size);
    printArray(a,size);
    printf("\n");
  //  sumProduct(a,size);
    reverseArray(a,size);
    

}