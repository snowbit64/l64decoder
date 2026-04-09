// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getActiveItemAnimationTime
// Entry Point: 00864e38
// Size: 100 bytes
// Signature: undefined getActiveItemAnimationTime(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ConditionalAnimationPlayer::getActiveItemAnimationTime() */

undefined  [16] ConditionalAnimationPlayer::getActiveItemAnimationTime(void)

{
  CharacterSet *pCVar1;
  CharacterSet **in_x0;
  ulong uVar2;
  ulong uVar3;
  undefined auVar4 [16];
  
  pCVar1 = in_x0[1];
  if ((long)in_x0[2] - (long)pCVar1 != 0) {
    uVar2 = 0;
    uVar3 = ((long)in_x0[2] - (long)pCVar1 >> 3) * -0x1084210842108421;
    do {
      if (pCVar1[uVar2 * 0xf8 + 0xbc] != (CharacterSet)0x0) {
        auVar4 = ConditionalAnimationItem::getClipTime
                           ((ConditionalAnimationItem *)(pCVar1 + uVar2 * 0xf8),*in_x0);
        return auVar4;
      }
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (uVar2 <= uVar3 && uVar3 - uVar2 != 0);
  }
  return ZEXT816(0);
}


