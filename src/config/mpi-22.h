#if !defined(MPI_VERSION) || (MPI_VERSION < 2) || (MPI_VERSION == 2 && MPI_SUBVERSION < 2)

#define PyMPI_MISSING_MPI_AINT 1
#define PyMPI_MISSING_MPI_OFFSET 1

#define PyMPI_MISSING_MPI_C_BOOL 1
#define PyMPI_MISSING_MPI_INT8_T 1
#define PyMPI_MISSING_MPI_INT16_T 1
#define PyMPI_MISSING_MPI_INT32_T 1
#define PyMPI_MISSING_MPI_INT64_T 1
#define PyMPI_MISSING_MPI_UINT8_T 1
#define PyMPI_MISSING_MPI_UINT16_T 1
#define PyMPI_MISSING_MPI_UINT32_T 1
#define PyMPI_MISSING_MPI_UINT64_T 1
#define PyMPI_MISSING_MPI_C_COMPLEX 1
#define PyMPI_MISSING_MPI_C_FLOAT_COMPLEX 1
#define PyMPI_MISSING_MPI_C_DOUBLE_COMPLEX 1
#define PyMPI_MISSING_MPI_C_LONG_DOUBLE_COMPLEX 1

#define PyMPI_MISSING_MPI_INTEGER8 1
#define PyMPI_MISSING_MPI_INTEGER16 1
#define PyMPI_MISSING_MPI_REAL16 1
#define PyMPI_MISSING_MPI_COMPLEX4 1
#define PyMPI_MISSING_MPI_COMPLEX8 1
#define PyMPI_MISSING_MPI_COMPLEX16 1
#define PyMPI_MISSING_MPI_COMPLEX32 1

#define PyMPI_MISSING_MPI_Op_commutative 1
#define PyMPI_MISSING_MPI_Reduce_local 1
#define PyMPI_MISSING_MPI_Reduce_scatter_block 1

#define PyMPI_MISSING_MPI_DIST_GRAPH 1
#define PyMPI_MISSING_MPI_UNWEIGHTED 1
#define PyMPI_MISSING_MPI_Dist_graph_create_adjacent 1
#define PyMPI_MISSING_MPI_Dist_graph_create 1
#define PyMPI_MISSING_MPI_Dist_graph_neighbors_count 1
#define PyMPI_MISSING_MPI_Dist_graph_neighbors 1

#define PyMPI_MISSING_MPI_Comm_errhandler_function 1
#define PyMPI_MISSING_MPI_Win_errhandler_function 1
#define PyMPI_MISSING_MPI_File_errhandler_function 1

#endif /* MPI < 2.2 */