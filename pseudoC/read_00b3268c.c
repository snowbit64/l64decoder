// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: read
// Entry Point: 00b3268c
// Size: 16 bytes
// Signature: undefined __cdecl read(void * param_1, uint param_2)


/* FileReader::read(void*, unsigned int) */

void FileReader::read(void *param_1,uint param_2)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00b32698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**param_1 + 0x28))(*param_1,param_2);
  return;
}


