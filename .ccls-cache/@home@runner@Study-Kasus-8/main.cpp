#include <iostream>
using namespace std;

class sk8{
public:
  void input();
  void proses();
  void output();

private:
struct buku{
  string jenis,judul; 
  int kode;
};

  buku book[10][10];
  int kind,code;
  int temp;
  
};

void sk8::input(){
  cout<<"Masukkan Jumlah Jenis Buku: ";
  cin>>kind;
  cout<<"Masukkan Jumlah Kode Buku: ";
  cin>>code;
	cout<<endl;
  for(int i=0;i<kind;i++){
    cout<<"Masukkan Jenis Buku Ke-"<<i+1<<": ";
    cin>>book[i][0].jenis;
    for(int j=0;j<code;j++){
      cout<<"Masukkan Kode Buku Ke-"<<j+1<<": ";
      cin>>book[i][j].kode;
      cout<<"Masukkan Judul Buku: ";
      cin>>book[i][j].judul;
    }
    cout<<endl;
  }
}

void sk8::proses(){
	temp=0;
	for(int i=0; i<=kind; i++){
      for(int j=i; j<=code; j++){
        if(book[i][0].kode < book[0][j].kode){
          temp = book[0][j].kode;
          book[0][j].kode = book[i][0].kode;
          book[i][0].kode = temp;
        }
      }
}
}


void sk8::output(){
  cout << "|  Jenis buku   |   Kode buku    |    Judul buku   |" << endl ;
  cout << "====================================================" << endl ;

  for(int i=0;i<kind;i++){
    cout<<"| "<<book[i][0].jenis<<"\t\t\t"<<"|";
    for(int j=0;j<code;j++){
      cout<<book[i][j].kode<<"\t\t\t |"<<book[i][j].judul<<"|"<<endl<<"\t\t\t\t|";
      
		}
		cout<<endl;
	}
}
int main(){
	sk8 sk;
	sk.input();
	sk.proses();
	sk.output();
}