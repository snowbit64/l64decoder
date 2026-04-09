// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0087447c
// Entry Point: 0087447c
// Size: 108 bytes
// Signature: undefined FUN_0087447c(void)


void FUN_0087447c(AnimalSoundSystem **param_1)

{
  AnimalSoundSystem *pAVar1;
  AnimalSoundSystem *this;
  AnimalSoundSystem *pAVar2;
  
  pAVar2 = *param_1;
  if (pAVar2 == (AnimalSoundSystem *)0x0) {
    return;
  }
  this = param_1[1];
  pAVar1 = pAVar2;
  if (this != pAVar2) {
    do {
      this = this + -0x58;
      AnimalSoundSystem::~AnimalSoundSystem(this);
    } while (this != pAVar2);
    pAVar1 = *param_1;
  }
  param_1[1] = pAVar2;
  operator_delete(pAVar1);
  return;
}


