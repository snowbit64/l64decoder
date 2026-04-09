// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCombinedFlags
// Entry Point: 0074944c
// Size: 60 bytes
// Signature: undefined getCombinedFlags(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Clip::getCombinedFlags() const */

ushort Clip::getCombinedFlags(void)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  long in_x0;
  ulong uVar4;
  
  lVar2 = *(long *)(in_x0 + 0x28) - *(long *)(in_x0 + 0x20);
  if (lVar2 != 0) {
    uVar4 = 0;
    uVar3 = 0;
    do {
      lVar1 = uVar4 * 8;
      uVar4 = (ulong)((int)uVar4 + 1);
      uVar3 = uVar3 | *(ushort *)(*(long *)(*(long *)(in_x0 + 0x20) + lVar1) + 2);
    } while (uVar4 < (ulong)(lVar2 >> 3));
    return uVar3;
  }
  return 0;
}


