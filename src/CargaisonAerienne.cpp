#include "CargaisonAerienne.h"
#include "Cargaison.h"
#include <iostream>
#include<string>
using namespace std;

unsigned CargaisonAerienne::CA_count=0;
CargaisonAerienne::CargaisonAerienne() : Cargaison()
{
//    this->Set_ref("CA"+to_string(CA_count);
    m_type="CA";
    this->Set_ref(CA_count);
//    this->Set_next(NULL);
    m_next=NULL;

    CA_count++;

}
CargaisonAerienne::CargaisonAerienne(float dist) : Cargaison(dist)
{
//    this->Set_ref("CA"+to_string(CA_count);
    m_type="CA";
    this->Set_ref(CA_count);
    m_next=NULL;


    CA_count++;
}


CargaisonAerienne::~CargaisonAerienne()
{
    delete this->Get_les_marchandises();

}

CargaisonAerienne::CargaisonAerienne(const CargaisonAerienne& other) : Cargaison(other)
{
    m_next=other.m_next;
}

float CargaisonAerienne::cout(){
    if (this->volume_total()<80000.0){
        return 10.0* this->Get_distance()* this->poid_total();
    }
    else{
        return 12.0* this->Get_distance()* this->poid_total();

    }
}
