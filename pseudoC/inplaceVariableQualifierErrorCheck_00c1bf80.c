// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inplaceVariableQualifierErrorCheck
// Entry Point: 00c1bf80
// Size: 104 bytes
// Signature: undefined __thiscall inplaceVariableQualifierErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, SHC_Type * param_2, bool param_3, bool param_4)


/* GISLParserContext::inplaceVariableQualifierErrorCheck(GsTSourceLoc const&, SHC_Type&, bool, bool)
    */

uint __thiscall
GISLParserContext::inplaceVariableQualifierErrorCheck
          (GISLParserContext *this,GsTSourceLoc *param_1,SHC_Type *param_2,bool param_3,bool param_4
          )

{
  long lVar1;
  uint uVar2;
  IR_QualFlags local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = *(IR_QualFlags *)(param_2 + 0x10);
  uVar2 = variableQualifierErrorCheck(this,param_1,param_2,local_30,false,param_4);
  *(IR_QualFlags *)(param_2 + 0x10) = local_30[0];
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


