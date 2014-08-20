#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
using namespace std;

//Declaratia posibilitatilor de raspunsuri
string a="A", b="B", c="C", ab="A,B", ac="A,C", bc="B,C", abc="A,B,C";
//Declaratia string-ului cu raspunsurile aferente intrebarilor

	string   CONVERSIE(string a);          //Declararea prototipurilor functiilor
	  void   OPERATOR_ASTEPTARE();
	  void   F_INIT(string n);
	   int   RETURNARE(int n, string &s);
	  void   INTEREB_REZ();
	  void   INTEREB_REZ_IND();
	  void   EXECUTARE_MODULE(string mesaj);
	   int   MENIU_PRINC();

string r[] = {"null",			//Initializare string-ului responsabil cu inregistrarea
							//                                  raspunsurilor din carte
		/*
		Indicatoare si marcaje rutiere
		*/

		   b, c, c, b, a, c, c, b, c,     //0
		b, c, a, b, c, c, b, a, c, b,	  //10
		b, b, a, c, a, c, b, c, a, a, 	  //20
		b, c, a, a, b, a, a, c, c, c, 	  //....
		a, a, a, c, b, c, b, c, a, c,
		c, b, b, c, c, a, c, a, b, a,	  //50
		c, b, a, b, b, a, c, a, c, a,
		c, a, a, c, c, c, c, c, a, a,
		b, c, b, c, c, c, a, c, c, a,
		b, a, b, c, a, b, c, b, b, a,
		c, a, c, a, c, a, b, b, c, b,	  //100
		a, a, c, a, a, c, a, c, c, a,
		b, a, b, b, c, a, b, c, c, c,
		a, b, b, c, a, a, ac, b, b, c,
		a, b, c, b, a, b, a, a, b, b,
		c, a, a, ab, c, c, a, b, a, c,	  //150
		a, a, b, c, a, c, c, a, b, a,
		b, a, a, a, c, a, b, b, c, c,
		a, c, a, a, c, b, b, b, b, c,
		a, c, c, a, b, a, c, b, c, c,
		a, c, a, a, c, b, c, c, c, c,	  //200
		c, c, a, a, a, c, c, b, a, b,
		a, c, a, a, b, b, c, c, c, b,
		a, a, b, a, c, b, a, a, b, a,
		b, c, b, b, a, a, a, a, a, b,
		b, a, b, a, a, a, b, b, c, b,	  //250
		c, c, a, c, c, c, b, c, b, a,
		c, b, c, b, a, b, abc, a, b, c,
		a, b, a, b, b, c, b, c, a, b,
		c, b, b, a, b, a, c, c, a, c,
		c, b, c, c, b, c, a, a, c, a,	  //300
		a, a, a, c, b, c, c, a, a, a,
		c, c, b, a, a, a, a, a, c, c,
		b, a, b, c, a, ab, a, b, b, c,
		c, b, b, a, a, b, b, a, c, b,
		b, b, c, b, a, c, b, b, c, b,	  //350
		a, a, a, b, a, a, b, b, b, a,
		a, b, b, a, a, b, c, a, b,

		/*
		Semnalele politistilor si ale altor persoane
		care dirijeaza circulatia
		*/
								   a,
		c, a, c, a, b, b, a, b, b, a,
		b, a, b, c, c, c, b, a, c, a,
		b, c, a, b, b, a, c, b, a, a,	  //400
		a, a, c, b, c, c, b, c, b, a,
		c, b, a, b, b, c, b, c, b, c,
		a, a, c, a, c, b, c,

		/*
		Semnalele luminoase
		*/

						     c, b, c,
		c, a, c, b, a, c, b, c, b, b,
		c, b, c, c, a, b, c, b, a, b,	  //450
		b, b, a, a, a, c, c, c, b, c,
		b, a, b, a, c, c, a, c, b, c,
		c, a, c, a, a, c,

		/*
		Pozitia in timpul mersului si semnalele conducatorilor de vehicule
		*/

		                  b, b, a, c,
		b, a, c, b, b, c, b, b, c, c,
		a, a, c, c, b, c, b, c, c, a,	  //500
		c, a, c, b, b, c, bc, a, c, b,
		a, a, b, b, b, a, b, c, a, c,
		c, a, a, b, a, b, c, a, a, c,
		b, b, c, a, a, ab, c, a, a, c,
		a, b, abc, abc, a, c, a, b, c,	  //550

		/*
		Depasirea
		*/
									   c,
		a, b, b, b, c, a, b, a, a, c,
		b, a, b, b, c, a, b, c, c, b,
		a, b, c, a, b, c, b, a, a, b,
		a, a, c, a, c, c, c, a, a, b,
		a, a, a, a, a, ac, b, abc, a, b,  //600
		ab, a, c, c, a, b, c, ab, bc, c,
		ac, c, ac, b, c, a, b, b, ab, ac,
		c, c, ac, a, a, b, c, b, c, c,
		b, b, b, a, b, c, a, a, a, a,
		c, b, b, a,						  //650

		/*
		Viteza si distanta dintre vehicule
		*/
		            a, b, c, a, c, b,
		b, a, a, ab, a, b, b, b, b, ab,
		a, b, b, b, c, b, a, b, c, b,
		a, b, c, c, b, a, c, c, a, c,
		a, ac, b, a, b, a, abc, a, c, c,
		c, a, b, b, a, b, ab, b, ac, b,   //700
		b, b, c, a, b, c, a, c, b, b,
		ab, abc, ac, b, a, ab, a, b, c, c,
		c, c,

		/*
		Reguli referitoare la manevre
		*/
		         b, c, a, ac, a, b, c, b,
		a, abc, b, bc, c, c, bc, ac, ac, b,
		b, c, b, a, c, c, c, c, c, c,     //750

		/*
		Prioritatea la trecere
		*/

		b, b, b, b, b, c, b, a, b, b,
		c, a, a, c, c, b, c, a, b, b,
		a, b, c, c, c, b, a, a, b, a,
		b, c, c, b, a, a, b, b, b, c,
		c, a, a, b, c, b, a, b, a, b,	  //800
		a, c, a, c, b, c, a, c, b, c,
		b, a, a, c, b, c, a, b, c, a,
		b, b, b, b, b, b, a, a, b, b,
		b, a, b, a, a, b, c, a, b, c,
		c, a, a, c, b, c, a, b, a, a,	  //850
		a, a, a, b, b, ac, b, c, c, b,
		b, b, ac, b, c, c, a, a, c, a,
		c, a, b, c, b, b, c, c, b, a,
		b, a, b, a, c, a, b, b,

		/*
		Trecerea la nivel cu calea ferata
		*/
							    a, b,
		c, b, b, c, c, b, c, a, a, c,	  //900
		a, c, a, a, c, c, c, a, b, b,
		a, c, a, b, a, c, b, b,

		/*
		Oprirea,stationarea si parcarea
		*/
		                        c, c,
		a, c, c, b, c, c, b, a, c, c,
		b, b, a, c, b, c, b, b, a, a,
		c, b, a, a, a, b, b, b, bc, a,    //950
		c, bc, bc, b, b, a, bc, b, b, c,
		c, b, a, a, c, a, abc, abc, bc, b,
		c, b, c, c, b, b, a, a, b, b,
		b, a, c, b, a, b, a, b, a, a,

		/*
		Circulatia pe autostrazi
		*/

		c, ab, c, a, c, b, b, c, b, a,    //1000
		a, a, a, b, a, b, a, a, ac, c,
		a, b, c, b, a, c, ac, bc, b, b,

		/*
		Obligatiile conducatorilor de autovehicule
		*/

		a, a, b, b, b, a, a, b, b, a,
		b, b, a, c, b, a, bc, c, a, ac,
		b, a, a, abc, b, b, c, a, a, b,   //1050
		a, ab, a, b, c, b, c, b, abc, c,
		bc, abc, b, c, c, b, a, c, b, a,
		b, b, b, b, a, c, b, b, c, c,
		b, a, b, a, b, b, a, c, a, c,
		b, a,

		/*
		Sanctiuni si infractiuni
		*/
		      c, b, a, b, a, b, b, b,     //1100
		c, c, b, b, a, b, ac, c, b, a,
		a, a, c, b, a, c, b, b, a, b,
		b, a, b, a, a, b, c, a, c, b,
		a, c, b, b, b, b, a, b, a, b,
		b, a, b, b, b, b, b, a, b, a,     //1150
		c, abc, a, bc, a, b, abc, b, c, ac,
		ac, abc, ac, b, abc, a, bc,

		/*
		Reguli generale
		*/
								    a, a, a,
		a, ac, b, c, ac, b, c, b, a, a,
		b, abc, c, a, c, bc, abc, abc, a, b,
		b, a, c, bc, bc, a, b, a, a, a,   //1200
		bc, a, a, b, a, c, b, a, ac, bc,
		a, b,

		/*
		Conducerea preventiva
		*/
		      a, b, c, b, b, b, a, c,
		a, c, a, b, a, a, a, c, b, c,
		c, b, a, c, a, c, c, a, b, a,
		c, a, a, c, b, a, a, a, a, a,     //1250
		b, a, a, c, a, c, c, a, a, b,
		a, c, b, b, b, b, a, b, b, a,
		b, b, b, b, a, c, a, a, c, c,
		b, c, a, ac, a, b, b, b, b, ac,
		b, a, c, b, a, a, a, b, c, b,     //1300
		c, a, b, b, b, b, b, a, a, a,
		c, b, a, c, b, a, a, a, a, a,
		b, a, a, c, a, c,

		/*
		Masuri de prim ajutor
		*/
						  a, b, a, a,
		b, a, a, a, b, b, a, b, b, b,
		a, b, b, b, b, a, a, a, b, b,     //1350
		b, b, a, a, b, a, abc, c, a, a,
		b, c, c, a, a, a, c, b, a, a,
		b, b, b, c, a, c, c, a, c, c,
		b, c, b, c, b, a, a,

		/*
		Conducerea ecologica
		*/
						     ab, c, b,
		ac, b, a, ab, b, c, a, ab, abc, a, //1400
		b, ab,

		/*
		Notiuni de mecanica
		*/

		       b, ab, c, ac, b, a, ac, a,
		a, b, a, a, a, ab, c, b, a, b,
		b, ac, a, c, b, b, c, c, a, abc,
		a, b, a, a, a, c, a, a, a, a,
		a, c, b, a, bc, a, b, a, c, b,     //1450
		a, c, c, b, b, b, b, c, b, b,
		b, a
};

