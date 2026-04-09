// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: queryResolvedStruct
// Entry Point: 00c51d98
// Size: 152 bytes
// Signature: undefined __thiscall queryResolvedStruct(IR_Struct * this, IR_Struct * param_1, IR_Type * * param_2)


/* IR_Struct::queryResolvedStruct(IR_Struct*, IR_Type*&) */

bool __thiscall IR_Struct::queryResolvedStruct(IR_Struct *this,IR_Struct *param_1,IR_Type **param_2)

{
  bool bVar1;
  IR_Struct **ppIVar2;
  IR_Struct **ppIVar3;
  IR_Struct *pIVar4;
  
  ppIVar2 = *(IR_Struct ***)(this + 0x58);
  while( true ) {
    if (ppIVar2 == (IR_Struct **)(this + 0x60)) {
      return false;
    }
    if (ppIVar2[5] == param_1) break;
    ppIVar3 = (IR_Struct **)ppIVar2[1];
    if ((IR_Struct **)ppIVar2[1] == (IR_Struct **)0x0) {
      ppIVar3 = ppIVar2 + 2;
      bVar1 = *(IR_Struct ***)*ppIVar3 != ppIVar2;
      ppIVar2 = (IR_Struct **)*ppIVar3;
      if (bVar1) {
        do {
          pIVar4 = *ppIVar3;
          ppIVar3 = (IR_Struct **)(pIVar4 + 0x10);
          ppIVar2 = (IR_Struct **)*ppIVar3;
        } while (*ppIVar2 != pIVar4);
      }
    }
    else {
      do {
        ppIVar2 = ppIVar3;
        ppIVar3 = (IR_Struct **)*ppIVar2;
      } while ((IR_Struct **)*ppIVar2 != (IR_Struct **)0x0);
    }
  }
  if ((IR_Struct *)*param_2 == (IR_Struct *)0x0) {
    *param_2 = (IR_Type *)ppIVar2[4];
    return true;
  }
  return (IR_Struct *)*param_2 == ppIVar2[4];
}


