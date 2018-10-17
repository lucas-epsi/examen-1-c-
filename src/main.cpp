#include <iostream>
#include "reel.h"
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int main(){

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

	bool yes=true;
	char choix;
	ofstream listreel("reels.txt", ios::app);
	int i=0;
	do{
	cout << "ajouter nouveau nombre? y/n " <<endl;
	cin >> choix;
	if(choix=='y'||choix=='Y'){
	cout<<"entrez nouveau nombre réel : "<<endl;
	cin>>tmp_nb;
	Nombre.push_back(reel());
	Nombre[i].nbreel = tmp_nb;
	listreel<<Nombre[i].nbreel<<endl;
	}else{yes=false;}
	i++;
	}while(yes==true);
	listreel.close();

		}break;
	case 2:{
	cout << " liste des nombres:" << endl;
	ifstream listreel("reels.txt", ios::in);
	string ligne;
	while(getline(listreel, ligne))
	{
	cout << ligne<< endl;
	}
	listreel.close();

		}break;
	case 3:{
	float erasenb;
	cin >> erasenb;
	ifstream listreel("reels.txt", ios::in);
	string ligne;
	int i;
	while(getline(listreel, ligne))
	{

	i++;
	}

		}break;
	case 4:{

	vector <reel> Nombre1;
	float erasenbs;
	cout << "entrez le nombre à supprimer :"<<endl;
	cin >> erasenbs;
	ifstream listreel("reels.txt", ios::in);
	string ligne;
	int i;
	while(getline(listreel, ligne))
	{
	stringstream ss;
	float f;
	ss.str(ligne);
	ss >> f;

	if(f!=erasenbs){
	Nombre1[i].nbreel=f;}
	i++;
	}
	listreel.close();
	ofstream newlist;
	newlist.open("reels.txt");
	for(i=0;i<Nombre1.size();i++){
	Nombre1.push_back(reel());
	newlist<<Nombre1[i].nbreel<<endl;
	}
	newlist.close();
		}break;
	case 5:{ exit(0);

		}break;
}
	cout << endl;
	cout << "revenir au menu de sélection?" <<endl;
	cout <<"y/n"<<endl;
	cin >> start;

	}while(start=='y' || start=='Y');

return 0;

}
