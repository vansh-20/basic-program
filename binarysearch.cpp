#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;
    while(s<=e){
        if (arr[mid]==target)
        return mid;
        else if(target>arr[mid])
        s=mid+1;
        else
        e=mid-1;

        mid=s+(e-s)/2;

    }
    return -1;
}
int firstoccurence(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(target>arr[mid])
        s=mid+1;
        else
        e=mid-1;
        mid=s+(e-s)/2;


    }
    return ans;
}
int lastoccurence(int arr[],int n, int target){
    int s=0;
    int e=n-1;
    int  mid=s+ (e-s)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            s=mid+1;
        }
        else if(target>arr[mid])
        s=mid+1;
        else
        e=mid-1;
        mid=s+(e-s)/2;
    }
    return ans;
}

int missingelement(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;
    
    int ans=-1;
    while(s<=e){
        int diff= arr[mid]-mid;
        if (diff==1){
            s=mid+1;
        }
        else {
        ans=mid;
        e=mid-1;
        }

        mid=s+(e-s)/2;
      }

      if(ans+1==0)
      return n+1;

      return ans+1;
     
}
int peakindex(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    
    while(s<e){
        if(arr[mid]<arr[mid+1])
        s=mid+1;
        else
        e=mid;

        mid= s+(e-s)/2;
        
    }
    return s;


}
int main (){
    int arr[]={10,20,90,70,60,50,40};
    int n=7;
    int target = 20;

    int ans= peakindex(arr,n);
    cout<<"Peak Index "<<ans;

    // int ans= missingelement(arr,n);
    // cout<<"Missing element "<<ans;
    // int first= firstoccurence(arr,n,target);
    // int last =lastoccurence(arr,n,target);
    // int total= last-first+1;
    // cout<<"Total Occurence "<<total;

    // if(ans== -1){
    //     cout<<"Element not present";

    // }
    // else 
    // cout<<"elememnt last occurencet at "<< ans << " index";
}