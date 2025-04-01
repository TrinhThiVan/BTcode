// câu 1
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int *a=new int[n];
for(int i=0; i<n; i++){
    cin>>a[i];
}
int k;
cin>>k;
for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        if(a[i]+a[j]==k){
            cout<<a[i]<<" "<<a[j];
        }
    }
    cout<<endl;
}
delete[] a;
return 0;
}
// Câu 3
void bubbleSort(int a[], n)
{
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
}
// Câu 4
bool binarySearch(int a[], int low, int high, int key) {
    if (low > high)
        return false;
    int mid = low + (high - low) / 2;

    if (a[mid] == key)
        return true;
    else if (a[mid] < key)
        return binarySearch(a, mid + 1, high, key);
    else
        return binarySearch(a, low, mid - 1, key);
}


