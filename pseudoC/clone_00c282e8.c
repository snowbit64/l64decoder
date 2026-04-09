// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00c282e8
// Size: 84 bytes
// Signature: undefined __thiscall clone(SHC_Type * this, SHC_PoolAllocator * param_1)


/* SHC_Type::clone(SHC_PoolAllocator&) */

undefined8 * __thiscall SHC_Type::clone(SHC_Type *this,SHC_PoolAllocator *param_1)

{
  undefined8 *this_00;
  
  this_00 = (undefined8 *)SHC_PoolAllocator::allocate(param_1,0x30);
  this_00[1] = 0;
  *this_00 = 0;
  this_00[3] = 0;
  this_00[2] = 0;
  this_00[5] = 0;
  this_00[4] = 0;
  copyType((SHC_Type *)this_00,this,param_1);
  return this_00;
}


