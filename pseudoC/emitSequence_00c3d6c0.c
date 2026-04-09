// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emitSequence
// Entry Point: 00c3d6c0
// Size: 344 bytes
// Signature: undefined __thiscall emitSequence(IR_InstructionSequence * this, IR_InstructionSequence * param_1)


/* IR_InstructionSequence::emitSequence(IR_InstructionSequence const*) */

void __thiscall
IR_InstructionSequence::emitSequence(IR_InstructionSequence *this,IR_InstructionSequence *param_1)

{
  ulong uVar1;
  void **ppvVar2;
  uint uVar3;
  void *__dest;
  void *__dest_00;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  size_t __n;
  ulong uVar8;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != lVar4) {
    uVar8 = 0;
    do {
      pvVar7 = *(void **)(lVar4 + uVar8 * 8);
      uVar3 = *(uint *)((long)pvVar7 + 4);
      uVar1 = ((ulong)(uVar3 >> 0x10) + (ulong)(ushort)uVar3) * 4 + 8;
      __dest = operator_new__(uVar1);
      memcpy(__dest,pvVar7,uVar1);
      ppvVar2 = *(void ***)(this + 0x28);
      if (ppvVar2 < *(void ***)(this + 0x30)) {
        *ppvVar2 = __dest;
        *(void ***)(this + 0x28) = ppvVar2 + 1;
      }
      else {
        pvVar7 = *(void **)(this + 0x20);
        __n = (long)ppvVar2 - (long)pvVar7;
        uVar1 = ((long)__n >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar5 = (long)*(void ***)(this + 0x30) - (long)pvVar7;
        uVar6 = (long)uVar5 >> 2;
        if (uVar1 <= uVar6) {
          uVar1 = uVar6;
        }
        if (0x7ffffffffffffff7 < uVar5) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 == 0) {
          __dest_00 = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          __dest_00 = operator_new(uVar1 << 3);
        }
        ppvVar2 = (void **)((long)__dest_00 + ((long)__n >> 3) * 8);
        *ppvVar2 = __dest;
        if (0 < (long)__n) {
          memcpy(__dest_00,pvVar7,__n);
        }
        *(void **)(this + 0x20) = __dest_00;
        *(void ***)(this + 0x28) = ppvVar2 + 1;
        *(void **)(this + 0x30) = (void *)((long)__dest_00 + uVar1 * 8);
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7);
        }
      }
      lVar4 = *(long *)(param_1 + 0x20);
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(*(long *)(param_1 + 0x28) - lVar4 >> 3));
  }
  return;
}


