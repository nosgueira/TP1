#ifndef TESTES_H
#define TESTES_H
#include "dominios.h"

using namespace std;

//----------------------------------------------------------
//-------------------------CEP------------------------------
//----------------------------------------------------------
class TUCEP{
    private:
        const static int VALOR_VALIDO = 8000000;
        const static int VALOR_INVALIDO = 999999;
        CEP cep;
        int estado=true;
        void testa_sucesso();
        void testa_falha();
    public:
        bool run();
};
//----------------------------------------------------------
//------------------------CLASSE----------------------------
//----------------------------------------------------------
class TUClasse{
    private:
        static const string VALOR_VALIDO;
        static const string VALOR_INVALIDO;
        Classe classe;
        bool estado=true;
        void testa_sucesso();
        void testa_falha();
    public:
        bool run();
};
//----------------------------------------------------------
//------------------CÓDIGO-DE-AGÊNCIA-----------------------
//----------------------------------------------------------
class TUCodigoDeAgencia{
    private:
        static const string VALOR_VALIDO;
        static const string VALOR_INVALIDO;
        CodigoDeAgencia codigo_de_agencia;
        bool estado=true;
        void testa_sucesso();
        void testa_falha();
    public:
        bool run();
};
//----------------------------------------------------------
//------------------CÓDIGO-DE-APLICAÇÃO---------------------
//----------------------------------------------------------
class TUCodigoDeAplicacao{
    private:
        static const string VALOR_VALIDO;
        static const string VALOR_INVALIDO;
        CodigoDeAplicacao codigo_de_aplicacao;
        bool estado=true;
        void testa_sucesso();
        void testa_falha();
    public:
        bool run();
};
#endif
