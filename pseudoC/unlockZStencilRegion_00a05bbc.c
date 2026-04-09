// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unlockZStencilRegion
// Entry Point: 00a05bbc
// Size: 32 bytes
// Signature: undefined __thiscall unlockZStencilRegion(RenderArgs * this, Vector3 * param_1)


/* RenderArgs::unlockZStencilRegion(Vector3*) */

void __thiscall RenderArgs::unlockZStencilRegion(RenderArgs *this,Vector3 *param_1)

{
  *(int *)(this + 0x550) = (int)((ulong)(param_1 + (-1000 - (long)this)) >> 2) * -0x55555555;
  return;
}


