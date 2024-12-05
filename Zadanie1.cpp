#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
ofstream out("out.txt");

    int str[10];
    int* ptr = str;
    for (int i=0;i<10;i++ )
    {
        *ptr=i+10;
        *ptr++;
    }
    for (int i=0;i<10;i++ )
    {
        out<<i[str]<<' ';
    }
    out.close();
    return 0;
}
