#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>

time_t ambil_waktu;


int regislogin;					    //variabel dalam fungsi registrasi

	typedef struct user{		   //variabel dalam fungsi registrasi dan login
        char namalengkap [50];
        char username [20];
        char password [20];
	} user;

	user Pengguna;

	char inputusername [20];	 //variabel dalam fungsi login
	char inputpassword [20];
	//AKUN YANG BISA DIGUNAKAN UNTUK LOGIN
	char username[20] = "akun";
	char password[20] = "00000";

//Deklarasi struct
    struct macammenu
    {
        int menuobat, menuobat1, menuobat2, menuobat3, menuobat4, menuobat5, menuobat6;
    };
    struct subtotal
    {
        int jmlbeli1,jmlbeli2,jmlbeli3,jmlbeli4,jmlbeli5,jmlbeli6,jmlbeli7,jmlbeli8,jmlbeli9,jmlbeli10,jmlbeli11,
        jmlbeli12,jmlbeli13,jmlbeli14,jmlbeli15,jmlbeli16,jmlbeli17,jmlbeli18,jmlbeli19,jmlbeli20,jmlbeli21,jmlbeli22,
        jmlbeli23,jmlbeli24,jmlbeli25,jmlbeli26,jmlbeli27,jmlbeli28,jmlbeli29,jmlbeli30,jmlbeli31,jmlbeli32,jmlbeli33,
        jmlbeli34,jmlbeli35,jmlbeli36,jmlbeli37,jmlbeli38,jmlbeli39,jmlbeli40,jmlbeli41,jmlbeli42,jmlbeli43,jmlbeli44,
        jmlbeli45,jmlbeli46,jmlbeli47,jmlbeli48,jmlbeli49,jmlbeli50,jmlbeli51,jmlbeli52,jmlbeli53,jmlbeli54,jmlbeli55,
        jmlbeli56,jmlbeli57,jmlbeli58,jmlbeli59,jmlbeli60,jmlbeli61;
        int totalharga, bayar, kembalian;
    };
    struct menu
    {
        int acetaminophen, acnes, acnol1, acnol2, antasida, aspirin, betadine_mouthwash, benzolac, bodrex, cataflam, camaag_mint, cooling1, cooling2,
        degirol, dentasol, derma, efisol, erha, eugenia, troches, gumafixa, gastran, hexadol, ibuprofen, indomethacin, inza, ketorolac, konidin,
        laserin, medi_klin, mylanta, naproxen, neozep, nutrimax, obh1, obh2, omeprazole, oskadon, paramex, polycrol, polysilane, ponstan, procold,
        promag, ranitidine, sanmol, siladex, sp, sumagesic, tantum, ultraflu, vicks, verile, vitacid, waisan, kasa, hansaplast, kapas, infus, betadine, minyak ;

    };
    struct menu menu_obat;
    struct macammenu menuo;
    struct subtotal sub;


void home();            //Tampilan Awal Program
void registrasi();
void info();
void login();
void terminal();
void menu();
void loading();
void pembelian_obat();
void Penghitungan();
void jenis_penyakit();
void struk();
void cetak_struk();


int main(){
    home();
}

void reset_data(){

        //MERESET HARGA BARANG
        sub.jmlbeli1  = 0; sub.jmlbeli2  = 0; sub.jmlbeli3  = 0; sub.jmlbeli4  = 0; sub.jmlbeli5  = 0; sub.jmlbeli6  = 0; sub.jmlbeli7  = 0; sub.jmlbeli8  = 0; sub.jmlbeli9  = 0; sub.jmlbeli10 = 0;
        sub.jmlbeli11 = 0; sub.jmlbeli12 = 0; sub.jmlbeli13 = 0; sub.jmlbeli14 = 0; sub.jmlbeli15 = 0; sub.jmlbeli16 = 0; sub.jmlbeli17 = 0; sub.jmlbeli18 = 0; sub.jmlbeli19 = 0; sub.jmlbeli20 = 0;
        sub.jmlbeli21 = 0; sub.jmlbeli22 = 0; sub.jmlbeli23 = 0; sub.jmlbeli24 = 0; sub.jmlbeli25 = 0; sub.jmlbeli26 = 0; sub.jmlbeli27 = 0; sub.jmlbeli28 = 0; sub.jmlbeli29 = 0; sub.jmlbeli30 = 0;
        sub.jmlbeli31 = 0; sub.jmlbeli32 = 0; sub.jmlbeli33 = 0; sub.jmlbeli34 = 0; sub.jmlbeli35 = 0; sub.jmlbeli36 = 0; sub.jmlbeli37 = 0; sub.jmlbeli38 = 0; sub.jmlbeli39 = 0; sub.jmlbeli40 = 0;
        sub.jmlbeli41 = 0; sub.jmlbeli42 = 0; sub.jmlbeli43 = 0; sub.jmlbeli44 = 0; sub.jmlbeli45 = 0; sub.jmlbeli46 = 0; sub.jmlbeli47 = 0; sub.jmlbeli48 = 0; sub.jmlbeli49 = 0; sub.jmlbeli50 = 0;
        sub.jmlbeli51 = 0; sub.jmlbeli52 = 0; sub.jmlbeli53 = 0; sub.jmlbeli54 = 0; sub.jmlbeli55 = 0; sub.jmlbeli56 = 0; sub.jmlbeli57 = 0; sub.jmlbeli58 = 0; sub.jmlbeli59 = 0; sub.jmlbeli60 = 0;
        sub.jmlbeli61 = 0;

        //MERESET STOK BELI
        menu_obat.acetaminophen = 0; menu_obat.acnes              = 0; menu_obat.acnol1     = 0; menu_obat.acnol2       = 0; menu_obat.antasida = 0;
        menu_obat.aspirin       = 0; menu_obat.betadine_mouthwash = 0; menu_obat.benzolac   = 0; menu_obat.bodrex       = 0; menu_obat.cataflam = 0;
        menu_obat.camaag_mint   = 0; menu_obat.cooling1           = 0; menu_obat.cooling2   = 0; menu_obat.degirol      = 0; menu_obat.dentasol = 0;
        menu_obat.derma         = 0; menu_obat.efisol             = 0; menu_obat.erha       = 0; menu_obat.eugenia      = 0;  menu_obat.troches = 0;  menu_obat.gumafixa    = 0;
        menu_obat.gastran       = 0; menu_obat.hexadol            = 0; menu_obat.ibuprofen  = 0; menu_obat.indomethacin = 0; menu_obat.inza     = 0;
        menu_obat.ketorolac     = 0; menu_obat.konidin            = 0; menu_obat.laserin    = 0; menu_obat.medi_klin    = 0; menu_obat.mylanta  = 0;
        menu_obat.naproxen      = 0; menu_obat.neozep             = 0; menu_obat.nutrimax   = 0; menu_obat.obh1         = 0; menu_obat.obh2     = 0; menu_obat.omeprazole   = 0;
        menu_obat.oskadon       = 0; menu_obat.paramex            = 0; menu_obat.polycrol   = 0; menu_obat.polysilane   = 0; menu_obat.ponstan  = 0; menu_obat.procold      = 0;
        menu_obat.promag        = 0; menu_obat.ranitidine         = 0; menu_obat.sanmol     = 0; menu_obat.siladex      = 0; menu_obat.sp       = 0; menu_obat.sumagesic    = 0;
        menu_obat.tantum        = 0; menu_obat.ultraflu           = 0; menu_obat.vicks      = 0; menu_obat.verile       = 0; menu_obat.vitacid  = 0; menu_obat.waisan       = 0;
        menu_obat.kasa          = 0; menu_obat.hansaplast         = 0; menu_obat.kapas      = 0; menu_obat.infus        = 0; menu_obat.betadine = 0; menu_obat.minyak       = 0;
}

//TAMPILAN AWAL PROGRAM
void home() {
    printf ("\n\n\t\t\t\t%c%c==============================================%c%c\n",219,223,223,219);
    printf ("\t\t\t\t%c<<<<<<<<<<<<<<<<<    WELCOME    >>>>>>>>>>>>>>>>%c\n",186,186);
    printf ("\t\t\t\t|================================================|\n");
    printf ("\t\t\t\t|   1   |  Registrasi                            |\n");
    printf ("\t\t\t\t|   2   |  Login                                 |\n");
    printf ("\t\t\t\t|   3   |  Mode Terminal                         |\n");
    printf ("\t\t\t\t|   4   |  Info Program                          |\n");
    printf ("\t\t\t\t%c   0   |  Keluar                                %c\n",186,186);
    printf ("\t\t\t\t%c%c==============================================%c%c\n",219,220,220,219);
	printf ("\t\t\t\t>> ");
	scanf("%d", &regislogin);
	fflush(stdin);

	switch (regislogin) {
		case 1 : {
			registrasi();
			login();
			break;
		}
		case 2 : {
			login();
			break;
		}
		case 3 : {
		    system("cls");
		    terminal();
                        break;
                }
                case 4 : {
		    system("cls");
		    info();
                    system("pause");
                    system("cls");
                    home();
                        break;
                }
                case 0 : {
                        exit(0);
                }
                default : {
                        system("cls");
                        home();
		}
        }
}

void terminal(){
    int nilai;

    printf ("\n\n\t\t\t\t%c%c==============================================%c%c\n",219,223,223,219);
    printf ("\t\t\t\t|   1   |  Light Blue (white)                    |\n");
    printf ("\t\t\t\t|   2   |  black (white)                         |\n");
    printf ("\t\t\t\t|   3   |  white (black)                         |\n");
    printf ("\t\t\t\t%c   0   |  Keluar                                %c\n",186,186);
    printf ("\t\t\t\t%c%c==============================================%c%c\n",219,220,220,219);
    printf ("\t\t\t\t>> ");
    scanf("%d", &nilai);

    switch (nilai) {
		case 1 : {
			system ("color 17");
			system("cls");
			home();
		}
			break;
		case 2 : {
			system ("color 07");
			system("cls");
			home();
		}
			break;
        case 3 : {
            system ("color 70");
            system("cls");
            home();
        }
		default: {
			menu();
			break;
		}
	}

}


void registrasi() {	//deklarasi fungsi void
    system("cls");

    printf ("\n\n\t\t\t\t%c%c==============================================%c%c\n",219,223,223,219);
    printf ("\t\t\t\t%c<<<<<<<<<<<<<<<<<  REGISTRASI  >>>>>>>>>>>>>>>>>%c\n",186,186);
    printf ("\t\t\t\t%c%c==============================================%c%c\n",219,220,220,219);
    printf ("\n");
    printf ("\t\t\t\tMasukkan nama lengkap : ");
    gets (Pengguna.namalengkap);	//memanggil array of char nama lengkap dengan spasi
    fflush (stdin);

    printf ("\t\t\t\tBuat username : ");
    scanf ("%s",&Pengguna.username);
    fflush (stdin);

    printf ("\t\t\t\tBuat password : ");
    scanf ("%[^\n]", &Pengguna.password);
    fflush (stdin);
    system ("cls");

    //Mencetak akun registrasi ke dalam file akun
    FILE *akun=fopen("akun.txt", "a");
    fprintf(akun,"Nama user: %s\n", Pengguna.namalengkap);
    fprintf(akun,"Username : %s\n", Pengguna.username);
    fprintf(akun,"Password : %s\n", Pengguna.password);
    fprintf(akun,"================================\n");

    strcpy(username, Pengguna.username);
    strcpy(password, Pengguna.password);
}


void cetak_login(){
        FILE *cetak= fopen ("catatan login.txt", "a+");
        time(&ambil_waktu);

        fprintf(cetak,"username : %s\n", username);
        fprintf(cetak,"Tanggal  : %s\n", ctime (&ambil_waktu));
}

void login() {

	system("cls");
	printf ("\n\n\t\t\t\t%c%c==============================================%c%c\n",219,223,223,219);
        printf ("\t\t\t\t%c<<<<<<<<<<<<<<<<<     LOGIN    >>>>>>>>>>>>>>>>>%c\n",186,186);
        printf ("\t\t\t\t%c%c==============================================%c%c\n",219,220,220,219);
	printf ("\n");
	printf ("\t\t\t\tMasukkan username : ");
	scanf ("%s", &inputusername);
	fflush (stdin);
	printf ("\t\t\t\tMasukkan password : ");
	scanf ("%s", &inputpassword);
	fflush (stdin);

	//basis
	if ((strcmp(username, inputusername) == 0 || strcmp(Pengguna.username, inputusername) == 0) && ( strcmp(password, inputpassword) == 0 || strcmp(Pengguna.password, inputpassword) == 0 )	){
		system ("cls");
		printf ("\n\n\t\t\t\t%c%c==============================================%c%c\n",219,223,223,219);
                printf ("\t\t\t\t%c<<<<<<<<<<<<<<<<<  S U K S E S  >>>>>>>>>>>>>>>>%c\n",186,186);
                printf ("\t\t\t\t%c%c==============================================%c%c\n",219,220,220,219);
		sleep(1);
		printf ("\t\t\t\t\t        Selamat  Datang  %s !\n\n\t\t\t\t", username);
		system ("\t\t\t\t\tpause");
		system ("cls");
                cetak_login();
		loading ();
		menu();
	}

	//rekurens
    else {
        system ("cls");
        printf ("\n\n\t\t\t\t%c%c==============================================%c%c\n",219,223,223,219);
        printf ("\t\t\t\t%c<<<<<<<<<<<<<<<<<   G A G A L   >>>>>>>>>>>>>>>>%c\n",186,186);
        printf ("\t\t\t\t%c%c==============================================%c%c\n",219,220,220,219);

        sleep(1);
        system ("pause");

        login();
	}
}

