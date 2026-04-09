// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: worldTransformationDirtyDeleted
// Entry Point: 006f8454
// Size: 24 bytes
// Signature: undefined __thiscall worldTransformationDirtyDeleted(RenderOverlay * this, ScenegraphNode * param_1)


/* RenderOverlay::worldTransformationDirtyDeleted(ScenegraphNode*) */

void __thiscall
RenderOverlay::worldTransformationDirtyDeleted(RenderOverlay *this,ScenegraphNode *param_1)

{
  if (*(ScenegraphNode **)(this + 0xa0) != param_1) {
    return;
  }
  *(undefined8 *)(this + 0xa0) = 0;
  return;
}


