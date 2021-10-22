#ifndef CARGAISON_H
#define CARGAISON_H
#include <string>
#include "Marchandise.h"
using namespace std;

class Cargaison
{

    private:
        float m_distance;
        Marchandise * les_marchandises;
        int m_taille;
    protected:
        unsigned m_ref;

    public:
        unsigned static carg_count;

        Cargaison();
        Cargaison(float);
        virtual ~Cargaison();
        Cargaison(const Cargaison& other);

        unsigned Get_ref() { return m_ref; }
        void Set_ref(unsigned val) { m_ref = val; }

        float Get_distance() { return m_distance; };
        void Set_distance(float val) { m_distance = val; }

        Marchandise * Get_les_marchandises() { return les_marchandises; }
        void Set_les_marchandises(Marchandise * val) { les_marchandises = val; }
        Marchandise *Get_marchandise(unsigned);

        int Get_taille() { return m_taille; }
        void Set_taille(int val) { m_taille = val; }

        void show();
        void load();
        void unload(unsigned);
        void unload();

        float poid_total();
        float volume_total();




    protected:

};

#endif // CARGAISON_H
