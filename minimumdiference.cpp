#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
int findelement(int a[],int target){
    int start=0,end = 7,ans=0;
    while (start <= end) {
            int mid = (start + end) / 2;

            if (target == a[mid]) {
                return a[mid];
            } else if (target < a[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }if ((a[start] - target) < (target - a[end]))
            return a[start];
    }  else return a[end];
}
int main(){
    array<int,7> ar1= {1,2,3,4,5,6};
    int target;
    cin>>target;
    cout<<findelement(ar1,target);


    return 0;
}