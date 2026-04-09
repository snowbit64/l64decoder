// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Resource
// Entry Point: 00b2b030
// Size: 116 bytes
// Signature: undefined __thiscall ~Resource(Resource * this)


/* non-virtual thunk to Resource::~Resource() */

void __thiscall Resource::~Resource(Resource *this)

{
  *(undefined ***)(this + -0x10) = &PTR__Resource_00fe92e8;
  *(undefined ***)this = &PTR__Resource_00fe9320;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 0x10))();
  }
  if (((byte)this[0x20] & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
  Streamable::~Streamable((Streamable *)this);
  *(undefined ***)(this + -0x10) = &PTR__AtomicRefCounted_00fda810;
  return;
}


