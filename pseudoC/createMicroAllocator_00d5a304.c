// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createMicroAllocator
// Entry Point: 00d5a304
// Size: 96 bytes
// Signature: undefined __cdecl createMicroAllocator(MicroHeap * param_1, uint param_2)


/* HACD::createMicroAllocator(HACD::MicroHeap*, unsigned int) */

MyMicroAllocator * HACD::createMicroAllocator(MicroHeap *param_1,uint param_2)

{
  uint uVar1;
  MyMicroAllocator *this;
  
  uVar1 = param_2 * 6 + 0x2da0;
  this = (MyMicroAllocator *)(***(code ***)param_1)(param_1,uVar1);
  MyMicroAllocator::MyMicroAllocator(this,param_1,this,uVar1,param_2);
  return this;
}


