#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
	return ((a&1)>(b&1));
}

int main(){
	int j;
	vector<int>::iterator i;
    vector<int> angka;
    vector<int> genap;
    vector<int> ganjil;
    for(j=1;j<=4;j++) genap.push_back(j*2);
    for(j=1;j<=4;j++) ganjil.push_back(j*2-1);

    angka.push_back(1);
    angka.push_back(2);
    angka.push_back(3);
    angka.push_back(4);

    cout<<"Isi vector \"angka\":";
    for(i=angka.begin();i!=angka.end();i++) cout<<' '<<*i;
    cout<<endl;

    cout<<"Jumlah elemen pada vector \"angka\": "<<angka.size()<<endl;
    cout<<"Jumlah maksimal elemen yang dapat ditampung oleh vector \"angka\": "<<angka.max_size()<<endl;

    if(angka.empty()) cout<<"Vector \"angka\" kosong.\n";
    else cout<<"Vector \"angka\" tidak kosong.\n";

    angka.pop_back();

    cout<<"Isi vector \"angka\" setelah pop back:";
    for(i=angka.begin();i!=angka.end();i++) cout<<' '<<*i;
    cout<<endl;

    angka.resize(5, 100);

    cout<<"Isi vector \"angka\" setelah resize:";
    for(i=angka.begin();i!=angka.end();i++) cout<<' '<<*i;
    cout<<endl;

    angka.assign(8, 10);

    cout<<"Isi vector \"angka\" setelah assign:";
    for(i=angka.begin();i!=angka.end();i++) cout<<' '<<*i;
    cout<<endl;

    // memasukkan nilai 20 di posisi ke-2
    angka.insert(angka.begin()+1,20);

    // memasukkan nilai 30 di posisi ke-3 sebanyak 3
    angka.insert(angka.begin()+2,3,30);

    cout << "Isi vector \"angka\" setelah insert:";
    for(i=angka.begin();i!=angka.end();i++) cout<<' '<<*i;
    cout<<endl;

    // menghapus elemen ke-2
    angka.erase(angka.begin() + 1);

    // menghapus elemen ke-2 hingga elemen ke-5
    angka.erase(angka.begin() + 1, angka.begin() + 4);

    cout << "Isi vector \"angka\" setelah erase:";
    for(i=angka.begin();i!=angka.end();i++) cout<<' '<<*i;
    cout<<endl;

    angka.clear();

    if(angka.empty()) cout<<"Vector \"angka\" kosong.\n";
    else cout<<"Vector \"angka\" tidak kosong.\n";

    cout << "Isi vector \"genap\":";
    for(i=genap.begin();i!=genap.end();i++) cout<<' '<<*i;
    cout<<endl;

    cout<<"Isi vector \"ganjil\":";
    for (i=ganjil.begin();i!=ganjil.end();i++) cout<<' '<<*i;
    cout<<endl;

//    genap.swap(ganjil); // atau ganjil.swap(genap);
    swap(genap,ganjil);

    cout<<"Isi vector \"genap\" setelah swap:";
    for(j=0;j<4;j++) cout<<' '<<genap.at(j);
    cout<<endl;

    cout<<"Isi vector \"ganjil\" setelah swap:";
    for(j=0;j<4;j++) cout<<' '<<ganjil.at(j);
    cout<<endl;

    vector<int> toSort;
    for(j=5;j>0;j--) toSort.push_back(j);
    vector<int>::iterator lo,hi;
    
    sort(toSort.begin(),toSort.end(),cmp);

    for(j=0;j<5;j++) cout<<toSort[j]<<' ';
    cout<<endl;
    
    lo = lower_bound(toSort.begin(),toSort.end(),3);
    hi = upper_bound(toSort.begin(),toSort.end(),3);

    cout<<"index lower_bound : "<<(lo - toSort.begin())<<endl;
    cout<<"index upper_bound : "<<(hi - toSort.begin())<<endl;
    return 0;
}
