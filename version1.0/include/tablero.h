#ifndef _TABLERO_H_
#define _TABLERO_H_

#include "matriz.h"


class Tablero{
   Matriz matrixilla;
   int fichas;
   int turno;
   bool finalizada;
   int ult_fil, ult_col;
   int movimientos;
   bool comprobarElementio(int fils, int cols, int elemento);
   
   public:
      Tablero(int filas, int columnas, int fichillas);
      int getFilas()const;
      int getColumnas()const;
      int getFichas()const;
      bool empate();
      int elementio(int fils, int cols);
      bool finalizado();
      int getTurno();
      int ganador();
      int puntuacion();
      void insertar(int col);
      void vaciar();
      void prettyPrint();
};

#endif
