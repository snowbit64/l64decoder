// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: touchEvent
// Entry Point: 006dd404
// Size: 32 bytes
// Signature: undefined __thiscall touchEvent(EngineApplication * this, float param_1, float param_2, bool param_3, bool param_4, uint param_5)


/* EngineApplication::touchEvent(float, float, bool, bool, unsigned int) */

undefined8 __thiscall
EngineApplication::touchEvent
          (EngineApplication *this,float param_1,float param_2,bool param_3,bool param_4,
          uint param_5)

{
  propagateEvent(this,param_1,param_2,param_3,param_4,param_5,"touchEvent");
  return 0;
}


