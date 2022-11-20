#include<iostream>
#include<stdio.h>
#include<windows.h>
using namespace std;
struct Mahasiswa {
	int nim;
	string nama;
	string kelas, kode_mk, nama_mk, nama_dsn;
	float n_abs,n_tnk,n_uts,n_uas,na;
};

int main ()
{
	float average,sum;
	float maks;
	float h,l,ttl,mh,ml;
	Mahasiswa m[200];
	cout<<"Banyak Data : ";
	cin>>maks;
 for(int i=0;i<maks;i++)
 {
 	cout<<"Data Mahasiswa ke-"<<i+1<<endl;
 	cout<<"Masukan NIM             : ";cin>>m[i].nim;
 	fflush(stdin);
 	cout<<"Masukan Nama Mahasiswa  : ";getline(cin,m[i].nama);
	cout<<"Masukan Nilai Absensi   : ";cin>>m[i].n_abs;
	cout<<"Masukan Nilai Tugas     : ";cin>>m[i].n_tnk;
	cout<<"Masukan Nilai UTS       : ";cin>>m[i].n_uts;
	cout<<"Masukan Nilai UAS       : ";cin>>m[i].n_uas;
 	cout<<"*=========================================================*"<<endl;
 	
 	//hitung nilai akhiir
	m[i].na=m[i].n_abs*15.0/100.0+m[i].n_tnk*20.0/100.0+m[i].n_uts*30.0/100.0+m[i].n_uas*35.0/100.0;
 }
 
 	cout<<endl;
 	cout<<endl;
 	cout<<"                  DATA MAHASISWA YANG TELAH MASUK                 "<<endl;
 	
	//Tampil Data
 	for(int i=0;i<maks;i++)
 {
 
 	cout<<"*=======================================================*"<<endl;
 	cout<<"|Data Mahasiswa ke-"<<i+1<<endl;
 	cout<<"|NIM			 :"<<m[i].nim<<endl;
 	cout<<"|Nama			 :"<<m[i].nama<<endl;
	cout<<"|Nilai Absensi   	 :"<<m[i].n_abs<<endl;
	cout<<"|Nilai Tugas       :"<<m[i].n_tnk<<endl;
	cout<<"|Nilai UTS		 :"<<m[i].n_uts<<endl;
	cout<<"|Nilai UAS		 :"<<m[i].n_uas<<endl;
	cout<<"|Nilai Akhir		 :"<<m[i].na<<"\n";
	cout<<"*=======================================================*"<<endl;
 }
 
 
	h=(m[0].na);
	l=(m[0].na);
	for (int j=0;j<maks;j++){
		if((m[j].na)>h){
			h=(m[j].na);
		}if((m[j].na)<l){
			l=(m[j].na);
		}
	}
	
	
	//max
	cout<<"*--------------------------*"<<endl;
	cout<<"| Nilai tertinggi          | = ["<<h<<"]"<<endl;
	cout<<"*--------------------------*"<<endl;
	cout<<"| Ada Di Data Mahasiswa ke | "<<endl;
	cout<<"*--------------------------*";
	for (int k=0;k<maks;k++){
		if((m[k].na)==h){
		cout<<" ["<<k+1<<"]";
		
		}
	
	}
	cout<<endl;
	//min
	cout<<"*--------------------------*"<<endl;
	cout<<"| Nilai Terendah           | = ["<<l<<"]"<<endl;
	cout<<"*--------------------------*"<<endl;
	cout<<"| Ada Di Data Mahasiswa ke | "<<endl;
	cout<<"*--------------------------*";
	for (int k=0;k<maks;k++){
		if((m[k].na)==l){
				cout<<" ["<<k+1<<"]";
		}
	}
	
	cout<<endl;
	cout<<endl;
	
	
	for (int r=0;r<maks;r++){
		ttl=0;
		for (int t=0;t<maks;t++){
		if((m[r].na)==(m[t].na))
		ttl++;
		}
		if((m[r].na)==h){
		mh=ttl;
		}
		if((m[r].na)==l){
		ml=ttl;
		}
	}
	
	//average
	//for (int j=0;j<maks;j++)
	//{
		//average+=m[j].na;
	//}
	
	
	
	//sum
	//	for (int j=0;j<maks;j++)
	//{
		//sum+=m[j].na;
	//}
	
	
	//average =average/maks;
	
	
	

	
	cout<<"*--------------------------------------------------------------*"<<endl;
	cout<<"|Banyaknya Mahasiswa Yang Mendapatkan Nilai tertinggi : "<<mh<<endl;
	cout<<"|Banyaknya Mahasiswa Yang Mendapatkan Nilai terendah  : "<<ml<<endl;
	cout<<"|RATA-RATA Keseluruhun Nilai Yang Di Input            : "<<endl;
	cout<<"|JUMLAH    Keseluruhan Nilai Yang Di Input            : "<<endl;
	cout<<"*--------------------------------------------------------------*"<<endl;
	cout<<"by github.com/znladnsyh"<<endl;
 	return 0;
}
