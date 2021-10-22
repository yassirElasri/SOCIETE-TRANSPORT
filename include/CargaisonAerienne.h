#ifndef CARGAISONAERIENNE_H
#define CARGAISONAERIENNE_H

#include <Cargaison.h>


class CargaisonAerienne : public Cargaison
{
    private:
        string m_type;
        CargaisonAerienne *m_next;

    public:
        unsigned static CA_count;
        CargaisonAerienne();
        CargaisonAerienne(float);
         ~CargaisonAerienne();
        CargaisonAerienne(const CargaisonAerienne& other);


        string Get_type() { return m_type; };


        CargaisonAerienne *Get_next() { return m_next; }
        void Set_next(CargaisonAerienne *val) { m_next = val;}

        float cout();

    protected:


};

#endif // CARGAISONAERIENNE_H
