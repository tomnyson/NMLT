#include "ham.h"
int main() {
    string ten="xin chao cac ban";
    string lop="LT63";
    string copy;
    // string noichuoi = ten + " " + lop;
    string noichuoi = ten.append(lop);
    int sizeChuoi = noichuoi.size();
    cout << "chuoi can ghep: " << noichuoi << endl;
    cout << "kich thuoc can ghep: " << sizeChuoi << endl;
    cout << "vi tri thu 0: " << ten[0] << endl;
    ten.reserve(ten.size());
    cout << "dao nguoc chuoi" << ten << endl;
    int dem=0;
    for(int i=0;i < ten.size(); i++) {
        if(ten[i]== 'a') {
            dem++;
        }
       
    }
    cout << "tim ki tu a trong chuoi ten "<< ten.find('l') << endl;
     cout << "tim ki tu a trong chuoi ten "<< string::npos << endl;
    //  cout << "dem: " << dem << endl;
    // char chuoi[10];
    // cout << "so luong chuoi" << endl;
    // gets(chuoi);
    // cout << "chuoi: " << chuoi << endl;
//    demNguyenAmPhuAm();
//    login("admin", "12345");
// sapXepChuoiTheoChuaCai();
    return 0;
}