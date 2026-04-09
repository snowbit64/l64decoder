// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CullingArgs
// Entry Point: 00a057b4
// Size: 60 bytes
// Signature: undefined __thiscall CullingArgs(CullingArgs * this, SharedRenderArgs * param_1)


/* CullingArgs::CullingArgs(SharedRenderArgs const&) */

void __thiscall CullingArgs::CullingArgs(CullingArgs *this,SharedRenderArgs *param_1)

{
  Frustum::Frustum((Frustum *)(this + 0x1e0));
  *(SharedRenderArgs **)(this + 0x3a0) = param_1;
  *(undefined8 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x3d0) = 0;
  *(CullingArgs **)(this + 0x3c8) = this + 0x3d0;
  return;
}


