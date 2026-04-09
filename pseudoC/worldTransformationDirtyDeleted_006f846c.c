// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: worldTransformationDirtyDeleted
// Entry Point: 006f846c
// Size: 24 bytes
// Signature: undefined __thiscall worldTransformationDirtyDeleted(RenderOverlay * this, ScenegraphNode * param_1)


/* non-virtual thunk to RenderOverlay::worldTransformationDirtyDeleted(ScenegraphNode*) */

void __thiscall
RenderOverlay::worldTransformationDirtyDeleted(RenderOverlay *this,ScenegraphNode *param_1)

{
  if (*(ScenegraphNode **)(this + 0x28) != param_1) {
    return;
  }
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


