// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSecondaryCommandBufferForThreadIx
// Entry Point: 00a09a04
// Size: 16 bytes
// Signature: undefined __thiscall getSecondaryCommandBufferForThreadIx(RenderController * this, uint param_1)


/* RenderController::getSecondaryCommandBufferForThreadIx(unsigned int) const */

undefined8 __thiscall
RenderController::getSecondaryCommandBufferForThreadIx(RenderController *this,uint param_1)

{
  return *(undefined8 *)(*(long *)(this + 0x198) + (ulong)(param_1 + 1) * 8);
}


