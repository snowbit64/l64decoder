// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00c588c8
// Size: 72 bytes
// Signature: undefined __thiscall clone(GsTFunction * this, SHC_PoolAllocator * param_1)


/* GsTFunction::clone(SHC_PoolAllocator&) */

GsTFunction * __thiscall GsTFunction::clone(GsTFunction *this,SHC_PoolAllocator *param_1)

{
  GsTFunction *this_00;
  
  this_00 = (GsTFunction *)SHC_PoolAllocator::allocate(param_1,0xd0);
  GsTFunction(this_00,this,param_1);
  return this_00;
}


