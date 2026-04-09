// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emitPrefixSequence
// Entry Point: 00c3d818
// Size: 440 bytes
// Signature: undefined __thiscall emitPrefixSequence(IR_InstructionSequence * this, IR_InstructionSequence * param_1)


/* IR_InstructionSequence::emitPrefixSequence(IR_InstructionSequence const*) */

void __thiscall
IR_InstructionSequence::emitPrefixSequence
          (IR_InstructionSequence *this,IR_InstructionSequence *param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  void *__dest;
  long lVar4;
  long lVar5;
  ulong uVar6;
  void **ppvVar7;
  void **ppvVar8;
  void *pvVar9;
  size_t __n;
  ulong uVar10;
  void *local_80;
  void **local_70;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  lVar5 = *(long *)(param_1 + 0x20);
  local_80 = (void *)0x0;
  local_70 = (void **)0x0;
  if (*(long *)(param_1 + 0x28) == lVar5) {
    ppvVar8 = (void **)0x0;
    local_80 = (void *)0x0;
  }
  else {
    uVar10 = 0;
    ppvVar7 = (void **)0x0;
    do {
      pvVar9 = *(void **)(lVar5 + uVar10 * 8);
      uVar2 = *(uint *)((long)pvVar9 + 4);
      uVar1 = ((ulong)(uVar2 >> 0x10) + (ulong)(ushort)uVar2) * 4 + 8;
                    /* try { // try from 00c3d8a8 to 00c3d8af has its CatchHandler @ 00c3d9d8 */
      __dest = operator_new__(uVar1);
      memcpy(__dest,pvVar9,uVar1);
      if (ppvVar7 < local_70) {
        ppvVar8 = ppvVar7 + 1;
        *ppvVar7 = __dest;
        pvVar9 = local_80;
      }
      else {
        __n = (long)ppvVar7 - (long)local_80;
        uVar1 = ((long)__n >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00c3d9b8 to 00c3d9cb has its CatchHandler @ 00c3d9d4 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar6 = (long)local_70 - (long)local_80 >> 2;
        if (uVar1 <= uVar6) {
          uVar1 = uVar6;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)local_70 - (long)local_80)) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 == 0) {
          pvVar9 = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00c3d90c to 00c3d90f has its CatchHandler @ 00c3d9d8 */
          pvVar9 = operator_new(uVar1 << 3);
        }
        ppvVar7 = (void **)((long)pvVar9 + ((long)__n >> 3) * 8);
        ppvVar8 = ppvVar7 + 1;
        *ppvVar7 = __dest;
        if (0 < (long)__n) {
          memcpy(pvVar9,local_80,__n);
        }
        local_70 = (void **)((long)pvVar9 + uVar1 * 8);
        if (local_80 != (void *)0x0) {
          operator_delete(local_80);
        }
      }
      local_80 = pvVar9;
      lVar5 = *(long *)(param_1 + 0x20);
      uVar10 = (ulong)((int)uVar10 + 1);
      ppvVar7 = ppvVar8;
    } while (uVar10 < (ulong)(*(long *)(param_1 + 0x28) - lVar5 >> 3));
  }
                    /* try { // try from 00c3d970 to 00c3d97b has its CatchHandler @ 00c3d9d0 */
  std::__ndk1::vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>>::
  insert<std::__ndk1::__wrap_iter<unsigned_int**>>
            ((vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>> *)(this + 0x20),
             (__wrap_iter)*(undefined8 *)(this + 0x20),(__wrap_iter)local_80,(__wrap_iter)ppvVar8);
  if (local_80 != (void *)0x0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar3 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


