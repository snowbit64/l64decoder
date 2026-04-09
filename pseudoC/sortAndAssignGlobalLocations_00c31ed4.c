// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sortAndAssignGlobalLocations
// Entry Point: 00c31ed4
// Size: 84 bytes
// Signature: undefined __cdecl sortAndAssignGlobalLocations(SharedContext * param_1, vector * param_2, vector * param_3)


/* IR_HllConvertUtil::sortAndAssignGlobalLocations(IR_HllConvertUtil::SharedContext&,
   std::__ndk1::vector<IR_HllConvertUtil::GlobalData,
   std::__ndk1::allocator<IR_HllConvertUtil::GlobalData> >&,
   std::__ndk1::vector<IR_HllConvertUtil::GlobalData,
   std::__ndk1::allocator<IR_HllConvertUtil::GlobalData> >&) */

uint IR_HllConvertUtil::sortAndAssignGlobalLocations
               (SharedContext *param_1,vector *param_2,vector *param_3)

{
  long lVar1;
  uint uVar2;
  vector *local_38;
  vector *pvStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_2;
  pvStack_30 = param_3;
  uVar2 = sortAndAssignGlobalLocations(param_1,&local_38,2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


