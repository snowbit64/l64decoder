// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initClip
// Entry Point: 00864884
// Size: 124 bytes
// Signature: undefined __thiscall initClip(ConditionalAnimationPlayer * this, CharacterSet * param_1)


/* ConditionalAnimationPlayer::initClip(CharacterSet&) */

void __thiscall
ConditionalAnimationPlayer::initClip(ConditionalAnimationPlayer *this,CharacterSet *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = (*(long *)(this + 0x10) - (long)*(ConditionalAnimationItem **)(this + 8) >> 3) *
          0xbdef7bdf;
  if ((int)uVar1 != 0) {
    ConditionalAnimationItem::initClip(*(ConditionalAnimationItem **)(this + 8),param_1);
    lVar2 = (uVar1 & 0xffffffff) - 1;
    if (lVar2 != 0) {
      lVar3 = 0xf8;
      do {
        ConditionalAnimationItem::initClip
                  ((ConditionalAnimationItem *)(*(long *)(this + 8) + lVar3),param_1);
        lVar2 = lVar2 + -1;
        lVar3 = lVar3 + 0xf8;
      } while (lVar2 != 0);
    }
  }
  return;
}


