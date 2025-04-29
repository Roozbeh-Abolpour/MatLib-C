# MatLib-C

**MatLib-C** is a lightweight and modular C library for basic matrix operations, including LU decomposition, QR decomposition, inversion, and fundamental matrix algebra.

---

## Features

- Dynamic memory management for matrices
- Basic operations: addition, subtraction, scalar multiplication
- Matrix creation: zeros, ones, identity matrix (`eye`)
- Matrix multiplication
- Matrix transpose
- Determinant and trace calculation
- LU decomposition
- QR decomposition (Gram-Schmidt process)
- Null space computation
- Matrix inversion
- Minimal memory fragmentation
- In-place operations (memory-efficient)

---

## Compilation

To compile the test program:

```bash
gcc -o mat_test Mat_test.cpp -lm
./mat_test
