// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 00a655d8
// Size: 72 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FoliageSystemDesc::reset() */

void FoliageSystemDesc::reset(void)

{
  MultiLayer *pMVar1;
  long in_x0;
  MultiLayer *this;
  
  pMVar1 = *(MultiLayer **)(in_x0 + 0x10);
  this = *(MultiLayer **)(in_x0 + 0x18);
  while (this != pMVar1) {
    this = this + -0x28;
    MultiLayer::~MultiLayer(this);
  }
  *(MultiLayer **)(in_x0 + 0x18) = pMVar1;
  return;
}


