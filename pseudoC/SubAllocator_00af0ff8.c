// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SubAllocator
// Entry Point: 00af0ff8
// Size: 76 bytes
// Signature: undefined __thiscall SubAllocator(SubAllocator * this, uint param_1, uint param_2)


/* SubAllocator::SubAllocator(unsigned int, unsigned int) */

void __thiscall SubAllocator::SubAllocator(SubAllocator *this,uint param_1,uint param_2)

{
  ulong *puVar1;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(uint *)this = param_1;
  *(uint *)(this + 4) = param_2;
  puVar1 = (ulong *)operator_new(8);
  *(ulong **)(this + 8) = puVar1;
  *(uint *)(this + 0x20) = param_1;
  *(uint *)(this + 0x24) = param_1;
  this[0x28] = (SubAllocator)0x0;
  *puVar1 = (ulong)param_1;
  *(ulong **)(this + 0x10) = puVar1 + 1;
  *(ulong **)(this + 0x18) = puVar1 + 1;
  return;
}


