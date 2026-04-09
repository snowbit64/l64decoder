// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCurrentWeightFromBlendInfo
// Entry Point: 00868580
// Size: 24 bytes
// Signature: undefined __thiscall getCurrentWeightFromBlendInfo(ConditionalAnimationItem * this, int param_1)


/* ConditionalAnimationItem::getCurrentWeightFromBlendInfo(int) const */

undefined  [16] __thiscall
ConditionalAnimationItem::getCurrentWeightFromBlendInfo(ConditionalAnimationItem *this,int param_1)

{
  undefined auVar1 [16];
  
  if (this[0xc] != (ConditionalAnimationItem)0x0) {
    auVar1 = ConditionalAnimationBlending::getCurrentWeight
                       ((ConditionalAnimationBlending *)(this + 0x70),param_1);
    return auVar1;
  }
  return ZEXT816(0);
}


