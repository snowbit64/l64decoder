// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRenderPass
// Entry Point: 00a1f020
// Size: 12 bytes
// Signature: undefined __thiscall getRenderPass(RenderPathManager * this, uint param_1)


/* RenderPathManager::getRenderPass(unsigned int) const */

RenderPathManager * __thiscall
RenderPathManager::getRenderPass(RenderPathManager *this,uint param_1)

{
  return this + (ulong)param_1 * 0x20;
}


