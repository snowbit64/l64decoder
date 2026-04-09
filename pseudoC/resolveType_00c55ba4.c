// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resolveType
// Entry Point: 00c55ba4
// Size: 76 bytes
// Signature: undefined __thiscall resolveType(SHC_Type * this, SHC_Type * param_1, SHC_PoolAllocator * param_2, IR_Type * param_3)


/* SHC_Type::resolveType(SHC_Type const&, SHC_PoolAllocator&, IR_Type*) */

void __thiscall
SHC_Type::resolveType(SHC_Type *this,SHC_Type *param_1,SHC_PoolAllocator *param_2,IR_Type *param_3)

{
  undefined4 uVar1;
  IR_TypeSet *this_00;
  undefined8 uVar2;
  IR_Type *pIVar3;
  undefined8 uVar4;
  
  this_00 = *(IR_TypeSet **)param_2;
  pIVar3 = *(IR_Type **)(param_1 + 8);
  *(IR_TypeSet **)this = this_00;
  uVar2 = IR_TypeSet::getResolvedType(this_00,pIVar3,param_3);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar1;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = uVar4;
  *(undefined8 *)(this + 0x18) = uVar2;
  return;
}


