#include "Cargaison.h"
#include <iostream>
#include<string>
using namespace std;

unsigned Cargaison::carg_count=0;
Cargaison::Cargaison()
{
    Marchandise *m1 = new Marchandise();
    les_marchandises=m1;
    m_taille=0;
    m_distance=0;
    les_marchandises->Set_next(NULL);
}
Cargaison::Cargaison(float distance)
{

    Marchandise *m1 = new Marchandise();
    les_marchandises=m1;
    m_taille=0;
    m_distance=distance;
    les_marchandises->Set_next(NULL);
}
Cargaison::~Cargaison()
{
    delete les_marchandises;
}

Cargaison::Cargaison(const Cargaison& other)
{

        m_ref = other.m_ref;
        m_distance=other.m_distance;
        m_taille=other.m_taille;
        les_marchandises= other.les_marchandises;

}

Marchandise *Cargaison::Get_marchandise(unsigned id){
    Marchandise *reader=les_marchandises;
    while(reader->Get_next()->Get_ref()!= id){
        reader= reader->Get_next();
    }
    return reader->Get_next();

}




void Cargaison::load(){
    float poid;
    float volume;
    cout<<"  Volume : ";
    cin>>volume;
    cout<<endl<<"  Poid : ";
    cin>>poid;
    Marchandise *m1 = new Marchandise(poid,volume);

    Marchandise *reader = les_marchandises;
    while(reader->Get_next() != NULL){
        reader=reader->Get_next();
    }
    reader->Set_next(m1);
    m_taille++;


}


void Cargaison::show(){
    Marchandise *reader= les_marchandises;
    while(reader->Get_next() != NULL){
        reader->show();
        reader=reader->Get_next();
    }
}

void Cargaison::unload(){
    Marchandise *reader= les_marchandises;
    while(reader->Get_next()->Get_next() != NULL){
        reader=reader->Get_next();
    }
    reader->Set_next(NULL);

};
void Cargaison::unload(unsigned id){
    Marchandise *reader=les_marchandises;
    while(reader->Get_next()->Get_ref()!= id){
        reader= reader->Get_next();
    }
    reader->Set_next(reader->Get_next()->Get_next());

};


float Cargaison::poid_total(){
    float total=0;
    Marchandise *reader= les_marchandises;
    while(reader->Get_next()!= NULL){
        reader=reader->Get_next();
        total+=reader->Get_poid();

    }
    return total;
};
float Cargaison::volume_total(){
    float total=0;
    Marchandise *reader= les_marchandises;
    while(reader->Get_next()!= NULL){
        reader=reader->Get_next();
        total+=reader->Get_volume();

    }
    return total;
};
