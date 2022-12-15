#include<iostream>
using namespace std;
class Search {
public:

    int binary_search(int A[], int n, int target) {
        if(n==0)
            return -1;
        int left = 0;
        int right = n-1;
        int middle = 0;
        while(left<=right){
            middle = left+(right-left)/2;
            if(A[middle]==target)
                return middle;
            if(A[middle]>=A[left]){
                if(A[left]<=target&&target<A[middle]){
                    right = middle-1;
                }
                else
                    left = middle+1;
            }
            else{
                if(A[middle]<target&&target<=A[right]){
                    left = middle+1;
                }
                else
                    right = middle-1;
            }
        }
        return -1;
    }
};
int main()
{ Search sc;
    int n,t, middle;
    int res=0;
    cout <<"Enter the size of the array :"<<endl;
    cin>>n;
    int arr[n];
    cout <<"Enter the elements of the array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched :"<<endl;
    cin>>t;
    res=sc.binary_search(arr,n, t);
    if(res!=-1)
    { cout<<"Number found at position :"<<(res+1)<<endl;}
    else{
        cout<<"Number not found "<<endl;
    }
}