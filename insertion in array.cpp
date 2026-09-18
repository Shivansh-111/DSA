// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    int arr[10];
    int n, pos, ele;
    
    cout<<"Enter the number of element to insert"<<endl;
    cin>>n;
    //Taking array input
    
    cout<<"Enter the"<<" "<<n<<" "<<"elements for the array"<<endl;
    for(int i=0; i<n; i++){
       cin>>arr[i]; 
    }cout<<endl;
    //Printing before insertion
    
    cout<<"Before insertion"<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
     //Elemnt to insert   
    cout<<" Enter thr element to insert"<<endl;
    cin>>ele;
    //Index where to insert
    
    cout<<"Enter the index where to insert"<<endl;
    cin>>pos;

     
      // Creating space for insertion via displacing next element by 1 place  
    

    for (int i = n; i>=pos; i--){
        arr[i+1]=arr[i];
        
    }
    arr[pos]= ele;
    n++;

    //Printing after insertion
    
    cout<<"After insertion"<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
        
    }

    return 0;
}
