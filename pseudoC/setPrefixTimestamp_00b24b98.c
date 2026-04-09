// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPrefixTimestamp
// Entry Point: 00b24b98
// Size: 8 bytes
// Signature: undefined __thiscall setPrefixTimestamp(AsyncFileLogSink * this, bool param_1)


/* AsyncFileLogSink::setPrefixTimestamp(bool) */

void __thiscall AsyncFileLogSink::setPrefixTimestamp(AsyncFileLogSink *this,bool param_1)

{
  this[0x20] = (AsyncFileLogSink)param_1;
  return;
}


