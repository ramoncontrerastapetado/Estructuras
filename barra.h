#ifndef BARRA_H
#define BARRA_H
#include<nudo.h>
#include<vector>
#include<tipos.h>
#include<Eigen/Dense>

class Barra
{
public:
    Barra(double Area,double Longitud,double Young,Nudo *Nudoi,Nudo *Nudoj );
    ~Barra();
    //GiraBarra(Barra this);


private:
    void creamarizlocal();


    double m_A;
    double m_L;
    double m_E;


    TipoBarra m_tipobarra;

    Eigen::MatrixXd m_riglocEigen;
    int m_idNudoi;
    int m_idNudoj;
    Nudo* m_nudoi;
    Nudo* m_nudoj;
    std::vector<std::vector<double>> m_matrizriglocal;



};

#endif // BARRA_H
