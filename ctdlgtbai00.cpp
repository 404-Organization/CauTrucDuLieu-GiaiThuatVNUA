//Ho va ten:
//Ma sinh vien:
//Lop:
//De:
/*
Bài 00(ctdlgtbai00.cpp): Tính diện tích và chu vi hình tam giác
có 3 cạnh a,b,c đọc vào từ tệp văn bản 'tamgiac.txt'. Đưa kết quả ra màn hình,
đồng thời ghi ra tệp văn bản 'kq-ctdlgtbai00.txt'.
*/
#include<iostream>
#include<stdio.h>
#include<fstream>
#include<math.h>

using namespace std;

//===Chuong trinh chinh===
int main()
{
    //Khai bao bien
    float a,b,c;
    // Doc du lieu tu tep
    ifstream fin("tamgiac.txt");

    cout<<"Chuong trinh tinh dien tich va chu vi hinh tam giac co 3 canh a,b,c doc tu tep van ban 'tamgiac.txt'"<<endl  ;

    fin>>a>>b>>c;
    cout<<"3 canh cua tam giac la: a="<<a<<", b="<<b<<", c="<<c<<endl;

    //Kiem tra
    if(a+b>c && a+c>b && b+c>a)
    {
        //Tinh chu vi
        float P=a+b+c;
        
        //Tinh dien tich
        float p=P/2;
        float S=sqrt(p*(p-a)*(p-b)*(p-c));

        //Dua ra ket qua
        cout<<"Chu vi tam giac la: P="<<P<<endl;
        cout<<"Dien tich tam giac la: S="<<S<<endl;
        
        //Ghi ket qua ra tep van ban
        ofstream fout("kq-ctdlgtbai00.txt");
        fout<<"3 canh cua tam giac la: a="<<a<<", b="<<b<<", c="<<c<<endl;
        fout<<"Chu vi tam giac la: P="<<P<<endl;
        fout<<"Dien tich tam giac la: S="<<S<<endl;
    }
    else
    {
        cout<<"3 canh a,b,c khong phai la 3 canh cua mot hinh tam giac"<<endl;
    }

    cout<<endl;
    return 0;
}
//===Dinh nghia ham===
