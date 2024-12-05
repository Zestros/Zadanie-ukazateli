#include <iostream>
using namespace std;

int main()
{  setlocale(LC_ALL, "Russian");
    int* str = new int[1000];
    int* ptr = str;
    for (int i=0;i<1000;i++){
        str[i]=(rand()+i)%100;
    }
    for (int i=0;i<1000;i++){
        for (int j=i;j<999;j++){
            if (*(ptr+i)>*(ptr+j+1)){
                int c =*(ptr+i);
                *(ptr+i)=*(ptr+j+1);
                *(ptr+j+1)=c;
            }
        }
    }
    int* ptr1 = str;
    for (int k=0;k<999;k++){
        if (*(ptr+k)==*(ptr+k+1)){
            continue;
        }
        else{
            *ptr1=*(ptr+k);
            *ptr1++;
        }
    }
    *ptr1=*(ptr+999);
    for (int h=0;h<*ptr1-*ptr+1;h++){
        cout<<str[h]<<" ";
        }
    delete[] str;
    return 0;
}
