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

void Barra::displaymatriz(std::vector<std::vector<double> > matriz)
{

    int dimn,dimm;
    try{
        dimn=matriz.size();
        for(int i=0;i<dimn;i++){

            dimm=matriz.size();
            if(dimn!=dimn){
                std::cout<<"La dimension de la matriz entre los nudos"+m_idNudoi<<" y "<<m_idNudoj<<"No esta bien construida"<<std::endl
                                                                            <<"La fila: "<<i<<"No tiene dimensión "<<dimn<<std::endl;


            }
        }

    }
    catch(std::exception &e){

    }

//    int=digitcount
//    for(int i=0;i<dimn;i++){
//        for(int j=0;j<djmm;j++){
//           if()
//            sd::cout<<matriz[i][j]<<
//        }
//    }

}

void Barra::creamarizlocal()
{
    int n,m;int i=1;
       const double EAl=m_E*m_A/m_L;

    switch (m_tipobarra) {

    case BiArticulada:
    {
        //Todo, matriz de rigidez 2x2
        n=2;m=2;
        m_matrizriglocal.resize(2*n);
        for(i=0;i<2*n;i++){
            m_matrizriglocal[i].resize(m);

            m_matrizriglocal[1][1]=EAl;   m_matrizriglocal[1][2]=0;     m_matrizriglocal[1][3]=-EAl;    m_matrizriglocal[1][4]=0;
            m_matrizriglocal[2][1]=0;     m_matrizriglocal[2][2]=0;     m_matrizriglocal[2][2]=0;       m_matrizriglocal[2][2]=0;
            m_matrizriglocal[3][1]=-EAl;  m_matrizriglocal[3][2]=0;     m_matrizriglocal[3][2]=EAl;     m_matrizriglocal[3][2]=0;
            m_matrizriglocal[4][1]=0;     m_matrizriglocal[4][2]=0;     m_matrizriglocal[4][2]=0;       m_matrizriglocal[4][2]=0;
        }
    break;
    }

    case TipoBarra::BiEmpotrada:
       { //Todo, matriz de rigidez 3x3
        break;
    }
    case TipoBarra::ArticuladaEmpotrada:
    {
        //Todo, matriz de rigidez 3x2
        break;
    }
    case TipoBarra::EmpotradaArticulada:
    {
        //Todo, matriz de rigidez 2x3
        break;
    }
    default:
    {break;}
    }

}

