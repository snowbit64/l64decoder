// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeMinMaxRPM
// Entry Point: 008a48a8
// Size: 72 bytes
// Signature: undefined computeMinMaxRPM(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GranularSynthesisRuntimeSettings::computeMinMaxRPM() */

void GranularSynthesisRuntimeSettings::computeMinMaxRPM(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar1 = *(long *)(in_x0 + 0x30);
  lVar2 = *(long *)(in_x0 + 0x38);
  if (lVar1 == lVar2) {
    uVar3 = 0;
    *(undefined4 *)(in_x0 + 0x48) = 0;
  }
  else {
    if (*(int *)(in_x0 + 0x10) == 1) {
      uVar4 = *(undefined4 *)(lVar2 + -8);
      uVar3 = *(undefined4 *)(lVar1 + 8);
    }
    else {
      if (*(int *)(in_x0 + 0x10) != 0) {
        return;
      }
      uVar4 = *(undefined4 *)(lVar1 + 8);
      uVar3 = *(undefined4 *)(lVar2 + -8);
    }
    *(undefined4 *)(in_x0 + 0x48) = uVar4;
  }
  *(undefined4 *)(in_x0 + 0x4c) = uVar3;
  return;
}


