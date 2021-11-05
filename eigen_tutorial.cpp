#include <iostream>
#include <eigen3/Eigen/Dense>
 
using namespace Eigen;
 
int main()
{
  MatrixXd m(2,2); // Matrix?! : ? means size of the square matrix, ! means data type. Matrix3f meanst 3x3 matrix with float components
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);

  MatrixXd mm(2,2);
  mm << 3, 2.5, -1, 5.5;

  Matrix2d mmm[2];
  mmm[0] << 1, 2, 3, 4;
  mmm[1] << 5, 6, 7, 8;

  std::cout << "Here is the matrix m:\n" << m << std::endl;
  std::cout << "Here is the matrix mm:\n" << mm << std::endl;
  std::cout << "Here is the matrix mmm:\n [" << *mmm <<"]"<< std::endl << "[" << *(mmm+1) << "]" << std::endl;

  VectorXd v(2);
  v(0) = 4;
  v(1) = v(0) - 1;
  std::cout << "Here is the vector v:\n" << v << std::endl;

  std::cout << "Matrix multiplication: \n" << m * v << std::endl;
  std::cout << "Componentwise output: \n" << "v(0) is " << v(0) << ", and v(1) is " << v(1) << std::endl;

  return 0;
}