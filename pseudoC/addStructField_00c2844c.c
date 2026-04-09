// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addStructField
// Entry Point: 00c2844c
// Size: 56 bytes
// Signature: undefined __thiscall addStructField(GISLParserContext * this, IR_Struct * param_1, SHC_String * param_2, SHC_Type * param_3, SHC_String * param_4)


/* GISLParserContext::addStructField(IR_Struct*, SHC_String const*, SHC_Type const&, SHC_String
   const*) */

void __thiscall
GISLParserContext::addStructField
          (GISLParserContext *this,IR_Struct *param_1,SHC_String *param_2,SHC_Type *param_3,
          SHC_String *param_4)

{
  SHC_String *pSVar1;
  SHC_String *pSVar2;
  
  pSVar1 = *(SHC_String **)(param_2 + 0x10);
  pSVar2 = param_4;
  if ((param_4 != (SHC_String *)0x0) &&
     (pSVar2 = *(SHC_String **)(param_4 + 0x10), ((byte)*param_4 & 1) == 0)) {
    pSVar2 = param_4 + 1;
  }
  if (((byte)*param_2 & 1) == 0) {
    pSVar1 = param_2 + 1;
  }
  IR_Struct::addField(param_1,(char *)pSVar1,*(IR_Type **)(param_3 + 8),
                      *(IR_QualFlags *)(param_3 + 0x10),(char *)pSVar2);
  return;
}


