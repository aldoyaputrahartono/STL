#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> angka;
    queue<int> genap;
    queue<int> ganjil;

    for(int i=0;i<4;i++) angka.push(i + 1);

    cout<<"Elemen pertama queue \"angka\": "<<angka.front()<<endl;
    cout<<"Elemen terakhir queue \"angka\": "<<angka.back()<<endl;
    cout<<"Jumlah elemen pada queue \"angka\": "<<angka.size()<<endl;

    if(angka.empty()) cout<<"queue \"angka\" kosong.\n";
    else cout<<"queue \"angka\" tidak kosong.\n";

    angka.pop();

    cout<<"Elemen pertama queue \"angka\" setelah pop: "<<angka.front()<<endl;
    cout<<"Elemen terakhir queue \"angka\" setelah pop: "<<angka.back()<<endl;

    for(int i=0;i<4;i++) genap.push((i+1)*2);

    for(int i=0;i<4;i++) ganjil.push((i+1)*2-1);

    cout<<"Elemen pertama queue \"genap\": "<<genap.front()<<endl;
    cout<<"Elemen terakhir queue \"genap\": "<<genap.back()<<endl;
    cout<<"Elemen pertama queue \"ganjil\": "<<ganjil.front()<<endl;
    cout<<"Elemen terakhir queue \"ganjil\": "<<ganjil.back()<<endl;

//    genap.swap(ganjil); // atau ganjil.swap(genap);
    swap(genap,ganjil);

    cout<<"Elemen pertama queue \"genap\" setelah swap: "<<genap.front()<<endl;
    cout<<"Elemen terakhir queue \"genap\" setelah swap: "<<genap.back()<<endl;
    cout<<"Elemen pertama queue \"ganjil\" setelah swap: "<<ganjil.front()<<endl;
    cout<<"Elemen terakhir queue \"ganjil\" setelah swap: "<<ganjil.back()<<endl;
    return 0;
}