//PROSEDUR LOADING
void loading () {
    system ("cls");
	char loading1[55] = "\t\t\t\t|================================================|";
	int i;
	printf              ("\t\t\t\t                    loading...                  \n");
	for (i=0; i < 15; i++){
		Sleep(150);
		printf ("%c", loading1[i]);}
	for (i=15; i < 25; i++){
		Sleep(200);
		printf ("%c", loading1[i]);}
	for (i=25; i < 53; i++){
		Sleep(100);
		printf ("%c", loading1[i]);
	}

}

//PROSEDUR UNTUK MENAMPILKAN MENU PROGRAM
void menu() {
	system ("cls");
	int masukan;

	printf ("\n\n\t\t\t\t%c%c==============================================%c%c\n",219,223,223,219);
        printf ("\t\t\t\t%c<<<<<<<<<<<<<<<<  MENU PROGRAM  >>>>>>>>>>>>>>>>%c\n",186,186);
        printf ("\t\t\t\t|================================================|\n");
        printf ("\t\t\t\t|   No  |            Pilihan Menu                |\n");
        printf ("\t\t\t\t|-------|----------------------------------------|\n");
        printf ("\t\t\t\t|   1   |  Jenis Penyakit                        |\n");
        printf ("\t\t\t\t|   2   |  Pembelian Obat                        |\n");
        printf ("\t\t\t\t%c   0   |  Keluar                                %c\n",186,186);
        printf ("\t\t\t\t%c%c==============================================%c%c\n",219,220,220,219);
	printf ("\n");
	printf ("\t\t\t\t\t  Masukkan pilihan Anda : ");
	scanf ("%d", &masukan);
	fflush(stdin);

	switch (masukan) {
		case 1 : {
			jenis_penyakit();
			system ("pause");
			menu();
		}
			break;
		case 2 : {
			pembelian_obat();
			system ("pause");
			menu();
		}
		case 0 : {
            exit(0);
		}
			break;
		default: {
			menu();
			break;
		}
	}
}

void info(){
    printf ("\n\n\t\t\t\t%c%c=============================================================%c%c\n",219,223,223,219);
    printf ("\t\t\t\t%c<<<<<<<<<<<<<<<<<<<<<<<<< INFO PROGRAM >>>>>>>>>>>>>>>>>>>>>>>>%c\n",186,186);
    printf ("\t\t\t\t|===============================================================|\n");
    printf ("\t\t\t\t|                 PROGRAM MANAGEMENT PEMBELIAN OBAT             |\n");
    printf ("\t\t\t\t|                       DI APOTEK JAYA ABADI                    |\n");
    printf ("\t\t\t\t|===============================================================|\n");
    printf ("\t\t\t\t|                     PROGRAM INI DIBUAT OLEH                   |\n");
    printf ("\t\t\t\t|                           KELOMPOK 17                         |\n");
    printf ("\t\t\t\t|---------------------------------------------------------------|\n");
    printf ("\t\t\t\t|               NAMA              |             NIM             |\n");
    printf ("\t\t\t\t|---------------------------------------------------------------|\n");
    printf ("\t\t\t\t|[1] LAURENSIA DINI MARYS HARYANTO|          2205551028         |\n");
    printf ("\t\t\t\t|[2] NI PUTU SRI INDAH DAMAYANTI  |          2205551037         |\n");
    printf ("\t\t\t\t%c[3] ALFREDO FELIX MARUBA         |          2205551038         %c\n", 186,186);
    printf ("\t\t\t\t%c%c=============================================================%c%c\n",219,220,220,219);
}


