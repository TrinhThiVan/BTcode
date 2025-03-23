#include<iostream>
using namespace std;
// Câu a: Đảo xâu
    int strln(char a[])
{
    int length = 0;
    const char* p = a; //Khởi tạo con trỏ p tới đầu chuỗi

    while(*p != '\0')
    {
        length++;
        p++;
    }
    return length;
}
void reverse(char a[])
{
    int n= strln(a);
    for(int i=0; i<n/2; i++){
        char tmp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=tmp;
    }
}
//Cau b: Xóa kí tự
void delete_char(char a[], char c)
{
    int n= strln(a);
    for(int i=0; i<n; i++){
        if(a[i]!=c) cout<<a[i];
    }
}
// cau c: Độn phải
void pad_right(char a[], int n)
{
    int len= strln(a);
        if(len>=n) return;
        else{
            for(int i=len; i<n; i++){
              a[i]=' ';
            }
            a[n]='\0';
    }
}
// cau d: Độn trái
void pad_left(char a[], int n)
{
    int len= strln(a);
        if(len>=n) return;
        else{
            int space=n-len;
            for(int i= len-1; i>=0; i--){
                a[i+space]=a[i];
            }
            for(int i=0; i<space; i++){
                a[i]=' ';
            }
            a[n]='\0';
    }
}
// cau e: cat xau
void truncate(char a[], int n)
{
    int len= strln(a);
    if(len<=n) return;
    else{
        a[n]='\0';
        }
}
// cau f
bool is_palindrome(char a[])
{
    int n=strln(a);
    for(int i=0; i<n/2; i++){
        if(a[i]!=a[n-i-1]) return false;
    }
    return true;
}
// cau g: loc trai
void trim_left(char a[]) {
    int len = strln(a);
     char *arr = new char[len + 1]; // Tạo mảng tạm để lưu chuỗi
    int dem= 0;
    bool leadingSpaces = true; // Biến để kiểm tra khoảng trắng đầu chuỗi

    for (int i = 0; i < len; i++) {
        if (leadingSpaces && a[i] == ' ') {
            continue; // Bỏ qua các ký tự trắng đầu chuỗi
        }
        leadingSpaces = false; // Đã gặp ký tự không phải khoảng trắng
        arr[dem++] = a[i];
    }

    arr[dem] = '\0'; // Đặt ký tự kết thúc chuỗi
    for(int i=0; i<len; i++){
        cout<<arr[i];
    }
    //cout<<endl;
    delete[] arr;
}
// cau h; loc phai
void trim_right(char a[])
{
    int len=strln(a);
    while(len-1>=0 && a[len-1]==' '){
        (len-1)--;
    }
    a[len+1]='\0';
    for(int i=0; i<len; i++){
        cout<<a[i];
    }
}

int main()
{
    char a[] = "abcdba";
   reverse(a);
   cout<<a<<endl;
   delete_char(a,'a');
    pad_right(a,9);
       cout<<a<<endl;
    pad_left(a,9);
       cout<<a<<endl;
    truncate(a,3);
       cout<<a<<endl;
    cout<<is_palindrome("abba")<<endl;
    trim_left("   abc");
    trim_right("abcd   ");
}
