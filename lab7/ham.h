#include <iostream>
#include <string>
using namespace std;
const int MAX = 100;
const string USERNAME = "admin";
const string PASSWORD = "123456";
void demNguyenAmPhuAm()
{
   string chuoi;
   cout << "xin moi nhap do dai chuoi" << endl;
   int i = 0;
   int n = 0;
   int p = 0;
   getline(cin, chuoi);
   for (i = 0; i < chuoi.size(); i++)
   {
      if (
          chuoi[i] == 'a' ||
          chuoi[i] == 'e' ||
          chuoi[i] == 'i' ||
          chuoi[i] == 'o' ||
          chuoi[i] == 'u')
      {
         n++;
      }
      else
      {
         p++;
      }
   }
   cout << "chuoi" << chuoi << "co chua so nguyen am: " << n << endl;
   cout << "chuoi" << chuoi << "co chua so phu am: " << p << endl;
   return;
}

void login(string username, string password)
{
   if (username == USERNAME && password == PASSWORD)
   {
      cout << "login thanh cong" << endl;
   }
   else
   {
      cout << "login that bai" << endl;
   }
}
void sapXepChuoiTheoChuaCai()
{
   char s[MAX][20];
   char t[20];
   int i, j;
   int size;
   cout << "so chuon can nhap: " << endl;
   cin >> size;
   cout << "\nNhap 4 chuoi bat ky:" << endl;
   for (i = 0; i < size; i++)
   {
      cin >> s[i];
   }
   // sap xep chuoi
   for (i = 1; i < size; i++)
   {
      for (j = 1; j < size; j++)
      {
         if (strcmp(s[j - 1], s[j]) > 0)
         {
            strcpy(t, s[j - 1]);
            strcpy(s[j - 1], s[j]);
            strcpy(s[j], t);
         }
      }
   }

   cout << "Sap xep thu tu cua cac chuoi:" << endl;
   for (i = 0; i < size; i++)
   {
      cout << s[i] << endl;
   }
   return;
}