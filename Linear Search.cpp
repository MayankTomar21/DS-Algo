#include <iostream>
using namespace std;

int search(int arr[], int n, int x) {
    for(int i =0; i<n; i++) {
        if(arr[i] == x)
         return i;
         
    } 
    return -1;
}

    int main() {
        int arr[] = {2,3,42,33,342};
        int n = sizeof(arr)/sizeof(arr[0]);
        int x = 33;
        cout << x << " is present at index: " << search(arr,n,x);
        getchar();
        return 0;
    }
