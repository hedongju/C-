#include<iostream>
using namespace std;

template <typename T>
void OutPutArray(T *array,const int count){
    for(int i = 0;i < count;i++ ){
        cout << array[i] << " ";
    }
        cout << endl;
}

int main(){
    const int Acount = 8,Bcount = 8,Ccount = 16;//±ØÐëÓÃconst ÐÞÊÎ
    int A[Acount] = {1,2,3,4,5,6,7,8};
    float B[Bcount] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8};
    char C[Ccount] = "welcome to you!";

    cout << "A array is :" << endl;
    OutPutArray(A,Acount);
    cout << "B array is :" << endl;
    OutPutArray(B,Bcount);
    cout << "C array is :" << endl;
    OutPutArray(C,Ccount);
    return 0;
}
