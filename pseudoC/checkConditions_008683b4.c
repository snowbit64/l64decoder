// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkConditions
// Entry Point: 008683b4
// Size: 8 bytes
// Signature: undefined __thiscall checkConditions(ConditionalAnimationItem * this, ConditionalAnimationInformation * param_1)


/* ConditionalAnimationItem::checkConditions(ConditionalAnimationInformation const&) const */

void __thiscall
ConditionalAnimationItem::checkConditions
          (ConditionalAnimationItem *this,ConditionalAnimationInformation *param_1)

{
  ConditionalAnimationConditions::test((ConditionalAnimationConditions *)(this + 0x98),param_1);
  return;
}


