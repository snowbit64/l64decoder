// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onSetIsActive
// Entry Point: 00a176f4
// Size: 12 bytes
// Signature: undefined __thiscall onSetIsActive(RenderStatsOverlay * this, bool param_1)


/* RenderStatsOverlay::onSetIsActive(bool) */

void __thiscall RenderStatsOverlay::onSetIsActive(RenderStatsOverlay *this,bool param_1)

{
  *(bool *)(*(long *)(this + 0x298) + 0x140) = param_1;
  return;
}


