// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveAllInfoLayers
// Entry Point: 008ea8ac
// Size: 140 bytes
// Signature: undefined saveAllInfoLayers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BaseTerrain::saveAllInfoLayers() */

void BaseTerrain::saveAllInfoLayers(void)

{
  char *pcVar1;
  BaseTerrain *in_x0;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(long *)(in_x0 + 0x10) != *(long *)(in_x0 + 8)) {
    uVar4 = 0;
    do {
      lVar2 = *(long *)(in_x0 + 0x50) + uVar4 * 0x58;
      pcVar1 = (char *)(lVar2 + 0x19);
      if ((*(byte *)(lVar2 + 0x18) & 1) != 0) {
        pcVar1 = *(char **)(lVar2 + 0x28);
      }
      saveInfoLayer(in_x0,(uint)uVar4,pcVar1);
      uVar4 = (ulong)((uint)uVar4 + 1);
      uVar3 = (*(long *)(in_x0 + 0x10) - *(long *)(in_x0 + 8) >> 4) * 0x2e8ba2e8ba2e8ba3;
    } while (uVar4 <= uVar3 && uVar3 - uVar4 != 0);
  }
  return;
}


