// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PostFxParams
// Entry Point: 00a03f7c
// Size: 108 bytes
// Signature: undefined __thiscall ~PostFxParams(PostFxParams * this)


/* PostFxParams::~PostFxParams() */

void __thiscall PostFxParams::~PostFxParams(PostFxParams *this)

{
  if (*(long **)(this + 0x328) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x328) + 8))();
  }
  if (*(long **)(this + 0x348) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x348) + 8))();
  }
  if (((byte)this[0x330] & 1) != 0) {
    operator_delete(*(void **)(this + 0x340));
  }
  if (((byte)this[0x310] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 800));
  return;
}


