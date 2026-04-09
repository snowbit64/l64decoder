// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBlendState
// Entry Point: 00a1f00c
// Size: 20 bytes
// Signature: undefined __thiscall getBlendState(RenderPathManager * this, SCENE_BLEND_MODE param_1, bool param_2)


/* RenderPathManager::getBlendState(RenderPass::SCENE_BLEND_MODE, bool) */

undefined8 __thiscall
RenderPathManager::getBlendState(RenderPathManager *this,SCENE_BLEND_MODE param_1,bool param_2)

{
  return *(undefined8 *)(this + ((ulong)param_2 & 1) * 8 + (ulong)param_1 * 0x10 + 0x1f0);
}


