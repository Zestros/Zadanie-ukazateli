#include <iostream>
using namespace std;
int main()
{  setlocale(LC_ALL, "Russian");
    char* str = new char[80];
    cin.getline(str,81);
    char* ptr = str;

    for (ptr;*ptr!='\0';ptr++){
        if ((*ptr=='(')){
                char* ptrnew=ptr;
                int flag1=1;
                int flag2=1;
                int flag3=0;
                for (ptrnew;*ptrnew != '\0';ptrnew++){
                    if (*ptrnew==')'){
                        flag3=1;
                        break;
                    }
                    if (*ptrnew=='{'){
                        flag1=0;
                    }
                    if (*ptrnew=='['){
                        flag2=0;
                    }
                    if (*ptrnew=='}'){
                        flag1=1;
                    }
                    if (*ptrnew==']'){
                        flag2=1;
                    }}
                if ((flag1==0) || (flag2==0) || (flag3==0)){
                    cout<<"Некорректная строка";
                    return 0;
                }


            }
            if ((*ptr=='{')){
                char* ptrnew=ptr;
                int flag1=1;
                int flag2=1;
                int flag3=0;
                for (ptrnew;*ptrnew != '\0';ptrnew++){
                    if (*ptrnew=='}'){
                        flag3=1;
                        break;
                    }
                    if (*ptrnew=='('){
                        flag1=0;
                    }
                    if (*ptrnew=='['){
                        flag2=0;
                    }
                    if (*ptrnew==')'){
                        flag1=1;
                    }
                    if (*ptrnew==']'){
                        flag2=1;
                    }}
                if ((flag1==0) || (flag2==0) || (flag3==0)){
                    cout<<"Некорректная строка";
                    return 0;
                    }


            }
            if ((*ptr=='[')){
                char* ptrnew=ptr;
                int flag1=1;
                int flag2=1;
                int flag3=0;
                for (ptrnew;*ptrnew != '\0';ptrnew++){
                    if (*ptrnew==']'){
                        flag3=1;
                        break;
                    }
                    if (*ptrnew=='{'){
                        flag1=0;
                    }
                    if (*ptrnew=='('){
                        flag2=0;
                    }
                    if (*ptrnew=='}'){
                        flag1=1;
                    }
                    if (*ptrnew==')'){
                        flag2=1;
                    }}
                if ((flag1==0) || (flag2==0) || (flag3==0)){
                    cout<<"Некорректная строка";
                    return 0;
                    }


            }

    }
    cout<<"Все верно!";
delete[] str;
    return 0;
}
