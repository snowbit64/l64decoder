// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: playClip
// Entry Point: 0086877c
// Size: 28 bytes
// Signature: undefined __thiscall playClip(ConditionalAnimationItem * this, CharacterSet * param_1, int param_2, int param_3, float param_4)


/* ConditionalAnimationItem::playClip(CharacterSet&, int, int, float) */

void __thiscall
ConditionalAnimationItem::playClip
          (ConditionalAnimationItem *this,CharacterSet *param_1,int param_2,int param_3,
          float param_4)

{
  if (this[0xc] != (ConditionalAnimationItem)0x0) {
    ConditionalAnimationBlending::playClip
              ((ConditionalAnimationBlending *)(this + 0x70),param_1,param_2,param_3,param_4);
    return;
  }
  ConditionalAnimationClipInfo::play
            ((ConditionalAnimationClipInfo *)(this + 0x48),param_1,param_3,param_4);
  return;
}


