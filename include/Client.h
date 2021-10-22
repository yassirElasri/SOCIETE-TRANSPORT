#ifndef CLIENT_H
#define CLIENT_H
#include "Cargaison.h"
#include "CargaisonAerienne.h"
#include "CargaisonRoutiere.h"


class Client
{
    private:
        unsigned int m_ref;
        string m_type;
        Societe *m_societe;
    public:
        unsigned static Clt_count;
        Client(Societe*);
        virtual ~Client();
        Client(const Client& other);

        unsigned int Get_ref() { return m_ref; }
        void Set_ref(unsigned int val) { m_ref = val; }

        string Get_type() { return m_type; }
        void Set_type(string val) { m_type = val; }

        Societe *Get_societe() { return *m_societe; }
        void Set_societe(Societe *val) { m_societe = val; }
        void show_cargA(unsigned);
        void show_cargR(unsigned);
        void show_cargs();
    protected:


};

#endif // CLIENT_H
