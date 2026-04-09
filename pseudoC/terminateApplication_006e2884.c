// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: terminateApplication
// Entry Point: 006e2884
// Size: 76 bytes
// Signature: undefined __cdecl terminateApplication(EngineApplication * param_1, ApplicationMutex * * param_2)


/* terminateApplication(EngineApplication*, ApplicationMutex*&) */

undefined8 terminateApplication(EngineApplication *param_1,ApplicationMutex **param_2)

{
  ApplicationMutex *this;
  
  if (param_1 != (EngineApplication *)0x0) {
    (**(code **)(*(long *)param_1 + 8))();
  }
  this = *param_2;
  if (this != (ApplicationMutex *)0x0) {
    ApplicationMutex::~ApplicationMutex(this);
    operator_delete(this);
  }
  *param_2 = (ApplicationMutex *)0x0;
  return 0;
}


