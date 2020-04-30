#include <iostream>
#include <deque>
using namespace std;

int main(){
	int j;
	deque<int>::iterator i;
    deque<int> angka;
    deque<int> genap;
    deque<int> ganjil;
    for(j=1;j<=4;j++) genap.push_back(j*2);
    for(j=1;j<=4;j++) ganjil.push_back(j*2-1);

    angka.push_front(2);
    angka.push_back(3);
    angka.push_front(1);
    angka.push_back(4);

    cout<<"Isi deque \"angka\":";
    for(i=angka.begin();i!=angka.end();i++) cout<<' '<<*i;
    cout<<endl;

    cout<<"Jumlah elemen pada deque \"angka\": "<<angka.size()<<endl;
    cout<<"Jumlah maksimal elemen yang dapat ditampung oleh deque \"angka\": "<<angka.max_size()<<endl;

    if(angka.empty()) cout<<"Deque \"angka\" kosong.\n";
    else cout<<"Deque \"angka\" tidak kosong.\n";

    angka.pop_front();
    angka.pop_back();

    cout<<"Isi list \"angka\" setelah pop (front dan back):";
    for(i=angka.begin();i!=angka.end();i++) cout<<' '<<*i;
    cout<<endl;

    angka.resize(5, 100);

    cout<<"Isi deque \"angka\" setelah resize:";
    for(i=angka.begin();i!=angka.end();i++) cout<<' '<<*i;
    cout<<endl;

    angka.assign(8, 10);

    cout<<"Isi deque \"angka\" setelah assign:";
    for(i=angka.begin();i!=angka.end();i++) cout<<' '<<*i;
    cout<<endl;

    // memasukkan nilai 20 di posisi ke-2
    angka.insert(angka.begin()+1,20);

    // memasukkan nilai 30 di posisi ke-3 sebanyak 3
    angka.insert(angka.begin()+2,3,30);

    cout << "Isi deque \"angka\" setelah insert:";
    for(i=angka.begin();i!=angka.end();i++) cout<<' '<<*i;
    cout<<endl;

    // menghapus elemen ke-2
    angka.erase(angka.begin()+1);

    // menghapus elemen ke-2 hingga elemen ke-5
    angka.erase(angka.begin()+1,angka.begin()+4);

    cout << "Isi deque \"angka\" setelah erase:";
    for(i=angka.begin();i!=angka.end();i++) cout<<' '<<*i;
    cout<<endl;

    angka.clear();

    if(angka.empty()) cout<<"Deque \"angka\" kosong.\n";
    else cout<<"Deque \"angka\" tidak kosong.\n";

    cout<<"Isi deque \"genap\":";
    for(i=genap.begin();i!=genap.end();i++) cout<<' '<<*i;
    cout<<endl;

    cout<<"Isi deque \"ganjil\":";
    for(i=ganjil.begin();i!=ganjil.end();i++) cout<<' '<<*i;
    cout<<endl;

//    genap.swap(ganjil); // atau ganjil.swap(genap);
    swap(genap,ganjil);

    cout<<"Isi deque \"genap\" setelah swap:";
    for(j=0;j<4;j++) cout<<' '<<genap.at(j);
    cout<<endl;

    cout<<"Isi deque \"ganjil\" setelah swap:";
    for(j=0;j<4;j++) cout<<' '<<ganjil.at(j);
    cout<<endl;
    return 0;
}
