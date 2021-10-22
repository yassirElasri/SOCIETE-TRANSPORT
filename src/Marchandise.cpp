#include "Marchandise.h"
#include <iostream>

using namespace std;
unsigned  Marchandise::merch_count=0;

Marchandise::Marchandise()
{
    m_ref=1;
    m_poid=1;
    m_volume=1;
    m_next = NULL;
    merch_count++;
}
Marchandise::Marchandise(float poid, float vol)
{
    m_ref=merch_count;
    merch_count++;
    m_poid=poid;
    m_volume=vol;
    m_next = NULL;
    merch_count++;
}

Marchandise::~Marchandise()
{
    delete m_next;
}

Marchandise::Marchandise(const Marchandise& other)
{
        m_ref=other.m_ref;
        m_poid=other.m_poid;
        m_volume = other.m_volume;
        m_next= other.m_next;

}

void Marchandise::show(){
     cout<<"_______________________Marchandise "<< m_ref<<"____________________"<<endl;
        cout<< " \t poid : "<<m_poid<< " volume : "<<m_volume<<endl;

}
