// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~EmptyResourceReloader
// Entry Point: 00961d20
// Size: 4 bytes
// Signature: undefined __thiscall ~EmptyResourceReloader(EmptyResourceReloader * this)


/* Resource::EmptyResourceReloader::~EmptyResourceReloader() */

void __thiscall Resource::EmptyResourceReloader::~EmptyResourceReloader(EmptyResourceReloader *this)

{
  operator_delete(this);
  return;
}


