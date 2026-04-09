// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Parameter
// Entry Point: 0094af3c
// Size: 100 bytes
// Signature: undefined __thiscall ~Parameter(Parameter * this)


/* CustomShader::Parameter::~Parameter() */

void __thiscall CustomShader::Parameter::~Parameter(Parameter *this)

{
  Parameter PVar1;
  
  if (((byte)this[0x68] & 1) == 0) {
    PVar1 = this[0x18];
  }
  else {
    operator_delete(*(void **)(this + 0x78));
    PVar1 = this[0x18];
  }
  if (((byte)PVar1 & 1) == 0) {
    PVar1 = *this;
  }
  else {
    operator_delete(*(void **)(this + 0x28));
    PVar1 = *this;
  }
  if (((byte)PVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


