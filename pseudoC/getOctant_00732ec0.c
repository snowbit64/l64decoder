// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOctant
// Entry Point: 00732ec0
// Size: 456 bytes
// Signature: undefined __cdecl getOctant(Vector2 * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* getOctant(Vector2 const&) */

ulong getOctant(Vector2 *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  
  if ((*(float *)param_1 == 0.0) && (*(float *)(param_1 + 4) == 0.0)) {
    return 8;
  }
  uVar2 = 7;
  uVar3 = 0;
  do {
    if (((DAT_01052bb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01052bb0), iVar1 != 0)) {
      _DAT_01052b70 = 0x3f800000;
      uRam0000000001052b78 = 0xbf3504f33f3504f3;
      _DAT_01052b80 = 0xbf80000000000000;
      uRam0000000001052b88 = 0xbf3504f3bf3504f3;
      _DAT_01052b90 = 0xbf800000;
      uRam0000000001052b98 = 0x3f3504f3bf3504f3;
      _DAT_01052ba0 = 0x3f80000000000000;
      _DAT_01052ba8 = 0x3f3504f33f3504f3;
      __cxa_guard_release(&DAT_01052bb0);
    }
    fVar4 = (float)NEON_fmadd((&DAT_01052b70)[uVar2 * 2],*(undefined4 *)(param_1 + 4),
                              *(float *)param_1 * -(float)(&DAT_01052b74)[uVar2 * 2]);
    if (fVar4 < 0.0) {
      if (((DAT_01052bb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01052bb0), iVar1 != 0)) {
        _DAT_01052b70 = 0x3f800000;
        uRam0000000001052b78 = 0xbf3504f33f3504f3;
        _DAT_01052b80 = 0xbf80000000000000;
        uRam0000000001052b88 = 0xbf3504f3bf3504f3;
        _DAT_01052b90 = 0xbf800000;
        uRam0000000001052b98 = 0x3f3504f3bf3504f3;
        _DAT_01052ba0 = 0x3f80000000000000;
        _DAT_01052ba8 = 0x3f3504f33f3504f3;
        __cxa_guard_release(&DAT_01052bb0);
      }
      fVar4 = (float)NEON_fmadd((&DAT_01052b70)[uVar3 * 2],*(undefined4 *)(param_1 + 4),
                                *(float *)param_1 * -(float)(&DAT_01052b74)[uVar3 * 2]);
      if (0.0 <= fVar4) {
        return uVar2;
      }
    }
    uVar2 = uVar3;
    uVar3 = (ulong)((int)uVar3 + 1U & 7);
  } while( true );
}


