#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;
class nilai{
    public:
		void input();
		int proses();
		int hasil();
    private:
		string nama, matkul,mhs;
		int nilai[20]; 
		int a;
		int min, max;
		float rata;
};
void nilai::input(){
	cout << "Nama Mata Kuliah\t: ";
    cin >> matkul;
	cout << "Nama Dosen\t\t: ";
    cin >> nama;
	cout << "Nama Mhs\t\t: ";
    cin >> mhs;
	cout << "TOTAL NILAI YG AKAN DIINPUTKAN : ";
    cin >> a;
	cout << "---------------------------------------"<< endl;
		for(int i=0; i<a; i++){
			cout<<"Nilai ke-"<<i+1<<" = ";
			cin >> nilai[i];
		}
	cout << "======================================="<<endl;
}
int nilai::proses() {
	min=nilai[0],max=nilai[0];
		for(int k=0; k<a; k++){
			if(nilai[k]<min)
			{
				min = nilai[k]; 
			} 
			if(nilai[k]>max)
			{
				max = nilai[k]; 
				}
				}
		for(int i=0; i<a; i++){
			rata+=nilai[i];
		}
		rata/=a;
}
int nilai::hasil(){
	cout << "Nama Dosen : "<<nama<<endl;
	cout << "Matkul     : "<<matkul<<endl;
	cout << "Nama Mhs    : "<<mhs<<endl;
	cout << "NILAI DARI MAHASISWA YAITU :"<<endl;
		for(int i=0; i<a; i++){
			cout <<"Nilai ke "<< i+1 <<" "<< nilai[i]<<endl;
		}
	cout << "Nilai min dari mahasiswa: "<< min <<endl;
	cout << "Nilai max dari mahasiswa: "<< max <<endl;
	cout << "Nilai rata-rata dari mahasiswa: "<< rata <<endl;
	getch();
}
int main(){
    nilai x;
    x.input();
    x.proses();
    x.hasil();
}
