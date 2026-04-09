// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00864624
// Entry Point: 00864624
// Size: 108 bytes
// Signature: undefined FUN_00864624(void)


void FUN_00864624(ConditionalAnimationItem **param_1)

{
  ConditionalAnimationItem *pCVar1;
  ConditionalAnimationItem *this;
  ConditionalAnimationItem *pCVar2;
  
  pCVar2 = *param_1;
  if (pCVar2 == (ConditionalAnimationItem *)0x0) {
    return;
  }
  this = param_1[1];
  pCVar1 = pCVar2;
  if (this != pCVar2) {
    do {
      this = this + -0xf8;
      ConditionalAnimationItem::~ConditionalAnimationItem(this);
    } while (this != pCVar2);
    pCVar1 = *param_1;
  }
  param_1[1] = pCVar2;
  operator_delete(pCVar1);
  return;
}


