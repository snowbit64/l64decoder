// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Console
// Entry Point: 006d498c
// Size: 36 bytes
// Signature: undefined __thiscall ~Console(Console * this)


/* Console::~Console() */

void __thiscall Console::~Console(Console *this)

{
  ~Console(this);
  operator_delete(this);
  return;
}


