//================================================================
//                   HEADER FILE
//================================================================

#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

//library
class student
{
	int nomhs;
	char name[50];
	int fisika, kalkulus, pti, rl, adp;
	double per;
	char grade;
	void calculate();	//Fungsi untuk menghitung grade
public:
	void getdata();	//fungsi untuk menerima data dari user
	void showdata() const;	//fungsi untuk menampilkan data
	void show_tabular() const;
	int retrollno() const;
}; 


void student::calculate()
{
	per=(fisika+kalkulus+pti+rl+adp)/5.0;
	if(per>=76)
		grade='A';
	else if(per>=70)
		grade='B';
	else if(per>=60)
		grade='C';
	else
		grade='E';
}

void student::getdata()
{
	cout<<"\nMasukan Nomor Mahasiswa ";
	cin>>nomhs;
	cout<<"\n\nmasukan nama ";
	cin.ignore();
	cin.getline(name,50);
	cout<<"\nmasukan nilai fisika : ";
	cin>>fisika;
	cout<<"\nmasukan nilai kalkulus : ";
	cin>>kalkulus;
	cout<<"\nmasukan nilai PTI : ";
	cin>>pti;
	cout<<"\nMasukan nilai RL : ";
	cin>>rl;
	cout<<"\nMasukan nilai ADP : ";
	cin>>adp;
	calculate();
}

void student::showdata() const
{
	cout<<"\nMasukan Nomor Mahasiswa : "<<nomhs;
	cout<<"\nNama Mahasiswa : "<<name;
	cout<<"\nNilai Fisika : "<<fisika;
	cout<<"\nNilai Kalkulus : "<<kalkulus;
	cout<<"\nNilai PTI : "<<pti;
	cout<<"\nNilai RL  : "<<rl;
	cout<<"\nNilai ADP :"<<adp;
	cout<<"\nPersentasi nilai mahasiswa  :"<<per;
	cout<<"\nGrade mahasiswa :"<<grade;
}

void student::show_tabular() const
{
	cout<<nomhs<<setw(6)<<" "<<name<<setw(10)<<fisika<<setw(4)<<kalkulus<<setw(4)<<pti<<setw(4)<<rl<<setw(4)<<adp<<setw(8)<<per<<setw(6)<<grade<<endl;
}
	 
int  student::retrollno() const
{
	return nomhs;
}


//================================================================
//    	DEKLARASI
//================================================================

void write_student();	//menuis catatan dalam file eksternal
void display_all();		//membaca catatan dari file eksternal
void display_sp(int);	//menerima nomor urutan dan membaca rekaman dari file eksternal
void modify_student(int);	//menerima nomor urutan dan memperbarui rekaman pada file eksternal
void delete_student(int);	//menerima nomor urutan dan menghapus rekaman yang dipilih dari file eksternal
void class_result();	//Menampilkan semua catatan dalam format tabel dari file biner
void result();	//menampilkan menu result
void intro();	//menampilkan "welcome" di layar
void entry_menu();	//menampilkan menu 'entry, pada layar


//================================================================
//    	PROGRAM UTAMA
//================================================================


int main()
{
	char ch;
	cout.setf(ios::fixed|ios::showpoint);
	cout<<setprecision(2); // Program mengeluarkan output 2 desimal
	intro();
	do
	{
		system("cls");
		cout<<"\n\n\n\tMAIN MENU";
		cout<<"\n\n\t01. RESULT MENU";
		cout<<"\n\n\t02. ENTRY/EDIT MENU";
		cout<<"\n\n\t03. EXIT";
		cout<<"\n\n\tMasukan pilihan (1-3) ";
		cin>>ch;
		switch(ch)
		{
			case '1': result();
				break;
			case '2': entry_menu();
				break;
			case '3':
				break;
			default :cout<<"\a";
		}
    }while(ch!='3');
	return 0;
}

//================================================================
//    	UNTUK MENULIS DI FILE EKSTERNAL
//================================================================

void write_student()
{
	student st;
	ofstream outFile;
	outFile.open("student.dat",ios::binary|ios::app);
	st.getdata();
	outFile.write(reinterpret_cast<char *> (&st), sizeof(student));
	outFile.close();
    cout<<"\n\nAamiin ";
	cin.ignore();
	cin.get();
}

//================================================================
//    	MEMBACA FILE EKSTERNAL LEWAT TAMPILAN DI PROGRAM
//================================================================

void display_all()
{
	student st;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File tidak dapat dibuka !! Bebas pencet tombol";
		cin.ignore();
		cin.get();
		return;
	}
	cout<<"\n\n\n\t\tTampilkan semua !!!\n\n";
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		st.showdata();
		cout<<"\n\n====================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
}

//================================================================
//    	function to read specific record from file
//================================================================

void display_sp(int n)
{
	student st;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File tidak dapat dibuka !! Bebas pencet tombol";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		if(st.retrollno()==n)
		{
	  		 st.showdata();
			 flag=true;
		}
	}
	inFile.close();
	if(flag==false)
		cout<<"\n\nHasil tidak ada";
	cin.ignore();
	cin.get();
}

