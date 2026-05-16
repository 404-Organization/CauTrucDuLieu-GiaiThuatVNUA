//Ho va ten:
//Ma sinh vien:
//Lop:
//De:
/*
Bài 08(ctdlgtbai08.cpp): Cài đặt cấu trúc dữ liệu ngăn xếp sử dụng
cấu trúc lưu trữ kế tiếp với phần tử dữ liệu là ký tự. Sử dụng ngăn xếp chuyển
một số nguyên dương hệ 10 sang hệ 16.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao N
#define N 20

//Khai bao ham
void push(char *S, int &T, char x);
char pop(char *S, int &T);
bool isEmpty(int T);

//===Chuong trinh chinh===
int main()
{
    //Cai dat ngan xep
    char S[N];
    int T=-1,x;

    //Khai bao bien
    int n, du, thuong;

    cout<<"Chuong trinh chuyen doi mot so nguyen duong he 10 sang he 16 su dung ngan xep"<<endl;
    cout<<"Nhap mot so nguyen duong: ";
    cin>>n;

    
    thuong = n;
    while(thuong!=0)
    {
        du=thuong%16;

        if(du<10) x=du+'0';
        else x=du-10+'A';

        push(S,T,x);
        thuong=thuong/16;
    }

    //Chuyen tu hẹ 10 sang he 16
    while(!isEmpty(T)) cout<<pop(S,T);

    cout<<endl;
    return 0;
}
//===Dinh nghia ham===
void push(char *S, int &T, char x)
{   
    //1. Kiem tra ngan xep co day hay khong
    if(T==N-1)
    {
        cout<<"Ngan xep da day"<<endl;
        return;
    }

    //2. Them x vao ngan xep
    T++;

    //3. Gan x vao dinh ngan xep
    S[T]=x;
}

char pop(char *S, int &T)
{
    //1. Kiem tra ngan xep co rong hay khong
    if(T==-1)
    {
        cout<<"Ngan xep rong"<<endl;
        return 1;
    }

    //2. Lay phan tu o dinh ngan xep
    char x = S[T];   // lấy đỉnh trước
    
    //3. Xoa phan tu o dinh ngan xep
    T--; 

    //4. Tra ve phan tu da lay
    return x;
}

bool isEmpty(int T)
{
    return T==-1;
}