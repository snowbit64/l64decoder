// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_008744e8
// Entry Point: 008744e8
// Size: 108 bytes
// Signature: undefined FUN_008744e8(void)


void FUN_008744e8(AnimalAnimationSystem **param_1)

{
  AnimalAnimationSystem *pAVar1;
  AnimalAnimationSystem *this;
  AnimalAnimationSystem *pAVar2;
  
  pAVar2 = *param_1;
  if (pAVar2 == (AnimalAnimationSystem *)0x0) {
    return;
  }
  this = param_1[1];
  pAVar1 = pAVar2;
  if (this != pAVar2) {
    do {
      this = this + -0x338;
      AnimalAnimationSystem::~AnimalAnimationSystem(this);
    } while (this != pAVar2);
    pAVar1 = *param_1;
  }
  param_1[1] = pAVar2;
  operator_delete(pAVar1);
  return;
}


