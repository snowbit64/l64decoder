// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createGenericVectorType
// Entry Point: 00c14ca4
// Size: 104 bytes
// Signature: undefined __cdecl createGenericVectorType(GsTBasicType param_1, IR_QualFlags param_2, uint param_3)


/* GISLParserContext::createGenericVectorType(GsTBasicType, IR_QualFlags, unsigned int) */

void GISLParserContext::createGenericVectorType
               (GsTBasicType param_1,IR_QualFlags param_2,uint param_3)

{
  IR_TypeSet *pIVar1;
  uint in_w3;
  IR_TypeSet **in_x8;
  IR_TypeSet **ppIVar2;
  
  if (in_w3 == 1) {
    ppIVar2 = *(IR_TypeSet ***)((ulong)param_1 + 0x58);
    *(uint *)(in_x8 + 2) = param_3;
    in_x8[4] = (IR_TypeSet *)0x0;
    in_x8[5] = (IR_TypeSet *)0x0;
    in_x8[3] = (IR_TypeSet *)0x0;
    pIVar1 = *ppIVar2;
    *in_x8 = pIVar1;
    pIVar1 = (IR_TypeSet *)IR_TypeSet::getScalarType(pIVar1,param_2);
  }
  else {
    ppIVar2 = *(IR_TypeSet ***)((ulong)param_1 + 0x58);
    *(uint *)(in_x8 + 2) = param_3;
    in_x8[4] = (IR_TypeSet *)0x0;
    in_x8[5] = (IR_TypeSet *)0x0;
    in_x8[3] = (IR_TypeSet *)0x0;
    pIVar1 = *ppIVar2;
    *in_x8 = pIVar1;
    pIVar1 = (IR_TypeSet *)IR_TypeSet::getVectorType(pIVar1,param_2,in_w3);
  }
  in_x8[1] = pIVar1;
  return;
}


