#include "Client.h"

unsigned Client::clts_count=0;
Client::Client(Societe *S)
{
    m_type="Clt";
    m_ref=clts_count;
    clts_count++;
    m_societe=S;
}

Client::~Client()
{
    delete m_societe;
}

Client::Client(const Client& other)
{
   m_type=other.m_type;
   m_ref=other.m_ref;
   m_societe()=other.m_societe();
}

void Client::show_cargA(unsigned id){

    CargaisonAerienne *reader=m_societe()->Get_aeriennes();
    while( reader->Get_ref() != id){
        reader=reader->Get_next();
    }
    reader->show();
};
void Client::show_cargR(unsigned id){
    CargaisonRoutiere *reader= m_societe()->Get_routieres();
        while( reader->Get_ref() != id){
        reader=reader->Get_next();
    }
    reader->show();
};

void Client::show_cargs(){
    cout<< "______________AFFICHER TOUTES LES CARGAISONS__________"<<endl;

    CargaisonRoutiere *readerR= m_societe()->Get_routieres();
    while( readerR->Get_ref() != NULL){
        cout<< readerR->Get_type()<<readerR->Get_ref()<<" => ";
        readerR=readerR->Get_next();
    }
    CargaisonAerienne *readerA =m_societe()->Get_aeriennes();
    while( readerA->Get_ref() != NULL){
        cout<< readerA->Get_type()<<readerA->Get_ref()<<" => ";
        readerA=readerA->Get_next();
    }
    cout<<endl;

    }
