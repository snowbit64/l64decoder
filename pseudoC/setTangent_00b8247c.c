// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTangent
// Entry Point: 00b8247c
// Size: 24 bytes
// Signature: undefined __thiscall setTangent(TriangleSet * this, float * param_1, uint param_2)


/* TriangleSet::setTangent(float const*, unsigned int) */

void __thiscall TriangleSet::setTangent(TriangleSet *this,float *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_1;
  puVar1 = (undefined8 *)(*(long *)(this + 0x40) + (ulong)(param_2 << 2) * 4);
  puVar1[1] = *(undefined8 *)(param_1 + 2);
  *puVar1 = uVar2;
  return;
}


