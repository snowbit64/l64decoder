// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isClipFinished
// Entry Point: 008687b4
// Size: 28 bytes
// Signature: undefined __thiscall isClipFinished(ConditionalAnimationItem * this, CharacterSet * param_1, int param_2, int param_3)


/* ConditionalAnimationItem::isClipFinished(CharacterSet&, int, int) */

void __thiscall
ConditionalAnimationItem::isClipFinished
          (ConditionalAnimationItem *this,CharacterSet *param_1,int param_2,int param_3)

{
  if (this[0xc] != (ConditionalAnimationItem)0x0) {
    ConditionalAnimationBlending::isClipFinished
              ((ConditionalAnimationBlending *)(this + 0x70),param_1,param_2,param_3);
    return;
  }
  ConditionalAnimationClipInfo::isFinished
            ((ConditionalAnimationClipInfo *)(this + 0x48),param_1,param_3);
  return;
}


