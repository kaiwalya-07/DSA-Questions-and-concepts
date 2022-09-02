#include<iostream>
using namespace std;

    
    
    long long int binsearch(int n){
        int s=0;
        int e=n;
        long long int mid=s+(e-s)/2;
        
        long long int ans=-1 ;
        while(s<=e){
            long long int sqr=mid*mid;
                
                if(sqr==n){
                    return mid;
                }
                if(sqr<n){
                    ans=mid;
                    s=mid+1;
                }
                else{
                   e=mid-1 ;
                }
             mid=s+(e-s)/2;
        }
        return ans; 
        
    }


    double More_Precision(int n, int precision, int tempSol){
      double factor=1;
      double ans = tempSol;

      for(int i=0; i<precision;i++){
        factor=factor/10;
        for(double j=0;j*j<n;j=j+factor){
            ans=j;
        }
      }
      return ans;
    }

    int main(){


        return 0;
    }