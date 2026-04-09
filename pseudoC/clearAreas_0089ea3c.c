// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearAreas
// Entry Point: 0089ea3c
// Size: 140 bytes
// Signature: undefined clearAreas(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainDeformation::clearAreas() */

void TerrainDeformation::clearAreas(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(in_x0 + 0x60);
  lVar3 = *(long *)(in_x0 + 0x68);
  if (lVar2 != lVar3) {
    do {
      if (*(void **)(lVar2 + 0x38) != (void *)0x0) {
        operator_delete(*(void **)(lVar2 + 0x38));
      }
      lVar2 = lVar2 + 0x48;
    } while (lVar2 != lVar3);
    lVar2 = *(long *)(in_x0 + 0x60);
  }
  lVar3 = *(long *)(in_x0 + 0x78);
  lVar1 = *(long *)(in_x0 + 0x80);
  *(long *)(in_x0 + 0x68) = lVar2;
  if (lVar3 != lVar1) {
    do {
      if (*(void **)(lVar3 + 0x10) != (void *)0x0) {
        operator_delete(*(void **)(lVar3 + 0x10));
      }
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != lVar1);
    lVar3 = *(long *)(in_x0 + 0x78);
  }
  *(long *)(in_x0 + 0x80) = lVar3;
  return;
}


