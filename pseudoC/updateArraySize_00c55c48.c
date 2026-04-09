// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateArraySize
// Entry Point: 00c55c48
// Size: 64 bytes
// Signature: undefined __thiscall updateArraySize(SHC_Type * this, uint param_1)


/* SHC_Type::updateArraySize(unsigned int) */

void __thiscall SHC_Type::updateArraySize(SHC_Type *this,uint param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(long *)(this + 8) + 0x10) == 0) {
    uVar1 = IR_TypeSet::getArrayType
                      (*(IR_TypeSet **)this,*(IR_Type **)(*(long *)(this + 8) + 8),param_1);
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 8) = uVar1;
  }
  return;
}


