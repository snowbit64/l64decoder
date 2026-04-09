// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CustomShader
// Entry Point: 0094c5a4
// Size: 36 bytes
// Signature: undefined __thiscall ~CustomShader(CustomShader * this)


/* CustomShader::~CustomShader() */

void __thiscall CustomShader::~CustomShader(CustomShader *this)

{
  ~CustomShader(this);
  operator_delete(this);
  return;
}


