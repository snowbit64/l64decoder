// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 00a64bcc
// Size: 136 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FoliageSystemDesc::Layer::reset() */

void FoliageSystemDesc::Layer::reset(void)

{
  State *pSVar1;
  byte bVar2;
  long in_x0;
  State *this;
  
  if ((*(byte *)(in_x0 + 0x18) & 1) == 0) {
    *(undefined2 *)(in_x0 + 0x18) = 0;
    bVar2 = *(byte *)(in_x0 + 0x30);
  }
  else {
    **(undefined **)(in_x0 + 0x28) = 0;
    *(undefined8 *)(in_x0 + 0x20) = 0;
    bVar2 = *(byte *)(in_x0 + 0x30);
  }
  if ((bVar2 & 1) == 0) {
    *(undefined2 *)(in_x0 + 0x30) = 0;
  }
  else {
    **(undefined **)(in_x0 + 0x40) = 0;
    *(undefined8 *)(in_x0 + 0x38) = 0;
  }
  pSVar1 = *(State **)(in_x0 + 0x58);
  this = *(State **)(in_x0 + 0x60);
  *(undefined4 *)(in_x0 + 0x4c) = 0;
  *(undefined4 *)(in_x0 + 0x50) = 0;
  while (this != pSVar1) {
    this = this + -0x68;
    State::~State(this);
  }
  *(State **)(in_x0 + 0x60) = pSVar1;
  return;
}


