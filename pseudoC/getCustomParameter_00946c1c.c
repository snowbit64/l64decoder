// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCustomParameter
// Entry Point: 00946c1c
// Size: 16 bytes
// Signature: undefined __thiscall getCustomParameter(GsMaterial * this, uint param_1, float * param_2)


/* GsMaterial::getCustomParameter(unsigned int, float*) */

void __thiscall GsMaterial::getCustomParameter(GsMaterial *this,uint param_1,float *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(*(long *)(this + 0x78) + (ulong)param_1 * 0x10);
  uVar2 = *puVar1;
  *(undefined8 *)(param_2 + 2) = puVar1[1];
  *(undefined8 *)param_2 = uVar2;
  return;
}


