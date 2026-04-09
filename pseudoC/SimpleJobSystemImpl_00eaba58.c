// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SimpleJobSystemImpl
// Entry Point: 00eaba58
// Size: 36 bytes
// Signature: undefined __thiscall ~SimpleJobSystemImpl(SimpleJobSystemImpl * this)


/* simplejobsystem::SimpleJobSystemImpl::~SimpleJobSystemImpl() */

void __thiscall
simplejobsystem::SimpleJobSystemImpl::~SimpleJobSystemImpl(SimpleJobSystemImpl *this)

{
  ~SimpleJobSystemImpl(this);
  operator_delete(this);
  return;
}


