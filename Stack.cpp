#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main(){
    stack<int> angka;
    stack<int> genap;
    stack<int> ganjil;

    for(int i=0;i<4;i++) angka.push(i+1);

    cout<<"Elemen pertama stack \"angka\": "<<angka.top()<<endl;
	cout<<"Jumlah elemen pada stack \"angka\": "<<angka.size()<<endl;

    if(angka.empty()) cout<<"Stack \"angka\" kosong.\n";
    else cout<<"Stack \"angka\" tidak kosong.\n";

    angka.pop();

    cout<<"Elemen pertama stack \"angka\" setelah pop: "<<angka.top()<<endl;

    for(int i=0;i<4;i++) genap.push((i+1)*2);

    for(int i=0;i<4;i++) ganjil.push((i+1)*2-1);

    cout<<"Elemen pertama stack \"genap\": "<<genap.top()<<endl;
    cout<<"Elemen pertama stack \"ganjil\": "<<ganjil.top()<<endl;

//    genap.swap(ganjil); // atau ganjil.swap(genap);
    swap(genap,ganjil);

    cout<<"Elemen pertama stack \"genap\" setelah swap: "<<genap.top()<<endl;
    cout<<"Elemen pertama stack \"ganjil\" setelah swap: "<<ganjil.top()<<endl;

    return 0;
}
