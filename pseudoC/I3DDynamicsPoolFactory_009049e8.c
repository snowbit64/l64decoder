// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~I3DDynamicsPoolFactory
// Entry Point: 009049e8
// Size: 20 bytes
// Signature: undefined __thiscall ~I3DDynamicsPoolFactory(I3DDynamicsPoolFactory * this)


/* I3DDynamicsPoolFactory::~I3DDynamicsPoolFactory() */

void __thiscall I3DDynamicsPoolFactory::~I3DDynamicsPoolFactory(I3DDynamicsPoolFactory *this)

{
  if (((byte)this[0x80] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x90));
  return;
}


