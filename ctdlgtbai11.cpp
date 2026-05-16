//Ho va ten:
//Ma sinh vien:
//Lop:
//De:
/*
Bài 11(ctdlgtbai11.cpp): Cài đặt cấu trúc dữ liệu hàng đợi sử dụng
cấu trúc lưu trữ kế tiếp theo kiểu quay vòng. Sử dụng hàng đợi cho bài toán:
Có một tệp danh sách sinh viên, mỗi sinh viên có thông tin gồm mã sv, họ tên, giới tính, điểm tbc.
Danh sách sinh viên trên tệp đã được sắp xếp theo điểm tbc giảm dần.
Ghi lại tệp sao cho tất cả sinh viên nữ ở đầu danh sách, tất cả sinh viên nam ở cuối danh sách,
điểm tbc vẫn giảm dần trong nhóm nam và nữ.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao N
#define N 20

//Khai bao cau truc Sinh Vien
struct SinhVien
{
    char maSV[10];
    char hoTen[30];
    char gioiTinh[5];
    float diemTBC;
};

void qInsert(SinhVien *Q, int &F, int &R, SinhVien x);
SinhVien qDelete(SinhVien *Q, int &F, int &R);
bool isEmpty(SinhVien *Q, int &F, int &R);

//===Chuong trinh chinh===
int main()
{   
    //Cai dat hang doi
    SinhVien Q[N];
    int F=-1,R=-1;

    cout<<"Chuong trinh sap xep danh sach sinh vien theo gioi tinh su dung hang doi"<<endl;




    cout<<endl;
    return 0;
}
//===Dinh nghia ham===
void qInsert(SinhVien *Q, int &F, int &R, SinhVien x)
{
    //1. Kiem tra hang doi co day hay khong
    if(F==0 && R==N-1 || F==R+1)
    {
        cout<<"Hang doi da day, khong the them phan tu moi"<<endl;
        return;
    }

    //2. Tang R
    if(F==-1)
        F=R=0;
    else if(R==N-1)
        R=0;
    else
        R++;

    //3. Them phan tu moi vao R
    Q[R]=x;
}

SinhVien qDelete(SinhVien *Q, int &F, int &R)
{
    //1. Kiem tra hang doi co rong hay khong
    if(F==-1 && R==-1)
    {
        cout<<"Hang doi rong, khong the lay phan tu"<<endl;
        SinhVien empty={};
        return empty;
    }

   //2. Luu phan tu loai bo
   SinhVien tg = Q[F];

   //3. Tang F
   if(F==-1)
        F=R=0;
    else if(F==N-1)
        F=0;
    else
        F++;

    //4. Tra ve phan tu da lay
    return tg;
}

bool isEmpty(SinhVien *Q, int &F, int &R)
{
    return F==-1;
}
