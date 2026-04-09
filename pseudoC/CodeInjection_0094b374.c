// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CodeInjection
// Entry Point: 0094b374
// Size: 68 bytes
// Signature: undefined __thiscall ~CodeInjection(CodeInjection * this)


/* MaterialShaderManager::CodeInjection::~CodeInjection() */

void __thiscall MaterialShaderManager::CodeInjection::~CodeInjection(CodeInjection *this)

{
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


