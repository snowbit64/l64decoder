// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShaderVariant
// Entry Point: 00a49440
// Size: 24 bytes
// Signature: undefined __thiscall getShaderVariant(ValarShadingRateController * this, uint param_1, uint param_2, uint param_3)


/* ValarShadingRateController::getShaderVariant(unsigned int, unsigned int, unsigned int) */

int __thiscall
ValarShadingRateController::getShaderVariant
          (ValarShadingRateController *this,uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 * 3 + param_1;
  iVar2 = iVar1 + 9;
  if (param_3 < 0x10) {
    iVar2 = iVar1;
  }
  return iVar2;
}


