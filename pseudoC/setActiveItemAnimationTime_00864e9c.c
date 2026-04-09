// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setActiveItemAnimationTime
// Entry Point: 00864e9c
// Size: 96 bytes
// Signature: undefined __thiscall setActiveItemAnimationTime(ConditionalAnimationPlayer * this, float param_1)


/* ConditionalAnimationPlayer::setActiveItemAnimationTime(float) */

void __thiscall
ConditionalAnimationPlayer::setActiveItemAnimationTime
          (ConditionalAnimationPlayer *this,float param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(this + 8);
  if (*(long *)(this + 0x10) - lVar1 != 0) {
    uVar2 = 0;
    uVar3 = (*(long *)(this + 0x10) - lVar1 >> 3) * -0x1084210842108421;
    do {
      if (*(char *)(lVar1 + uVar2 * 0xf8 + 0xbc) != '\0') {
        ConditionalAnimationItem::setClipTime
                  ((ConditionalAnimationItem *)(lVar1 + uVar2 * 0xf8),*(CharacterSet **)this,param_1
                  );
        return;
      }
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (uVar2 <= uVar3 && uVar3 - uVar2 != 0);
  }
  return;
}


