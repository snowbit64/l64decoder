// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyParam
// Entry Point: 00c58750
// Size: 180 bytes
// Signature: undefined __thiscall copyParam(Parameter * this, Parameter * param_1, SHC_PoolAllocator * param_2)


/* GsTFunction::Parameter::copyParam(GsTFunction::Parameter const&, SHC_PoolAllocator&) */

void __thiscall
GsTFunction::Parameter::copyParam(Parameter *this,Parameter *param_1,SHC_PoolAllocator *param_2)

{
  undefined8 uVar1;
  undefined8 *this_00;
  byte *pbVar2;
  byte *pbVar3;
  SHC_Type *pSVar4;
  
  pbVar2 = *(byte **)param_1;
  if (pbVar2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    pbVar3 = *(byte **)(pbVar2 + 0x10);
    if ((*pbVar2 & 1) == 0) {
      pbVar3 = pbVar2 + 1;
    }
    uVar1 = SHC_String::New((char *)pbVar3,param_2);
  }
  pbVar2 = *(byte **)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  if (pbVar2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    pbVar3 = *(byte **)(pbVar2 + 0x10);
    if ((*pbVar2 & 1) == 0) {
      pbVar3 = pbVar2 + 1;
    }
    uVar1 = SHC_String::New((char *)pbVar3,param_2);
  }
  *(undefined8 *)(this + 8) = uVar1;
  pSVar4 = *(SHC_Type **)(param_1 + 0x10);
  this_00 = (undefined8 *)SHC_PoolAllocator::allocate(param_2,0x30);
  this_00[1] = 0;
  *this_00 = 0;
  this_00[3] = 0;
  this_00[2] = 0;
  this_00[5] = 0;
  this_00[4] = 0;
  SHC_Type::copyType((SHC_Type *)this_00,pSVar4,param_2);
  *(undefined8 **)(this + 0x10) = this_00;
  return;
}


