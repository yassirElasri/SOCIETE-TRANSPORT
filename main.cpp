#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include <string>
#include<iomanip>
#include<Marchandise.h>
#include"Cargaison.h"
#include "CargaisonAerienne.h"
#include "CargaisonRoutiere.h"
#include"Societe.h"
#include "CLient.h"
#include "Admin.h"

using namespace std;

void admin_menu(){
       cout<<"ADMIN MENU PAGE"<<endl<<"___________________________________________________________________________"<<endl;
        cout<<"\t 1 : Ajouter Cargaison"<<endl;
        cout<<"\t 2 : Afficher toutes les Cargaisons"<<endl;
        cout<<"\t 3 : Ajouter Marchandise à Cargaison"<<endl;
        cout<<"\t 4 : Afficher Cargaison"<<endl;
        cout<<"\t 5 : Supprimer Marchandise"<<endl;
        cout<<"\t 6 : Supprimer Cargaison"<<endl;
        cout<<"\t 7 : Modifier Marchandise"<<endl;
        cout<<"\t q : Quitter"<<endl;
        cout<<"\t Choisir Action : "<<endl;
}














int main()
{

    Societe *S1 = new Societe();


    S1->load_routiere();
    S1->load_routiere();
    S1->load_routiere();
    S1->load_routiere();
    S1->load_routiere();
    S1->load_routiere();
    S1->load_routiere();
    S1->load_routiere();
    S1->show();


























//    cout << " ____________________SOCIETE TRANSPORT APPLICATION_______________ "<<endl;
//    cout <<" 1 . Connect as Admin "<<endl<<" 2 Connect  as Client "<<endl;
//    char choix;
//    cin>> choix;
//    if(choix=='1'){
//
//
//
//        do{
//            admin_menu();
//            cin>>choix;
//            switch(choix){
//                case '1' :{
//                    float distance;
//                    cout<<"\t Entrez la distance de la cargaison : ";
//                    cin>>distance;
//                    Cargaison *new_cargaison = new Cargaison(distance);
//
//                }
//                default :
//                    int a;
//
////                case 2: {
////                    new_carg->show();
////                }
//                case 3 : {
//                    new_carg->load();
//                }
//
//            }
//
//        }while(choix != 'q');
//
//    }
//    else if (choix =='2'){
//
//    }
//    else{
//
//    }
//    return 0;
}
