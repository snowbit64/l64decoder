// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 00761f88
// Size: 68 bytes
// Signature: undefined __thiscall resize(vector<FieldCropsQuery::CropTypeIndex,std::__ndk1::allocator<FieldCropsQuery::CropTypeIndex>> * this, ulong param_1)


/* std::__ndk1::vector<FieldCropsQuery::CropTypeIndex,
   std::__ndk1::allocator<FieldCropsQuery::CropTypeIndex> >::resize(unsigned long) */

void __thiscall
std::__ndk1::
vector<FieldCropsQuery::CropTypeIndex,std::__ndk1::allocator<FieldCropsQuery::CropTypeIndex>>::
resize(vector<FieldCropsQuery::CropTypeIndex,std::__ndk1::allocator<FieldCropsQuery::CropTypeIndex>>
       *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8) - *(long *)this >> 2;
  uVar1 = lVar2 * 0xf83e0f83e0f83e1;
  if (uVar1 < param_1) {
    __append(this,param_1 + lVar2 * -0xf83e0f83e0f83e1);
    return;
  }
  if (uVar1 >= param_1 && uVar1 - param_1 != 0) {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 0x84;
  }
  return;
}


