// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CompileError
// Entry Point: 00ecf744
// Size: 64 bytes
// Signature: undefined __thiscall ~CompileError(CompileError * this)


/* Luau::CompileError::~CompileError() */

void __thiscall Luau::CompileError::~CompileError(CompileError *this)

{
  *(undefined ***)this = &PTR__CompileError_01014948;
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  std::exception::~exception((exception *)this);
  return;
}


