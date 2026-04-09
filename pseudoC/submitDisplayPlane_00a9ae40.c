// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: submitDisplayPlane
// Entry Point: 00a9ae40
// Size: 40 bytes
// Signature: undefined __cdecl submitDisplayPlane(IRenderDevice * param_1, uint param_2)


/* DisplayMonitor::submitDisplayPlane(IRenderDevice*, unsigned int) */

void DisplayMonitor::submitDisplayPlane(IRenderDevice *param_1,uint param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(ulong)param_2 + 0x138))((long *)(ulong)param_2);
                    /* WARNING: Could not recover jumptable at 0x00a9ae64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))();
  return;
}


