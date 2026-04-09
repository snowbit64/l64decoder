// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isClipFinished
// Entry Point: 0086a9a0
// Size: 32 bytes
// Signature: undefined __thiscall isClipFinished(ConditionalAnimationBlending * this, CharacterSet * param_1, int param_2, int param_3)


/* ConditionalAnimationBlending::isClipFinished(CharacterSet&, int, int) */

undefined8 __thiscall
ConditionalAnimationBlending::isClipFinished
          (ConditionalAnimationBlending *this,CharacterSet *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if (-1 < param_2) {
    uVar1 = ConditionalAnimationClipInfo::isFinished
                      ((ConditionalAnimationClipInfo *)
                       (*(long *)(this + 0x10) + (ulong)(uint)param_2 * 0x38),param_1,param_3);
    return uVar1;
  }
  return 1;
}


