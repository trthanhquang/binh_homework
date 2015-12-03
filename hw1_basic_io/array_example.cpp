#include <stdio.h>

int main(){
    //Read how many element in the array
    int n;
    scanf("%d", &n);

    //Create an array of size N
    int input_array[n];

    //Read from user input and save to each element of the array
    for(int i=0; i<n; i++){
        int x;
        scanf("%d", &x);
        input_array[i]=x;
        //Shortcut:
        //scanf("%d", &input_array[i]);
    }

    //Output the array saved
    printf("Input array: ");
    for(int i=0; i<n; i++){
        printf("%d ",input_array[i]);
    }

    return 0;
}
