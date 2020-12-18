#include <iostream>
using namespace std;
int binarySearch(int arr[], int l , int r,int num){
    if(r>=l) {
        int mid = (l+r)/2;

        if(arr[mid]==num) return mid;

        if(arr[mid]>num) return binarySearch(arr,l,mid-1,num);

        return binarySearch(arr,mid+1,r,num);
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


    cout<<"\nnum to search for : ";
    int num;
    cin>>num;

    int index = binarySearch(arr ,0, size-1,num);
    if(index!=-1)
        cout <<"founded at : "<<index+1 ;
    else cout<<"not founded.";


    return 0;    return 0;
}
