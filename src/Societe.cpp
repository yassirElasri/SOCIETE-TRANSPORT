#include "Societe.h"


unsigned Societe::S_count=0;
Societe::Societe()
{
    m_ref=S_count;
    m_type="S";
    m_sizeA=0;
    m_sizeR=0;

    CargaisonAerienne *CA =new CargaisonAerienne();
    CargaisonRoutiere *CR = new CargaisonRoutiere();
    les_aeriennes = CA;
    les_routieres = CR;
    les_aeriennes->Set_next(NULL);
    les_routieres->Set_next(NULL);

}

Societe::~Societe()
{
    delete les_routieres;
    delete les_aeriennes;
}

Societe::Societe(const Societe& other)
{
    m_type=other.m_type;
    m_ref=other.m_ref;
    m_sizeA=other.m_sizeA;
    m_sizeR=other.m_sizeR;
    les_aeriennes = other.les_aeriennes;
    les_routieres = other.les_routieres;
}


CargaisonAerienne* Societe::Get_cargaisonAerienne( unsigned ref){

        CargaisonAerienne *reader= les_aeriennes;
        while(reader->Get_next()->Get_ref() != ref)
            {reader=reader->Get_next();}
            return reader->Get_next();
}


CargaisonRoutiere* Societe::Get_cargaisonRoutiere( unsigned ref){

        CargaisonRoutiere *reader= les_routieress;
        while(reader->Get_next()->Get_ref() != ref)
            {reader=reader->Get_next();}
            return reader->Get_next();
}






void Societe::load_aerienne(){
    float dist;
    cout<<"Entrez distance : ";
    cin>> dist;

    CargaisonAerienne *CA= new CargaisonAerienne(dist);


    CargaisonAerienne *reader =les_aeriennes;


    while(reader->Get_next() != NULL){
        reader=reader->Get_next();
    }
    reader->Set_next(CA);



    m_sizeA++;


};
void Societe::unload_aerienne(){
    CargaisonAerienne *reader= les_aeriennes;
    while(reader->Get_next()->Get_next() != NULL){
        reader=reader->Get_next();
    }
    reader->Set_next(NULL);
};

void Societe::unload_aerienne(unsigned id){
    CargaisonAerienne *reader=les_aeriennes;
    while(reader->Get_next()->Get_ref()!= id){
        reader= reader->Get_next();
    }
    reader->Set_next(reader->Get_next()->Get_next());

};



void Societe::load_routiere(){
    float dist;
    cout<<"Entrez distance : ";
    cin>> dist;
    CargaisonRoutiere *CR= new CargaisonRoutiere(dist);
    cout<<"NULL :"<<CR->Get_next()<<endl;

    CargaisonRoutiere *reader =les_routieres;
    while(reader->Get_next() != NULL){
        reader=reader->Get_next();
    }

    reader->Set_next(CR);
    m_sizeR++;

};
void Societe::unload_routiere(){
    CargaisonRoutiere *reader= les_routieres;
    while(reader->Get_next()->Get_next() != NULL){
        reader=reader->Get_next();
    }
    reader->Set_next(NULL);
};
void Societe::unload_routiere(unsigned id){
    CargaisonRoutiere *reader=les_routieres;
    while(reader->Get_next()->Get_ref()!= id){
        reader= reader->Get_next();
    }
    reader->Set_next(reader->Get_next()->Get_next());

};
void Societe::show(){
    cout<<"_________________Societe"<<m_type<<m_ref<<"__________"<<endl;
    cout<<"\t______CARGAISON AERIENNE : "<<m_sizeA<<endl<<endl;
    CargaisonAerienne *readerA =les_aeriennes;
    while(readerA->Get_next() != NULL){
        cout<<"\t"<<readerA->Get_type()<<readerA->Get_ref()<<" =>";
        readerA=readerA->Get_next();
    }
    cout<<endl<<"\t_____________"<<endl;

     cout<<"______CARGAISON ROUTIERE : "<<m_sizeR<<endl<<endl;
    CargaisonRoutiere *readerR =les_routieres;
    while(readerR->Get_next() != NULL){
        cout<<"\t"<<readerR->Get_type()<<readerR->Get_ref()<<" =>";
        readerR=readerR->Get_next();
    }
    cout<<endl<<"_______________________________________"<<endl;

}
