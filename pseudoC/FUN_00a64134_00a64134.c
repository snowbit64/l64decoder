// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00a64134
// Entry Point: 00a64134
// Size: 108 bytes
// Signature: undefined FUN_00a64134(void)


void FUN_00a64134(Layer **param_1)

{
  Layer *pLVar1;
  Layer *this;
  Layer *pLVar2;
  
  pLVar2 = *param_1;
  if (pLVar2 == (Layer *)0x0) {
    return;
  }
  this = param_1[1];
  pLVar1 = pLVar2;
  if (this != pLVar2) {
    do {
      this = this + -0x70;
      FoliageSystemDesc::Layer::~Layer(this);
    } while (this != pLVar2);
    pLVar1 = *param_1;
  }
  param_1[1] = pLVar2;
  operator_delete(pLVar1);
  return;
}


