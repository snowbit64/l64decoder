// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addLogSink
// Entry Point: 00b2a8fc
// Size: 24 bytes
// Signature: undefined __thiscall addLogSink(Logger * this, ILogSink * param_1)


/* Logger::addLogSink(ILogSink*) */

void __thiscall Logger::addLogSink(Logger *this,ILogSink *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)this;
  *(uint *)this = uVar1 + 1;
  *(ILogSink **)(this + (ulong)uVar1 * 8 + 8) = param_1;
  return;
}


