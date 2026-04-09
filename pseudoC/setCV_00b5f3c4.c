// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCV
// Entry Point: 00b5f3c4
// Size: 52 bytes
// Signature: undefined __thiscall setCV(Spline * this, uint param_1, float * param_2)


/* Spline::setCV(unsigned int, float const*) */

void __thiscall Spline::setCV(Spline *this,uint param_1,float *param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x18);
  uVar1 = (*(int *)(this + 0x20) + param_1) * 3;
  *(float *)(lVar2 + (ulong)uVar1 * 4) = *param_2;
  *(float *)(lVar2 + (ulong)(uVar1 + 1) * 4) = param_2[1];
  *(float *)(lVar2 + (ulong)(uVar1 + 2) * 4) = param_2[2];
  return;
}


