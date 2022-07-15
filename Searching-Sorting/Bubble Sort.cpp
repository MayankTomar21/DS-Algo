/*************TIME COMPLEXITY == BEST-O(n), Worst/Average - O(n^2) ****************************//
    
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

//************************************************************OPTIMIZED SOLUTION*****************************************************************************

/* this code, all comparisons are made even if array is already Sorted = this increases execution time
Optimized Bubble Sort:  To Solve this, extra variable swapped is used - in which if there is no swapping needed, the value of swapped variable will be false

Optimized Code: 

// Optimized bubble sort in C++ */

#include <iostream>
using namespace std;

// perform bubble sort
void bubbleSort(int array[], int size) {
    
  // loop to access each array element
  for (int step = 0; step < (size-1); ++step) {
      
    // check if swapping occurs
    int swapped = 0;
    
    // loop to compare two elements
    for (int i = 0; i < (size-step-1); ++i) {
        
      // compare two array elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {

        // swapping occurs if elements
        // are not in intended order 
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        
        swapped = 1;
      }
    }

    // no swapping means the array is already sorted
    // so no need of further comparison
    if (swapped == 0)
      break;
  }
}

// print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int data[] = {-2, 45, 0, 11, -9};
  
  // find the array's length
  int size = sizeof(data) / sizeof(data[0]);
  
  bubbleSort(data, size);
  
  cout << "Sorted Array in Ascending Order:\n";
  printArray(data, size);
}
