//                                                              vòng lặp while và do while
// cấu trúc vòng lặp while (điều kiện){ code và điều kiện lặp của lệnh while  } thấy thì giống vs if nhưng nó khác á nha 
// nó con thêm cái điều kiện lặp của lệnh while nữa 
// có thể bỏ qua vòng lặp while bằng dòng lệnh break  nếu while mà nó gặp dòng lệnh break thì nó sẽ dừng vòng lă
// nếu gặp lệnh continue thì nó sẽ ko thực hiện câu lệnh code mà nó sẽ thực hiện lại vòng lặp while 



// ví dụ 1 tính tổng các số hạng 1+2+3+4+5+...+n bằng lệnh  while
// n là số số hạng 
#include <iostream>
using namespace std;
#include <stdio.h>
#include <math.h> 
int main () { 
    cout << "                                                 Bài 1  "<< "\n" << endl;
    int i = 1;
    int s = 0;
    int n;
    cout <<  "Mời bạn nhập giá trị n: ";
    cin >> n;
    while ( i <= n  ) { s = s + i; i++; }
    cout <<  "Tổng là "<<s<<"\n"; 

    cout << "                                                 Bài   "<< "2" << endl;
    // Ví dụ 2: tính tổng các số 2 + 4 + 6 + 8 +...+ 2n (n) là số số hạng tính bằng lệnh while  
    
    int a = 1;
    int b = 0;
    int c;
    cout <<  "Mời bạn nhập giá trị n: ";
    cin >> c;
    while ( a <= 2 * c  ) { if ( a % 2 == 0) { b = b + a;  } a++; }
    cout <<  "Tổng là "<<b<<"\n"; 
    
    
    cout << "                                                 Bài 3   "<< "\n" << endl;
// Ví dụ 3: cho số 12345678 dùng vòng lặp while để đếm xem có bao nhiêu số hạng của dãy số trên 
    int aa = 12345678 ;
    cout << "Số đề bài cho là: 12345678; " << "\n";
    int bb = 0;// biến để đếm xem có bao nhiêu số hạng  

    while ( aa != 0 ) { aa = aa / 10 ; bb++;  }
     cout <<"Số các số hạng là:  "<< bb <<"\n";



    cout << "                                                 Bài 4   "<< "\n" << endl;
// Ví dụ 4: cho số như trên dùng vòng lặp while để đếm xem có bao nhiêu số chẵn 
 cout << "Số đề bài cho là: 12345678; " << "\n";
    

    }
