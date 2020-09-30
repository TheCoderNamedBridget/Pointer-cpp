/*
Bridget Naylor
SID: 025531413
*/
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    
    long value1 = 200000;//a
    long value2;
    
    long *longPtr = &value1;//b
    
    cout<<"Ptr's object value: "<<*longPtr<<endl;//c
    value2 = *longPtr;//d
    cout<<"Value 2: "<<value2<<endl;//e
    cout<<"Address of value1: "<<&value1<<endl;//f
    cout<<"Address stored in Ptr: "<<&longPtr<<endl;//g
    return 0;
}

