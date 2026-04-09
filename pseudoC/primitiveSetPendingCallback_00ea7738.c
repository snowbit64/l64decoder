// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: primitiveSetPendingCallback
// Entry Point: 00ea7738
// Size: 12 bytes
// Signature: undefined __cdecl primitiveSetPendingCallback(void * param_1)


/* VHACD::primitiveSetPendingCallback(void*) */

void VHACD::primitiveSetPendingCallback(void *param_1)

{
                    /* WARNING: Load size is inaccurate */
  VHACD::ProcessPrimitiveSet
            (*(VHACD **)(*(PrimitiveSetBase **)((long)param_1 + 8) + 0x98),
             *(PrimitiveSetBase **)((long)param_1 + 8),*param_1);
  return;
}


