// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PCA3D
// Entry Point: 00b77f14
// Size: 76 bytes
// Signature: undefined __thiscall PCA3D(PCA3D * this, float * param_1, uint param_2)


/* PCA3D::PCA3D(float const*, unsigned int) */

void __thiscall PCA3D::PCA3D(PCA3D *this,float *param_1,uint param_2)

{
  void *__dest;
  ulong __n;
  
  __n = (ulong)(param_2 * 3) << 2;
  __dest = operator_new__(__n);
  *(void **)this = __dest;
  *(uint *)(this + 8) = param_2;
  memcpy(__dest,param_1,__n);
  return;
}


