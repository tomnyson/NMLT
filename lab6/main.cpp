#include "ham.h"
int main() {
    int a[MAX];
    int n;
    cout << "nhap kich thuoc cua mang: " << endl;
    do {
        cin >> n;
    } while(n<0 || n > 100);
    // goi ham nhap mang
    nhapMang(a,n);
    // goi ham xuat trung binh tong cac so chia het cho 3
    float tbt = TinhTrungBinhTongMangChia3(a,n);
    cout << "tbd la: " << tbt << endl;
    int max = GiaTriLonNhat(a, n);
    int min = GiaTriNhoNhat(a, n);
    cout << "max: " << max << "min: " << min;
    return 0;
}