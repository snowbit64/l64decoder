// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateBlendWeights
// Entry Point: 00866e08
// Size: 312 bytes
// Signature: undefined __thiscall updateBlendWeights(ConditionalAnimationTracks * this, CharacterSet * param_1, vector * param_2)


/* ConditionalAnimationTracks::updateBlendWeights(CharacterSet&,
   std::__ndk1::vector<ConditionalAnimationItem, std::__ndk1::allocator<ConditionalAnimationItem>
   >&) */

void __thiscall
ConditionalAnimationTracks::updateBlendWeights
          (ConditionalAnimationTracks *this,CharacterSet *param_1,vector *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ConditionalAnimationItem *this_00;
  long lVar4;
  ulong uVar5;
  float fVar6;
  
  lVar4 = 0;
  do {
    uVar5 = (ulong)*(uint *)this;
    if (-1 < (int)*(uint *)this) {
      iVar1 = *(int *)((long)this + 4);
      uVar2 = (uint)lVar4;
      uVar3 = ConditionalAnimationItem::isClipFinished
                        ((ConditionalAnimationItem *)(*(long *)param_2 + uVar5 * 0xf8),param_1,iVar1
                         ,uVar2);
      if ((uVar3 & 1) != 0) {
        ConditionalAnimationItem::updateCallbacks
                  ((ConditionalAnimationItem *)(*(long *)param_2 + uVar5 * 0xf8),param_1,iVar1,uVar2
                  );
        ConditionalAnimationItem::reset();
      }
      this_00 = (ConditionalAnimationItem *)(*(long *)param_2 + uVar5 * 0xf8);
      if (this_00[0xbc] == (ConditionalAnimationItem)0x0) {
        ConditionalAnimationItem::stopClip(this_00,param_1,iVar1,uVar2);
        *(undefined8 *)this = 0xffffffffffffffff;
        CharacterSet::disable(param_1,uVar2);
        CharacterSet::clearClip(param_1,uVar2);
        CharacterSet::setBlendWeight(param_1,uVar2,0.0);
        CharacterSet::setTime(param_1,uVar2,0.0);
      }
      else {
        if (*(char *)(*(long *)param_2 + uVar5 * 0xf8 + 0xc) == '\0') {
          fVar6 = (float)ConditionalAnimationItem::getCurrentWeightFromItem();
        }
        else {
          fVar6 = (float)ConditionalAnimationItem::getCurrentWeightFromBlendInfo(this_00,iVar1);
        }
        CharacterSet::setBlendWeight(param_1,uVar2,fVar6);
      }
    }
    lVar4 = lVar4 + 1;
    this = (ConditionalAnimationTracks *)((long)this + 8);
  } while (lVar4 != 6);
  return;
}


