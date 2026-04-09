// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00c5843c
// Size: 156 bytes
// Signature: undefined __thiscall clone(GsTVariable * this, SHC_PoolAllocator * param_1)


/* GsTVariable::clone(SHC_PoolAllocator&) */

undefined8 * __thiscall GsTVariable::clone(GsTVariable *this,SHC_PoolAllocator *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = (undefined8 *)SHC_PoolAllocator::allocate(param_1,0x98);
  pbVar4 = *(byte **)(this + 8);
  bVar1 = *pbVar4;
  *puVar2 = &PTR__GsTSymbol_00fee7e8;
  pbVar5 = *(byte **)(pbVar4 + 0x10);
  if ((bVar1 & 1) == 0) {
    pbVar5 = pbVar4 + 1;
  }
  uVar3 = SHC_String::New((char *)pbVar5,param_1);
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(this + 0x18);
  *puVar2 = &PTR__GsTSymbol_00fee830;
  puVar2[1] = uVar3;
  SHC_Type::copyType((SHC_Type *)(puVar2 + 5),(SHC_Type *)(this + 0x28),param_1);
  *(GsTVariable *)(puVar2 + 0xb) = this[0x58];
  return puVar2;
}


