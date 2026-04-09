// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mouseEvent
// Entry Point: 006dd3e4
// Size: 32 bytes
// Signature: undefined __thiscall mouseEvent(EngineApplication * this, float param_1, float param_2, bool param_3, bool param_4, uint param_5)


/* EngineApplication::mouseEvent(float, float, bool, bool, unsigned int) */

undefined8 __thiscall
EngineApplication::mouseEvent
          (EngineApplication *this,float param_1,float param_2,bool param_3,bool param_4,
          uint param_5)

{
  propagateEvent(this,param_1,param_2,param_3,param_4,param_5,"mouseEvent");
  return 0;
}


