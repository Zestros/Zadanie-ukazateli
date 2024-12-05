#include <iostream>
using namespace std;
int main()
{  setlocale(LC_ALL, "Russian");
    char* str = new char[80];
    cin.getline(str,81);
    char* ptr = str;
    int counter = 0;

    for (ptr;*ptr!='\0';ptr++){
    if ((*ptr=='('))
        counter++;
    if ((counter==1) && (*ptr==')'))
        counter--;
    if ((counter==2) && (*ptr=='('))
        *ptr='[';
    if ((counter==2) && (*ptr==')')){
        *ptr=']';
        counter--;}
    if ((counter>2) && (*ptr=='('))
        *ptr='{';
    if ((counter>2) && (*ptr==')')){
        *ptr='}';
        counter--;}

    }
    cout<<str;
delete[] str;
    return 0;
}
