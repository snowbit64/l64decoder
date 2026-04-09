// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumUsed
// Entry Point: 00a02e94
// Size: 204 bytes
// Signature: undefined getNumUsed(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PersistentShadowMap::DividedMap::getNumUsed() const */

int PersistentShadowMap::DividedMap::getNumUsed(void)

{
  uint uVar1;
  ulong in_x0;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong in_x16;
  
  uVar1 = *(uint *)(in_x0 + 0xc);
  uVar2 = (ulong)uVar1;
  if (uVar1 == 0) {
    return 0;
  }
  plVar4 = (long *)(in_x0 + 0x10);
  if (uVar1 == 1) {
    uVar5 = 0;
    iVar7 = 0;
  }
  else {
    uVar5 = uVar2 & 0xfffffffe;
    iVar6 = 0;
    iVar7 = 0;
    puVar8 = (ulong *)(*plVar4 + 0x98);
    uVar9 = uVar5;
    do {
      if (puVar8[-0x11] == 0) {
        in_x16 = puVar8[-0x10];
      }
      if (*puVar8 == 0) {
        in_x0 = puVar8[1];
      }
      uVar10 = puVar8[-0x11] | in_x16;
      in_x16 = *puVar8 | in_x0;
      puVar8 = puVar8 + 0x22;
      if (uVar10 != 0) {
        iVar6 = iVar6 + 1;
      }
      if (in_x16 != 0) {
        iVar7 = iVar7 + 1;
      }
      uVar9 = uVar9 - 2;
    } while (uVar9 != 0);
    iVar7 = iVar7 + iVar6;
    if (uVar5 == uVar2) {
      return iVar7;
    }
  }
  lVar3 = uVar2 - uVar5;
  plVar4 = (long *)(*plVar4 + uVar5 * 0x88 + 0x18);
  do {
    if ((plVar4[-1] != 0) || (*plVar4 != 0)) {
      iVar7 = iVar7 + 1;
    }
    plVar4 = plVar4 + 0x11;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return iVar7;
}


