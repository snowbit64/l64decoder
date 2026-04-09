// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: wrapperRead
// Entry Point: 00b8d488
// Size: 40 bytes
// Signature: undefined __cdecl wrapperRead(void * param_1, void * param_2, ulong * param_3)


/* LZMACompressionUtil::SeqInStreamWrapper::wrapperRead(void*, void*, unsigned long*) */

uint LZMACompressionUtil::SeqInStreamWrapper::wrapperRead
               (void *param_1,void *param_2,ulong *param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(long **)((long)param_1 + 8) + 0x10))();
  return ~uVar1 & 1;
}


