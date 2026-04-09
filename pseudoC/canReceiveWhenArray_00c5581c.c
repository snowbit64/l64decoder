// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: canReceiveWhenArray
// Entry Point: 00c5581c
// Size: 88 bytes
// Signature: undefined __thiscall canReceiveWhenArray(IR_Type * this, IR_Type * param_1, IR_Type * * param_2)


/* IR_Type::canReceiveWhenArray(IR_Type*, IR_Type*&) */

bool __thiscall IR_Type::canReceiveWhenArray(IR_Type *this,IR_Type *param_1,IR_Type **param_2)

{
  int iVar1;
  
  if ((*(int *)param_1 == 4) &&
     ((*(int *)(this + 0x10) == 0 || (*(int *)(this + 0x10) != *(int *)(param_1 + 0x10))))) {
    iVar1 = canReceive(*(IR_Type **)(this + 8),*(IR_Type **)(param_1 + 8),false,param_2);
    return iVar1 == 0;
  }
  return false;
}


