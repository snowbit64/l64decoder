// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createStructAsCopy
// Entry Point: 00c53e48
// Size: 92 bytes
// Signature: undefined __thiscall createStructAsCopy(IR_TypeSet * this, char * param_1, IR_QualFlags param_2, IR_Struct * param_3)


/* IR_TypeSet::createStructAsCopy(char const*, IR_QualFlags, IR_Struct*) */

long __thiscall
IR_TypeSet::createStructAsCopy
          (IR_TypeSet *this,char *param_1,IR_QualFlags param_2,IR_Struct *param_3)

{
  IR_StructField *pIVar1;
  long lVar2;
  IR_StructField *pIVar3;
  IR_Struct *this_00;
  
  lVar2 = createEmptyStruct(this,param_1,param_2);
  pIVar3 = *(IR_StructField **)(param_3 + 0x30);
  pIVar1 = *(IR_StructField **)(param_3 + 0x38);
  if (pIVar3 != pIVar1) {
    this_00 = *(IR_Struct **)(lVar2 + 8);
    do {
      IR_Struct::addField(this_00,pIVar3);
      pIVar3 = pIVar3 + 0x38;
    } while (pIVar3 != pIVar1);
  }
  return lVar2;
}


