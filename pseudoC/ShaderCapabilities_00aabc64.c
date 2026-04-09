// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ShaderCapabilities
// Entry Point: 00aabc64
// Size: 100 bytes
// Signature: undefined __thiscall ~ShaderCapabilities(ShaderCapabilities * this)


/* ShaderCapabilities::~ShaderCapabilities() */

void __thiscall ShaderCapabilities::~ShaderCapabilities(ShaderCapabilities *this)

{
  ShaderCapabilities SVar1;
  
  if (((byte)this[0x48] & 1) == 0) {
    SVar1 = this[0x30];
  }
  else {
    operator_delete(*(void **)(this + 0x58));
    SVar1 = this[0x30];
  }
  if (((byte)SVar1 & 1) == 0) {
    SVar1 = this[0x18];
  }
  else {
    operator_delete(*(void **)(this + 0x40));
    SVar1 = this[0x18];
  }
  if (((byte)SVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x28));
  return;
}


