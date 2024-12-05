#include <iostream>
using namespace std;

int main()
{  setlocale(LC_ALL, "Russian");
    int* str = new int[1000];
    int rad = 555;
    int* ptr = str;

    for (int i=0;i<1000;i++){
        if (i<rad)
            str[i]=i+1;
        else
            str[i]=0;
    }
    int R;
    int L;
    R=999;
    L=-1;
    int counter=0;
    while (L+1<R){
        int mid = (R+L)/2;
        counter++;
        if (*(ptr+mid)==0){
            R=mid;
        }
        else
            L=mid;
    }
    cout<<R<<" количество итераций "<<counter;
    delete[] str;
    return 0;
}
