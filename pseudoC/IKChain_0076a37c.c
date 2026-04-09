// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IKChain
// Entry Point: 0076a37c
// Size: 60 bytes
// Signature: undefined __thiscall ~IKChain(IKChain * this)


/* IKChain::~IKChain() */

void __thiscall IKChain::~IKChain(IKChain *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
    return;
  }
  return;
}


