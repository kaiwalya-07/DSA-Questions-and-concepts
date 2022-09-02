#include<iostream>
using namespace std;

int largestSum(int arr[],int n){
    int pref[100]={0};
    pref[0]=arr[0];

    for(int i=1; i<n;i++){
        pref[i]=pref[i-1]+arr[i];
    }

    int larg_sum=0;
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int subarSum= i>0 ? pref[j]-pref[i-1]:pref[j];

            larg_sum=max(larg_sum,subarSum);
        }
       
    }
     return larg_sum;
}




int main(){

  int arr[]={-2,3,4,-1,5,-12,6,1,3};
  int n = sizeof(arr)/sizeof(int);

  cout<<largestSum(arr,n)<<endl;
    return 0;

}
