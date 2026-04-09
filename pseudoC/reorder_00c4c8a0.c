// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reorder
// Entry Point: 00c4c8a0
// Size: 364 bytes
// Signature: undefined __thiscall reorder(IR_Section * this, vector * param_1)


/* IR_Section::reorder(std::__ndk1::vector<IR_Section*, std::__ndk1::allocator<IR_Section*> >&) */

void __thiscall IR_Section::reorder(IR_Section *this,vector *param_1)

{
  IR_Section **ppIVar1;
  void *__dest;
  IR_Section *this_00;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  void *__src;
  ulong uVar7;
  size_t __n;
  IR_Section **ppIVar8;
  
  ppIVar1 = *(IR_Section ***)(param_1 + 8);
  if (ppIVar1 < *(IR_Section ***)(param_1 + 0x10)) {
    ppIVar8 = ppIVar1 + 1;
    *ppIVar1 = this;
    *(IR_Section ***)(param_1 + 8) = ppIVar8;
  }
  else {
    __src = *(void **)param_1;
    __n = (long)ppIVar1 - (long)__src;
    uVar7 = ((long)__n >> 3) + 1;
    if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar2 = (long)*(IR_Section ***)(param_1 + 0x10) - (long)__src;
    uVar5 = (long)uVar2 >> 2;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x7ffffffffffffff7 < uVar2) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar7 << 3);
    }
    ppIVar1 = (IR_Section **)((long)__dest + ((long)__n >> 3) * 8);
    ppIVar8 = ppIVar1 + 1;
    *ppIVar1 = this;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)param_1 = __dest;
    *(IR_Section ***)(param_1 + 8) = ppIVar8;
    *(void **)(param_1 + 0x10) = (void *)((long)__dest + uVar7 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      ppIVar8 = *(IR_Section ***)(param_1 + 8);
    }
  }
  lVar4 = *(long *)(this + 0x20);
  lVar3 = *(long *)(this + 0x28);
  *(int *)(this + 0x3c) = (int)((ulong)((long)ppIVar8 - *(long *)param_1) >> 3);
  if (lVar3 != lVar4) {
    uVar7 = 0;
    do {
      piVar6 = *(int **)(lVar4 + uVar7 * 8);
      if (*piVar6 == 5 || *piVar6 == 3) {
        this_00 = (IR_Section *)
                  IR_InstructionSequence::getSection
                            ((IR_InstructionSequence *)this,
                             *(uint *)((long)piVar6 +
                                      ((ulong)((uint)piVar6[1] >> 0xe) & 0x3fffc) + 8));
        reorder(this_00,param_1);
        lVar4 = *(long *)(this + 0x20);
        lVar3 = *(long *)(this + 0x28);
      }
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < (ulong)(lVar3 - lVar4 >> 3));
  }
  return;
}


