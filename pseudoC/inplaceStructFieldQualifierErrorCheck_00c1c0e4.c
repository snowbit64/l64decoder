// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inplaceStructFieldQualifierErrorCheck
// Entry Point: 00c1c0e4
// Size: 96 bytes
// Signature: undefined __thiscall inplaceStructFieldQualifierErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, SHC_Type * param_2)


/* GISLParserContext::inplaceStructFieldQualifierErrorCheck(GsTSourceLoc const&, SHC_Type&) */

uint __thiscall
GISLParserContext::inplaceStructFieldQualifierErrorCheck
          (GISLParserContext *this,GsTSourceLoc *param_1,SHC_Type *param_2)

{
  long lVar1;
  uint uVar2;
  IR_QualFlags local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = *(IR_QualFlags *)(param_2 + 0x10);
  uVar2 = structFieldQualifierErrorCheck(this,param_1,param_2,local_30);
  *(IR_QualFlags *)(param_2 + 0x10) = local_30[0];
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


