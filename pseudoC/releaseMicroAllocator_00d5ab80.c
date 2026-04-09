// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseMicroAllocator
// Entry Point: 00d5ab80
// Size: 92 bytes
// Signature: undefined __cdecl releaseMicroAllocator(MicroAllocator * param_1)


/* HACD::releaseMicroAllocator(HACD::MicroAllocator*) */

void HACD::releaseMicroAllocator(MicroAllocator *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined ***)param_1 = &PTR_malloc_01012a20;
  *(undefined ***)(param_1 + 8) = &PTR_addMicroChunk_01012a60;
  if (*(long *)(param_1 + 0x858) != 0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00d5abd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1,param_1);
  return;
}


