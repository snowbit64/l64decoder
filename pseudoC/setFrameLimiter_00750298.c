// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFrameLimiter
// Entry Point: 00750298
// Size: 12 bytes
// Signature: undefined __thiscall setFrameLimiter(EngineManager * this, bool param_1, float param_2)


/* EngineManager::setFrameLimiter(bool, float) */

void __thiscall EngineManager::setFrameLimiter(EngineManager *this,bool param_1,float param_2)

{
  this[0x318] = (EngineManager)param_1;
  *(float *)(this + 0x31c) = param_2;
  return;
}


