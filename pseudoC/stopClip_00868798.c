// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stopClip
// Entry Point: 00868798
// Size: 28 bytes
// Signature: undefined __thiscall stopClip(ConditionalAnimationItem * this, CharacterSet * param_1, int param_2, int param_3)


/* ConditionalAnimationItem::stopClip(CharacterSet&, int, int) */

void __thiscall
ConditionalAnimationItem::stopClip
          (ConditionalAnimationItem *this,CharacterSet *param_1,int param_2,int param_3)

{
  if (this[0xc] != (ConditionalAnimationItem)0x0) {
    ConditionalAnimationBlending::stopClip
              ((ConditionalAnimationBlending *)(this + 0x70),param_1,param_2,param_3);
    return;
  }
  ConditionalAnimationClipInfo::stop((ConditionalAnimationClipInfo *)(this + 0x48),param_1,param_3);
  return;
}


