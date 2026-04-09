// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCustomParameter
// Entry Point: 00946c2c
// Size: 16 bytes
// Signature: undefined __thiscall setCustomParameter(GsMaterial * this, uint param_1, float * param_2)


/* GsMaterial::setCustomParameter(unsigned int, float const*) */

void __thiscall GsMaterial::setCustomParameter(GsMaterial *this,uint param_1,float *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_2;
  puVar1 = (undefined8 *)(*(long *)(this + 0x78) + (ulong)param_1 * 0x10);
  puVar1[1] = *(undefined8 *)(param_2 + 2);
  *puVar1 = uVar2;
  return;
}


