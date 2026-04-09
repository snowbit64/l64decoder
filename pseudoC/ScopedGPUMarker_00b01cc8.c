// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ScopedGPUMarker
// Entry Point: 00b01cc8
// Size: 20 bytes
// Signature: undefined __thiscall ScopedGPUMarker(ScopedGPUMarker * this, char * param_1, ICommandBuffer * param_2)


/* ScopedGPUMarker::ScopedGPUMarker(char const*, ICommandBuffer*) */

void __thiscall
ScopedGPUMarker::ScopedGPUMarker(ScopedGPUMarker *this,char *param_1,ICommandBuffer *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)param_2;
  *(ICommandBuffer **)this = param_2;
                    /* WARNING: Could not recover jumptable at 0x00b01cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0xd8))(param_2);
  return;
}


