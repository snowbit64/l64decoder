// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isFinished
// Entry Point: 00869e0c
// Size: 68 bytes
// Signature: undefined __thiscall isFinished(ConditionalAnimationClipInfo * this, CharacterSet * param_1, int param_2)


/* ConditionalAnimationClipInfo::isFinished(CharacterSet const&, int) const */

bool __thiscall
ConditionalAnimationClipInfo::isFinished
          (ConditionalAnimationClipInfo *this,CharacterSet *param_1,int param_2)

{
  float fVar1;
  
  fVar1 = (float)CharacterSet::getTime(param_1,param_2);
  return *(float *)(this + 0x18) <= fVar1 && this[0x24] == (ConditionalAnimationClipInfo)0x0;
}


