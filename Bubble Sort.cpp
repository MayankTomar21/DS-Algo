#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for(int step = 0; step<size; step++) {

        for(int i =0; i<size-step; i++) {
            
            if(arr[i] > arr[i+1]) {// > for ascending, < for descending order
              int temp = arr[i];
              arr[i] = arr[i+1];
              arr[i+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for(int i =0; i<size; i++) {
        cout << arr[i] << " ";
    } cout << "\n";
}

int main() {
    int data[] = {2,32,45,564};
    int size = sizeof(data)/sizeof(data[0]);

    bubbleSort(data,size);
    cout << "Sorted Array In Ascending order: ";
    printArray(data,size);
}
