// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00866ac4
// Size: 476 bytes
// Signature: undefined __thiscall update(ConditionalAnimationTracks * this, ConditionalAnimationInformation * param_1, CharacterSet * param_2, vector * param_3, vector * param_4)


/* ConditionalAnimationTracks::update(ConditionalAnimationInformation const&, CharacterSet&,
   std::__ndk1::vector<ConditionalAnimationTracks::Track,
   std::__ndk1::allocator<ConditionalAnimationTracks::Track> > const&,
   std::__ndk1::vector<ConditionalAnimationItem, std::__ndk1::allocator<ConditionalAnimationItem>
   >&) */

void __thiscall
ConditionalAnimationTracks::update
          (ConditionalAnimationTracks *this,ConditionalAnimationInformation *param_1,
          CharacterSet *param_2,vector *param_3,vector *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  
  lVar6 = *(long *)param_3;
  uVar4 = *(long *)(param_3 + 8) - lVar6;
  if ((int)(uVar4 >> 3) != 0) {
    lVar7 = 0;
    do {
      piVar1 = (int *)(lVar6 + lVar7);
      iVar2 = *piVar1;
      iVar3 = piVar1[1];
      if ((((*(int *)this != iVar2 || *(int *)(this + 4) != iVar3) &&
           ((*(int *)(this + 8) != iVar2 || (*(int *)(this + 0xc) != iVar3)))) &&
          ((*(int *)(this + 0x10) != iVar2 || (*(int *)(this + 0x14) != iVar3)))) &&
         ((((*(int *)(this + 0x18) != iVar2 || (*(int *)(this + 0x1c) != iVar3)) &&
           ((*(int *)(this + 0x20) != iVar2 || (*(int *)(this + 0x24) != iVar3)))) &&
          ((*(int *)(this + 0x28) != iVar2 || (*(int *)(this + 0x2c) != iVar3)))))) {
        if (*(int *)this < 0) {
          uVar5 = 0;
        }
        else if (*(int *)(this + 8) < 0) {
          uVar5 = 1;
        }
        else if (*(int *)(this + 0x10) < 0) {
          uVar5 = 2;
        }
        else if (*(int *)(this + 0x18) < 0) {
          uVar5 = 3;
        }
        else if (*(int *)(this + 0x20) < 0) {
          uVar5 = 4;
        }
        else {
          if (-1 < *(int *)(this + 0x28)) goto LAB_00866c3c;
          uVar5 = 5;
        }
        *(int *)(this + (ulong)uVar5 * 8) = iVar2;
        *(int *)((long)(this + (ulong)uVar5 * 8) + 4) = iVar3;
        CharacterSet::enable(param_2,uVar5);
        iVar3 = *(int *)(lVar6 + lVar7);
        iVar2 = piVar1[1];
        fVar8 = (float)getTrackTimeFor(this,param_2,uVar5);
        ConditionalAnimationItem::playClip
                  ((ConditionalAnimationItem *)(*(long *)param_4 + (long)iVar3 * 0xf8),param_2,iVar2
                   ,uVar5,fVar8);
      }
LAB_00866c3c:
      if ((uVar4 >> 3 & 0xffffffff) * 8 + -8 == lVar7) break;
      lVar6 = *(long *)param_3;
      lVar7 = lVar7 + 8;
    } while( true );
  }
  updateBlendWeights(this,param_2,param_4);
  updateSpeedScale(this,param_2,param_4,param_1);
  updateCallbacks(this,param_2,param_4);
  return;
}


