// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDirection
// Entry Point: 00732e20
// Size: 160 bytes
// Signature: undefined __cdecl getDirection(ushort param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* getDirection(unsigned short) */

undefined4 * getDirection(ushort param_1)

{
  int iVar1;
  
  if ((DAT_01052bb0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_01052bb0);
    if (iVar1 != 0) {
      uRam0000000001052b78 = 0xbf3504f33f3504f3;
      _DAT_01052b70 = 0x3f800000;
      uRam0000000001052b88 = 0xbf3504f3bf3504f3;
      _DAT_01052b80 = 0xbf80000000000000;
      uRam0000000001052b98 = 0x3f3504f3bf3504f3;
      _DAT_01052b90 = 0xbf800000;
      _DAT_01052ba8 = 0x3f3504f33f3504f3;
      _DAT_01052ba0 = 0x3f80000000000000;
      __cxa_guard_release(&DAT_01052bb0);
    }
  }
  return &DAT_01052b70 + (ulong)param_1 * 2;
}


