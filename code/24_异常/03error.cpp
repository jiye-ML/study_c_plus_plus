#include <iostream>
#include <cstdio>
using namespace std;
class A{
public:
    A(void){ cout << "A的构造" << endl; }
    ~A(void){ cout << "A的析构" << endl; }
};
int func3(void){
    A a;
    FILE *fp = fopen("xx.txt","r");
    if(fp==NULL){
        cout << "文件打开失败" << endl;
        return -1;
    }
    cout << "func3正常执行" << endl;
    return 0;
}
int func2(void){
    A a;
    if(func3()==-1){
        return -1;
    }
    cout << "func2正常执行" << endl;
    return 0;
}
int func1(void){
    A a;
    if(func2()==-1){
        return -1;
    }
    cout << "func1正常执行" << endl;
    return 0;
}
int main(void)
{
    if(func1()==-1){
        return -1;
    }
    cout << "main正常执行" << endl;
    return 0;
}












