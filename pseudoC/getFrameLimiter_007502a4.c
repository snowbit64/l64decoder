// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFrameLimiter
// Entry Point: 007502a4
// Size: 20 bytes
// Signature: undefined __thiscall getFrameLimiter(EngineManager * this, float * param_1)


/* EngineManager::getFrameLimiter(float&) */

EngineManager __thiscall EngineManager::getFrameLimiter(EngineManager *this,float *param_1)

{
  EngineManager EVar1;
  
  EVar1 = this[0x318];
  *param_1 = *(float *)(this + 0x31c);
  return EVar1;
}


