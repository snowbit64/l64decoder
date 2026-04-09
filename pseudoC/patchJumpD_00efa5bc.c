// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: patchJumpD
// Entry Point: 00efa5bc
// Size: 408 bytes
// Signature: undefined __thiscall patchJumpD(BytecodeBuilder * this, ulong param_1, ulong param_2)


/* Luau::BytecodeBuilder::patchJumpD(unsigned long, unsigned long) */

undefined8 __thiscall
Luau::BytecodeBuilder::patchJumpD(BytecodeBuilder *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  void *__dest;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  void *__src;
  size_t __n;
  long lVar8;
  
  uVar2 = (int)param_2 + ~(uint)param_1;
  if (uVar2 == (int)(short)uVar2) {
    *(uint *)(*(long *)(this + 0x20) + param_1 * 4) =
         *(uint *)(*(long *)(this + 0x20) + param_1 * 4) | uVar2 * 0x10000;
    puVar5 = *(ulong **)(this + 0x88);
    puVar6 = *(ulong **)(this + 0x90);
    if (puVar5 < puVar6) {
LAB_00efa610:
      *puVar5 = param_1 & 0xffffffff | param_2 << 0x20;
      *(ulong **)(this + 0x88) = puVar5 + 1;
      return 1;
    }
  }
  else {
    uVar4 = -uVar2;
    if (-1 < (int)uVar2) {
      uVar4 = uVar2;
    }
    if (uVar4 >> 0x17 != 0) {
      return 0;
    }
    this[0xb0] = (BytecodeBuilder)0x1;
    puVar5 = *(ulong **)(this + 0x88);
    puVar6 = *(ulong **)(this + 0x90);
    if (puVar5 < puVar6) goto LAB_00efa610;
  }
  __src = *(void **)(this + 0x80);
  __n = (long)puVar5 - (long)__src;
  lVar8 = (long)__n >> 3;
  uVar1 = lVar8 + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar7 = (long)puVar6 - (long)__src >> 2;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (0x7ffffffffffffff7 < (ulong)((long)puVar6 - (long)__src)) {
    uVar1 = 0x1fffffffffffffff;
  }
  if (uVar1 == 0) {
    __dest = (void *)0x0;
    puVar5 = (ulong *)(lVar8 * 8);
    pvVar3 = (void *)0x0;
    *puVar5 = param_1 & 0xffffffff | param_2 << 0x20;
  }
  else {
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar1 << 3);
    puVar5 = (ulong *)((long)__dest + lVar8 * 8);
    pvVar3 = (void *)((long)__dest + uVar1 * 8);
    *puVar5 = param_1 & 0xffffffff | param_2 << 0x20;
  }
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)(this + 0x80) = __dest;
  *(ulong **)(this + 0x88) = puVar5 + 1;
  *(void **)(this + 0x90) = pvVar3;
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
  return 1;
}


