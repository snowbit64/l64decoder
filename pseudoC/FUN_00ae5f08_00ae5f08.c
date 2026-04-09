// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ae5f08
// Entry Point: 00ae5f08
// Size: 108 bytes
// Signature: undefined FUN_00ae5f08(void)


void FUN_00ae5f08(TextLine **param_1)

{
  TextLine *pTVar1;
  TextLine *this;
  TextLine *pTVar2;
  
  pTVar2 = *param_1;
  if (pTVar2 == (TextLine *)0x0) {
    return;
  }
  this = param_1[1];
  pTVar1 = pTVar2;
  if (this != pTVar2) {
    do {
      this = this + -0x158;
      TextLine::~TextLine(this);
    } while (this != pTVar2);
    pTVar1 = *param_1;
  }
  param_1[1] = pTVar2;
  operator_delete(pTVar1);
  return;
}


