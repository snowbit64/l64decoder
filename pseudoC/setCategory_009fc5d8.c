// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCategory
// Entry Point: 009fc5d8
// Size: 36 bytes
// Signature: undefined __thiscall setCategory(DeferredDebugRenderer * this, CATEGORY param_1, bool param_2)


/* DeferredDebugRenderer::setCategory(DeferredDebugRenderer::CATEGORY, bool) */

void __thiscall
DeferredDebugRenderer::setCategory(DeferredDebugRenderer *this,CATEGORY param_1,bool param_2)

{
  if (param_2) {
    *(uint *)(this + 0x2a0) = *(uint *)(this + 0x2a0) | param_1;
    return;
  }
  *(uint *)(this + 0x2a0) = *(uint *)(this + 0x2a0) & (param_1 ^ 0xffffffff);
  return;
}


