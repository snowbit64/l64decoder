// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00cd5528
// Entry Point: 00cd5528
// Size: 124 bytes
// Signature: undefined FUN_00cd5528(void)


void FUN_00cd5528(ProjectivePoint **param_1)

{
  ProjectivePoint *this;
  ProjectivePoint *pPVar1;
  
  pPVar1 = *param_1;
  if (pPVar1 == (ProjectivePoint *)0x0) {
    return;
  }
  this = param_1[1];
  if (this != pPVar1) {
    do {
      this = this + -0x90;
      CryptoPP::ProjectivePoint::~ProjectivePoint(this);
    } while (this != pPVar1);
    param_1[1] = pPVar1;
    operator_delete(*param_1);
    return;
  }
  param_1[1] = pPVar1;
  operator_delete(pPVar1);
  return;
}


