// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: instanceThreadEntry_async
// Entry Point: 00b24dac
// Size: 76 bytes
// Signature: undefined __thiscall instanceThreadEntry_async(AsyncFileLogSink * this, bool * param_1)


/* AsyncFileLogSink::instanceThreadEntry_async(bool volatile&) */

AsyncFileLogSink * __thiscall
AsyncFileLogSink::instanceThreadEntry_async(AsyncFileLogSink *this,bool *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  while (cVar1 == '\0') {
    Semaphore::wait();
    this = (AsyncFileLogSink *)writePendings();
    cVar1 = *param_1;
  }
  return this;
}


