#include <iostream>
#include <Eigen/Dense>
#include <Eigen/Core>
using Eigen::MatrixXd;
int main()
{ MatrixXd q(9,9);
  MatrixXd m(2,2);
  MatrixXd I(2,2);
  I(0,0)=1;I(0,1)=0;I(1,0)=0;I(1,1)=1;
  std::cout<<2*I<<std::endl;
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);
  std::cout << 2*m*I << std::endl;

  MatrixXd biart(2*2,2*2);
  MatrixXd biapo(3*2,3*2);
  std::cout<<"La matriz es de tamaño: "<<q.rows()<<"x"<<q.cols()<<std::endl;
  std::cout<<q<<std::endl;
  q=biart;
  std::cout<<"La matriz es de tamaño: "<<q.rows()<<"x"<<q.cols()<<std::endl;

  q=biapo;
  std::cout<<"La matriz es de tamaño: "<<q.rows()<<"x"<<q.cols()<<std::endl;

  std::cout<<"La inversa de I="<<I<<" es : "<<I.inverse();
}
