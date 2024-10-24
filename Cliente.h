#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

class Cliente{
private:
    string _cuit, _telefono, _mail;

public:
    Cliente();
    Cliente(string cuit, telefono, mail);

    void setCuit(string cuit);
    void setTelefono(string telefono);
    void setMail(string mail);

    string getCuit();
    string getTelefono();
    string getMail();

};

#endif // CLIENTE_H_INCLUDED
