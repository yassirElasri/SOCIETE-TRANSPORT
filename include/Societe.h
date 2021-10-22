#ifndef SOCIETE_H
#define SOCIETE_H
#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include <string>
#include<iomanip>
#include<Marchandise.h>
#include"Cargaison.h"
#include "CargaisonAerienne.h"
#include "CargaisonRoutiere.h"

class Societe
{

    private:
        unsigned m_ref;
        string m_type;
        int m_sizeA;
        int m_sizeR;
        CargaisonAerienne *les_aeriennes;
        CargaisonRoutiere *les_routieres;

    public:
        unsigned static S_count;
        Societe();
        virtual ~Societe();
        Societe(const Societe& other);

        unsigned int Get_ref() { return m_ref; }
        void Set_ref(unsigned int val) { m_ref = val; }

        int Get_sizeA() { return m_sizeA; }
        void Set_sizeA(int val) { m_sizeA = val; }

        int Get_sizeR() { return m_sizeR; }
        void Set_sizeR(int val) { m_sizeR = val; }

        CargaisonAerienne *Get_aeriennes(){ return les_aeriennes;}
        CargaisonRoutiere *Get_routieres(){ return les_routieres;}

        CargaisonAerienne* Get_cargaisonAerienne( unsigned)

        CargaisonRoutiere* Get_cargaisonRoutiere(unsigned)

        void load_aerienne();
        void unload_aerienne();
        void unload_aerienne(unsigned);


        void load_routiere();
        void unload_routiere();
        void unload_routiere(unsigned);

        void show();

    protected:

};

#endif // SOCIETE_H
