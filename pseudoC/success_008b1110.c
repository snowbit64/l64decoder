// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: success
// Entry Point: 008b1110
// Size: 156 bytes
// Signature: undefined success(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SteadyLoopRuntimeSettings::success() const */

byte SteadyLoopRuntimeSettings::success(void)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *in_x0;
  bool bVar6;
  int *piVar7;
  ulong uVar8;
  
  lVar2 = *in_x0;
  if (lVar2 == in_x0[1]) {
    return 0;
  }
  lVar4 = in_x0[1] - lVar2;
  if (lVar4 == 0) {
    bVar6 = false;
  }
  else {
    uVar5 = lVar4 / 0x48;
    uVar1 = uVar5;
    if (uVar5 < 2) {
      uVar1 = 1;
    }
    if (*(int *)(lVar2 + 0x40) == 0) {
      bVar6 = true;
    }
    else {
      uVar8 = 1;
      bVar6 = true;
      piVar7 = (int *)(lVar2 + 0x88);
      do {
        if (((*(long *)(piVar7 + -0x16) == 0) && (*(long *)(piVar7 + -0x18) == 0)) ||
           (bVar6 = uVar8 < uVar5, uVar1 == uVar8)) break;
        iVar3 = *piVar7;
        uVar8 = uVar8 + 1;
        piVar7 = piVar7 + 0x12;
      } while (iVar3 != 0);
    }
  }
  return bVar6 ^ 1;
}


