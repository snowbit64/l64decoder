// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyType
// Entry Point: 00c55b40
// Size: 100 bytes
// Signature: undefined __thiscall copyType(SHC_Type * this, SHC_Type * param_1, SHC_PoolAllocator * param_2)


/* SHC_Type::copyType(SHC_Type const&, SHC_PoolAllocator&) */

void __thiscall SHC_Type::copyType(SHC_Type *this,SHC_Type *param_1,SHC_PoolAllocator *param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte *pbVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)this = *(undefined8 *)param_2;
  *(undefined8 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0x10) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x18) = uVar3;
  pbVar2 = *(byte **)(param_1 + 0x28);
  if (pbVar2 == (byte *)0x0) {
    uVar3 = 0;
  }
  else {
    pbVar4 = *(byte **)(pbVar2 + 0x10);
    if ((*pbVar2 & 1) == 0) {
      pbVar4 = pbVar2 + 1;
    }
    uVar3 = SHC_String::New((char *)pbVar4,param_2);
  }
  *(undefined8 *)(this + 0x28) = uVar3;
  return;
}


