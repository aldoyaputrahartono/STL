#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> angka;
    priority_queue<int> genap;
    priority_queue<int> ganjil;

    angka.push(2);
    angka.push(4);
    angka.push(1);
    angka.push(3);

    cout<<"Elemen pertama priority queue \"angka\": "<<angka.top()<<endl;
    cout<<"Jumlah elemen pada priority queue \"angka\": "<<angka.size()<<endl;

    if(angka.empty()) cout<<"priority queue \"angka\" kosong.\n";
    else cout<<"priority queue \"angka\" tidak kosong.\n";

    angka.pop();

    cout<<"Elemen pertama priority queue \"angka\" setelah pop: "<<angka.top()<<endl;

    genap.push(4);
    genap.push(8);
    genap.push(2);
    genap.push(6);

    ganjil.push(3);
    ganjil.push(7);
    ganjil.push(1);
    ganjil.push(5);

    cout<<"Elemen pertama priority queue \"genap\": "<<genap.top()<<endl;
    cout<<"Elemen pertama priority queue \"ganjil\": "<<ganjil.top()<<endl;

//    genap.swap(ganjil); // atau ganjil.swap(genap);
    swap(genap,ganjil);

    cout<<"Elemen pertama priority queue \"genap\" setelah swap: "<<genap.top()<<endl;
    cout<<"Elemen pertama priority queue \"ganjil\" setelah swap: "<<ganjil.top()<<endl;
    return 0;
}
