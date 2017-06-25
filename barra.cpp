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

Barra::~Barra()
{

}

void Barra::creamarizlocal()
{
    int i,j;
    Eigen::MatrixXf m_ojete(4,4);
    switch (m_tipobarra) {
    case TipoBarra::BiArticulada:
//        //Todo, matriz de rigidez 2x2
//        i=2;j=2;
//        m_matrizriglocal.resize(2*i);
//        for(int k=0;k<2*i;i++)
//            m_matrizriglocal.resize(2*j);
//        //Inicializo a 0;
//        for(int k=0;k<2*i;k++)
//            for(int l=0;l<2*j;k++)
//                m_matrizriglocal[i][j]=0;
//        m_matrizriglocal[0,0]=1; m_matrizriglocal[0]
//    m_ojete= new Eigen::Matrix4f;
    m_ojete<<1,0  ,-1,0;
             0,0  ,0,0;
             1,0  ,-1,0;
             0,0  ,0,0;



        break;
    case TipoBarra::BiEmpotrada:
        //Todo, matriz de rigidez 3x3
        break;
    case TipoBarra::ArticuladaEmpotrada:
        //Todo, matriz de rigidez 3x2
        break;
    case TipoBarra::EmpotradaArticulada:
        //Todo, matriz de rigidez 2x3
        break;
    default:
        break;
    }

}
