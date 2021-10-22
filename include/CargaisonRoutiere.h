#ifndef CARGAISONROUTIERE_H
#define CARGAISONROUTIERE_H

#include <Cargaison.h>


class CargaisonRoutiere : public Cargaison
{

    private:
        string m_type;
        CargaisonRoutiere *m_next;
    public:
        unsigned static CR_count;
        CargaisonRoutiere();
        CargaisonRoutiere(float);
         ~CargaisonRoutiere();
        CargaisonRoutiere(const CargaisonRoutiere& other);

        string Get_type() { return m_type; };

        CargaisonRoutiere *Get_next() { return m_next; }
        void Set_next(CargaisonRoutiere *val) { m_next = val;}

        float cout();


    protected:

};

#endif // CARGAISONROUTIERE_H
