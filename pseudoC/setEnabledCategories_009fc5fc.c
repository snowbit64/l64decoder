// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setEnabledCategories
// Entry Point: 009fc5fc
// Size: 8 bytes
// Signature: undefined __thiscall setEnabledCategories(DeferredDebugRenderer * this, uint param_1)


/* DeferredDebugRenderer::setEnabledCategories(unsigned int) */

void __thiscall
DeferredDebugRenderer::setEnabledCategories(DeferredDebugRenderer *this,uint param_1)

{
  *(uint *)(this + 0x2a0) = param_1;
  return;
}