//================================================================
//    	UNTUK MENGEDIT REKAMAN
//================================================================

void modify_student(int n)
{
	bool found=false;
	student st;
	fstream File;
	File.open("student.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File tidak dapat dibuka !! silahkan tekan tombol random";
		cin.ignore();
		cin.get();
		return;
	}

	while(!File.eof() && found==false)
	{
		File.read(reinterpret_cast<char *> (&st), sizeof(student));
		if(st.retrollno()==n)
		{
			st.showdata();
			cout<<"\n\nMasukan detail mahasiswa baru"<<endl;
			st.getdata();
		    int pos=(-1)*static_cast<int>(sizeof(st));
		    File.seekp(pos,ios::cur);
		    File.write(reinterpret_cast<char *> (&st), sizeof(student));
		    cout<<"\n\n\t Record diperbarui";
		    found=true;
		}
	}
	File.close();
	if(found==false)
		cout<<"\n\n Record tidak ada";
	cin.ignore();
	cin.get();

}

//================================================================
//    	UNTUK MENGHAPUS REKAMAN
//================================================================
void delete_student(int n)
{
	student st;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File tidak dapat dibuka !! silahkan tekan tombol random";
		cin.ignore();
		cin.get();
		return;
	}
	ofstream outFile;
	outFile.open("Temp.dat",ios::out);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		if(st.retrollno()!=n)
		{
			outFile.write(reinterpret_cast<char *> (&st), sizeof(student));
		}
	}
	outFile.close();
	inFile.close();
	remove("student.dat");
	rename("Temp.dat","student.dat");
	cout<<"\n\n\tRecord Dihapus ..";
	cin.ignore();
	cin.get();
}

//================================================================
//    	UNTUK MENAMPILKAN SEMUA NILAI RAPORT MAHASISWA
//================================================================

void class_result()
{
	student st;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File tidak dapat dibuka !! silahkan tekan tombol random";
		cin.ignore();
		cin.get();
		return;
	}
	cout<<"\n\n\t\tHasil Semua Mahasiswa \n\n";
	cout<<"==========================================================\n";
	cout<<"R.No       Name        P   C   M   E   CS   %age   Grade"<<endl;
	cout<<"==========================================================\n";
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		st.show_tabular();
	}
	cin.ignore();
	cin.get();
	inFile.close();
}

//================================================================
//    	UNTUK MENAMPILKAN RESULT MENU
//================================================================

void result()
{
	char ch;
	int rno;
	system("cls");
	cout<<"\n\n\n\tRESULT MENU";
	cout<<"\n\n\n\t1. Class Result";
	cout<<"\n\n\t2. Student Report Card";
	cout<<"\n\n\t3. Back to Main Menu";
	cout<<"\n\n\n\tMasukan Pilihan (1/2/3)? ";
	cin>>ch;
	system("cls");
	switch(ch)
	{
	case '1' :	class_result(); break;
	case '2' :	cout<<"\n\n\tMasukan nomor mahasiswa : "; cin>>rno;
				display_sp(rno); break;
	case '3' :	break;
	default:	cout<<"\a";
	}
}

//================================================================
//    	HALAMAN AWAL ATAU PENGENALAN
//================================================================

void intro()
{
	cout<<"\n\n\n\t\t  Project";
	cout<<"\n\n                    KRS";
	cout<<"\n\n\t\t Mahasiswa";
	cout<<"\n\n\n\tMADE BY : Anonim";
	cout<<"\n\tSCHOOL : Universitas Lampung";
	cin.get();
}

//================================================================
//    	ENTRY / EDIT MENU
//================================================================

void entry_menu()
{
	char ch;
	int num;
	system("cls");
	cout<<"\n\n\n\tMASUKAN MENU";
	cout<<"\n\n\t1.MEMBUAT DATA MAHASISWA";
	cout<<"\n\n\t2.MENAMPILKAN DATA MAHASISWA";
	cout<<"\n\n\t3.MENCARI DATA MAHASIAWA ";
	cout<<"\n\n\t4.MENGGANTI DATA MAHASISWA";
	cout<<"\n\n\t5.MENGHAPUS DATA MAHASISWA";
	cout<<"\n\n\t6.KEMBALI KE MENU AWAL";
	cout<<"\n\n\tMASUKAN PILIHAN (1-6) ";
	cin>>ch;
	system("cls");
	switch(ch)
	{
	case '1':	write_student(); break;
	case '2':	display_all(); break;
	case '3':	cout<<"\n\n\tMasukan nomor "; cin>>num;
				display_sp(num); break;
	case '4':	cout<<"\n\n\tMasukan nomor "; cin>>num;
				modify_student(num);break;
	case '5':	cout<<"\n\n\tMasukan nomor "; cin>>num;
				delete_student(num);break;
	case '6':	break;
	default:	cout<<"\a"; entry_menu();
	}
}

//================================================================
//    			END OF PROJECT
//================================================================
