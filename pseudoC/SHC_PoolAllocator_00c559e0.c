// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SHC_PoolAllocator
// Entry Point: 00c559e0
// Size: 44 bytes
// Signature: undefined __thiscall SHC_PoolAllocator(SHC_PoolAllocator * this, IR_TypeSet * param_1)


/* SHC_PoolAllocator::SHC_PoolAllocator(IR_TypeSet*) */

void __thiscall SHC_PoolAllocator::SHC_PoolAllocator(SHC_PoolAllocator *this,IR_TypeSet *param_1)

{
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(IR_TypeSet **)this = param_1;
  *(undefined8 *)(this + 8) = 0x2000;
  *(undefined8 *)(this + 0x18) = 0xf;
  *(undefined8 *)(this + 0x10) = 0x10;
  *(undefined8 *)(this + 0x28) = 0x2000;
  *(undefined8 *)(this + 0x20) = 8;
  return;
}


