//Recursive Method 

#include <iostream>
using namespace std;

int binarySearch(int arr[], int x, int low, int high) {
  
  while(low < = high) {
    
    int mid = (low  + high)/2;
    if(arr[mid] == x)
       return mid;
    if(arr[mid] < x) 
       return binarySearch(arr, x, mid + 1, high);
    else
       return binarySearch(arr,x,low, mid+1);
  }
  return -1;
}

int main() {
  
  int data = {23, 34,45,56,57};
  int x = 56;
  int n = sizeof(data)/sizeof(data[0]);
  int result = binarySearch(data, x, 0, n-1);
  if(result == -1)
     cout << "Not found" ;
  else
     cout << "Index found at index: " << result;
  return 0;
}
