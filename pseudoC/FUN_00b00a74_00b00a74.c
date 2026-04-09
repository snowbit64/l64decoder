// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00b00a74
// Entry Point: 00b00a74
// Size: 108 bytes
// Signature: undefined FUN_00b00a74(void)


void FUN_00b00a74(ProfiledSection **param_1)

{
  ProfiledSection *pPVar1;
  ProfiledSection *this;
  ProfiledSection *pPVar2;
  
  pPVar2 = *param_1;
  if (pPVar2 == (ProfiledSection *)0x0) {
    return;
  }
  this = param_1[1];
  pPVar1 = pPVar2;
  if (this != pPVar2) {
    do {
      this = this + -0x140;
      ProfiledSection::~ProfiledSection(this);
    } while (this != pPVar2);
    pPVar1 = *param_1;
  }
  param_1[1] = pPVar2;
  operator_delete(pPVar1);
  return;
}


