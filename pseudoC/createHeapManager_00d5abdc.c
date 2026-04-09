// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createHeapManager
// Entry Point: 00d5abdc
// Size: 136 bytes
// Signature: undefined __cdecl createHeapManager(uint param_1)


/* HACD::createHeapManager(unsigned int) */

undefined8 * HACD::createHeapManager(uint param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  MyMicroAllocator *this;
  
  puVar2 = (undefined8 *)malloc(0x18);
  uVar1 = param_1 * 6 + 0x2da0;
  *puVar2 = &PTR_micro_malloc_01012af8;
  puVar2[1] = &PTR_heap_malloc_01012b38;
  this = (MyMicroAllocator *)malloc((ulong)uVar1);
  MyMicroAllocator::MyMicroAllocator(this,(MicroHeap *)puVar2,this,uVar1,param_1);
  puVar2[2] = this;
  return puVar2 + 1;
}


