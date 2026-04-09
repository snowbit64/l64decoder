// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findFreeVoice
// Entry Point: 00e3d94c
// Size: 192 bytes
// Signature: undefined findFreeVoice(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Soloud::findFreeVoice() */

ulong SoLoud::Soloud::findFreeVoice(void)

{
  uint uVar1;
  Soloud *in_x0;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(in_x0 + 0x54);
  if ((uVar2 != 0) && (uVar8 = uVar2 - 1, *(long *)(in_x0 + (ulong)uVar8 * 8 + 0xa0) == 0)) {
    *(uint *)(in_x0 + 0x54) = uVar8;
    uVar2 = uVar8;
  }
  uVar4 = 0;
  uVar5 = 0xffffffff;
  uVar8 = 0xffffffff;
  do {
    lVar6 = *(long *)(in_x0 + uVar4 * 8 + 0xa0);
    uVar3 = (uint)uVar4;
    if (lVar6 == 0) {
      if ((int)uVar3 < (int)uVar2) {
        return uVar4 & 0xffffffff;
      }
      *(uint *)(in_x0 + 0x54) = uVar3 + 1;
      return uVar4 & 0xffffffff;
    }
    uVar1 = uVar5;
    uVar7 = uVar8;
    if (((*(byte *)(lVar6 + 0x14) & 1) == 0) &&
       (uVar1 = *(uint *)(lVar6 + 8), uVar7 = uVar3, uVar5 <= *(uint *)(lVar6 + 8))) {
      uVar1 = uVar5;
      uVar7 = uVar8;
    }
    uVar5 = uVar1;
    uVar4 = uVar4 + 1;
    uVar8 = uVar7;
  } while (uVar4 != 0x400);
  stopVoice(in_x0,uVar7);
  return (ulong)uVar7;
}


