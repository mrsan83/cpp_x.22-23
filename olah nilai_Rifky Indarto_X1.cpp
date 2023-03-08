#include <iostream>
#include <string>
using namespace std;

int main(){
  int data,i,j;
  string nama[50];
  float mtk[50],infor[50];

  cout<<"Coded by Rifky Indarto dari Kelas X1\n";
  cout<<"Visit https://linktr.ee/sweetybloom\n";
  cout<<endl;

  cout<<"\aProgram Data Siswa\n";
  cout<<"===========================\n";
  cout<<"Input Jumlah Siswa : ";
  cin>>data;
  cout<<endl;

  for(i=1;i<=data;i++){
    cout<<"Input Data Siswa "<<i<<endl;
    cout<<"Nama Siswa : ";
    cin>>nama[i];
    cout<<"Nilai Matematika  : ";
    cin>>mtk[i];
    cout<<"Nilai Informatika : ";
    cin>>infor[i];
    cout<<endl;
  }
  cout<<"\n\t\tDaftar Data Nilai Siswa"<<endl;
  cout<<"=====================================================\n";
  cout<<"No\tNama\tMatematika\t\tInformatika\t\tRata-rata"<<endl;
  cout<<"=====================================================\n";
  for(j=1;j<=data;j++){
    cout<<j<<"."<<"\t"<<nama[j]<<"\t\t"<<mtk[j]<<"\t\t\t\t"<<infor[j]<<"\t\t\t"<<(mtk[j]+infor[j])/2<<endl;
  }

  cout<<"=====================================================\n";

  return 0;
}
