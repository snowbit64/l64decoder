// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setNormal
// Entry Point: 00b8245c
// Size: 32 bytes
// Signature: undefined __thiscall setNormal(TriangleSet * this, float * param_1, uint param_2)


/* TriangleSet::setNormal(float const*, unsigned int) */

void __thiscall TriangleSet::setNormal(TriangleSet *this,float *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(*(long *)(this + 0x38) + (ulong)(param_2 * 3) * 4);
  uVar2 = *(undefined8 *)param_1;
  *(float *)(puVar1 + 1) = param_1[2];
  *puVar1 = uVar2;
  return;
}