int main()
{
    cout<<"Program auxiliar 'Intrebari si Teste cat. B' ed.2014"<<endl<<endl;
    Sleep(1000);
    if(MENIU_PRINC() == 0) return 0;
	return 0;
}

void AFISARE_HELP()
{
	cout<<"Program produs si dezvoltat de Chivu Horea."<<endl<<endl;
	cout<<"Acest program a fost facut pentru a face rezolvarea intrebarilor"<<endl;
	cout<<" de chestionar din cartea 'Intrebari si teste pentru obtinerea "<<endl;
	cout<<"permisului de conducere auto categoria B' de la editura National"<<endl;
	cout<<"mai usoara si mai rapida."<<endl<<endl;

	cout<<"CUM SE FOLOSESTE ACEST PROGRAM"<<endl<<endl;

	cout<<"Acest program se executa in fereastra de tip terminal si se navigheaza"<<endl;
    cout<<"prin comenzi ale tastaturii."<<endl<<endl;

	cout<<"AM OBSERVAT O GRESEALA/EROARE.CE POT FACE?"<<endl<<endl;

	cout<<"Ma puteti anunta prin metodele GitHub sau prin adresa de "<<endl;
	cout<<"email 'chivuhorea@gmail.com' ."<<endl<<endl;

	cout<<"DE CE PROGRAMUL SE EXECUTA IN TERMINAL?"<<endl<<endl;

	cout<<"Datorita faptului ca o adaptare GUI este inutila atata timp"<<endl;
	cout<<"cat programul este doar un auxiliar al cartii mentionate mai"<<endl;
	cout<<"sus si un program cu GUI si cu intrebarile si raspunsurile "<<endl;
	cout<<"complete ar reprezenta un alt proiect complex ce necesita foarte mult timp."<<endl;
	cout<<"Consider ca acest program poate fi util tuturor celor ce detin aceasta carte."<<endl<<endl;
	cout<<"IN CE LIMBAJ ESTE SCRIS PROGRAMUL?"<<endl<<endl;
	cout<<"In C++.Codul este disponibil pe "<<endl;
	cout<<"'https'://github.com/chivu-horea/intrebari-ednat2014B' .";
}

