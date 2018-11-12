#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <ostream>
using namespace std;


class Pessoa
{
        
private:
    string codigo;
	string logradouro;
    string setor;
    string cidade;
    string estado;
    string telefone;
    string email;
    
    string setcodigo()
    { 
      this->codigo = gettelefone() + getemail.substr(0,4);  
    }
    
public:
    Pessoa();
    Pessoa(string logradouro, string setor, string cidade, string  estado , string telefone , string email) : 
    {
            this->setlogradouro(logradouro);
            this->setsetor(setor);
            this->setcidade(cidade);
            this->setestado(estado);
            this->settelefone(telefone);
            this->setemail(email);
            this->setcodigo();
    }
    
    const std::string& getcodigo() const 
    {
        return codigo;
    }
    
     
    string setlogradouro(string logradouro)
    {
        this->logradouro = logradouro;
    }
    const std::string& getlogradouro() const 
    {
        return logradouro;
    }
    
    string setsetor(string setor)
    {
        this->setor = setor;
    }
    const std::string& getsetor() const 
    {
        return setor;
    }
    
    string setcidade(string cidade)
    {
        this->cidade = cidade;
    }
    const std::string& getcidade() const 
    {
        return cidade;
    }
    
    string setestado(string estado)
    {
        this->estado = estado;
    }
    const std::string& getestado() const 
    {
        return estado;
    }
    
    string settelefone(string telefone)
    {
        this->telefone = telefone;
    }
    const std::string& gettelefone() const 
    {
        return telefone;
    }
    
    string setemail(string email)
    {
        this->email = email;
    }
    const std::string& getemail() const 
    {
        return email;
    }
 
 
};   
   





#endif // PESSOA_H
