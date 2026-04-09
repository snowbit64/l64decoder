// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GsTSymbol
// Entry Point: 00c58358
// Size: 88 bytes
// Signature: undefined __thiscall GsTSymbol(GsTSymbol * this, GsTSymbol * param_1, SHC_PoolAllocator * param_2)


/* GsTSymbol::GsTSymbol(GsTSymbol const&, SHC_PoolAllocator&) */

void __thiscall GsTSymbol::GsTSymbol(GsTSymbol *this,GsTSymbol *param_1,SHC_PoolAllocator *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar5 = *(byte **)(param_1 + 8);
  bVar2 = *pbVar5;
  *(undefined ***)this = &PTR__GsTSymbol_00fee7e8;
  pbVar4 = *(byte **)(pbVar5 + 0x10);
  if ((bVar2 & 1) == 0) {
    pbVar4 = pbVar5 + 1;
  }
  uVar3 = SHC_String::New((char *)pbVar4,param_2);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