//functie ce converteste input-ul utilizatorului intr-un string utilizabil in interiorul programului
string CONVERSIE(string a)		
{
	if(a=="a" || a=="A" || a==" a" || a=="a " || a==" a " || a==" A" || a=="A " || a==" A ")
		return "A";
	if(a=="b" || a=="B" || a==" b" || a=="b " || a==" b " || a==" B" || a=="B " || a==" B ")
		return "B";
	if(a=="c" || a=="C" || a==" c" || a=="c " || a==" c " || a==" C" || a=="C " || a==" C ")
		return "C";
	if(a=="a,b" || a=="A,B" || a=="ab" || a=="a b" || a=="AB" || a=="A B" || a=="A, B" || a=="a, b" ||
       a=="b,a" || a=="B,A" || a=="ba" || a=="b a" || a=="BA" || a=="B A" || a=="B, A" || a=="b, a")
		return "A,B";
	if(a=="a,c" || a=="A,C" || a=="ac" || a=="a c" || a=="AC" || a=="A C" || a=="A, C" || a=="a, c" ||
       a=="c,a" || a=="C,A" || a=="ca" || a=="c a" || a=="CA" || a=="C A" || a=="C, A" || a=="c, a")
		return "A,C";
	if(a=="b,c" || a=="B,C" || a=="bc" || a=="b c" || a=="BC" || a=="B C" || a=="B, C" || a=="b, c" ||
       a=="c,b" || a=="C,B" || a=="cb" || a=="c b" || a=="CB" || a=="C B" || a=="C, B" || a=="c, b")
		return "B,C";
	if(a=="a,b,c" || a=="A,B,C" || a=="abc" || a=="a b c" || a=="ABC" || a=="A B C" || a=="A, B, C" || a=="a, b, c" ||
       a=="a,c,b" || a=="A,C,B" || a=="acb" || a=="a c b" || a=="ACB" || a=="A C B" || a=="A, C, B" || a=="a, c, b" ||
       a=="b,a,c" || a=="B,A,C" || a=="bac" || a=="b a c" || a=="BAC" || a=="B A C" || a=="B, A, C" || a=="b, a, c" ||
       a=="b,c,a" || a=="B,C,A" || a=="bca" || a=="b c a" || a=="BCA" || a=="B C A" || a=="B, C, A" || a=="b, c, a" ||
       a=="c,a,b" || a=="C,A,B" || a=="cab" || a=="c a b" || a=="CAB" || a=="C A B" || a=="C, A, B" || a=="c, a, b" ||
       a=="c,b,a" || a=="C,B,A" || a=="cba" || a=="c b a" || a=="CBA" || a=="C B A" || a=="C, B, A" || a=="c, b, a")
		return "A,B,C";
		///////////
		return "0";
}

