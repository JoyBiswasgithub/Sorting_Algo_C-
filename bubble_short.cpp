#include<iostream>
using namespace std;


int bubble_short(int arr[], int size){
    for (int i=0; i<size; i++)
    {
        for(int j=0; j<size-i; j++){
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i=0; i<size; i++){
        cout <<arr[i] <<endl;
    }
}

int main(){
    int arr[5] = {3,6,1,9,0};
    bubble_short(arr, 5);
}