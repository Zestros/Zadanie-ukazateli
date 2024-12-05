#include <iostream>
using namespace std;
int main()
{  setlocale(LC_ALL, "Russian");
    char* str = new char[80];
    cin.getline(str,81);
    char* ptr = str;
    int Num[10]={0};
    int n;

    for (ptr; *ptr != '\0'; ptr++) {
    n = *ptr - '0';
    if (n > 9 || n < 0)
    continue;
    Num[n]++;}

    int maxCount = 0;
    int result = -1;

    for (int i = 0; i < 10; i++) {
    if (Num[i] > maxCount) {
      maxCount = Num[i];
      result = i;
    }
    }
    if (result==-1){
        cout<<"Нет цифр";
    }
    else
    cout<<"Чаще всего встречалась цифра: "<<result<<" "<<Num[result]<<" раз";
	
delete[] str;
    return 0;
}
