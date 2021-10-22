#include "CargaisonRoutiere.h"
#include "Cargaison.h"
#include <iostream>
#include<string>
using namespace std;

unsigned CargaisonRoutiere::CR_count=0;
CargaisonRoutiere::CargaisonRoutiere() : Cargaison()
{
//    this->Set_ref("CA"+to_string(CA_count);
    m_type="CR";

    this->Set_ref(CR_count);
    CR_count++;

}
CargaisonRoutiere::CargaisonRoutiere(float dist) : Cargaison(dist)
{
//    this->Set_ref("CA"+to_string(CA_count);
    m_type="CA";
    this->Set_ref(CR_count);
    m_next=NULL;


    CR_count++;
}


CargaisonRoutiere::~CargaisonRoutiere()
{
    delete this->Get_les_marchandises();

}

CargaisonRoutiere::CargaisonRoutiere(const CargaisonRoutiere& other) : Cargaison(other)
{

}

float CargaisonRoutiere::cout(){
    if (this->volume_total()<80000.0){
        return 4.0* this->Get_distance()* this->poid_total();
    }
    else{
        return 6.0* this->Get_distance()* this->poid_total();

    }
};
