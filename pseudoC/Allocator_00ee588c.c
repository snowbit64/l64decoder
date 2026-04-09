// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Allocator
// Entry Point: 00ee588c
// Size: 44 bytes
// Signature: undefined __thiscall Allocator(Allocator * this)


/* Luau::Allocator::Allocator() */

void __thiscall Luau::Allocator::Allocator(Allocator *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x2008);
  *(undefined8 **)this = puVar1;
  *(undefined8 *)(this + 8) = 0;
  *puVar1 = 0;
  return;
}


