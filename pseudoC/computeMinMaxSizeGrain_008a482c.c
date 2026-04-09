// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeMinMaxSizeGrain
// Entry Point: 008a482c
// Size: 124 bytes
// Signature: undefined computeMinMaxSizeGrain(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GranularSynthesisRuntimeSettings::computeMinMaxSizeGrain() */

void GranularSynthesisRuntimeSettings::computeMinMaxSizeGrain(void)

{
  int iVar1;
  long lVar2;
  long in_x0;
  ulong uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  lVar2 = *(long *)(in_x0 + 0x30);
  if (lVar2 != *(long *)(in_x0 + 0x38)) {
    uVar3 = *(long *)(in_x0 + 0x38) - lVar2;
    *(undefined8 *)(in_x0 + 0x50) = 0x7fffffff;
    if (0 < (int)(uVar3 >> 4)) {
      iVar4 = 0;
      uVar3 = uVar3 >> 4 & 0xffffffff;
      piVar5 = (int *)(lVar2 + 4);
      iVar6 = 0x7fffffff;
      do {
        iVar1 = (*piVar5 - piVar5[-1]) + 1;
        if (iVar4 < iVar1) {
          *(int *)(in_x0 + 0x54) = iVar1;
          iVar4 = iVar1;
        }
        if (iVar1 < iVar6) {
          *(int *)(in_x0 + 0x50) = iVar1;
          iVar6 = iVar1;
        }
        piVar5 = piVar5 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}


