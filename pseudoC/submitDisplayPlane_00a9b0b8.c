// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: submitDisplayPlane
// Entry Point: 00a9b0b8
// Size: 40 bytes
// Signature: undefined __cdecl submitDisplayPlane(IRenderDevice * param_1, uint param_2)


/* DisplayTexture::submitDisplayPlane(IRenderDevice*, unsigned int) */

void DisplayTexture::submitDisplayPlane(IRenderDevice *param_1,uint param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(ulong)param_2 + 0x138))((long *)(ulong)param_2);
                    /* WARNING: Could not recover jumptable at 0x00a9b0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))();
  return;
}


