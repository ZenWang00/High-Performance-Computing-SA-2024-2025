const char* dgemm_desc = "Blocked dgemm.";

/* This routine performs a dgemm operation
 *
 *  C := C + A * B
 *
 * where A, B, and C are lda-by-lda matrices stored in column-major format.
 * On exit, A and B maintain their input values.
 */
void square_dgemm(int n, double* A, double* B, double* C) {
  // TODO: Implement the blocking optimization
  //       (The following is a placeholder naive three-loop dgemm)
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      for(int k = 0; k < n; ++k) {
	C[i+j*n] += A[i+k*n] * B[k+j*n];
      }
    }
  }
}