void OPERATOR_ASTEPTARE()
{
    cout<<endl;
    cout<<"Apasati orice tasta pentru a putea continua.";
    cout<<endl;
    getch();
}

void F_INIT(string n)	//functie ce afiseaza initializare functiei cu numarul specificat
{
    cout<<endl;
    cout<<"####################################"<<endl<<endl;
    cout<<">>>>>> Initializare functie "<<n<<" <<<<<<"<<endl<<endl;
    cout<<"####################################"<<endl<<endl;
    Sleep(1000);
    system("cls");
}

int RETURNARE(int n, string &s)
{
    s=CONVERSIE(s);
    if(s=="0") return 2;
    if(r[n]==s) return 1;
    else
            return 0;

}
void INTEREB_REZ()
{
	int a, b, count0 = -1, count;
	double cor = 0, tot, pro;
	string s = "";
    do
    {
    count0++;
    if(count0 > 0)  cout<<"!Numerel introduse nu sunt valide.Introduceti valori valide.(Ex: 12 si 50)!"<<endl<<endl;
	cout<<"Introduceti intervalul de intrebari ce doriti sa le rezolvati: "<<endl;
    cout<<"De la intrebarea ";cin>>a;
    cout<<"     pana la ";cin>>b;
    cout<<endl;
    } while(a>b || a<1 || a>1471 || b<1 || b>1471);
    tot=b-a+1.0;
    cin.ignore(1,'\n');
    Sleep(1000);
    system("cls");
    for(int i=a;i <= b;i++)
    {
    	count=-1;
		do
		{
			count++;
			if(count > 0)	{cout<<"!Raspunsul nu este valid.Introduceti un raspuns valid.";
			cout<<"(Ex: A,B ; a,c ; a, b, c)!"<<endl;}
			cout<<" "<<i<<") ";
			getline(cin,s,'\n');
		}
		while (RETURNARE(i,s)==2);
        if(RETURNARE(i,s) == 1)   {cout<<"         [ CORECT ]";cor++;}
        if(RETURNARE(i,s) == 0)
        {
        cout<<"         [ GRESIT ]"<<endl;
    	cout<<"  raspunsul corect era "<<r[i]<<"; ";
        }
        cout<<endl;
    }
    cout<<endl;
    pro=(cor*100)/tot;
        if(pro == 100.0)  cout<<"Perfect! Ai rezolvat cu o acuratete de "<<pro<<"% .";
          else
            if(pro >= 84.61)  cout<<"Felicitari! Ai rezolvat cu o acuratete de "<<pro<<"% .";
              else
                if(pro <= 84.61 && pro > 20.0)  cout<<"Insuficient! Ai rezolvat cu o acuratete de "<<pro<<"% .";
                   else
                     if(pro <= 20.0)  cout<<"Execrabil! Ai rezolvat cu o acuratete de "<<pro<<"% .";


}
void INTEREB_REZ_IND()
{
	int n;
	cout<<"Introduceti numarul intrebarii al carui raspuns doriti sa il aflati: ";cin>>n;
	cout<<"Raspunsul intrebarii este "<<r[n];
}

