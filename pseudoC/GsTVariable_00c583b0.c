// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GsTVariable
// Entry Point: 00c583b0
// Size: 140 bytes
// Signature: undefined __thiscall GsTVariable(GsTVariable * this, GsTVariable * param_1, SHC_PoolAllocator * param_2)


/* GsTVariable::GsTVariable(GsTVariable const&, SHC_PoolAllocator&) */

void __thiscall
GsTVariable::GsTVariable(GsTVariable *this,GsTVariable *param_1,SHC_PoolAllocator *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)(param_1 + 8);
  bVar1 = *pbVar4;
  *(undefined ***)this = &PTR__GsTSymbol_00fee7e8;
  pbVar3 = *(byte **)(pbVar4 + 0x10);
  if ((bVar1 & 1) == 0) {
    pbVar3 = pbVar4 + 1;
  }
  uVar2 = SHC_String::New((char *)pbVar3,param_2);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined ***)this = &PTR__GsTSymbol_00fee830;
  *(undefined8 *)(this + 8) = uVar2;
  SHC_Type::copyType((SHC_Type *)(this + 0x28),(SHC_Type *)(param_1 + 0x28),param_2);
  this[0x58] = param_1[0x58];
  return;
}


