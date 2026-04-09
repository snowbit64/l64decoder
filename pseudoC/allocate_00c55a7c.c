// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocate
// Entry Point: 00c55a7c
// Size: 196 bytes
// Signature: undefined __thiscall allocate(SHC_PoolAllocator * this, ulong param_1)


/* SHC_PoolAllocator::allocate(unsigned long) */

long __thiscall SHC_PoolAllocator::allocate(SHC_PoolAllocator *this,ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(this + 8);
  uVar2 = *(long *)(this + 0x28) + param_1;
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
  *(ulong *)(this + 0x40) = *(long *)(this + 0x40) + param_1;
  if (uVar4 < uVar2) {
    lVar5 = *(long *)(this + 0x20);
    uVar2 = lVar5 + param_1;
    if (uVar4 < uVar2) {
      puVar1 = (undefined8 *)operator_new__(uVar2);
      *puVar1 = *(undefined8 *)(this + 0x30);
      *(ulong *)(this + 0x28) = uVar4;
      *(undefined8 **)(this + 0x30) = puVar1;
      return (long)puVar1 + lVar5;
    }
    puVar1 = (undefined8 *)operator_new__(uVar4);
    uVar3 = *(undefined8 *)(this + 0x30);
    *(undefined8 **)(this + 0x30) = puVar1;
    uVar2 = *(ulong *)(this + 0x18) + uVar2 & (*(ulong *)(this + 0x18) ^ 0xffffffffffffffff);
    *puVar1 = uVar3;
    lVar5 = (long)puVar1 + lVar5;
  }
  else {
    uVar2 = *(ulong *)(this + 0x18) + uVar2 & (*(ulong *)(this + 0x18) ^ 0xffffffffffffffff);
    lVar5 = *(long *)(this + 0x30) + *(long *)(this + 0x28);
  }
  *(ulong *)(this + 0x28) = uVar2;
  return lVar5;
}


