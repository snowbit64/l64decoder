// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00874554
// Entry Point: 00874554
// Size: 112 bytes
// Signature: undefined FUN_00874554(void)


void FUN_00874554(AnimalAnimationSystemSource **param_1)

{
  AnimalAnimationSystemSource *pAVar1;
  AnimalAnimationSystemSource *this;
  AnimalAnimationSystemSource *pAVar2;
  
  pAVar2 = *param_1;
  if (pAVar2 == (AnimalAnimationSystemSource *)0x0) {
    return;
  }
  this = param_1[1];
  pAVar1 = pAVar2;
  if (this != pAVar2) {
    do {
      this = this + -0x3d20;
      AnimalAnimationSystemSource::~AnimalAnimationSystemSource(this);
    } while (this != pAVar2);
    pAVar1 = *param_1;
  }
  param_1[1] = pAVar2;
  operator_delete(pAVar1);
  return;
}