void jenis_penyakit(){
    int penyakit, obat;
        char yakin;

    ulang1:
    system("cls");
    printf ("\n\n\t\t\t\t%c%c==============================================%c%c\n",219,223,223,219);
    printf ("\t\t\t\t%c<<<<<<<<<<<<<<<< JENIS PENYAKIT >>>>>>>>>>>>>>>>%c\n",186,186);
    printf ("\t\t\t\t|================================================|\n");
    printf ("\t\t\t\t|   No  |            Pilihan Menu                |\n");
    printf ("\t\t\t\t|-------|----------------------------------------|\n");
    printf ("\t\t\t\t|   1   |  Sakit Kepala                          |\n");
    printf ("\t\t\t\t|   2   |  Sakit Flu & Batuk                     |\n");
    printf ("\t\t\t\t|   3   |  Sakit Gigi                            |\n");
    printf ("\t\t\t\t|   4   |  Obat Jerawat                          |\n");
    printf ("\t\t\t\t|   5   |  Sakit Radang Tenggorokan              |\n");
    printf ("\t\t\t\t|   6   |  Sakit Maag                            |\n");
    printf ("\t\t\t\t%c   0   |  Back                                  %c\n",186,186    );
    printf ("\t\t\t\t%c%c==============================================%c%c\n",219,220,220,219);
    printf ("\t\t\t\t>> ");
    scanf("%d", &penyakit);

	switch (penyakit){
        case 0:
                menu();
        break;
        case 1:
        	o1:
            system("cls");
            printf("\t%c%c==========================================================================================================%c%c\n",219,223,223,219);
            printf("\t|No.| Nama Obat \t| Harga      |        \t\t|No.| Nama Obat\t\t\t         |   Harga   |\n");
            printf("\t|------------------------------------------------------------------------------------------------------------|\n");
            printf("\t| 1.| Aspirin\t\t|  Rp.16.800 |\t\t");
            printf("\t| 5.| Naproxen\t\t\t\t | Rp.335.000| \n");
            printf("\t| 2.| Ibuprofen\t\t|  Rp.7.900  |\t\t");
            printf("\t| 6.| Ketorolac\t\t\t\t | Rp.43.500 |\n");
            printf("\t| 3.| Acetaminophen \t|  Rp.5.200  |\t\t");
            printf("\t| 7.| Paramex SK\t\t\t | Rp.4.600  |\n");
            printf("\t| 4.| Indomethacin\t|  Rp.5.259  |\t\t");
            printf("\t| 8.| Oskadon\t\t\t\t | Rp.3.000  |\n");
            printf("\t|\t\t\t\t\t\t\t| 9.| Bodrex\t\t\t\t | Rp.4.000  |\n");
            printf("\t|------------------------------------------------------------------------------------------------------------|\n");
            printf("\t%c%c==========================================================================================================%c%c\n",219,220,220,219);
            printf("\n ");
            printf("\n\t99. Struk Pembayaran\n\t88. Reset pilihan\n\t55. Back\n\t00. Keluar\n");
            printf("\t===============================================\n");

            for (menuo.menuobat1!=0;menuo.menuobat1!=99;){
                printf("\t>> ");
                scanf("%d", &menuo.menuobat1);

                switch(menuo.menuobat1){
                        case 55:
                                goto ulang1;
                        break;
                        case 1:
                                printf("\n\t [1] Aspirin )\n");
                                printf("\tjumlah pesan =\t\t\t\t  ");
                                scanf("%d",&menu_obat.aspirin);
                                printf("\n\t===============================================\n");
                                sub.jmlbeli6=menu_obat.aspirin *16800;
                        break;
                        case 2:
                                printf("\n\t [2] Ibuprofen )\n");
                                printf("\tjumlah pesan =\t\t\t\t  ");
                                scanf("%d",&menu_obat.ibuprofen);
                                printf("\n\t===============================================\n");
                                sub.jmlbeli24=menu_obat.ibuprofen *7900;
                        break;
                        case 3:
                                printf("\n\t [3] Acetaminophen )\n");
                                printf("\tjumlah pesan =\t\t\t\t  ");
                                scanf("%d",&menu_obat.acetaminophen);
                                printf("\n\t===============================================\n");
                                sub.jmlbeli1=menu_obat.acetaminophen *5200;
                        break;
                        case 4:
                                printf("\n\t [4] Indomethacin )\n");
                                printf("\tjumlah pesan =\t\t\t\t  ");
                                scanf("%d",&menu_obat.indomethacin);
                                printf("\n\t===============================================\n");
                                sub.jmlbeli25=menu_obat.indomethacin *5259;
                        break;
                        case 5:
                                printf("\n\t [5] Naproxen )\n");
                                printf("\tjumlah pesan =\t\t\t\t  ");
                                scanf("%d",&menu_obat.naproxen);
                                printf("\n\t===============================================\n");
                                sub.jmlbeli32=menu_obat.naproxen *335000;
                        break;
                        case 6:
                                printf("\n\t [6] Ketorolac )\n");
                                printf("\tjumlah pesan =\t\t\t\t  ");
                                scanf("%d",&menu_obat.ketorolac);
                                printf("\n\t===============================================\n");
                                sub.jmlbeli27=menu_obat.ketorolac *43500;
                        break;
                        case 7:
                                printf("\n\t [7] Paramex SK )\n");
                                printf("\tjumlah pesan =\t\t\t\t  ");
                                scanf("%d",&menu_obat.paramex);
                                printf("\n\t===============================================\n");
                                sub.jmlbeli39=menu_obat.paramex *4600;
                        break;
                        case 8:
                                printf("\n\t [8] Oskadon )\n");
                                printf("\tjumlah pesan =\t\t\t\t  ");
                                scanf("%d",&menu_obat.oskadon);
                                printf("\n\t===============================================\n");
                                sub.jmlbeli38=menu_obat.oskadon *3000;
                        break;
                        case 9:
                                printf("\n\t [9] Bodrex )\n");
                                printf("\tjumlah pesan =\t\t\t\t  ");
                                scanf("%d",&menu_obat.bodrex);
                                printf("\n\t===============================================\n");
                                sub.jmlbeli9=menu_obat.bodrex *4000;
                        break;
                        case 99:
                                Penghitungan();  //memanggil fungsi penghitungan
                        break;
                        case 88:
                                system("cls");  //cls untuk membuat layar menjadi kosong
                                goto o1;  //me-reset pilihan user
                        break;
                        case 00:
                        peyakinan:
                                system("cls");
                                printf("Apakah anda yakin ingin keluar?\n\n[input Y untuk Ya]\t[input T untuk Tidak]\n\n");
                                printf("Input Pilihan \t\t\t\t");
                                scanf("%s",&yakin);

                                if (yakin=='Y'||yakin=='y') //user yakin untuk menutup program
                                {
                                        system("cls");
                                        printf("\t\t- Terima Kasih atas kunjungan Anda -\n\n");
                                        system("pause");
                                        exit(0);
                                }
                                 else if (yakin=='T'||yakin=='t')  //user membatalkan penutupan program
                                {
                                         system("cls");
                                         goto o1;
                                }
                                 else  //inputan user bukan Y atau T
                                {
                                         printf("\nKesalahan inputan\n\n");
                                         system("pause");
                                        goto peyakinan;
                                }

                        break;
                        default: //bila user menginputkan tidak sesuai pilihan nomor yang ada
                        printf("Kesalahan inputan, menu no.%d tidak ada dalam daftar\n",menuo.menuobat1);
                        printf("- Silakan input kembali\n");
                        break;
                }
            }
        break;

        case 2:
        o2:
            system("cls");
            printf("\t%c%c==============================================================================================%c%c\n",219,223,223,219);
            printf("\t|No.| Nama Obat \t | Harga     |\t\t|No.| Nama Obat\t\t\t   |  Harga      |\n");
            printf("\t|------------------------------------------------------------------------------------------------|\n");
            printf("\t| 1.| Procold\t\t | Rp.4.200  |\t");
            printf("\t| 7.| OBH Combi\t\t\t   |  Rp.16.000  |\n");
            printf("\t| 2.| Konidin\t\t | Rp.2.800  |\t");
            printf("\t| 8.| OBH Combi Anak\t\t   |  Rp.18.000  |\n");
            printf("\t| 3.| Ultraflu\t\t | Rp.4.300  |\t");
            printf("\t| 9.| Siladex Cough\t\t   |  Rp.17.000  |\n");
            printf("\t| 4.| Inza\t\t | Rp.3.200  |\t");
            printf("\t|10.| Vicks Formula 44\t\t   |  Rp.20.100  |\n");
            printf("\t| 5.| Sanmol\t\t | Rp.2.700  |\t");
            printf("\t|11.| Neozep Forte\t\t   |  Rp.3.100   |\n");
            printf("\t| 6.| Laserin \t\t | Rp.28.800 |\t\t\t\t\t\t\t\t |\n");
            printf("\t|------------------------------------------------------------------------------------------------|\n");
            printf("\t%c%c==============================================================================================%c%c\n\n",219,220,220,219);
            printf("\n\t99. Struk Pembayaran\n\t88. Reset pilihan\n\t55. Back\n\t00. Keluar\n");
            printf("\t===============================================\n");

            for (menuo.menuobat2!=0;menuo.menuobat2!=99;){
                printf("\t>> ");
                scanf("%d", &menuo.menuobat2);

                switch(menuo.menuobat2){
                case 55:
                        goto ulang1;
                        break;
                case 1:
                        printf("\n\t [1] Procold )\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.procold);
                        printf("\n===============================================\n");
                        sub.jmlbeli43=menu_obat.procold *4200;
                break;
                case 2:
                        printf("\n\t [2] Konidin )\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.konidin);
                        printf("\n===============================================\n");
                        sub.jmlbeli28=menu_obat.konidin *2800;
                break;
                case 3:
                        printf("\n\t [3] Ultraflu )\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.ultraflu);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli51=menu_obat.ultraflu *4300;
                break;
                case 4:
                        printf("\n\t [4] Inza )\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.inza);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli26=menu_obat.inza *3200;
                break;
                case 5:
                        printf("\n\t [5] Sanmol )\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.sanmol);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli46=menu_obat.sanmol *2700;
                break;
                case 6:
                        printf("\n\t [6] Laserin)\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.laserin);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli29=menu_obat.laserin *28800;
                break;
                case 7:
                        printf("\n\t [7] OBH Combi)\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.obh1);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli35=menu_obat.obh1 *16000;
                break;
                case 8:
                        printf("\n\t [8] OBH Combi Anak)\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.obh2);
                        printf("\n===============================================\n");
                        sub.jmlbeli36=menu_obat.obh2 *18000;
                break;
                case 9:
                        printf("\n\t [9] Siladex Cough)\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.siladex);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli47=menu_obat.siladex *17000;
                break;
                case 10:
                        printf("\n\t [10] Vicks Formula 44)\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.vicks);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli52=menu_obat.vicks *20100;
                break;
                case 11:
                        printf("\n\t [11] Neozep Forte)\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.neozep);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli33=menu_obat.neozep *3100;
                break;
                case 99:
                        Penghitungan();  //memanggil fungsi penghitungan
                break;
                case 88:
                        system("cls");  //cls untuk membuat layar menjadi kosong
                        goto o2;  //me-reset pilihan user
                break;
                case 00:
                peyakinan1:
                        system("cls");
                        printf("Apakah anda yakin ingin keluar?\n\n[input Y untuk Ya]\t[input T untuk Tidak]\n\n");
                        printf("Input Pilihan \t\t\t\t");
                        scanf("%s",&yakin);

                        if (yakin=='Y'||yakin=='y') //user yakin untuk menutup program
                        {
                                system("cls");
                                printf("\t\t- Terima Kasih atas kunjungan Anda -\n\n");
                                system("pause");
                                exit(0);
                        }
                        else if (yakin=='T'||yakin=='t')  //user membatalkan penutupan program
                        {
                                system("cls");
                                goto o2;
                        }
                        else  //inputan user bukan Y atau T
                        {
                                printf("\nKesalahan inputan\n\n");
                                system("pause");
                                goto peyakinan1;
                        }

                        break;
                        default: //bila user menginputkan tidak sesuai pilihan nomor yang ada
                        printf("Kesalahan inputan, menu no.%d tidak ada dalam daftar\n",menuo.menuobat2);
                        printf("- Silakan input kembali\n");
                        break;
                }
            }
        break;

        case 3:
        o3:
            system("cls");
            printf("\t%c%c==============================================================================================%c%c\n",219,223,223,219);
            printf("\t|No.| Nama Obat \t| Harga      |\t\t\t|No.| Nama Obat\t\t |     Harga     |\n");
            printf("\t|------------------------------------------------------------------------------------------------|\n");
            printf("\t| 1.| Betadine Mouthwash|  Rp.38.500 |\t\t");
            printf("\t| 5.| Eugenia Dental\t | Rp.17.199     |\n");
            printf("\t| 2.| Ponstan\t\t|  Rp.40.000 |\t\t");
            printf("\t| 6.| Cooling 5 Plus\t | Rp.45.332     |\n");
            printf("\t| 3.| Dentasol\t\t|  Rp.25.000 |\t\t");
            printf("\t| 7.| Cataflam\t\t | Rp.9.000      |\n");
            printf("\t| 4.| Gumafixa\t\t|  Rp.250.000|\t\t");
            printf("\t| 8.| Sumagesic\t\t | Rp.12.000     |\n");
            printf("\t|------------------------------------------------------------------------------------------------|\n");
            printf("\t%c%c==============================================================================================%c%c\n",219,220,220,219);
            printf("\n\t99. Struk Pembayaran\n\t88. Reset pilihan\n\t55. Back\n\t00. Keluar\n");
            printf("\t===============================================\n");

            for (menuo.menuobat3!=0;menuo.menuobat3!=99;){
                printf("\t>> ");
                scanf("%d", &menuo.menuobat3);

            switch(menuo.menuobat3){
                case 55:
                        goto ulang1;
                        break;
                case 1:
                        printf("\n\t [1] Betadine Mouthwash)\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.betadine_mouthwash);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli7=menu_obat.betadine_mouthwash *38500;
                break;
                case 2:
                        printf("\n\t [2] Ponstan)\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.ponstan);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli42=menu_obat.ponstan *40000;
                break;
                case 3:
                        printf("\n\t [3] Dentasol)\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.dentasol);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli15=menu_obat.dentasol *25000;
                break;
                case 4:
                        printf("\n\t [4] Gumafixa)\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.gumafixa);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli21=menu_obat.gumafixa *250000;
                break;
                case 5:
                        printf("\n\t [5] Eugenia Dental)\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.eugenia);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli21=menu_obat.eugenia *17199;
                break;
                case 6:
                        printf("\n\t [6] Cooling 5 Plus )\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.cooling1);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli12=menu_obat.cooling1 *45332;
                break;
                case 7:
                        printf("\n\t [7] Cataflam)\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.cataflam);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli10=menu_obat.cataflam *9000;
                break;
                case 8:
                        printf("\n\t [8] Sumagesic)\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.sumagesic);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli49=menu_obat.sumagesic *12000;
                case 99:
                        Penghitungan();  //memanggil fungsi penghitungan
                break;
                case 88:
                        system("cls");  //cls untuk membuat layar menjadi kosong
                        goto o3;  //me-reset pilihan user
                break;
                case 00:
                peyakinan2:
                        system("cls");
                        printf("Apakah anda yakin ingin keluar?\n\n[input Y untuk Ya]\t[input T untuk Tidak]\n\n");
                        printf("Input Pilihan \t\t\t\t");
                        scanf("%s",&yakin);

                        if (yakin=='Y'||yakin=='y') //user yakin untuk menutup program
                        {
                                system("cls");
                                printf("\t\t- Terima Kasih atas kunjungan Anda -\n\n");
                                system("pause");
                                exit(0);
                        }
                        else if (yakin=='T'||yakin=='t')  //user membatalkan penutupan program
                        {
                                system("cls");
                                goto o3;
                        }
                        else  //inputan user bukan Y atau T
                        {
                                printf("\nKesalahan inputan\n\n");
                                system("pause");
                                goto peyakinan2;
                        }

                break;
                default: //bila user menginputkan tidak sesuai pilihan nomor yang ada
                printf("Kesalahan inputan, menu no.%d tidak ada dalam daftar\n",menuo.menuobat3);
                printf("- Silakan input kembali\n");
                break;
                }
        }
        break;

        case 4:
            o4:
            system("cls");
            printf("\t%c%c==============================================================================================%c%c\n",219,223,223,219);
            printf("\t|No.| Nama Obat \t| Harga       |\t\t   |No.| Nama Obat\t\t |   Harga   |\n");
            printf("\t|------------------------------------------------------------------------------------------------|\n");
            printf("\t| 1.| Acnes Sealing Jell|  Rp.29.000 |\t\t");
            printf("\t| 6.| Erha Acne Spot Gel\t|  Rp.50.000 |\n");
            printf("\t| 2.| Acnol Lotion\t|  Rp.15.000 |\t\t");
            printf("\t| 7.| Benzolac - CL\t\t|  Rp.35.000 |\n");
            printf("\t| 3.| Acnol Agne Gel\t|  Rp.25.300 |\t\t");
            printf("\t| 8.| Vitacid\t\t\t|  Rp.30.000 |\n");
            printf("\t| 4.| Medi-Klin\t\t|  Rp.45.000 |\t\t");
            printf("\t| 9.| Derma Angel\t\t|  Rp.45.300 |\n");
            printf("\t| 5.| Verile Acne Gel\t|  Rp.33.100 |\t\t\t\t\t\t|\n");
            printf("\t|---------------------------------------------------------------------------------------------\n");
            printf("\t%c%c==========================================================================================================%c%c\n",219,220,220,219);
            printf("\n\t99. Struk Pembayaran\n\t88. Reset pilihan\n\t55. Back\n\t00. Keluar\n");
            printf("\t===============================================\n");
            for (menuo.menuobat4!=0;menuo.menuobat4!=99;){
            printf("\t>> ");
            scanf("%d", &menuo.menuobat4);

            switch(menuo.menuobat4){
                case 55:
                        goto ulang1;
                        break;
                case 1:
                        printf("\n\t [1] Acnes Sealing Jell )\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.acnes);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli2=menu_obat.acnes *29000;
                break;
                case 2:
                        printf("\n\t [2] Acnol Lotion )\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.acnol1);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli3=menu_obat.acnol1 *15000;
                break;
                case 3:
                        printf("\n\t [3] Acnol Acne Gel )\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.acnol2);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli4=menu_obat.acnol2 *25300;
                break;
                case 4:
                        printf("\n\t [4] Medi-Klin )\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.medi_klin);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli30=menu_obat.medi_klin *45000;
                break;
                case 5:
                        printf("\n\t [5] Verile Acne Gel )\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.verile);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli53=menu_obat.verile *33100;
                break;
                case 6:
                        printf("\n\t [6] Erha Acne Spot Gel )\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.erha);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli18=menu_obat.erha *50000;
                break;
                case 7:
                        printf("\n\t [7] Benzolac - CL )\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.benzolac);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli8=menu_obat.benzolac *35000;
                break;
                case 8:
                        printf("\n\t [8] Vitacid )\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.vitacid);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli54=menu_obat.vitacid *30000;
                break;
                case 9:
                        printf("\n\t [9] Derma Angel )\n");
                        printf("\tjumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.derma);
                        printf("\n\t===============================================\n");
                        sub.jmlbeli16=menu_obat.derma *45300;
                 case 99:
                        Penghitungan();  //memanggil fungsi penghitungan
                break;
                case 88:
                        system("cls");  //cls untuk membuat layar menjadi kosong
                        goto o4;  //me-reset pilihan user
                break;
                case 00:
                peyakinan3:
                        system("cls");
                        printf("Apakah anda yakin ingin keluar?\n\n[input Y untuk Ya]\t[input T untuk Tidak]\n\n");
                        printf("Input Pilihan \t\t\t\t");
                        scanf("%s",&yakin);

                        if (yakin=='Y'||yakin=='y') //user yakin untuk menutup program
                        {
                                system("cls");
                                printf("\t\t- Terima Kasih atas kunjungan Anda -\n\n");
                                system("pause");
                                exit(0);
                        }
                        else if (yakin=='T'||yakin=='t')  //user membatalkan penutupan program
                        {
                                system("cls");
                                goto o4;
                        }
                        else  //inputan user bukan Y atau T
                        {
                                printf("\nKesalahan inputan\n\n");
                                system("pause");
                                goto peyakinan3;
                        }

                break;
                default: //bila user menginputkan tidak sesuai pilihan nomor yang ada
                printf("Kesalahan inputan, menu no.%d tidak ada dalam daftar\n",menuo.menuobat4);
                printf("- Silakan input kembali\n");
                break;
            }
        }
        break;

        case 5:
            o5:
            printf("==============================================================================================\n");
            printf("|No.| Nama Obat \t| Harga      |\t\t|No.| Nama Obat\t\t\t |   Harga   |\n");
            printf("|---------------------------------------------------------------------------------------------\n");
            printf("| 1.| FG Troches Meiji\t| Rp.16.000  |\t\t");
            printf("| 5.| SP Troches Meiji\t\t | Rp.17.600 |\n");
            printf("| 2.| Nutrimax C&C Syrup| Rp.128.000 |\t\t");
            printf("| 6.| Efisol Loz\t\t | Rp.30.000 |\n");
            printf("| 3.| Tantum Lozenges\t| Rp.34.000  |\t\t");
            printf("| 7.| Degirol\t\t\t | Rp.14.500 |\n");
            printf("| 4.| Cooling 5 Spray\t| Rp.36.000  |\t\t");
            printf("| 8.| Hexadol\t\t\t | Rp.41.000 |\n");
            printf("|---------------------------------------------------------------------------------------------\n");
            printf("\n99. Struk Pembayaran\n88. Reset pilihan\n55. Back\n00. Keluar\n");
            printf("===============================================\n");
            for (menuo.menuobat5!=0;menuo.menuobat5!=99;){
            printf(">> ");
            scanf("%d", &menuo.menuobat5);

            switch(menuo.menuobat5){
                case 55:
                        goto ulang1;
                        break;
                case 1:
                        printf("\n [1] FG Troches Meiji)\n");
                        printf("jumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.troches);
                        printf("\n===============================================\n");
                        sub.jmlbeli20=menu_obat.troches *16000;
                break;
                case 2:
                        printf("\n [2] Nutrimax C&C Syrup)\n");
                        printf("jumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.nutrimax);
                        printf("\n===============================================\n");
                        sub.jmlbeli34=menu_obat.nutrimax *128000;
                break;
                case 3:
                        printf("\n [3] Tantum Lozenges)\n");
                        printf("jumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.tantum);
                        printf("\n===============================================\n");
                        sub.jmlbeli50=menu_obat.tantum *34000;
                break;
                case 4:
                        printf("\n [4] Cooling 5 Spray)\n");
                        printf("jumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.cooling2);
                        printf("\n===============================================\n");
                        sub.jmlbeli13=menu_obat.cooling2 *36000;
                break;
                case 5:
                        printf("\n [5] SP Troches Meiji)\n");
                        printf("jumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.sp);
                        printf("\n===============================================\n");
                        sub.jmlbeli48=menu_obat.sp *17600;
                break;
                case 6:
                        printf("\n [6] Efisol Loz )\n");
                        printf("jumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.efisol);
                        printf("\n===============================================\n");
                        sub.jmlbeli17=menu_obat.efisol *30000;
                break;
                case 7:
                        printf("\n [7] Degirol)\n");
                        printf("jumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.degirol);
                        printf("\n===============================================\n");
                        sub.jmlbeli14=menu_obat.degirol *14500;
                break;
                case 8:
                        printf("\n [8] Hexadol)\n");
                        printf("jumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.hexadol);
                        printf("\n===============================================\n");
                        sub.jmlbeli23=menu_obat.hexadol *41000;
                break;
                case 99:
                        Penghitungan();  //memanggil fungsi penghitungan
                break;
                case 88:
                        system("cls");  //cls untuk membuat layar menjadi kosong
                        goto o5;  //me-reset pilihan user
                break;
                case 00:
                peyakinan4:
                        printf("Apakah anda yakin ingin keluar?\n\n[input Y untuk Ya]\t[input T untuk Tidak]\n\n");
                        printf("Input Pilihan \t\t\t\t");
                        scanf("%s",&yakin);

                        if (yakin=='Y'||yakin=='y') //user yakin untuk menutup program
                        {
                                system("cls");
                                printf("\t\t- Terima Kasih atas kunjungan Anda -\n\n");
                                system("pause");
                                exit(0);
                        }
                        else if (yakin=='T'||yakin=='t')  //user membatalkan penutupan program
                        {
                                system("cls");
                                goto o5;
                        }
                        else  //inputan user bukan Y atau T
                        {
                                printf("\nKesalahan inputan\n\n");
                                system("pause");
                                goto peyakinan4;
                        }

                break;
                default: //bila user menginputkan tidak sesuai pilihan nomor yang ada
                printf("Kesalahan inputan, menu no.%d tidak ada dalam daftar\n",menuo.menuobat);
                printf("- Silakan input kembali\n");
                break;
            }
        }
        break;

        case 6:
            o6:
            printf("==============================================================================================\n");
            printf("|No.| Nama Obat \t| Harga      |\t\t|No.| Nama Obat\t\t\t |   Harga   |\n");
            printf("|---------------------------------------------------------------------------------------------\n");
            printf("| 1.| Promag\t\t| Rp.9.000   |\t\t");
            printf("| 6.| Gastran\t\t\t | Rp.8.402  |\n");
            printf("| 2.| Antasida Doen\t| Rp.13.500  |\t\t");
            printf("| 7.| Polysilane\t\t | Rp.9.500  |\n");
            printf("| 3.| Waisan\t\t| Rp.15.000  |\t\t");
            printf("| 8.| Ranitidine\t\t | Rp.5.600  |\n");
            printf("| 4.| Camaag Mint\t| Rp.71.820  |\t\t");
            printf("| 9.| Polycrol\t\t\t | Rp.10.900 |\n");
            printf("| 5.| Mylanta\t\t| Rp.18.500  |\t\t");
            printf("|10.| Omeprazole \t\t | Rp.12.300 |\n");
            printf("|---------------------------------------------------------------------------------------------\n");
            printf("\n99. Struk Pembayaran\n88. Reset pilihan\n55. Back\n00. Keluar\n");
            printf("===============================================\n");
            for (menuo.menuobat6!=0;menuo.menuobat6!=99;){
                printf(">> ");
                scanf("%d", &menuo.menuobat6);

            switch(menuo.menuobat6){
                case 55:
                        goto ulang1;
                        break;
                case 1:
                        printf("\n [1] Promag)\n");
                        printf("jumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.promag);
                        printf("\n===============================================\n");
                        sub.jmlbeli44=menu_obat.promag *9000;
                break;
                case 2:
                        printf("\n [2] Antasida Doen)\n");
                        printf("jumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.antasida);
                        printf("\n===============================================\n");
                        sub.jmlbeli5=menu_obat.antasida *13500;
                break;
                case 3:
                        printf("\n [3] Waisan)\n");
                        printf("jumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.waisan);
                        printf("\n===============================================\n");
                        sub.jmlbeli55=menu_obat.waisan *15000;
                break;
                case 4:
                        printf("\n [4] Camaag Mint)\n");
                        printf("jumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.camaag_mint);
                        printf("\n===============================================\n");
                        sub.jmlbeli11=menu_obat.camaag_mint *71820;
                break;
                case 5:
                        printf("\n [5] Mylanta)\n");
                        printf("jumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.mylanta);
                        printf("\n===============================================\n");
                        sub.jmlbeli31=menu_obat.mylanta *18500;
                break;
                case 6:
                        printf("\n [6] Gastran )\n");
                        printf("jumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.gastran);
                        printf("\n===============================================\n");
                        sub.jmlbeli22=menu_obat.gastran *8402;
                break;
                case 7:
                        printf("\n [7] Polysilane)\n");
                        printf("jumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.polysilane);
                        printf("\n===============================================\n");
                        sub.jmlbeli41=menu_obat.polysilane *9500;
                break;
                case 8:
                        printf("\n [8] Ranitidine)\n");
                        printf("jumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.ranitidine);
                        printf("\n===============================================\n");
                        sub.jmlbeli45=menu_obat.ranitidine *5600;
                break;
                 case 9:
                        printf("\n [9] Polycrol)\n");
                        printf("jumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.polycrol);
                        printf("\n===============================================\n");
                        sub.jmlbeli40=menu_obat.polycrol *10900;
                break;
                case 10:
                        printf("\n [10] Omeprazole)\n");
                        printf("jumlah pesan =\t\t\t\t  ");
                        scanf("%d",&menu_obat.omeprazole);
                        printf("\n===============================================\n");
                        sub.jmlbeli37=menu_obat.omeprazole *12300;
                break;
                  case 99:
                        Penghitungan();  //memanggil fungsi penghitungan
                break;
                case 88:
                        system("cls");  //cls untuk membuat layar menjadi kosong
                        goto o6;  //me-reset pilihan user
                break;
                case 00:
                peyakinan5:
                        printf("Apakah anda yakin ingin keluar?\n\n[input Y untuk Ya]\t[input T untuk Tidak]\n\n");
                        printf("Input Pilihan \t\t\t\t");
                        scanf("%s",&yakin);

                        if (yakin=='Y'||yakin=='y') //user yakin untuk menutup program
                        {
                                system("cls");
                                printf("\t\t- Terima Kasih atas kunjungan Anda -\n\n");
                                system("pause");
                                exit(0);
                        }
                        else if (yakin=='T'||yakin=='t')  //user membatalkan penutupan program
                        {
                                system("cls");
                                goto o6;
                        }
                        else  //inputan user bukan Y atau T
                        {
                                printf("\nKesalahan inputan\n\n");
                                system("pause");
                                goto peyakinan5;
                        }

                break;
                default: //bila user menginputkan tidak sesuai pilihan nomor yang ada
                printf("Kesalahan inputan, menu no.%d tidak ada dalam daftar\n",menuo.menuobat);
                printf("- Silakan input kembali\n");
                break;
            }
        }
        break;
        }
}


void pembelian_obat(){
    int pembelian;
    char yakin;
    system("cls");

    printf("==============================================================================================\n");
    printf("|No.| Nama Obat \t| Harga      |\t\t|No.| Nama Obat\t\t\t |   Harga   |\n");
    printf("|---------------------------------------------------------------------------------------------\n");
    printf("| 1.| Acetaminophen \t|  Rp.5.200  |\t\t");
    printf("|32.| Naproxen\t\t\t | Rp.335.000| \n");
    printf("| 2.| Acnes Sealing Jell|  Rp.29.000 |\t\t");
    printf("|33.| Neozep Forte\t\t | Rp.3.100  |\n");
    printf("| 3.| Acnol Lotion\t|  Rp.15.000 |\t\t");
    printf("|34.| Nutrimax C&C Syrup\t | Rp.128.000|\n");
    printf("| 4.| Acnol  acne gel\t|  Rp.25.300 |\t\t");
    printf("|35.| OBH Combi\t\t\t | Rp.16.000 |\n");
    printf("| 5.| Antasida Doen\t|  Rp.13.500 |\t\t");
    printf("|36.| OBH Combi Anak\t\t | Rp.18.000 |\n");
    printf("| 6.| Aspirin\t\t|  Rp.16.800 |\t\t");
    printf("|37.| Omeprazole \t\t | Rp.12.300 |\n");
    printf("| 7.| Betadine Mouthwash|  Rp.38.500 |\t\t");
    printf("|38.| Oskadon\t\t\t | Rp.3.000  |\n");
    printf("| 8.| Benzolac - CL\t|  Rp.35.000 |\t\t");
    printf("|39.| Paramex SK\t\t | Rp.4.600  |\n");
    printf("| 9.| Bodrex\t\t|  Rp.4.000  |\t\t");
    printf("|40.| Polycrol\t\t\t | Rp.10.900 |\n");
    printf("|10.| Cataflam\t\t|  Rp.9.000  |\t\t");
    printf("|41.| Polysilane\t\t | Rp.9.500  |\n");
    printf("|11.| Camaag Mint\t|  Rp.71.820 |\t\t");
    printf("|42.| Ponstan\t\t\t | Rp.40.000 |\n");
    printf("|12.| Cooling 5 Plus\t|  Rp.45.332 |\t\t");
    printf("|43.| Procold\t\t\t | Rp.4.200  |\n");
    printf("|13.| Cooling 5 Spray\t|  Rp.36.000 |\t\t");
    printf("|44.| Promag\t\t\t | Rp.9.000  |\n");
    printf("|14.| Degirol\t\t|  Rp.14.500 |\t\t");
    printf("|45.| Ranitidine\t\t | Rp.5.600  |\n");
    printf("|15.| Dentasol\t\t|  Rp.25.000 |\t\t");
    printf("|46.| Sanmol\t\t\t | Rp.2.700  |\n");
    printf("|16.| Derma Angel\t|  Rp.45.300 |\t\t");
    printf("|47.| Siladex Cough\t\t | Rp.17.000 |\n");
    printf("|17.| Efisol Loz\t|  Rp.30.000 |\t\t");
    printf("|48.| SP Troches Meiji\t\t | Rp.17.600 |\n");
    printf("|18.| Erha Acne Spot Gel|  Rp.50.000 |\t\t");
    printf("|49.| Sumagesic\t\t\t | Rp.12.000 |\n");
    printf("|19.| Eugenia Dental\t|  Rp.17.199 |\t\t");
    printf("|50.| Tantum Lozenges\t\t | Rp.34.000 |\n");
    printf("|20.| FG Troches Meiji\t|  Rp.16.000 |\t\t");
    printf("|51.| Ultraflu\t\t\t | Rp.4.300  |\n");
    printf("|21.| Gumafixa\t\t|  Rp.250.000|\t\t");
    printf("|52.| Vicks Formula 44\t\t | Rp.20.100 |\n");
    printf("|22.| Gastran\t\t|  Rp.8.402  |\t\t");
    printf("|53.| Verile Acne Gel\t\t | Rp.33.100 |\n");
    printf("|23.| Hexadol\t\t|  Rp.41.000 |\t\t");
    printf("|54.| Vitacid\t\t\t | Rp.30.000 |\n");
    printf("|24.| Ibuprofen\t\t|  Rp.7.900  |\t\t");
    printf("|55.| Waisan\t\t\t | Rp.15.000 |\n");
    printf("|25.| Indomethacin\t|  Rp.5.259  |\t\t");
    printf("|56.| Kasa Steril\t\t | Rp.8.733  |\n");
    printf("|26.| Inza\t\t|  Rp.3.200  |\t\t");
    printf("|57.| Hansaplast\t\t | Rp.16.000 |\n");
    printf("|27.| Ketorolac\t\t|  Rp.43.500 |\t\t");
    printf("|58.| Kapas Pembalut\t\t | Rp.18.000 |\n");
    printf("|28.| Konidin\t\t|  Rp.2.800  |\t\t");
    printf("|59.| Infus\t\t\t | Rp.12.000 |\n");
    printf("|29.| Laserin \t\t|  Rp.28.800 |\t\t");
    printf("|60.| Betadine\t\t\t | Rp.6.500  |\n");
    printf("|30.| Medi-Klin\t\t|  Rp.45.000 |\t\t");
    printf("|61.| Minyak Kayu Putih\t\t | Rp.46.000 |\n");
    printf("|31.| Mylanta\t\t|  Rp.18.500 |\n");
    printf("\n====================================================================");
    printf("\n ");
    printf("\n99. Struk Pembayaran\n88. Reset pilihan\n00. Keluar\n66. Back\n");
    printf("===============================================\n");

    for (menuo.menuobat!=0;menuo.menuobat!=99;){

 printf("\nInput pilihan yang Anda inginkan:         ");
 scanf("%d",&menuo.menuobat);
 //input user dengan scanf
 //switch case pilihan yang akan ditampilkan sesuai nomor
    switch(menuo.menuobat) {
    case 1:
            printf("\n [1] Acetaminophen (Paracetamol)\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.acetaminophen);
            printf("\n===============================================\n");
            sub.jmlbeli1=menu_obat.acetaminophen *5200;
            break;

    case 2:
            printf("\n [2] Acnes Sealing Jell\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.acnes);
            printf("\n===============================================\n");
            sub.jmlbeli2=menu_obat.acnes *29000;
            break;

    case 3:
            printf("\n [3] Acnol Lotion\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.acnol1);
            printf("\n===============================================\n");
            sub.jmlbeli3=menu_obat.acnol1 *15000;
            break;

    case 4:
            printf("\n [4] Acnol Acne Gel\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.acnol2);
            printf("\n===============================================\n");
            sub.jmlbeli4=menu_obat.acnol2 *25300;
            break;

    case 5:
            printf("\n [5] Antasida Doen \n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.antasida);
            printf("\n===============================================\n");
            sub.jmlbeli5=menu_obat.antasida *13500;
            break;

    case 6:
            printf("\n [6] Aspirin \n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.aspirin);
            printf("\n===============================================\n");
            sub.jmlbeli6=menu_obat.aspirin *16800;
            break;

    case 7:
            printf("\n [7] Betadine Mouthwash\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.betadine_mouthwash);
            printf("\n===============================================\n");
            sub.jmlbeli7=menu_obat.betadine_mouthwash *38500;
            break;

    case 8:
            printf("\n [8] Benzolac - CL\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.benzolac);
            printf("\n===============================================\n");
            sub.jmlbeli8=menu_obat.benzolac *35000;
            break;

    case 9:
            printf("\n [9] Bodrex\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.bodrex);
            printf("\n===============================================\n");
            sub.jmlbeli9=menu_obat.bodrex *4000;
            break;

    case 10:
            printf("\n [10] Cataflam\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.cataflam);
            printf("\n===============================================\n");
            sub.jmlbeli10=menu_obat.cataflam *9000;
            break;

    case 11:
            printf("\n [11] Camaag mint\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.camaag_mint);
            printf("\n===============================================\n");
            sub.jmlbeli11=menu_obat.camaag_mint *71820;
            break;

    case 12:
            printf("\n [12] cooling 5 Plus\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.cooling1);
            printf("\n===============================================\n");
            sub.jmlbeli12=menu_obat.cooling1 *45332;
            break;

    case 13:
            printf("\n [13] Cooling 5 Spray\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.cooling2);
            printf("\n===============================================\n");
            sub.jmlbeli13=menu_obat.cooling2 *36000;
            break;

    case 14:
            printf("\n [14] Degirol\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.degirol);
            printf("\n===============================================\n");
            sub.jmlbeli14=menu_obat.degirol *14500;
            break;

    case 15:
            printf("\n [15] Dentasol\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.dentasol);
            printf("\n===============================================\n");
            sub.jmlbeli15=menu_obat.dentasol *25000;
            break;

    case 16:
            printf("\n [16] Derma Angel\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.derma);
            printf("\n===============================================\n");
            sub.jmlbeli15=menu_obat.derma *45300;
            break;

    case 17:
            printf("\n [17] Efisol Loz\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.efisol);
            printf("\n===============================================\n");
            sub.jmlbeli17=menu_obat.efisol *30000;
            break;

    case 18:
            printf("\n [18] Erha Acne Spot Gel\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.erha);
            printf("\n===============================================\n");
            sub.jmlbeli18=menu_obat.erha *50000;
            break;

    case 19:
            printf("\n [19] Eugenia Dental\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.eugenia);
            printf("\n===============================================\n");
            sub.jmlbeli19=menu_obat.eugenia *17199;
            break;

    case 20:
            printf("\n [20] FG Troches Meiji\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.troches);
            printf("\n===============================================\n");
            sub.jmlbeli20=menu_obat.troches *16000;
            break;

    case 21:
            printf("\n [21] Gumafixa\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.gumafixa);
            printf("\n===============================================\n");
            sub.jmlbeli21=menu_obat.gumafixa *250000;
            break;

    case 22:
            printf("\n [22] Gastran\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.gastran);
            printf("\n===============================================\n");
            sub.jmlbeli22=menu_obat.gastran *8402;
            break;

    case 23:
            printf("\n [23] Hexadol\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.hexadol);
            printf("\n===============================================\n");
            sub.jmlbeli23=menu_obat.hexadol *41000;
            break;

    case 24:
            printf("\n [24] Ibuprofen\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.ibuprofen);
            printf("\n===============================================\n");
            sub.jmlbeli24=menu_obat.ibuprofen *7900;
            break;

    case 25:
            printf("\n [25] Indomethacin\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.indomethacin);
            printf("\n===============================================\n");
            sub.jmlbeli25=menu_obat.indomethacin *5259;
            break;

    case 26:
            printf("\n [26] Inza\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.inza);
            printf("\n===============================================\n");
            sub.jmlbeli26=menu_obat.inza *3200;
            break;

    case 27:
            printf("\n [27] Ketorolac\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.ketorolac);
            printf("\n===============================================\n");
            sub.jmlbeli27=menu_obat.ketorolac *43500;
            break;

    case 28:
            printf("\n [28] Konidin\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.konidin);
            printf("\n===============================================\n");
            sub.jmlbeli28=menu_obat.konidin *2800;
            break;

    case 29:
            printf("\n [29] Laserin\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.laserin);
            printf("\n===============================================\n");
            sub.jmlbeli29=menu_obat.laserin *28800;
            break;

    case 30:
            printf("\n [30] Medi-Klin\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.medi_klin);
            printf("\n===============================================\n");
            sub.jmlbeli30=menu_obat.medi_klin *45000;
            break;

    case 31:
            printf("\n [31] Mylanta\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.mylanta);
            printf("\n===============================================\n");
            sub.jmlbeli31=menu_obat.mylanta *18500;
            break;

    case 32:
            printf("\n [32] Naproxen\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.naproxen);
            printf("\n===============================================\n");
            sub.jmlbeli32=menu_obat.naproxen *335000;
            break;

    case 33:
            printf("\n [33] Neozep Forte\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.neozep);
            printf("\n===============================================\n");
            sub.jmlbeli33=menu_obat.neozep *3100;
            break;

    case 34:
            printf("\n [34] Nutrimax C&C Syrup\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.nutrimax);
            printf("\n===============================================\n");
            sub.jmlbeli34=menu_obat.nutrimax *128000;
            break;

    case 35:
            printf("\n [35] OBH Combi\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.obh1);
            printf("\n===============================================\n");
            sub.jmlbeli35=menu_obat.obh1 *16000;
            break;

    case 36:
            printf("\n [36] OBH Combi Anak\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.obh2);
            printf("\n===============================================\n");
            sub.jmlbeli36=menu_obat.obh2 *18000;
            break;

    case 37:
            printf("\n [37] Omeprazole\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.omeprazole);
            printf("\n===============================================\n");
            sub.jmlbeli37=menu_obat.omeprazole *12300;
            break;


    case 38:
            printf("\n [38] Oskadon\n");
            printf("jumlah pesan =\t\t\t\t ");
            scanf("%d",&menu_obat.oskadon);
            printf("\n===============================================\n");
            sub.jmlbeli38=menu_obat.oskadon *3000;
            break;

    case 39:
            printf("\n [39] Paramex SK\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.paramex);
            printf("\n===============================================\n");
            sub.jmlbeli39=menu_obat.paramex *4600;
            break;

    case 40:
            printf("\n [40] Polycrol\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.polycrol);
            printf("\n===============================================\n");
            sub.jmlbeli40=menu_obat.polycrol *10900;
            break;

    case 41:
            printf("\n [41] Polysilane\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.polysilane);
            printf("\n===============================================\n");
            sub.jmlbeli41=menu_obat.polysilane *9500;
            break;

    case 42:
            printf("\n [42] Ponstan\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.ponstan);
            printf("\n===============================================\n");
            sub.jmlbeli42=menu_obat.ponstan *40000;
            break;

    case 43:
            printf("\n [43] Procold\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.procold);
            printf("\n===============================================\n");
            sub.jmlbeli43=menu_obat.procold *4200;
            break;

    case 44:
            printf("\n [44] Promag\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.promag);
            printf("\n===============================================\n");
            sub.jmlbeli44=menu_obat.promag *9000;
            break;

    case 45:
            printf("\n [45] Ranitidine\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.ranitidine);
            printf("\n===============================================\n");
            sub.jmlbeli45=menu_obat.ranitidine *5600;
            break;

    case 46:
            printf("\n [46] Sanmol\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.sanmol);
            printf("\n===============================================\n");
            sub.jmlbeli46=menu_obat.sanmol *2700;
            break;

    case 47:
            printf("\n [47] Siladex Cough\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.siladex);
            printf("\n===============================================\n");
            sub.jmlbeli47=menu_obat.siladex *17000;
            break;

    case 48:
            printf("\n [48] SP Troches Meiji\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.sp);
            printf("\n===============================================\n");
            sub.jmlbeli48=menu_obat.sp *17600;
            break;

    case 49:
            printf("\n [49] Sumagesic\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.sumagesic);
            printf("\n===============================================\n");
            sub.jmlbeli49=menu_obat.sumagesic *12000;
            break;

    case 50:
            printf("\n [50] Tantum Lozenges\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.tantum);
            printf("\n===============================================\n");
            sub.jmlbeli50=menu_obat.tantum *34000;
            break;

    case 51:
            printf("\n [51] Ultraflu\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.ultraflu);
            printf("\n===============================================\n");
            sub.jmlbeli51=menu_obat.ultraflu *4300;
            break;

    case 52:
            printf("\n [52] Vicks Formula 44\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.vicks);
            printf("\n===============================================\n");
            sub.jmlbeli52=menu_obat.vicks *20100;
            break;

    case 53:
            printf("\n [53] Verile Acne Gel\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.verile);
            printf("\n===============================================\n");
            sub.jmlbeli53=menu_obat.verile *33100;
            break;

    case 54:
            printf("\n [54] Vitacid\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.vitacid);
            printf("\n===============================================\n");
            sub.jmlbeli54=menu_obat.vitacid *30000;
            break;

    case 55:
            printf("\n [55] Waisan\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.waisan);
            printf("\n===============================================\n");
            sub.jmlbeli55=menu_obat.waisan *15000;
            break;

    case 56:
            printf("\n [56] Kasa Steril\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.kasa);
            printf("\n===============================================\n");
            sub.jmlbeli56=menu_obat.kasa *8733;
            break;

    case 57:
            printf("\n [57] Hansaplast\n");
            printf("jumlah pesan =\t\t\t  ");
            scanf("%d",&menu_obat.hansaplast);
            printf("\n===============================================\n");
            sub.jmlbeli57=menu_obat.hansaplast *16000;
            break;

    case 58:
            printf("\n [58] Kapas Pembalut 250g\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.kapas);
            printf("\n===============================================\n");
            sub.jmlbeli58=menu_obat.kapas *18000;
            break;

    case 59:
            printf("\n [59] Infus\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.infus);
            printf("\n===============================================\n");
            sub.jmlbeli59=menu_obat.infus *12000;
            break;

    case 60:
            printf("\n [60] Betadine\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.betadine);
            printf("\n===============================================\n");
            sub.jmlbeli60=menu_obat.betadine *6500;
            break;

    case 61:
            printf("\n [61] Minyak Kayu Putih\n");
            printf("jumlah pesan =\t\t\t\t  ");
            scanf("%d",&menu_obat.minyak);
            printf("\n===============================================\n");
            sub.jmlbeli61=menu_obat.minyak *46000;
            break;
    case 66:
            menu();
            system("cls");
    break;
    case 99:
            Penghitungan();  //memanggil fungsi penghitungan
    break;
    case 88:
            system("cls");  //cls untuk membuat layar menjadi kosong
            pembelian_obat();  //me-reset pilihan user
    break;
    case 00:
            peyakinan:
            printf("Apakah anda yakin ingin keluar?\n\n[input Y untuk Ya]\t[input T untuk Tidak]\n\n");
            printf("Input Pilihan \t\t\t\t");
            scanf("%s",&yakin);

            if (yakin=='Y'||yakin=='y') //user yakin untuk menutup program
            {
                system("cls");
                printf("\t\t- Terima Kasih atas kunjungan Anda -\n\n");
            system("pause");
            exit(0);
            }
            else if (yakin=='T'||yakin=='t')  //user membatalkan penutupan program
            {
                system("cls");
                //menu_obat();
            }
            else  //inputan user bukan Y atau T
            {
                printf("\nKesalahan inputan\n\n");
                system("pause");
                goto peyakinan;
            }

        break;
        default: //bila user menginputkan tidak sesuai pilihan nomor yang ada
            printf("Kesalahan inputan, menu no.%d tidak ada dalam daftar\n",menuo.menuobat);
            printf("- Silakan input kembali\n");
        break;
        }
    }
}


void Penghitungan(){

            printf("\tJumlah  | Nama obat             | Total Harga\n\t=============================================\n");
            printf("\t   %d   : Acetaminophen         : Rp. %d \n",menu_obat.acetaminophen, sub.jmlbeli1);
            printf("\t   %d   : Acnes Sealing Jell    : Rp. %d \n",menu_obat.acnes, sub.jmlbeli2);
            printf("\t   %d   : Acnol Lotion          : Rp. %d \n",menu_obat.acnol1, sub.jmlbeli3);
            printf("\t   %d   : Acnol  acne gel       : Rp. %d \n",menu_obat.acnol2, sub.jmlbeli4);
            printf("\t   %d   : Antasida Doen         : Rp. %d \n",menu_obat.antasida, sub.jmlbeli5);
            printf("\t   %d   : Aspirin               : Rp. %d \n",menu_obat.aspirin, sub.jmlbeli6);
            printf("\t   %d   : Betadine Mouthwash    : Rp. %d \n",menu_obat.betadine_mouthwash, sub.jmlbeli7);
            printf("\t   %d   : Benzolac - CL         : Rp. %d \n",menu_obat.benzolac, sub.jmlbeli8);
            printf("\t   %d   : Bodrex                : Rp. %d \n",menu_obat.bodrex, sub.jmlbeli9);
            printf("\t   %d   : Cataflam              : Rp. %d \n",menu_obat.cataflam, sub.jmlbeli10);
            printf("\t   %d   : Camaag Mint           : Rp. %d \n",menu_obat.camaag_mint, sub.jmlbeli11);
            printf("\t   %d   : Cooling 5 Plus        : Rp. %d \n",menu_obat.cooling1, sub.jmlbeli12);
            printf("\t   %d   : Cooling 5 Spray       : Rp. %d \n",menu_obat.cooling2, sub.jmlbeli13);
            printf("\t   %d   : Degirol               : Rp. %d \n",menu_obat.degirol, sub.jmlbeli14);
            printf("\t   %d   : Dentasol              : Rp. %d \n",menu_obat.dentasol, sub.jmlbeli15);
            printf("\t   %d   : Derma Angel           : Rp. %d \n",menu_obat.derma, sub.jmlbeli16);
            printf("\t   %d   : Efisol Loz            : Rp. %d \n",menu_obat.efisol, sub.jmlbeli17);
            printf("\t   %d   : Erha Acne Spot Gel    : Rp. %d \n",menu_obat.erha, sub.jmlbeli18);
            printf("\t   %d   : Eugenia Dental        : Rp. %d \n",menu_obat.eugenia, sub.jmlbeli19);
            printf("\t   %d   : FG Troches Meiji      : Rp. %d \n",menu_obat.troches, sub.jmlbeli20);
            printf("\t   %d   : Gumafixa              : Rp. %d \n",menu_obat.gumafixa, sub.jmlbeli21);
            printf("\t   %d   : Gastran               : Rp. %d \n",menu_obat.gastran, sub.jmlbeli22);
            printf("\t   %d   : Hexadol               : Rp. %d \n",menu_obat.hexadol, sub.jmlbeli23);
            printf("\t   %d   : Ibuprofen             : Rp. %d \n",menu_obat.ibuprofen, sub.jmlbeli24);
            printf("\t   %d   : Indomethacin          : Rp. %d \n",menu_obat.indomethacin, sub.jmlbeli25);
            printf("\t   %d   : Inza                  : Rp. %d \n",menu_obat.inza, sub.jmlbeli26);
            printf("\t   %d   : Ketorolac             : Rp. %d \n",menu_obat.ketorolac, sub.jmlbeli27);
            printf("\t   %d   : Konidin               : Rp. %d \n",menu_obat.konidin, sub.jmlbeli28);
            printf("\t   %d   : Laserin               : Rp. %d \n",menu_obat.laserin, sub.jmlbeli29);
            printf("\t   %d   : Medi-Klin             : Rp. %d \n",menu_obat.medi_klin, sub.jmlbeli30);
            printf("\t   %d   : Mylanta               : Rp. %d \n",menu_obat.mylanta, sub.jmlbeli31);
            printf("\t   %d   : Naproxen              : Rp. %d \n",menu_obat.naproxen, sub.jmlbeli32);
            printf("\t   %d   : Neozep Forte          : Rp. %d \n",menu_obat.neozep, sub.jmlbeli33);
            printf("\t   %d   : Nutrimax C&C Syrup    : Rp. %d \n",menu_obat.nutrimax, sub.jmlbeli34);
            printf("\t   %d   : OBH Combi             : Rp. %d \n",menu_obat.obh1, sub.jmlbeli35);
            printf("\t   %d   : OBH Combi Anak        : Rp. %d \n",menu_obat.obh2, sub.jmlbeli36);
            printf("\t   %d   : Omeprazole            : Rp. %d \n",menu_obat.omeprazole, sub.jmlbeli37);
            printf("\t   %d   : Oskadon               : Rp. %d \n",menu_obat.oskadon, sub.jmlbeli38);
            printf("\t   %d   : Paramex SK            : Rp. %d \n",menu_obat.paramex, sub.jmlbeli39);
            printf("\t   %d   : Polycrol              : Rp. %d \n",menu_obat.polycrol, sub.jmlbeli40);
            printf("\t   %d   : Polysilame            : Rp. %d \n",menu_obat.polysilane, sub.jmlbeli41);
            printf("\t   %d   : Ponstan               : Rp. %d \n",menu_obat.ponstan, sub.jmlbeli42);
            printf("\t   %d   : Procold               : Rp. %d \n",menu_obat.procold, sub.jmlbeli43);
            printf("\t   %d   : Promag                : Rp. %d \n",menu_obat.promag, sub.jmlbeli44);
            printf("\t   %d   : Ranitidine            : Rp. %d \n",menu_obat.ranitidine, sub.jmlbeli45);
            printf("\t   %d   : Sanmol                : Rp. %d \n",menu_obat.sanmol, sub.jmlbeli46);
            printf("\t   %d   : Siladex Cough         : Rp. %d \n",menu_obat.siladex, sub.jmlbeli47);
            printf("\t   %d   : SP Troches Meiji      : Rp. %d \n",menu_obat.troches, sub.jmlbeli48);
            printf("\t   %d   : Sumagesic             : Rp. %d \n",menu_obat.sumagesic, sub.jmlbeli49);
            printf("\t   %d   : Tantum Lozenges       : Rp. %d \n",menu_obat.tantum, sub.jmlbeli50);
            printf("\t   %d   : Ultraflu              : Rp. %d \n",menu_obat.ultraflu, sub.jmlbeli51);
            printf("\t   %d   : Vicks Formula 44      : Rp. %d \n",menu_obat.vicks, sub.jmlbeli52);
            printf("\t   %d   : Verile Acne Gel       : Rp. %d \n",menu_obat.verile, sub.jmlbeli53);
            printf("\t   %d   : Vitacid               : Rp. %d \n",menu_obat.vitacid, sub.jmlbeli54);
            printf("\t   %d   : Waisan                : Rp. %d \n",menu_obat.waisan, sub.jmlbeli55);
            printf("\t   %d   : Kasa Steril           : Rp. %d \n",menu_obat.kasa, sub.jmlbeli56);
            printf("\t   %d   : Hansaplast            : Rp. %d \n",menu_obat.hansaplast, sub.jmlbeli57);
            printf("\t   %d   : kapas Pembalut        : Rp. %d \n",menu_obat.kapas, sub.jmlbeli58);
            printf("\t   %d   : Inpus                 : Rp. %d \n",menu_obat.infus, sub.jmlbeli59);
            printf("\t   %d   : Betadine              : Rp. %d \n",menu_obat.betadine, sub.jmlbeli60);
            printf("\t   %d   : Minyak Kayu Putih     : Rp. %d \n",menu_obat.minyak, sub.jmlbeli61);
            printf("\t---------------------------------------------\n\n");

   //menghitung total harga
            sub.totalharga=sub.jmlbeli1+sub.jmlbeli2+sub.jmlbeli3+sub.jmlbeli4+sub.jmlbeli5+sub.jmlbeli6+sub.jmlbeli7+sub.jmlbeli8+sub.jmlbeli9+sub.jmlbeli10
            +sub.jmlbeli11+sub.jmlbeli12+sub.jmlbeli13+sub.jmlbeli14+sub.jmlbeli15+sub.jmlbeli16+sub.jmlbeli17+sub.jmlbeli18+sub.jmlbeli19+sub.jmlbeli20
            +sub.jmlbeli21+sub.jmlbeli22+sub.jmlbeli23+sub.jmlbeli24+sub.jmlbeli25+sub.jmlbeli26+sub.jmlbeli27+sub.jmlbeli28+sub.jmlbeli29+sub.jmlbeli30
            +sub.jmlbeli31+sub.jmlbeli32+sub.jmlbeli33+sub.jmlbeli34+sub.jmlbeli35+sub.jmlbeli36+sub.jmlbeli37+sub.jmlbeli38+sub.jmlbeli39+sub.jmlbeli40
            +sub.jmlbeli41+sub.jmlbeli42+sub.jmlbeli43+sub.jmlbeli44+sub.jmlbeli45+sub.jmlbeli46+sub.jmlbeli47+sub.jmlbeli48+sub.jmlbeli49+sub.jmlbeli50
            +sub.jmlbeli51+sub.jmlbeli52+sub.jmlbeli53+sub.jmlbeli54+sub.jmlbeli55+sub.jmlbeli56+sub.jmlbeli57+sub.jmlbeli58+sub.jmlbeli59+sub.jmlbeli60
            +sub.jmlbeli61;
            printf("\n===============================\nTotal Harga adalah = Rp.%d,-\n===============================\n",sub.totalharga);

   bayar:
            printf("\nMasukkan uang bayar = ");
            scanf("%d",&sub.bayar);

            if (sub.bayar>=sub.totalharga)
            {
            sub.kembalian=sub.bayar-sub.totalharga;
            printf("\nKembalian = %d", sub.kembalian);
            }
            else
            {
                printf("Uang Anda tidak cukup! Silakan input ulang\n");

                goto bayar;
            }

   printf("\nTekan apa saja untuk melihat struk pembayaran\n");
            system("Pause");
            system("cls");
            struk();
}


void struk()
    {
        time(&ambil_waktu); //mengambil waktu saat ini
        printf("=======================================================================================\n");
        printf("|                                STRUK PEMBAYARAN                                     |\n");
        printf("|                                APOTEK JAYA ABADI                                    |\n");
        printf("|  Jalan Raya Kampus Udayana, Jimbaran, Kec.Kuta Sel., Kabupaten Badung, Bali 80361   |\n");
        printf("|_____________________________________________________________________________________|\n");
        printf("|    Nama Obat          |    Harga Satuan    |    Jumlah     |         Total          |\n");
        printf("|=======================|====================|===============|========================|");
        if (sub.jmlbeli1>0)
        {
        printf("\n|    Acetaminophen \t|        5.200       |       %d\t     |  Rp.%d\t\t\t|",menu_obat.acetaminophen,sub.jmlbeli1);
        }
                if (sub.jmlbeli2>0)
        {
        printf("\n|    Acnes Sealing Jell |       29.000       |       %d\t     |  Rp.%d\t\t|",menu_obat.acnes,sub.jmlbeli2);
        }
                if (sub.jmlbeli3>0)
        {
        printf("\n|    Acnol Lotion  \t|       15.000       |       %d\t     |  Rp.%d\t\t|",menu_obat.acnol1,sub.jmlbeli3);
        }
                if (sub.jmlbeli4>0)
        {
        printf("\n|    Acnol  acne gel\t|       25.300       |       %d\t     |  Rp.%d\t\t|",menu_obat.acnol2,sub.jmlbeli4);
        }
                if (sub.jmlbeli5>0)
        {
        printf("\n|    Antasida Doen \t|       13.500       |       %d\t     |  Rp.%d\t\t|",menu_obat.antasida,sub.jmlbeli5);
        }
                if (sub.jmlbeli6>0)
        {
        printf("\n|    Aspirin\t\t|       16.800       |       %d\t     |  Rp.%d\t\t|",menu_obat.aspirin,sub.jmlbeli6);
        }
                if (sub.jmlbeli7>0)
        {
        printf("\n|    Betadine Mouthwash |       38.500       |       %d\t     |  Rp.%d\t\t|",menu_obat.betadine_mouthwash,sub.jmlbeli7);
        }
                if (sub.jmlbeli8>0)
        {
        printf("\n|    Benzolac - CL\t|       35.000       |       %d\t     |  Rp.%d\t\t|",menu_obat.benzolac,sub.jmlbeli8);
        }
                if (sub.jmlbeli9>0)
        {
        printf("\n|    Bodrex\t\t|       4.000        |       %d\t     |  Rp.%d\t\t|",menu_obat.bodrex,sub.jmlbeli9);
        }
                if (sub.jmlbeli10>0)
        {
        printf("\n|    Cataflam\t\t|       9.000        |       %d\t     |  Rp.%d\t\t|",menu_obat.cataflam,sub.jmlbeli10);
        }
                if (sub.jmlbeli11>0)
        {
        printf("\n|    Camaag Mint\t|      71.820        |       %d\t     |  Rp.%d\t\t|",menu_obat.camaag_mint,sub.jmlbeli11);
        }
                if (sub.jmlbeli12>0)
        {
        printf("\n|    Cooling 5 Plus\t|      45.332        |       %d\t     |  Rp.%d\t\t|",menu_obat.cooling1,sub.jmlbeli12);
        }
                if (sub.jmlbeli13>0)
        {
        printf("\n|    Cooling 5 Spray\t|      36.000        |       %d\t     |  Rp.%d\t\t|",menu_obat.cooling2,sub.jmlbeli13);
        }
                if (sub.jmlbeli14>0)
        {
        printf("\n|    Degirol\t\t|      14.500        |       %d\t     |  Rp.%d\t\t|",menu_obat.degirol,sub.jmlbeli14);
        }
                if (sub.jmlbeli15>0)
        {
        printf("\n|    Dentasol\t\t|      25.000        |      %d\t     |  Rp.%d\t\t|",menu_obat.dentasol,sub.jmlbeli15);
        }
                if (sub.jmlbeli16>0)
        {
        printf("\n|   Derma Angel\t|      45.300        |    %d\t        |  Rp.%d\t\t|",menu_obat.derma,sub.jmlbeli16);
        }
                if (sub.jmlbeli17>0)
        {
        printf("\n|    Efisol Loz\t|  30.000  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.efisol,sub.jmlbeli17);
        }
                   if (sub.jmlbeli18>0)
        {
        printf("\n|  Erha Acne Spot Gel  \t|  350.000  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.erha,sub.jmlbeli18);
        }
           if (sub.jmlbeli19>0)
        {
        printf("\n|   Eugenia Dental\t| 17.199  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.eugenia,sub.jmlbeli19);
        }
                   if (sub.jmlbeli20>0)
        {
        printf("\n|    FG Troches Meiji\t| 16.000 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.troches,sub.jmlbeli20);
        }
                   if (sub.jmlbeli21>0)
        {
        printf("\n|    Gumafixa\t|  250.000  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.gumafixa,sub.jmlbeli21);
        }
                   if (sub.jmlbeli22>0)
        {
        printf("\n|    Gastran\t|  8.402  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.gastran,sub.jmlbeli22);
        }
                   if (sub.jmlbeli23>0)
        {
        printf("\n|    Hexadol\t|  41.000  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.hexadol,sub.jmlbeli23);
        }
                   if (sub.jmlbeli24>0)
        {
        printf("\n|    Ibuprofen\t|  7.900  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.ibuprofen,sub.jmlbeli24);
        }
                   if (sub.jmlbeli25>0)
        {
        printf("\n|    Indomethacin\t|  5.259 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.indomethacin,sub.jmlbeli25);
        }
                   if (sub.jmlbeli26>0)
        {
        printf("\n|    Inza\t|  3.200  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.inza,sub.jmlbeli26);
        }
                   if (sub.jmlbeli27>0)
        {
        printf("\n|    Ketorolac\t|  43.500  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.ketorolac,sub.jmlbeli27);
        }
                   if (sub.jmlbeli28>0)
        {
        printf("\n|    Konidin\t| 2.800  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.konidin,sub.jmlbeli28);
        }
                   if (sub.jmlbeli29>0)
        {
        printf("\n|    Laserin\t|  28.800 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.laserin,sub.jmlbeli29);
        }
                   if (sub.jmlbeli30>0)
        {
        printf("\n|    Medi-Klin\t| 45.000 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.medi_klin,sub.jmlbeli30);
        }
                   if (sub.jmlbeli31>0)
        {
        printf("\n|    Mylanta\t| 18.500 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.mylanta,sub.jmlbeli31);
        }
                   if (sub.jmlbeli32>0)
        {
        printf("\n|    Naproxen\t|  335.000 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.naproxen,sub.jmlbeli32);
        }
                   if (sub.jmlbeli33>0)
        {
        printf("\n|    Neozep Forte\t|  3.100  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.neozep,sub.jmlbeli33);
        }
                   if (sub.jmlbeli34>0)
        {
        printf("\n|   Nutrimax C&C Syrup\t|  128.000 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.nutrimax,sub.jmlbeli34);
        }
                   if (sub.jmlbeli35>0)
        {
        printf("\n|    OBH Combi\t|  16.000  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.obh1,sub.jmlbeli35);
        }
                   if (sub.jmlbeli36>0)
        {
        printf("\n|    OBH Combi Anak\t|  18.000 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.obh2,sub.jmlbeli36);
        }
                   if (sub.jmlbeli37>0)
        {
        printf("\n|    Omeprazole\t|  12.300  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.omeprazole,sub.jmlbeli37);
        }
                   if (sub.jmlbeli38>0)
        {
        printf("\n|   Oskadon\t|  3.000  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.oskadon,sub.jmlbeli38);
        }
                   if (sub.jmlbeli39>0)
        {
        printf("\n|    Paramex SK\t|  4.600  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.paramex,sub.jmlbeli39);
        }
                   if (sub.jmlbeli40>0)
        {
        printf("\n|    Polycrol\t|  10.900 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.polycrol,sub.jmlbeli40);
        }
                   if (sub.jmlbeli41>0)
        {
        printf("\n|    Polysilane\t|  9.500\t|    %d\t  |  Rp.%d\t\t|",menu_obat.polysilane,sub.jmlbeli41);
        }
                   if (sub.jmlbeli42>0)
        {
        printf("\n|    Ponstan\t|  40.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.ponstan,sub.jmlbeli42);
        }
                   if (sub.jmlbeli43>0)
        {
        printf("\n|    Procold\t|  4.200\t|    %d\t  |  Rp.%d\t\t|",menu_obat.procold,sub.jmlbeli43);
        }
                   if (sub.jmlbeli44>0)
        {
        printf("\n|    Promag\t\t\t|  9.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.promag,sub.jmlbeli44);
        }
                   if (sub.jmlbeli45>0)
        {
        printf("\n|    Ranitidine\t|  5.600\t|    %d\t  |  Rp.%d\t\t|",menu_obat.ranitidine,sub.jmlbeli45);
        }
                   if (sub.jmlbeli46>0)
        {
        printf("\n|    Sanmol\t|  2.700\t|    %d\t  |  Rp.%d\t\t|",menu_obat.sanmol,sub.jmlbeli46);
        }
                   if (sub.jmlbeli47>0)
        {
        printf("\n|    Siladex Cough\t|  17.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.siladex,sub.jmlbeli47);
        }
                   if (sub.jmlbeli48>0)
        {
        printf("\n|    SP Troches Meiji\t|  17.600 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.sp,sub.jmlbeli48);
        }
                   if (sub.jmlbeli49>0)
        {
        printf("\n|   Sumagesic \t|  12.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.sumagesic,sub.jmlbeli49);
        }
                   if (sub.jmlbeli50>0)
        {
        printf("\n|    Tantum Lozenges\t|  34.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.tantum,sub.jmlbeli50);
        }
                   if (sub.jmlbeli51>0)
        {
        printf("\n|    Ultraflu\t|  4.300\t|    %d\t  |  Rp.%d\t\t|",menu_obat.ultraflu,sub.jmlbeli51);
        }
                   if (sub.jmlbeli52>0)
        {
        printf("\n|    Vicks Formula 44\t|  20.100\t|    %d\t  |  Rp.%d\t\t|",menu_obat.vicks,sub.jmlbeli52);
        }
                   if (sub.jmlbeli53>0)
        {
        printf("\n|    Verile Acne Gel\t|  33.100\t|    %d\t  |  Rp.%d\t\t|",menu_obat.verile,sub.jmlbeli53);
        }
                   if (sub.jmlbeli54>0)
        {
        printf("\n|    Vitacid\t|  30.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.vitacid,sub.jmlbeli54);
        }
                   if (sub.jmlbeli55>0)
        {
        printf("\n|    Waisan\t|  15.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.waisan,sub.jmlbeli55);
        }
                   if (sub.jmlbeli56>0)
        {
        printf("\n|    Kasa Steril\t|  8.733\t|    %d\t  |  Rp.%d\t\t|",menu_obat.kasa,sub.jmlbeli56);
        }
                   if (sub.jmlbeli57>0)
        {
        printf("\n|    Hansaplast\t|  16.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.hansaplast,sub.jmlbeli57);
        }
                   if (sub.jmlbeli58>0)
        {
        printf("\n|    Kapas Pembalut\t|  18.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.kapas,sub.jmlbeli58);
        }
                   if (sub.jmlbeli59>0)
        {
        printf("\n|    Infus\t|  12.000 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.infus,sub.jmlbeli59);
        }
                   if (sub.jmlbeli60>0)
        {
        printf("\n|    Betadine\t|  6.500\t|    %d\t  |  Rp.%d\t\t|",menu_obat.betadine,sub.jmlbeli60);
        }
                   if (sub.jmlbeli61>0)
        {
        printf("\n|    Minyak Kayu Putih\t|  46.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.minyak,sub.jmlbeli61);
        }



        printf("\n|_____________________________________________________________________________________|");
        printf("\n| Total Keseluruhan = %d\t\t\t\t\t\t|", sub.totalharga);
        printf("\n| Uang bayar        = %d\t\t\t\t\t\t|", sub.bayar);
        printf("\n| Kembalian         = %d\t\t\t\t\t\t|", sub.kembalian);
        printf("\n|                                                                                     |");
        printf("\n|                                                                                     |");
        printf("\n| Waktu/Hari : %s|", ctime (&ambil_waktu));
        printf("\n|Perhatian : Barang yang dibeli tidak bisa dikembalikan!\t\t\t  |");
        printf("\n|                                                                                     |\n");
        printf("---------------------------------------------------------------------------------------\n");

        cetak_struk();
        reset_data();
    }


void cetak_struk()
    {
        FILE *in = fopen ("struk_pembelian_obat.txt", "a+");
        time(&ambil_waktu); //mengambil waktu saat ini
        fprintf(in,"=======================================================================================\n");
        fprintf(in,"| \t\t\t                STRUK PEMBAYARAN                                       \t  |\n");
        fprintf(in,"| \t\t                    APOTEK JAYA ABADI                                    \t  |\n");
        fprintf(in,"| \tJalan Raya Kampus Udayana, Jimbaran, Kec.Kuta Sel., Kabupaten Badung, Bali 80361  |\n");
        fprintf(in,"|_____________________________________________________________________________________|\n");
        fprintf(in,"|    Nama Obat  \t   | Harga Satuan  | Jumlah  | \t    Total  \t|\n");
        fprintf(in,"|=======================|===============|=========|===================================|");
        if (sub.jmlbeli1>0)
        {
        fprintf(in,"|    Acetaminophen \t|     5.200\t|    %d\t  |  Rp.%d\t\t|",menu_obat.acetaminophen,sub.jmlbeli1);
        }
                if (sub.jmlbeli2>0)
        {
        fprintf(in,"\n|  Acnes Sealing Jell\t|     29.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.acnes,sub.jmlbeli2);
        }
                if (sub.jmlbeli3>0)
        {
        fprintf(in,"\n|    Acnol Lotion\t|     15.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.acnol1,sub.jmlbeli3);
        }
                if (sub.jmlbeli4>0)
        {
        fprintf(in,"\n|    Acnol  acne gel\t|     25.300\t|    %d\t  |  Rp.%d\t\t|",menu_obat.acnol2,sub.jmlbeli4);
        }
                if (sub.jmlbeli5>0)
        {
        fprintf(in,"\n|    Antasida Doen\t|     13.500 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.antasida,sub.jmlbeli5);
        }
                if (sub.jmlbeli6>0)
        {
        fprintf(in,"\n|    Aspirin\t\t|     16.800 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.aspirin,sub.jmlbeli6);
        }
                if (sub.jmlbeli7>0)
        {
        fprintf(in,"\n|    Betadine Mouthwash\t|     38.500 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.betadine_mouthwash,sub.jmlbeli7);
        }
                if (sub.jmlbeli8>0)
        {
        fprintf(in,"\n|    Benzolac - CL\t|     35.000 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.benzolac,sub.jmlbeli8);
        }
                if (sub.jmlbeli9>0)
        {
        fprintf(in,"\n|    Bodrex\t\t\t|     4.000 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.bodrex,sub.jmlbeli9);
        }
                if (sub.jmlbeli10>0)
        {
        fprintf(in,"\n|    Cataflam\t\t\t|     9.000 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.cataflam,sub.jmlbeli10);
        }
                if (sub.jmlbeli11>0)
        {
        fprintf(in,"\n|    Camaag Mint\t|     71.820  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.camaag_mint,sub.jmlbeli11);
        }
                if (sub.jmlbeli12>0)
        {
        fprintf(in,"\n|    Cooling 5 Plus\t|  45.332  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.cooling1,sub.jmlbeli12);
        }
                if (sub.jmlbeli13>0)
        {
        fprintf(in,"\n|    Cooling 5 Spray\t|  36.000  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.cooling2,sub.jmlbeli13);
        }
                if (sub.jmlbeli14>0)
        {
        fprintf(in,"\n|    Degirol\t\t\t|  14.500  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.degirol,sub.jmlbeli14);
        }
                if (sub.jmlbeli15>0)
        {
        fprintf(in,"\n|    Dentasol\t\t\t|  25.000  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.dentasol,sub.jmlbeli15);
        }
                if (sub.jmlbeli16>0)
        {
        fprintf(in,"\n|   Derma Angel\t|  45.300 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.derma,sub.jmlbeli16);
        }
                if (sub.jmlbeli17>0)
        {
        fprintf(in,"\n|    Efisol Loz\t|  30.000  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.efisol,sub.jmlbeli17);
        }
                   if (sub.jmlbeli18>0)
        {
        fprintf(in,"\n|  Erha Acne Spot Gel  \t|  350.000  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.erha,sub.jmlbeli18);
        }
           if (sub.jmlbeli19>0)
        {
        fprintf(in,"\n|   Eugenia Dental\t| 17.199  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.eugenia,sub.jmlbeli19);
        }
                   if (sub.jmlbeli20>0)
        {
        fprintf(in,"\n|    FG Troches Meiji\t| 16.000 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.troches,sub.jmlbeli20);
        }
                   if (sub.jmlbeli21>0)
        {
        fprintf(in,"\n|    Gumafixa\t|  250.000  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.gumafixa,sub.jmlbeli21);
        }
                   if (sub.jmlbeli22>0)
        {
        fprintf(in,"\n|    Gastran\t|  8.402  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.gastran,sub.jmlbeli22);
        }
                   if (sub.jmlbeli23>0)
        {
        fprintf(in,"\n|    Hexadol\t|  41.000  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.hexadol,sub.jmlbeli23);
        }
                   if (sub.jmlbeli24>0)
        {
        fprintf(in,"\n|    Ibuprofen\t|  7.900  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.ibuprofen,sub.jmlbeli24);
        }
                   if (sub.jmlbeli25>0)
        {
        fprintf(in,"\n|    Indomethacin\t|  5.259 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.indomethacin,sub.jmlbeli25);
        }
                   if (sub.jmlbeli26>0)
        {
        fprintf(in,"\n|    Inza\t|  3.200  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.inza,sub.jmlbeli26);
        }
                   if (sub.jmlbeli27>0)
        {
        fprintf(in,"\n|    Ketorolac\t|  43.500  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.ketorolac,sub.jmlbeli27);
        }
                   if (sub.jmlbeli28>0)
        {
        fprintf(in,"\n|    Konidin\t| 2.800  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.konidin,sub.jmlbeli28);
        }
                   if (sub.jmlbeli29>0)
        {
        fprintf(in,"\n|    Laserin\t|  28.800 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.laserin,sub.jmlbeli29);
        }
                   if (sub.jmlbeli30>0)
        {
        fprintf(in,"\n|    Medi-Klin\t| 45.000 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.medi_klin,sub.jmlbeli30);
        }
                   if (sub.jmlbeli31>0)
        {
        fprintf(in,"\n|    Mylanta\t| 18.500 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.mylanta,sub.jmlbeli31);
        }
                   if (sub.jmlbeli32>0)
        {
        fprintf(in,"\n|    Naproxen\t|  335.000 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.naproxen,sub.jmlbeli32);
        }
                   if (sub.jmlbeli33>0)
        {
        fprintf(in,"\n|    Neozep Forte\t|  3.100  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.neozep,sub.jmlbeli33);
        }
                   if (sub.jmlbeli34>0)
        {
        fprintf(in,"\n|   Nutrimax C&C Syrup\t|  128.000 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.nutrimax,sub.jmlbeli34);
        }
                   if (sub.jmlbeli35>0)
        {
        fprintf(in,"\n|    OBH Combi\t|  16.000  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.obh1,sub.jmlbeli35);
        }
                   if (sub.jmlbeli36>0)
        {
        fprintf(in,"\n|    OBH Combi Anak\t|  18.000 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.obh2,sub.jmlbeli36);
        }
                   if (sub.jmlbeli37>0)
        {
        fprintf(in,"\n|    Omeprazole\t|  12.300  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.omeprazole,sub.jmlbeli37);
        }
                   if (sub.jmlbeli38>0)
        {
        fprintf(in,"\n|   Oskadon\t|  3.000  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.oskadon,sub.jmlbeli38);
        }
                   if (sub.jmlbeli39>0)
        {
        fprintf(in,"\n|    Paramex SK\t|  4.600  \t|    %d\t  |  Rp.%d\t\t|",menu_obat.paramex,sub.jmlbeli39);
        }
                   if (sub.jmlbeli40>0)
        {
        fprintf(in,"\n|    Polycrol\t|  10.900 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.polycrol,sub.jmlbeli40);
        }
                   if (sub.jmlbeli41>0)
        {
        fprintf(in,"\n|    Polysilane\t|  9.500\t|    %d\t  |  Rp.%d\t\t|",menu_obat.polysilane,sub.jmlbeli41);
        }
                   if (sub.jmlbeli42>0)
        {
        fprintf(in,"\n|    Ponstan\t|  40.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.ponstan,sub.jmlbeli42);
        }
                   if (sub.jmlbeli43>0)
        {
        fprintf(in,"\n|    Procold\t|  4.200\t|    %d\t  |  Rp.%d\t\t|",menu_obat.procold,sub.jmlbeli43);
        }
                   if (sub.jmlbeli44>0)
        {
        fprintf(in,"\n|    Promag\t\t\t|  9.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.promag,sub.jmlbeli44);
        }
                   if (sub.jmlbeli45>0)
        {
        fprintf(in,"\n|    Ranitidine\t|  5.600\t|    %d\t  |  Rp.%d\t\t|",menu_obat.ranitidine,sub.jmlbeli45);
        }
                   if (sub.jmlbeli46>0)
        {
        fprintf(in,"\n|    Sanmol\t|  2.700\t|    %d\t  |  Rp.%d\t\t|",menu_obat.sanmol,sub.jmlbeli46);
        }
                   if (sub.jmlbeli47>0)
        {
        fprintf(in,"\n|    Siladex Cough\t|  17.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.siladex,sub.jmlbeli47);
        }
                   if (sub.jmlbeli48>0)
        {
        fprintf(in,"\n|    SP Troches Meiji\t|  17.600 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.sp,sub.jmlbeli48);
        }
                   if (sub.jmlbeli49>0)
        {
        fprintf(in,"\n|   Sumagesic \t|  12.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.sumagesic,sub.jmlbeli49);
        }
                   if (sub.jmlbeli50>0)
        {
        fprintf(in,"\n|    Tantum Lozenges\t|  34.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.tantum,sub.jmlbeli50);
        }
                   if (sub.jmlbeli51>0)
        {
        fprintf(in,"\n|    Ultraflu\t|  4.300\t|    %d\t  |  Rp.%d\t\t|",menu_obat.ultraflu,sub.jmlbeli51);
        }
                   if (sub.jmlbeli52>0)
        {
        fprintf(in,"\n|    Vicks Formula 44\t|  20.100\t|    %d\t  |  Rp.%d\t\t|",menu_obat.vicks,sub.jmlbeli52);
        }
                   if (sub.jmlbeli53>0)
        {
        fprintf(in,"\n|    Verile Acne Gel\t|  33.100\t|    %d\t  |  Rp.%d\t\t|",menu_obat.verile,sub.jmlbeli53);
        }
                   if (sub.jmlbeli54>0)
        {
        fprintf(in,"\n|    Vitacid\t|  30.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.vitacid,sub.jmlbeli54);
        }
                   if (sub.jmlbeli55>0)
        {
        fprintf(in,"\n|    Waisan\t|  15.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.waisan,sub.jmlbeli55);
        }
                   if (sub.jmlbeli56>0)
        {
        fprintf(in,"\n|    Kasa Steril\t|  8.733\t|    %d\t  |  Rp.%d\t\t|",menu_obat.kasa,sub.jmlbeli56);
        }
                   if (sub.jmlbeli57>0)
        {
        fprintf(in,"\n|    Hansaplast\t|  16.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.hansaplast,sub.jmlbeli57);
        }
                   if (sub.jmlbeli58>0)
        {
        fprintf(in,"\n|    Kapas Pembalut\t|  18.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.kapas,sub.jmlbeli58);
        }
                   if (sub.jmlbeli59>0)
        {
        fprintf(in,"\n|    Infus\t|  12.000 \t|    %d\t  |  Rp.%d\t\t|",menu_obat.infus,sub.jmlbeli59);
        }
                   if (sub.jmlbeli60>0)
        {
        fprintf(in,"\n|    Betadine\t|  6.500\t|    %d\t  |  Rp.%d\t\t|",menu_obat.betadine,sub.jmlbeli60);
        }
                   if (sub.jmlbeli61>0)
        {
        fprintf(in,"\n|    Minyak Kayu Putih\t|  46.000\t|    %d\t  |  Rp.%d\t\t|",menu_obat.minyak,sub.jmlbeli61);
        }



        fprintf(in,"\n|_____________________________________________________________________________________|");
        fprintf(in,"\n| Total Keseluruhan = %d\t\t\t\t\t\t\t\t\t\t\t\t\t|", sub.totalharga);
        fprintf(in,"\n| Uang bayar        = %d\t\t\t\t\t\t\t\t\t\t\t\t\t|", sub.bayar);
        fprintf(in,"\n| Kembalian         = %d\t\t\t\t\t\t\t\t\t\t\t\t\t|", sub.kembalian);
        fprintf(in,"\n|                                                                                    |");
        fprintf(in,"\n|                                                                                    |");
        fprintf(in,"\n| Waktu/Hari : %s|", ctime (&ambil_waktu));
        fprintf(in,"\n|Perhatian : Barang yang dibeli tidak bisa dikembalikan!\t|");
        fprintf(in,"\n|                                                                                    |\n");
        fprintf(in,"-------------------------------------------------------------------------------------\n\n\n");
    fclose(in);
    }
