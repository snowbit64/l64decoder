// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 00a642b4
// Size: 72 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FoliageSystemDesc::MultiLayer::reset() */

void FoliageSystemDesc::MultiLayer::reset(void)

{
  Layer *pLVar1;
  long in_x0;
  Layer *this;
  
  pLVar1 = *(Layer **)(in_x0 + 8);
  this = *(Layer **)(in_x0 + 0x10);
  while (this != pLVar1) {
    this = this + -0x70;
    Layer::~Layer(this);
  }
  *(Layer **)(in_x0 + 0x10) = pLVar1;
  return;
}


