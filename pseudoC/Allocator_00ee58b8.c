// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Allocator
// Entry Point: 00ee58b8
// Size: 16 bytes
// Signature: undefined __thiscall Allocator(Allocator * this, Allocator * param_1)


/* Luau::Allocator::Allocator(Luau::Allocator&&) */

void __thiscall Luau::Allocator::Allocator(Allocator *this,Allocator *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


