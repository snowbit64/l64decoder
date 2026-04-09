// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFirstLod
// Entry Point: 00a64efc
// Size: 56 bytes
// Signature: undefined getFirstLod(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FoliageSystemDesc::State::getFirstLod() const */

long FoliageSystemDesc::State::getFirstLod(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long in_x0;
  ulong uVar4;
  
  lVar3 = *(long *)(in_x0 + 0x58) - *(long *)(in_x0 + 0x50);
  if (lVar3 != 0) {
    uVar4 = 0;
    do {
      lVar1 = *(long *)(in_x0 + 0x50) + uVar4 * 0x20;
      lVar2 = *(long *)(lVar1 + 8);
      if (*(long *)(lVar1 + 0x10) != lVar2) {
        return lVar2;
      }
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(lVar3 >> 5));
  }
  return 0;
}


