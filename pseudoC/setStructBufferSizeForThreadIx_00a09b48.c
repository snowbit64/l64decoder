// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setStructBufferSizeForThreadIx
// Entry Point: 00a09b48
// Size: 32 bytes
// Signature: undefined __thiscall setStructBufferSizeForThreadIx(RenderController * this, uint param_1, uint param_2)


/* RenderController::setStructBufferSizeForThreadIx(unsigned int, unsigned int) */

void __thiscall
RenderController::setStructBufferSizeForThreadIx(RenderController *this,uint param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = (ulong)(param_1 + 1) * 4;
  uVar1 = *(uint *)(*(long *)(this + 0x210) + lVar2);
  if (param_2 <= uVar1) {
    param_2 = uVar1;
  }
  *(uint *)(*(long *)(this + 0x210) + lVar2) = param_2;
  return;
}


