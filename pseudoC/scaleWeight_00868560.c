// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: scaleWeight
// Entry Point: 00868560
// Size: 24 bytes
// Signature: undefined __thiscall scaleWeight(ConditionalAnimationItem * this, float param_1)


/* ConditionalAnimationItem::scaleWeight(float) */

void __thiscall ConditionalAnimationItem::scaleWeight(ConditionalAnimationItem *this,float param_1)

{
  *(float *)(this + 0x30) = *(float *)(this + 0x30) * param_1;
  ConditionalAnimationBlending::scaleWeight((ConditionalAnimationBlending *)(this + 0x70),param_1);
  return;
}


