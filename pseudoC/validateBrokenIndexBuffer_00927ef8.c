// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: validateBrokenIndexBuffer
// Entry Point: 00927ef8
// Size: 136 bytes
// Signature: undefined __thiscall validateBrokenIndexBuffer(DestructionGeometry * this, uint param_1)


/* DestructionGeometry::validateBrokenIndexBuffer(unsigned int) */

void __thiscall
DestructionGeometry::validateBrokenIndexBuffer(DestructionGeometry *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  void *__src;
  
  uVar2 = *(uint *)(this + 0xcc);
  if (*(int *)(this + 200) - uVar2 < param_1) {
    uVar1 = *(int *)(this + 200) + param_1 * 5;
    __src = *(void **)(this + 0xa8);
    *(uint *)(this + 200) = uVar1;
    __dest = operator_new__((ulong)uVar1 << 1);
    *(void **)(this + 0xa8) = __dest;
    if (__src != (void *)0x0) {
      memcpy(__dest,__src,(ulong)uVar2 << 1);
      operator_delete__(__src);
    }
    if (*(long **)(this + 0xb8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xb8) + 8))();
    }
    *(undefined8 *)(this + 0xb8) = 0;
    this[0xd0] = (DestructionGeometry)0x1;
  }
  return;
}


