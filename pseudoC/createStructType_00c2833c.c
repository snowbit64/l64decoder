// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createStructType
// Entry Point: 00c2833c
// Size: 196 bytes
// Signature: undefined __cdecl createStructType(IR_Struct * param_1, IR_QualFlags param_2, SHC_String * param_3, GsTSourceLoc * param_4)


/* GISLParserContext::createStructType(IR_Struct*, IR_QualFlags, SHC_String const*, GsTSourceLoc
   const&) */

void GISLParserContext::createStructType
               (IR_Struct *param_1,IR_QualFlags param_2,SHC_String *param_3,GsTSourceLoc *param_4)

{
  IR_TypeSet *pIVar1;
  IR_Struct *this;
  IR_TypeSet **in_x4;
  IR_TypeSet **in_x8;
  char *pcVar2;
  IR_TypeSet *pIVar3;
  IR_TypeSet *pIVar4;
  
  this = (IR_Struct *)(ulong)param_2;
  pcVar2 = *(char **)(param_4 + 4);
  pIVar3 = **(IR_TypeSet ***)(param_1 + 0x58);
  pIVar4 = in_x4[1];
  pIVar1 = *in_x4;
  if ((*(byte *)param_4 & 1) == 0) {
    pcVar2 = (char *)((long)param_4 + 1);
  }
  *(undefined4 *)(in_x8 + 2) = 0;
  *in_x8 = pIVar3;
  in_x8[4] = pIVar4;
  in_x8[3] = pIVar1;
  in_x8[5] = (IR_TypeSet *)0x0;
  pIVar1 = (IR_TypeSet *)IR_TypeSet::findStruct(pIVar3,pcVar2);
  in_x8[1] = pIVar1;
  if (pIVar1 == (IR_TypeSet *)0x0) {
    pcVar2 = (char *)((long)param_4 + 1);
    if ((*(byte *)param_4 & 1) != 0) {
      pcVar2 = *(char **)(param_4 + 4);
    }
    pIVar3 = (IR_TypeSet *)IR_TypeSet::createStructAsCopy(pIVar3,pcVar2,(IR_QualFlags)param_3,this);
    in_x8[1] = pIVar3;
  }
  if (this == (IR_Struct *)0x0) {
    return;
  }
  IR_Struct::~IR_Struct(this);
  operator_delete(this);
  return;
}


