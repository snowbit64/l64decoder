// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFileLogPrefixTimestamp
// Entry Point: 006d0acc
// Size: 20 bytes
// Signature: undefined __thiscall setFileLogPrefixTimestamp(Application * this, bool param_1)


/* Application::setFileLogPrefixTimestamp(bool) */

void __thiscall Application::setFileLogPrefixTimestamp(Application *this,bool param_1)

{
  if (*(AsyncFileLogSink **)(this + 0x168) != (AsyncFileLogSink *)0x0) {
    AsyncFileLogSink::setPrefixTimestamp(*(AsyncFileLogSink **)(this + 0x168),param_1);
    return;
  }
  return;
}


