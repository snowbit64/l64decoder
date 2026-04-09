// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocate
// Entry Point: 00ee58f8
// Size: 140 bytes
// Signature: undefined __thiscall allocate(Allocator * this, ulong param_1)


/* Luau::Allocator::allocate(unsigned long) */

undefined8 * __thiscall Luau::Allocator::allocate(Allocator *this,ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)this;
  if (lVar3 != 0) {
    puVar2 = (undefined8 *)(lVar3 + 8 + *(long *)(this + 8) + 7U & 0xfffffffffffffff8);
    if ((long)puVar2 + param_1 <= lVar3 + 0x2008U) {
      *(ulong *)(this + 8) = (param_1 - (lVar3 + 8)) + (long)puVar2;
      return puVar2;
    }
  }
  uVar1 = param_1;
  if (param_1 < 0x2001) {
    uVar1 = 0x2000;
  }
  puVar2 = (undefined8 *)operator_new(uVar1 + 8);
  *puVar2 = *(undefined8 *)this;
  *(undefined8 **)this = puVar2;
  *(ulong *)(this + 8) = param_1;
  return puVar2 + 1;
}


