// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rectSortFunc
// Entry Point: 008d5c64
// Size: 32 bytes
// Signature: undefined __cdecl rectSortFunc(void * param_1, void * param_2)


/* FoliageBendingSystem::rectSortFunc(void const*, void const*) */

int FoliageBendingSystem::rectSortFunc(void *param_1,void *param_2)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  iVar1 = -(uint)(*(float *)(*param_2 + 0x98) < *(float *)(*param_1 + 0x98));
  if (*(float *)(*param_1 + 0x98) < *(float *)(*param_2 + 0x98)) {
    iVar1 = 1;
  }
  return iVar1;
}


