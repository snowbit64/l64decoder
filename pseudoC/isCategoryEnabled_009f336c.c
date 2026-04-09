// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isCategoryEnabled
// Entry Point: 009f336c
// Size: 16 bytes
// Signature: undefined __thiscall isCategoryEnabled(DeferredDebugRenderer * this, CATEGORY param_1)


/* DeferredDebugRenderer::isCategoryEnabled(DeferredDebugRenderer::CATEGORY) const */

bool __thiscall
DeferredDebugRenderer::isCategoryEnabled(DeferredDebugRenderer *this,CATEGORY param_1)

{
  return (*(uint *)(this + 0x2a0) & param_1) != 0;
}


