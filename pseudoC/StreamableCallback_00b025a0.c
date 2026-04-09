// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StreamableCallback
// Entry Point: 00b025a0
// Size: 36 bytes
// Signature: undefined __thiscall ~StreamableCallback(StreamableCallback * this)


/* StreamableCallback::~StreamableCallback() */

void __thiscall StreamableCallback::~StreamableCallback(StreamableCallback *this)

{
  Streamable::~Streamable((Streamable *)this);
  operator_delete(this);
  return;
}


