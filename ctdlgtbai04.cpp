//Ho va ten:
//Ma sinh vien:
//Lop:
//De:
/*
Bài 04(ctdlgtbai04.cpp): Cho ma trận số nguyên kích thước mxn chứa trong tệp văn                                                                                                              bản 'matran.txt'.
Đọc ma trận từ tệp vào mảng động. Đưa ma trận từ mảng ra màn hình theo định dạng                                                                                                              hàng, cột.
Tính tổng và trung bình cộng các phần tử của ma trận.
*/
#include<iostream>
#include<stdio.h>
#include<fstream>

using namespace std;

//Khai bao ham
void DuaRaMaTran(int*V, int m, int n);
int tinhTong(int*V, int m, int n);
float tinhTrungBinhCong(int*V, int m, int n);

//===Chuong trinh chinh===
int main()
{   
    //Khai bao bien
    int m,n;
    int *V;

    //Khai bao tep van ban
    ifstream fin("matran.txt");

    cout<<"Chuong trinh doc ma tran so nguyen kich thuoc mxn tu tep van ban 'matran.txt', dua ma tran ra man hinh:"<<endl;

    //Doc kich thuoc ma tran
    fin>>m>>n;

    //Cap phat dong cho ma tran
    V=new int[m*n];

    //Doc ma tran tu tep van ban
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            fin>>V[(i*n-1)+j];

    //Dua ra ma tran 
    cout<<"Ma tran: "<<endl;
    DuaRaMaTran(V,m,n);

    //Tinh tong
    cout<<"Tong cac phan tu cua ma tran la: "<<tinhTong(V,m,n)<<endl;

    //Tinh trung binh cong
    cout<<"Trung binh cong cac phan tu cua ma tran la: "<<tinhTrungBinhCong(V,m,n)<<endl;

    cout<<endl;
    return 0;
}
//===Dinh nghia ham===
void DuaRaMaTran(int*V, int m, int n)
{
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++) cout<<V[(i*n-1)+j]<<" ";
        cout<<endl;
    }
}

int tinhTong(int*V, int m, int n)
{
    //Khai bao bien
    int tong=0;
    
    for(int i=1; i<=m; i++)
     for(int j=1; j<=n; j++) tong+=V[(i*n-1)+j];

    return tong;
}


float tinhTrungBinhCong(int*V, int m, int n)
{
    //Khai bao bien
    int tong=0;
    
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            tong+=V[(i*n-1)+j];

    return (float)tong/(m*n);
}   