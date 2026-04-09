// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RenderArgs
// Entry Point: 00a05ae0
// Size: 56 bytes
// Signature: undefined __thiscall RenderArgs(RenderArgs * this, SharedRenderArgs * param_1)


/* RenderArgs::RenderArgs(SharedRenderArgs const&) */

void __thiscall RenderArgs::RenderArgs(RenderArgs *this,SharedRenderArgs *param_1)

{
  Frustum::Frustum((Frustum *)(this + 0x1e0));
  *(SharedRenderArgs **)(this + 0x3a0) = param_1;
  *(undefined8 *)(this + 0x578) = 0;
  *(undefined8 *)(this + 0x588) = 0;
  *(undefined8 *)(this + 0x580) = 0;
  return;
}


