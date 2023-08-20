/****************************************************************
 ****
 **** This program file is part of the book 
 **** `Parallel programming for Science and Engineering'
 **** by Victor Eijkhout, eijkhout@tacc.utexas.edu
 ****
 **** copyright Victor Eijkhout 2012-7
 ****
 **** MPI Exercise
 ****
 ****************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <mpi.h>

int main(int argc,char **argv) {

/**** your code here ****/
  printf("First hello\n");
  MPI_Init(&argc, &argv);
  printf("Second hello\n");
  MPI_Finalize();
  printf("Third hello\n");
  
  return 0;
}
