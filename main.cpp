#include <iostream>
#include "reel.h"
#include <vector>
#include <fstream>


using namespace std;

int main{

char start;

do{

cout << " Menu de sélection : " <<endl;
cout <<" 1) Ajouter réels " << endl;
cout <<" 2) Afficher liste des réels "<<endl;
cout <<" 3) Supprimer le premier réel ayant la valeur choisie "<<endl;
cout <<" 4) Supprimer tous les réels ayant la valeur choisie "<<endl;
cout <<" 5) Quitter "<<endl;

vector <reel> Nombre;
float tmp_nb;

int select;
cin >> select;

	switch(select){

	case 1:{
	int i;
	ofstream listreel;
	listreel.open("reels.txt");
	do{
	cout << "ajouter nouveau nombre?" <<endl;
	cin >> choix;
	if(choix=='y'||choix=='Y'){
	cout<<"entrez nouveau nombre réel : "<<endl;
	cin>>tmp_nb;
	Nombre.pushback(reel());
	Nombre[i].nbreel = tmp_nb; 
	}else{yes=false;}
	i++;
	}while(yes==true);
	listreel.close();
		}break;
	case 2:{

		}break;
	case 3:{

		}break;
	case 4:{

		}break;
	case 5:{

		}break;
	cout << endl;
	cout << "revenir au menu de sélection? <<endl;
	cout <<"y/n"<<endl;
	cin >> start;

	}while(start=='y' || start=='Y');

return 0;

}
