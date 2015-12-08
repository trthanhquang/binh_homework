#include <stdio.h>

int main(){
    //Read how many element in the array
    int n;
    scanf("%d", &n);

    //Create an array of size N
    int input_array[n];

    //Read from user input and save to each element of the array
    for(int i=0; i<n; i++){
        scanf("%d", &input_array[i]);
    }

    int max_value = input_array[0];
    int min_value = input_array[0];
    for(int i=1; i<n; i++){
        if(input_array[i]>max_value){
            max_value=input_array[i];
        }
        if(input_array[i]<min_value){
            min_value=input_array[i];
        }
    }

    printf("%d %d", min_value, max_value);
    return 0;
}
