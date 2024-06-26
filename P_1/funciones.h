#ifndef funciones_h
#define funciones_h

#include<iostream>
#include<cstdlib>
#include<vector>
#include<fstream>	//Lee archivos de entrada, escribe archivos de salida
#include<iomanip>	//Setprecision
#include<cmath>		//Funciones matemáticas

using namespace std;

using V = vector<double>;
using VI = vector<int>;
using M = vector<V>;

////*** [ Tolerancia ] ****////
const double tol = 1e-12;
////*** [ Decimales ] ****////
const int decim = 16;

////*** [ TRANSFORMACIONES Y OPERACIONES CON V Y M ] ***////

int lu (M& A, VI& perm);
int pivotage (M& A, int index);
void Gauss (M& A, int fila);
V resuelve (const M& A, const V& b);
V calculo_res (M& A, V& x, V& b);
M calculo_PA (M& A, VI& perm);
M calculo_LU (M& A);
double determinante (const M& A); 
double traza (const M& A);
M suma (const M& A, const M& B);
M resta (const M& A, const M& B);
M producto (const M& A, const M& B);
V suma_vectores (const V& u, const V& v);
V resta_vectores (const V& u, const V& v);
M inversa (const M& A);
M transpuesta (const M& A);
M identidad (int n);

////*** [ NORMAS VECTORES ] ***////

double norma_1_vector (const V& b);
double norma_2_vector (const V& b);
double norma_inf_vector (const V& b);

////*** [ NORMAS MATRICES ] ***////

double norma_1 (const M& A);
double norma_inf (const M& A);

////*** [ NÚMERO DE CONDICIÓN ] ***////

double condicion_1 (const M& A);
double condicion_inf (const M& A);

////*** [ IMPRESIÓN ] ***////

void imprimir_matriz (const M& A);
void imprimir_matlab (const M& A);

#endif