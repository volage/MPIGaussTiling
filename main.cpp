#include <stdio.h>
#include <stdlib.h>
#include "mpi.h"



int main (int argc, char *argv[]){

	int processor_rank  = 0;
	int processor_count = 1;

	MPI_Init(&argc, &argv);

	MPI_Comm_size (MPI_COMM_WORLD, &processor_count);
    MPI_Comm_rank (MPI_COMM_WORLD, &processor_rank );

	MPI_Barrier(MPI_COMM_WORLD);
	MPI_Finalize();
	return 0;
}