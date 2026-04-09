// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initClip
// Entry Point: 00867e90
// Size: 140 bytes
// Signature: undefined __thiscall initClip(ConditionalAnimationItem * this, CharacterSet * param_1)


/* ConditionalAnimationItem::initClip(CharacterSet&) */

void __thiscall
ConditionalAnimationItem::initClip(ConditionalAnimationItem *this,CharacterSet *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (this[0xc] == (ConditionalAnimationItem)0x0) {
    ConditionalAnimationClipInfo::init((ConditionalAnimationClipInfo *)(this + 0x48),param_1);
    fVar2 = (float)ConditionalAnimationClipInfo::getClipDuration();
    iVar1 = *(int *)(this + 0xb0);
  }
  else {
    ConditionalAnimationBlending::initClip((ConditionalAnimationBlending *)(this + 0x70),param_1);
    fVar2 = (float)ConditionalAnimationBlending::getClipDuration();
    iVar1 = *(int *)(this + 0xb0);
  }
  if (iVar1 == 0) {
    fVar3 = 1.0;
  }
  else {
    fVar3 = *(float *)(this + 0xb4);
    if (0.0 < fVar3) {
      fVar3 = (fVar2 * 0.001) / fVar3;
    }
  }
  *(float *)(this + 0xb8) = fVar3;
  createRunningCallbackList();
  return;
}


