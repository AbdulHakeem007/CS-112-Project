#include<iostream>
#include<string>
using namespace std;
class Currency{
public:
int usd;
int pkr;
int pound;
Currency (int u , int p , int po){
    usd=u;
    pkr=p;
    pound=po;
    cout<<"USD into PKR :"<<u;
}
};

int main(){
    Currency C(280,34,56);

}
