#ifndef MATRIZRIGIDEZ_H
#define MATRIZRIGIDEZ_H
#include "nudo.h"
#include "barra.h"

#include <map>
class Barra;
class Nudo;
class MatrizRigidez
{
public:
    MatrizRigidez();

    std::map<int,Nudo> m_nudos;
    std::map<int,Barra> m_barras;

private:
    typedef int matriz;
};

#endif // MATRIZRIGIDEZ_H
