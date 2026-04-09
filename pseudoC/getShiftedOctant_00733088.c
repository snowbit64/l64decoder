// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShiftedOctant
// Entry Point: 00733088
// Size: 460 bytes
// Signature: undefined __cdecl getShiftedOctant(Vector2 * param_1)


/* getShiftedOctant(Vector2 const&) */

void getShiftedOctant(Vector2 *param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  
  if ((DAT_01052bc0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_01052bc0);
    if (iVar1 != 0) {
      DAT_01052bb8 = 0.9238795;
      __cxa_guard_release(&DAT_01052bc0);
    }
  }
  if ((DAT_01052bd0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_01052bd0);
    if (iVar1 != 0) {
      DAT_01052bc8 = 0.3826835;
      __cxa_guard_release(&DAT_01052bd0);
    }
  }
  if ((DAT_01052c18 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_01052c18);
    if (iVar1 != 0) {
      DAT_01052bec = -DAT_01052bb8;
      DAT_01052bd8 = DAT_01052bb8;
      DAT_01052be4 = -DAT_01052bc8;
      DAT_01052bdc = DAT_01052bc8;
      DAT_01052be0 = DAT_01052bb8;
      DAT_01052be8 = DAT_01052bc8;
      DAT_01052c04 = DAT_01052bc8;
      DAT_01052c0c = DAT_01052bb8;
      DAT_01052c10 = DAT_01052bc8;
      DAT_01052c14 = DAT_01052bb8;
      DAT_01052bf0 = DAT_01052be4;
      DAT_01052bf4 = DAT_01052bec;
      DAT_01052bf8 = DAT_01052bec;
      DAT_01052bfc = DAT_01052be4;
      DAT_01052c00 = DAT_01052bec;
      DAT_01052c08 = DAT_01052be4;
      __cxa_guard_release(&DAT_01052c18);
    }
  }
  uVar3 = 0;
  uVar2 = 7;
  while ((fVar4 = (float)NEON_fmadd((&DAT_01052bd8)[uVar2 * 2],*(undefined4 *)(param_1 + 4),
                                    *(float *)param_1 * -(&DAT_01052bdc)[uVar2 * 2]), 0.0 <= fVar4
         || (fVar4 = (float)NEON_fmadd((&DAT_01052bd8)[(ulong)(ushort)uVar3 * 2],
                                       *(undefined4 *)(param_1 + 4),
                                       *(float *)param_1 *
                                       -(&DAT_01052bdc)[(ulong)(ushort)uVar3 * 2]), fVar4 < 0.0))) {
    uVar2 = (ulong)uVar3;
    uVar3 = uVar3 + 1 & 7;
  }
  return;
}


