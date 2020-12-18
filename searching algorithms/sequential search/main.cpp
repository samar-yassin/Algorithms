#include <iostream>
using namespace std;
int sequentialSearch(int arr[], int l , int r,int num){
    if(r<l)return -1;

    if(arr[r]==num) return r;

    if(arr[l]==num) return l;

    return sequentialSearch(arr,l+1,r-1,num);


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

    int index = sequentialSearch(arr ,0, size-1,num);
    if(index!=-1)
        cout <<"founded at : "<<index+1 ;
    else cout<<"not founded.";


    return 0;    return 0;
}
