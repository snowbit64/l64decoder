// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stopClip
// Entry Point: 0086a768
// Size: 28 bytes
// Signature: undefined __thiscall stopClip(ConditionalAnimationBlending * this, CharacterSet * param_1, int param_2, int param_3)


/* ConditionalAnimationBlending::stopClip(CharacterSet&, int, int) */

void __thiscall
ConditionalAnimationBlending::stopClip
          (ConditionalAnimationBlending *this,CharacterSet *param_1,int param_2,int param_3)

{
  if (-1 < param_2) {
    ConditionalAnimationClipInfo::stop
              ((ConditionalAnimationClipInfo *)
               (*(long *)(this + 0x10) + (ulong)(uint)param_2 * 0x38),param_1,param_3);
    return;
  }
  return;
}


