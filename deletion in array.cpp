// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

 

int main() {
    int n;
    int sz;
    int Removed;
    int pos;
    cout<< "Enter the size of array\n";
        cin>>sz;
    cout<< "Enter the number of element to be inserted of array\n";
    
        cin>>n;
    if (n>sz){
        cout<<" Number of element must be less than size"<<endl;
        return -1;
    }
     int arr[sz];
    
    

    cout<<"Enter the " <<" " <<n<<" "<<"elements of array\n";
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    //printing before deletion
    cout<<"Before deletion\n";
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    cout<<"Enter the index at which to delete\n";
        cin>>pos;
    
    //Deletion
      Removed= arr[pos];
    
    for (int i = pos; i<n; i++){
        arr[i]=arr[i+1];
        
    }
    n--;
   //Printing After deletion
    cout<<"After Deletion\n";
    for (int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    

    return 0;
}