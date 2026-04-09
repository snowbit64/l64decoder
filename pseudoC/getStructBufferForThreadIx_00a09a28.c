// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStructBufferForThreadIx
// Entry Point: 00a09a28
// Size: 16 bytes
// Signature: undefined __thiscall getStructBufferForThreadIx(RenderController * this, uint param_1)


/* RenderController::getStructBufferForThreadIx(unsigned int) const */

undefined8 __thiscall
RenderController::getStructBufferForThreadIx(RenderController *this,uint param_1)

{
  return *(undefined8 *)(*(long *)(this + 0x1b0) + (ulong)(param_1 + 1) * 8);
}


