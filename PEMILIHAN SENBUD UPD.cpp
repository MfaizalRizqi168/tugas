//SMK WIKRAMA BOGOR menyediakan kegiatan senbud dan upd dengan rincian sebagai berikut :
//seni budaya 
//1.Seni tari hari senin pembimbing bu mira
//2.seni music modern hari selasa instructur pak hendrik
//3seni music tradisional hari rabu instructur pak heri
//4seni teater hari kamis instructur pak joni
//5seni rupa hari jumat pembimbing pak adi
//6seni suara hari sabtu pak alek

//upd
//1.sepak bola hari senin pembimbing pak ronaldo
//2.basket hari senin pak jaka
//3.badminton hari selasa bu fera
//4.volley hari selasa pak jalal
//5.paskibra hari rabu bu edoh
//6.silat hari rabu pak ujang
//7.karate hari kamis pak bambang
//8.cyber hari kamis pak ciko
//9.english hari jumat bu baedah
//10.robotic hari sabtu pak charlos
//setiap siswa untuk memilih senbud dan upd diminta untuk memasukan NIS dan NAMA Selanjutnya sistem akan menampilkan daftar upd terlebih dahulu
//lalu siswa diminta untuk memasukan kode upd yang ia pilih
//setelah memasukan kode upd akan muncul NAMA UPD dan HARINYA 
//lalu akan muncul daftar senbud 
//lalu siswa memasukan kode senbud yang ia pilih.
//selanjutnya akan muncul NAMA SENBUD Beserta harinya
//jika Hari upd dan senbudnya sama maka muncul pesan bentrok selain itu tampilkan berhasil
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
int main()
{long x,y,nis;
 string upd,hupd,senbud,hsenbud;
 char nama[20];
         cout <<"         Pemilihan UPD dan SENBUD SMK WIKRAMA BOGOR\n"
              <<"-----------------------------------------------------------\n"
              <<"NIS :";
         cin  >>nis;
                if (nis==11806847)
                {cout<<"NAMA : Restuaji Eliansyah";
				}
				else 
				{cout<<"Nama : ";
				 cin.getline(nama,20);
				}
         cout <<endl
              <<"DAFTAR UPD:\n"
              <<"-----------------------------------------------------------\n"
		      <<"NO   NAMA UPD     HARI      INSTRUCTUR \n"
			  <<"1.   SEPAK BOLA   SENIN     PAK RONALDO\n"
			  <<"2.   BASKET       SENIN     PAK JAKA\n"
			  <<"3.   BADMINTON    SELASA    BU FERA\n"
			  <<"4.   VOLLEY       SELASA    PAK JALAL\n"
			  <<"5.   PASKIBRA     RABU      BU EDOH\n"
			  <<"6.   SILAT        RABU      PAK UJANG\n"
			  <<"7.   KARATE       KAMIS     PAK BAMBANG\n"
			  <<"8.   CYBER        KAMIS     PAK CIKO\n"
			  <<"9.   ENGLISH      JUMAT     BU BAEDAH\n"
			  <<"10.  ROBOTIC      SABTU     CHARLOS\n"
			  <<"-----------------------------------------------------------\n"
			  	          <<"Pilih KODE x YANG AKAN DIPILIH (1-10): ";
	     cin  >>x;
	            if (x==1)
				{upd  ="SEPAK BOLA";
				 hupd ="SENIN";
				}
	            else if(x==2)
	            {upd  ="BASKET";
	             hupd ="SENIN";
				}
	            else if(x==3)
	            {upd  ="BADMINTON";
	             hupd ="SELASA";
				}
				else if(x==4)
				{upd  ="VOLLEY";
				 hupd ="SELASA";
				}
				else if(x==5)
				{upd  ="PASKIBRA";
				 hupd ="RABU";
				}
				else if(x==6)
				{upd  ="SILAT";
				 hupd ="RABU";
				}
				else if(x==7)
				{upd  ="KARATE";
				 hupd ="KAMIS";
				}
				else if(x==8)
				{upd  ="CYBER";
				 hupd ="KAMIS";
				}
				else if(x==9)
				{upd  ="ENGLISH";
				 hupd ="JUMAT";
				}
				else if(x==10)
				{upd  ="ROBOTIC";
				 hupd ="SABTU";
				}
		cout  <<"DAFTAR SENBUD:\n"
			  <<"NO   NAMA SENBUD         HARI      INSTRUCTUR \n"
			  <<"1.   TARI                SENIN     BU MIRA\n"
			  <<"2.   MUSIC MODERN        SELASA    PAK HENDRIK\n"
			  <<"3.   MUSIC TRADISIONAL   RABU      PAK HERI\n"
			  <<"4.   TEATER              KAMIS     PAK JONI\n"
			  <<"5.   RUPA                JUMAT     PAK ADI\n"
			  <<"6.   SUARA               SABTU     PAK ALEK\n"
	          <<"-----------------------------------------------------------\n"
	          <<"PILIH SENBUD YANG AKAN DIPILIH (1-6): ";
	       cin>>y;
	            if (y==1)
	            {senbud  ="TARI";
	             hsenbud ="SENIN";
				}
				else if(y==2)
				{senbud  ="MUSIC MODERN";
				 hsenbud ="SELASA";
				}
				else if(y==3)
				{senbud  ="MUSIC TRADISIONAL";
				 hsenbud ="RABU";
				}
				else if(y==4)
				{senbud  ="TEATER";
				 hsenbud ="KAMIS";
				}
				else if(y==5)
				{senbud  ="RUPA";
				 hsenbud ="JUMAT";
				}
				else if(y==6)
				{senbud  ="SUARA";
				 hsenbud ="SABTU";
				}
		     cout <<"UPD YANG ANDA PILIH    : "<<upd<<endl<<" HARI : "<<hupd<<endl
		          <<"SENBUD YANG ANDA PILIH : "<<senbud<<endl<<" HARI :"<<hsenbud<<endl;
		          if (hupd==hsenbud)
		          {cout <<     "STATUS  :bentrok";
				  }else {
				  cout<<       "STATUS  :tidak bentrok";
                }  
	_getch();
	return 0;
}
