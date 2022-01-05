#include <iostream>
using namespace std;

int main(){
	int x;
	cout<<"Inputkan Nilai x : ";
	cin>>x;
	int z;
	cout<<"Inputkan Nilai z : ";
	cin>>z;
	if(x%2==0 && z%2==0){
		cout<<"semua bilangan genap"<<endl;
	}
	else if(x%2!=0 && z%2==0){
		cout<<"x ganjil dan y genap"<<endl;
	}
	else if(x%2==0 && z%2!=0){
		cout<<"x genap dan y ganjil"<<endl;
	}
	else{
		cout<<"semua bilangan ganjil"<<endl;
	}
	return 0;
}

//Jika variabel x adalah ganjil dan variabel y adalah ganjil maka tampilkan output semua bilangan ganjil
//Jika variabel x adalah ganjil dan variabel y adalah genap maka tampilkan output x ganjil dan y genap
//Jika variabel x adalah genap dan variabel y adalah genap maka tampilkan output semua bilangan genap
//jika variabel x adalah genap dan variabel y adalah ganjil maka tampilkan output x genap dan y ganjil
