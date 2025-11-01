#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a,b;
    cout<<"Enter a Value:";
    cin>>a;
    cout<<"Enter b value:"; 
    cin>>b;
    cout<<"Enter Values are "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After Swap entered values of a and b are "<<a<<" "<<b<<endl;
    return 0;
}