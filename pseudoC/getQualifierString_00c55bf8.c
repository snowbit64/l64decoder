// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getQualifierString
// Entry Point: 00c55bf8
// Size: 80 bytes
// Signature: undefined __cdecl getQualifierString(bool param_1)


/* SHC_Type::getQualifierString(bool) const */

void SHC_Type::getQualifierString(bool param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  IR_QualFlags::getAsString(true);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