void EXECUTARE_MODULE(string mesaj)
{
	if(mesaj == "1")
	{
		F_INIT(mesaj);
		INTEREB_REZ();
		OPERATOR_ASTEPTARE();
		system("cls");
		MENIU_PRINC();
	}

	if(mesaj == "2")
	{
		F_INIT(mesaj);
		INTEREB_REZ_IND();
		OPERATOR_ASTEPTARE();
		system("cls");
		MENIU_PRINC();
	}

	if(mesaj == "help" || mesaj == "Help" || mesaj == "HELP" || mesaj == "Ajutor" || mesaj == "ajutor")
	{
	    system("cls");
		AFISARE_HELP();
		OPERATOR_ASTEPTARE();
		system("cls");
		MENIU_PRINC();
	}
	cout<<endl;
	cout<<"Functia tastata nu este valida.va rugam sa incercati din nou.";
    cout<<endl;
    OPERATOR_ASTEPTARE();
    system("cls");
    MENIU_PRINC();
}

int MENIU_PRINC()
{
	string mesaj;
	cout<<"Module: "<<endl<<endl;
	Sleep(500);
	cout<<"Reolvare intrebari dintr-un interval                   [ Tastati '1' ]"<<endl;
	Sleep(800);
	cout<<"Vizualizarea raspunsului unei intrebari                [ Tastati '2' ]"<<endl<<endl;
	Sleep(800);
	cout<<"Help                                                   [ Tastati 'help' ]"<<endl;
	Sleep(800);
	cout<<"Exit                                                   [ Tastati 'exit' ]"<<endl<<endl;
	Sleep(1000);
	cout<<" -> ";
	cin>>mesaj;
	if(mesaj == "EXIT" || mesaj == "exit" || mesaj == "Exit" || mesaj == "0" || mesaj == "q" || mesaj == "o"){
        system("cls");
        cout<<"------------------------"<<endl;
        cout<<"--- Bafta la condus! ---"<<endl;
        cout<<"------------------------";
        Sleep(1000);
        return 0;
	}
	EXECUTARE_MODULE(mesaj);
	return 1;
}
