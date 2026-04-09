// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: hasPersistentData
// Entry Point: 00a0353c
// Size: 136 bytes
// Signature: undefined hasPersistentData(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PersistentShadowMap::DividedMap::hasPersistentData() const */

bool PersistentShadowMap::DividedMap::hasPersistentData(void)

{
  uint uVar1;
  bool bVar2;
  long in_x0;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  
  uVar1 = *(uint *)(in_x0 + 0xc);
  if (uVar1 == 0) {
    bVar2 = false;
  }
  else {
    uVar4 = 0;
    bVar2 = true;
    pcVar5 = (char *)(*(long *)(in_x0 + 0x10) + 0x25);
    do {
      if (*(long *)(pcVar5 + -0x15) == 0) {
        if (((*(long *)(pcVar5 + -0xd) != 0) && (pcVar5[-1] != '\0')) && (*pcVar5 != '\0')) {
          return bVar2;
        }
      }
      else {
        uVar3 = hasPersistentData();
        if ((uVar3 & 1) != 0) {
          return bVar2;
        }
      }
      uVar4 = uVar4 + 1;
      pcVar5 = pcVar5 + 0x88;
      bVar2 = uVar4 < uVar1;
    } while (uVar1 != uVar4);
  }
  return bVar2;
}


