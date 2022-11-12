#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    int A;  int B;
    cin>>A; cin>>B;
    if(A>0 && B>0)
    cout<<"Solution"<<endl;
    if(B==0)
    cout<<"Solid"<<endl;
    if(A==0)
    cout<<"Liquid"<<endl;
    }
	return 0;
}
