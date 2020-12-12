#include<iostream>
using namespace std;
const int MAX=100;
void nhapMang(int a[MAX], int n) {
    for(int i=0; i< n; i++ ) {
        cout << "nhap phan tu thu: " << i << endl; 
        cin >> a[i];
    }
}
float TinhTrungBinhTongMangChia3(int a[MAX], int n) {
     float tong = 0;
     float tb;
     int dem = 0;
     for(int i=0;i<n;i++) {
         if(a[i] % 3 == 0) {
            tong += a[i];
            dem++;
         }
     }
     return dem > 0 ? tong/dem: 0; // if dem =0 return 0 else return tong/dem

 }
int GiaTriLonNhat(int a[MAX], int n) {
    int max=a[0];
    for(int i=0; i<n ;i++) {
        if(a[i]>max) {
            max = a[i];
        }
    }
    return max;
}
int GiaTriNhoNhat(int a[MAX], int n) {
    int min=a[0];
    for(int i=0; i<n ;i++) {
        if(a[i] < min) {
            min = a[i];
        }
    }
    return min;
}
void hoanVi(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void sapXepGiamDan(a[MAX], int n){
int i, int j;
for (i = 1; i < n-1; i++ ) {
    for (j = 1; j < n; j++ ) {
        if (a[i] < a[j]) {
            hoanVi(a[i],a[j]);
        }
        
        }
    }
}
