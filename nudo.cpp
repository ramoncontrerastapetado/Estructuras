#include "nudo.h"

Nudo::Nudo(std::pair<double,double> coord, TipoNudo tN, TipoApoyo tA):
        m_tipo(tN),m_apoyo(tA)
{
m_x=coord.first;
m_y=coord.second;
m_pos=std::make_pair(m_x,m_y);
}

TipoNudo Nudo::tipo() const
{
    return m_tipo;
}

TipoApoyo Nudo::apoyo() const
{
    return m_apoyo;
}


