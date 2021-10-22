#ifndef ADMIN_H
#define ADMIN_H

#include <Client.h>


class Admin : public Client
{
    public:
        Admin();
        virtual ~Admin();
        Admin(const Admin& other);
    protected:
    private:
};

#endif // ADMIN_H
