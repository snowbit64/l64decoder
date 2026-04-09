// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~RenderWindowDesc
// Entry Point: 006d0900
// Size: 100 bytes
// Signature: undefined __thiscall ~RenderWindowDesc(RenderWindowDesc * this)


/* RenderWindowDesc::~RenderWindowDesc() */

void __thiscall RenderWindowDesc::~RenderWindowDesc(RenderWindowDesc *this)

{
  RenderWindowDesc RVar1;
  
  if (((byte)this[0x78] & 1) == 0) {
    RVar1 = this[0x58];
  }
  else {
    operator_delete(*(void **)(this + 0x88));
    RVar1 = this[0x58];
  }
  if (((byte)RVar1 & 1) == 0) {
    RVar1 = this[0x38];
  }
  else {
    operator_delete(*(void **)(this + 0x68));
    RVar1 = this[0x38];
  }
  if (((byte)RVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x48));
  return;
}


