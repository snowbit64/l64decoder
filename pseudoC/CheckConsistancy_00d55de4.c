// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CheckConsistancy
// Entry Point: 00d55de4
// Size: 268 bytes
// Signature: undefined CheckConsistancy(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::TMMesh::CheckConsistancy() */

byte HACD::TMMesh::CheckConsistancy(void)

{
  bool bVar1;
  char cVar2;
  long in_x0;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar4 = *(long *)(in_x0 + 0x38);
  uVar3 = *(ulong *)(in_x0 + 0x58);
  if (lVar4 != 0) {
    lVar5 = *(long *)(in_x0 + 0x30);
    do {
      if ((*(long *)(lVar5 + 8) == 0) || (*(long *)(lVar5 + 0x10) == 0)) {
        return 0;
      }
      lVar5 = *(long *)(lVar5 + 0x30);
      lVar4 = lVar4 + -1;
      *(long *)(in_x0 + 0x30) = lVar5;
    } while (lVar4 != 0);
  }
  if (uVar3 == 0) {
    return 1;
  }
  lVar4 = *(long *)(in_x0 + 0x50);
  cVar2 = *(long *)(*(long *)(lVar4 + 8) + 8) == lVar4;
  if (*(long *)(*(long *)(lVar4 + 8) + 0x10) == lVar4) {
    cVar2 = cVar2 + '\x01';
  }
  if (cVar2 != '\x01') {
    return 0;
  }
  uVar6 = 1;
  bVar1 = true;
  do {
    cVar2 = *(long *)(*(long *)(lVar4 + 0x10) + 8) == lVar4;
    if (*(long *)(*(long *)(lVar4 + 0x10) + 0x10) == lVar4) {
      cVar2 = cVar2 + '\x01';
    }
    if (cVar2 != '\x01') break;
    cVar2 = *(long *)(*(long *)(lVar4 + 0x18) + 8) == lVar4;
    if (*(long *)(*(long *)(lVar4 + 0x18) + 0x10) == lVar4) {
      cVar2 = cVar2 + '\x01';
    }
    if (cVar2 != '\x01') break;
    bVar1 = uVar6 < uVar3;
    lVar4 = *(long *)(lVar4 + 0xd8);
    *(long *)(in_x0 + 0x50) = lVar4;
    if (uVar3 == uVar6) break;
    uVar6 = uVar6 + 1;
    cVar2 = *(long *)(*(long *)(lVar4 + 8) + 8) == lVar4;
    if (*(long *)(*(long *)(lVar4 + 8) + 0x10) == lVar4) {
      cVar2 = cVar2 + '\x01';
    }
  } while (cVar2 == '\x01');
  return bVar1 ^ 1;
}


