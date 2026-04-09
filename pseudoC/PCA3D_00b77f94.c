// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PCA3D
// Entry Point: 00b77f94
// Size: 16 bytes
// Signature: undefined __thiscall ~PCA3D(PCA3D * this)


/* PCA3D::~PCA3D() */

void __thiscall PCA3D::~PCA3D(PCA3D *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
    return;
  }
  return;
}


