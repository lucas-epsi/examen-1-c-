#include <iostream>

using namespace std;

int main{

char start;

do{

cout << " Menu de sélection : " <<endl;
cout <<" 1) Ajouter réel " << endl;
cout <<" 2) Afficher liste des réels "<<endl;
cout <<" 3) Supprimer le premier réel ayant la valeur choisie "<<endl;
cout <<" 4) Supprimer tous les réels ayant la valeur choisie "<<endl;
cout <<" 5) Quitter "<<endl;

int select;
cin >> select;
	switch(select){

	case 1:{

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
