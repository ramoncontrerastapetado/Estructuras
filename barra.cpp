#include "barra.h"

Barra::Barra(double Area, double Longitud, double Young, Nudo *Nudoi,Nudo *Nudoj):
    m_A(Area),m_L(Longitud),m_E(Young),m_nudoi(Nudoi),m_nudoj(Nudoj)
{
    if(Nudoi->tipo()==TipoNudo::Articulado){
        if(Nudoj->tipo()==TipoNudo::Articulado){
            m_tipobarra=TipoBarra::BiArticulada;
        }
        else{
            m_tipobarra=TipoBarra::ArticuladaEmpotrada;
        }
    }
    else if(Nudoi->tipo()==TipoNudo::Rigido){
        if(Nudoj->tipo()==TipoNudo::Articulado){
            m_tipobarra=TipoBarra::EmpotradaArticulada;
        }
        else{
            m_tipobarra=TipoBarra::BiEmpotrada;
        }
    }
    this->creamarizlocal();

}

void Barra::creamarizlocal()
{

}
