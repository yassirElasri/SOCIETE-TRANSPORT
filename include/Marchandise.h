#ifndef MARCHANDISE_H
#define MARCHANDISE_H


class Marchandise
{
    private:
        unsigned m_ref;
        float m_poid;
        float m_volume;
        Marchandise *m_next;
    public :
        unsigned static merch_count;
        Marchandise();
        Marchandise(float, float);

        virtual ~Marchandise();
        Marchandise(const Marchandise& other);

        unsigned int Get_ref() { return m_ref; }
        void Set_ref(unsigned int val) { m_ref = val; }

        float Get_poid() { return m_poid; }
        void Set_poid(float val) { m_poid = val; }

        float Get_volume() { return m_volume; }
        void Set_volume(float val) { m_volume = val; }

        Marchandise *Get_next() { return m_next; }
        void Set_next(Marchandise *val) { m_next = val; }

        void show();

    protected:


};

#endif // MARCHANDISE_H
