#include<iostream>
using namespace std;

int First( int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int mid= s+ (e-s)/2;
    int ans=-1;
    
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;

        }
        else if(key>arr[mid]){
            s=mid+1;
        }

         else if(key<arr[mid]){
            e=mid-1;
        }
       mid=s + (e-s)/2 ;

    }
    return ans;

}

int Last( int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int mid= s+ (e-s)/2;
    int ans=-1;
    
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;

        }
        else if(key>arr[mid]){
            s=mid+1;
        }

         else if(key<arr[mid]){
            e=mid-1;
        }
       mid=s + (e-s)/2 ;

    }
    return ans;

}



int main(){



    return 0;

}