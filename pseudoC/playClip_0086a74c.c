// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: playClip
// Entry Point: 0086a74c
// Size: 28 bytes
// Signature: undefined __thiscall playClip(ConditionalAnimationBlending * this, CharacterSet * param_1, int param_2, int param_3, float param_4)


/* ConditionalAnimationBlending::playClip(CharacterSet&, int, int, float) */

void __thiscall
ConditionalAnimationBlending::playClip
          (ConditionalAnimationBlending *this,CharacterSet *param_1,int param_2,int param_3,
          float param_4)

{
  if (-1 < param_2) {
    ConditionalAnimationClipInfo::play
              ((ConditionalAnimationClipInfo *)
               (*(long *)(this + 0x10) + (ulong)(uint)param_2 * 0x38),param_1,param_3,param_4);
    return;
  }
  return;
}


