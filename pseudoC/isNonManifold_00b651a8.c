// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isNonManifold
// Entry Point: 00b651a8
// Size: 96 bytes
// Signature: undefined isNonManifold(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Brep::isNonManifold() const */

bool Brep::isNonManifold(void)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  long in_x0;
  uint uVar4;
  
  uVar3 = (uint)(*(int *)(in_x0 + 0x2ef8) - (int)*(long *)(in_x0 + 0x2ef0)) >> 4 & 0xffff;
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      uVar1 = (ushort)uVar4;
      uVar4 = uVar4 + 1;
      sVar2 = *(short *)(*(long *)(in_x0 + 0x2f50) +
                         (ulong)*(ushort *)(*(long *)(in_x0 + 0x2ef0) + (ulong)uVar1 * 0x10 + 0xc) *
                         0xc + 2);
    } while (sVar2 == -1 && uVar4 != uVar3);
    return sVar2 != -1;
  }
  return false;
}


