// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enableAllGrains
// Entry Point: 008a4ad8
// Size: 112 bytes
// Signature: undefined enableAllGrains(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GranularSynthesisRuntimeSettings::enableAllGrains() */

void GranularSynthesisRuntimeSettings::enableAllGrains(void)

{
  long lVar1;
  long in_x0;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar1 = *(long *)(in_x0 + 0x30);
  lVar4 = *(long *)(in_x0 + 0x38) - lVar1;
  if (lVar4 != 0) {
    uVar3 = lVar4 >> 4;
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    if (uVar3 < 2) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar3 & 0xfffffffffffffffe;
      puVar2 = (undefined *)(lVar1 + 0x1c);
      uVar6 = uVar5;
      do {
        uVar6 = uVar6 - 2;
        puVar2[-0x10] = 1;
        *puVar2 = 1;
        puVar2 = puVar2 + 0x20;
      } while (uVar6 != 0);
      if (uVar3 == uVar5) {
        return;
      }
    }
    lVar4 = uVar3 - uVar5;
    puVar2 = (undefined *)(lVar1 + uVar5 * 0x10 + 0xc);
    do {
      lVar4 = lVar4 + -1;
      *puVar2 = 1;
      puVar2 = puVar2 + 0x10;
    } while (lVar4 != 0);
  }
  return;
}


