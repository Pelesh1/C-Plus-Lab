#include <iostream>
using namespace std;

//Функция возведения в степень
int power(int x,int n)
{
    int p=x;
    for(int i=1;i<n;i++) p*=x;
    return p;
}

int main()
{
    //int k; 
    int base,exponent; //Переменные основания и степени
    cout<<"Please, enter base and exponent: "<<endl;
    cin>>base>>exponent; //Инициализация переменных
    cout<<"Answer: "<<power(base,exponent)<<endl; //Вызов функций с помощью вывода на экран

    // for(int i=0;i<10;i++)
    // {
    //     k=power(2,i);
    //     cout<<"i = "<<i<<", k = "<<k<<endl;
    // }
}