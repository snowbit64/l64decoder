// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isClosed
// Entry Point: 00b65140
// Size: 104 bytes
// Signature: undefined isClosed(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Brep::isClosed() const */

bool Brep::isClosed(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long in_x0;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = ((uint)(*(int *)(in_x0 + 0x2f58) - (int)*(long *)(in_x0 + 0x2f50)) >> 2) * 0xaaab & 0xffff
  ;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      uVar5 = uVar4 & 0xffff;
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar1;
      iVar3 = *(int *)(*(long *)(in_x0 + 0x2f68) +
                       (ulong)*(uint *)(*(long *)(in_x0 + 0x2f50) + uVar5 * 0xc + 4) * 8 + 4);
    } while (iVar3 != -1 && uVar1 != uVar2);
    return iVar3 != -1;
  }
  return true;
}


