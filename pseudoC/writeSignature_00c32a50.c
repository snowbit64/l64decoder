// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeSignature
// Entry Point: 00c32a50
// Size: 80 bytes
// Signature: undefined __cdecl writeSignature(SharedContext * param_1, CodeStringStream * param_2, vector * param_3)


/* IR_HllConvertUtil::writeSignature(IR_HllConvertUtil::SharedContext&, CodeStringStream&,
   std::__ndk1::vector<IR_HllConvertUtil::GlobalData,
   std::__ndk1::allocator<IR_HllConvertUtil::GlobalData> >&) */

void IR_HllConvertUtil::writeSignature
               (SharedContext *param_1,CodeStringStream *param_2,vector *param_3)

{
  long lVar1;
  vector *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_3;
  writeSignature(param_1,param_2,&local_30,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


