// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CProfileIterator
// Entry Point: 00fa7e18
// Size: 12 bytes
// Signature: undefined __thiscall CProfileIterator(CProfileIterator * this, CProfileNode * param_1)


/* CProfileIterator::CProfileIterator(CProfileNode*) */

void __thiscall CProfileIterator::CProfileIterator(CProfileIterator *this,CProfileNode *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(CProfileNode **)this = param_1;
  *(undefined8 *)(this + 8) = uVar1;
  return;
}


