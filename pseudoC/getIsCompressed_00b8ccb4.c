// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsCompressed
// Entry Point: 00b8ccb4
// Size: 80 bytes
// Signature: undefined __cdecl getIsCompressed(void * param_1, int param_2)


/* LZMACompressionUtil::getIsCompressed(void*, int) */

bool LZMACompressionUtil::getIsCompressed(void *param_1,int param_2)

{
                    /* WARNING: Load size is inaccurate */
  if (((0x1f < (uint)param_2) && (*param_1 == 0x4f435347)) &&
     (*(int *)((long)param_1 + 4) == 0x4552504d)) {
    return *(int *)((long)param_1 + 8) == 0x44455353;
  }
  return false;
}


