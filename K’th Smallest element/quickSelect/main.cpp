#include <iostream>
using namespace std;

int partition(int arr[] , int l , int r ){
    int pivot = arr[r];
    int i=l-1;
    for (int j=l; j<r ; j++ ){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;

}

int quickSelect(int arr[] , int l , int r,int k){
    if (k > 0 && k <= r - l + 1) {

        int pivotPosition = partition(arr, l, r);

        if (pivotPosition-l == k-1) return arr[pivotPosition];

        if (pivotPosition-l > k-1) return kthSmallest(arr, l, pivotPosition - 1, k);

      return kthSmallest(arr, pivotPosition + 1, r, k-pivotPosition+l-1);
    }
    return -1;

}

int main() {
    cout<<"what's the size of the array ? ";
    int size;
    cin >> size;
    int arr[size];
    cout<<"enter them  : ";


    for(int i = 0 ; i < size ; i++)
        cin >> arr[i];


    for(int i =0 ; i <size ; i++)
        cout << arr[i] << " ";


    cout<<"\nK value : ";
    int k;
    cin>>k;

    int num = kthSmallest(arr ,0, size-1,k);
    if(num!=-1)
        cout <<"Kth smallest num is : "<<num ;
    else cout<<"K value is not in the range.";


    return 0;
}
