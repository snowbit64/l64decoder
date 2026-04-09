// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PCA3D
// Entry Point: 00b77f60
// Size: 52 bytes
// Signature: undefined __thiscall PCA3D(PCA3D * this, uint param_1)


/* PCA3D::PCA3D(unsigned int) */

void __thiscall PCA3D::PCA3D(PCA3D *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new__((ulong)(param_1 * 3) << 2);
  *(uint *)(this + 8) = param_1;
  *(void **)this = pvVar1;
  return;
}


