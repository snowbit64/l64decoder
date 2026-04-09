// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTripCount
// Entry Point: 00eff6ac
// Size: 312 bytes
// Signature: undefined __cdecl getTripCount(double param_1, double param_2, double param_3)


/* Luau::Compile::getTripCount(double, double, double) */

int Luau::Compile::getTripCount(double param_1,double param_2,double param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((param_1 < -32767.0 || 32767.0 <= param_1) && (param_1 < -32767.0 || param_1 != 32767.0)) ||
     (iVar2 = (int)param_1, (double)iVar2 != param_1)) {
    iVar2 = -0x80000000;
  }
  iVar3 = -0x80000000;
  if (((-32767.0 <= param_2) && (param_2 <= 32767.0)) &&
     (iVar3 = (int)param_2, (double)iVar3 != param_2)) {
    iVar3 = -0x80000000;
  }
  if ((param_3 < -32767.0) ||
     ((iVar4 = -0x80000000, param_3 <= 32767.0 && (iVar4 = (int)param_3, (double)iVar4 != param_3)))
     ) {
    iVar4 = -0x80000000;
  }
  iVar1 = -1;
  if (((iVar2 != -0x80000000) && (iVar3 != -0x80000000)) && ((iVar4 != -0x80000000 && (iVar4 != 0)))
     ) {
    if ((iVar4 < 0) && (iVar2 < iVar3)) {
      return 0;
    }
    if ((0 < iVar4) && (iVar3 < iVar2)) {
      return 0;
    }
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = (iVar3 - iVar2) / iVar4;
    }
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


