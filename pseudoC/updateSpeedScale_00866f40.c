// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateSpeedScale
// Entry Point: 00866f40
// Size: 316 bytes
// Signature: undefined __thiscall updateSpeedScale(ConditionalAnimationTracks * this, CharacterSet * param_1, vector * param_2, ConditionalAnimationInformation * param_3)


/* ConditionalAnimationTracks::updateSpeedScale(CharacterSet&,
   std::__ndk1::vector<ConditionalAnimationItem, std::__ndk1::allocator<ConditionalAnimationItem> >
   const&, ConditionalAnimationInformation const&) */

void __thiscall
ConditionalAnimationTracks::updateSpeedScale
          (ConditionalAnimationTracks *this,CharacterSet *param_1,vector *param_2,
          ConditionalAnimationInformation *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  ConditionalAnimationValue aCStack_78 [8];
  ConditionalAnimationValue aCStack_70 [8];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  ConditionalAnimationValue::ConditionalAnimationValue(aCStack_70,0.0);
  ConditionalAnimationInformation::getVelocityValue(param_3,aCStack_70);
  ConditionalAnimationValue::ConditionalAnimationValue(aCStack_78,0.0);
  ConditionalAnimationInformation::getAngularVelocityValue(param_3,aCStack_78);
  lVar4 = 0;
  do {
    uVar1 = *(uint *)this;
    if ((-1 < (int)uVar1) && (0.0 < *(float *)(*(long *)param_2 + (ulong)uVar1 * 0xf8 + 0x38))) {
      uVar3 = ConditionalAnimationValue::isFloat();
      fVar6 = 1.0;
      fVar5 = 1.0;
      if ((uVar3 & 1) != 0) {
        fVar5 = (float)ConditionalAnimationValue::getFloat();
      }
      uVar3 = ConditionalAnimationValue::isFloat();
      if ((uVar3 & 1) != 0) {
        fVar6 = (float)ConditionalAnimationValue::getFloat();
      }
      fVar5 = (float)ConditionalAnimationItem::SpeedScaleInfo::get
                               ((SpeedScaleInfo *)(*(long *)param_2 + (ulong)uVar1 * 0xf8 + 0xb0),
                                fVar5,fVar6);
      CharacterSet::setSpeedScale(param_1,(uint)lVar4,fVar5);
    }
    lVar4 = lVar4 + 1;
    this = (ConditionalAnimationTracks *)((long)this + 8);
  } while (lVar4 != 6);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


