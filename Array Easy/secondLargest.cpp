#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of your array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // int largest = arr[0];
    // int Slargest = -1;
    // for(int i=0; i<n; i++){
    //     if(arr[i]>largest) {
    //         largest = arr[i];
    //     }
    // }

    // for(int i=0; i<n; i++){
    //     if(arr[i]>=Slargest && arr[i] != largest) {
    //         Slargest = arr[i];
    //     }
    // }

    int largest = arr[0];
    int Slargest = -1;
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            Slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && Slargest < arr[i]){
            Slargest = arr[i];
        }
    }
    cout << "Second largest element in your array is: " << Slargest;
    return 0;
}