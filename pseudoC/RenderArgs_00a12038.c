// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~RenderArgs
// Entry Point: 00a12038
// Size: 20 bytes
// Signature: undefined __thiscall ~RenderArgs(RenderArgs * this)


/* RenderArgs::~RenderArgs() */

void __thiscall RenderArgs::~RenderArgs(RenderArgs *this)

{
  if (((byte)this[0x578] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x588));
  return;
}


