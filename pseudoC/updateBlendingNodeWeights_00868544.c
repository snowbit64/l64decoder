// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateBlendingNodeWeights
// Entry Point: 00868544
// Size: 28 bytes
// Signature: undefined __thiscall updateBlendingNodeWeights(ConditionalAnimationItem * this, ConditionalAnimationInformation * param_1)


/* ConditionalAnimationItem::updateBlendingNodeWeights(ConditionalAnimationInformation const&) */

void __thiscall
ConditionalAnimationItem::updateBlendingNodeWeights
          (ConditionalAnimationItem *this,ConditionalAnimationInformation *param_1)

{
  if (this[0xc] != (ConditionalAnimationItem)0x0) {
    ConditionalAnimationBlending::updateWeights
              ((ConditionalAnimationBlending *)(this + 0x70),param_1,*(float *)(this + 0x30));
    return;
  }
  return;
}


