#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[1001], R[1001];
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] >= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
void mergeSort(int arr[],int l,int r){
    if(l>=r) return;
    int m =l+ (r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}
 

int main() {
    int n, k, a[1001];
    cin >> n >> k;
    for(int i = 0; i < n; i ++) 
        cin >> a[i];
    mergeSort(a, 0, n - 1);
    
    int c = 0;
    for (int i = k; i < n; i++) 
        if(a[i] == a[k - 1])
           c++;
    cout << k + c << endl;
    return 0;
}