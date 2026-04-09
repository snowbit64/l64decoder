// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00864800
// Size: 132 bytes
// Signature: undefined __thiscall init(ConditionalAnimationPlayer * this, CharacterSet * param_1)


/* ConditionalAnimationPlayer::init(CharacterSet*) */

void __thiscall
ConditionalAnimationPlayer::init(ConditionalAnimationPlayer *this,CharacterSet *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  *(CharacterSet **)this = param_1;
  if (param_1 != (CharacterSet *)0x0) {
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
          lVar3 = lVar3 + 0xf8;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
    }
  }
  return;
}


