// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AsyncFileLogSink
// Entry Point: 00b24848
// Size: 36 bytes
// Signature: undefined __thiscall ~AsyncFileLogSink(AsyncFileLogSink * this)


/* AsyncFileLogSink::~AsyncFileLogSink() */

void __thiscall AsyncFileLogSink::~AsyncFileLogSink(AsyncFileLogSink *this)

{
  ~AsyncFileLogSink(this);
  operator_delete(this);
  return;
}


