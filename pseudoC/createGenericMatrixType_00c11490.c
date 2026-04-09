// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createGenericMatrixType
// Entry Point: 00c11490
// Size: 152 bytes
// Signature: undefined __thiscall createGenericMatrixType(GISLParserContext * this, GsTBasicType param_1, IR_QualFlags param_2, uint param_3, uint param_4, bool param_5)


/* GISLParserContext::createGenericMatrixType(GsTBasicType, IR_QualFlags, unsigned int, unsigned
   int, bool) */

void __thiscall
GISLParserContext::createGenericMatrixType
          (GISLParserContext *this,GsTBasicType param_1,IR_QualFlags param_2,uint param_3,
          uint param_4,bool param_5)

{
  IR_TypeSet *pIVar1;
  IR_TypeSet **in_x8;
  IR_TypeSet **ppIVar2;
  
  if (param_4 == 1) {
    if (param_3 == 1) {
      ppIVar2 = *(IR_TypeSet ***)(this + 0x58);
      *(IR_QualFlags *)(in_x8 + 2) = param_2;
      in_x8[4] = (IR_TypeSet *)0x0;
      in_x8[5] = (IR_TypeSet *)0x0;
      in_x8[3] = (IR_TypeSet *)0x0;
      pIVar1 = *ppIVar2;
      *in_x8 = pIVar1;
      pIVar1 = (IR_TypeSet *)IR_TypeSet::getScalarType(pIVar1,param_1);
    }
    else {
      ppIVar2 = *(IR_TypeSet ***)(this + 0x58);
      *(IR_QualFlags *)(in_x8 + 2) = param_2;
      in_x8[4] = (IR_TypeSet *)0x0;
      in_x8[5] = (IR_TypeSet *)0x0;
      in_x8[3] = (IR_TypeSet *)0x0;
      pIVar1 = *ppIVar2;
      *in_x8 = pIVar1;
      pIVar1 = (IR_TypeSet *)IR_TypeSet::getVectorType(pIVar1,param_1,param_3);
    }
  }
  else {
    ppIVar2 = *(IR_TypeSet ***)(this + 0x58);
    *(IR_QualFlags *)(in_x8 + 2) = param_2;
    in_x8[4] = (IR_TypeSet *)0x0;
    in_x8[5] = (IR_TypeSet *)0x0;
    pIVar1 = *ppIVar2;
    in_x8[3] = (IR_TypeSet *)0x0;
    *in_x8 = pIVar1;
    pIVar1 = (IR_TypeSet *)IR_TypeSet::getMatrixType(pIVar1,param_1,param_3,param_4);
  }
  in_x8[1] = pIVar1;
  return;
}


