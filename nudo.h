#ifndef NUDO_H
#define NUDO_H
#include <vector>
#include <utility>
#include "tipos.h"


class Nudo
{
public:
    Nudo(std::pair<double,double> coord, TipoNudo tN, TipoApoyo tA);

    TipoNudo tipo() const;

    TipoApoyo apoyo() const;

private:
    std::pair<double,double> m_pos;
    double m_x;
    double m_y;

    std::vector<double> Reacciones;
    TipoNudo    m_tipo;
    TipoApoyo   m_apoyo;

};

#endif // NUDO_H
