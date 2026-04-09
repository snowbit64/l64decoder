// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emit
// Entry Point: 00c3ca74
// Size: 356 bytes
// Signature: undefined __thiscall emit(IR_InstructionSequence * this, uint * param_1, uint param_2, uint param_3)


/* IR_InstructionSequence::emit(unsigned int const*, unsigned int, unsigned int) */

void __thiscall
IR_InstructionSequence::emit(IR_InstructionSequence *this,uint *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  void *__src;
  uint **ppuVar2;
  long lVar3;
  uint *__dest;
  void *__dest_00;
  ulong __n;
  ulong uVar4;
  uint *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  __dest = (uint *)operator_new__((ulong)param_2 << 2);
  local_70 = __dest;
  memcpy(__dest,param_1,(ulong)param_2 << 2);
  __src = *(void **)(this + 0x20);
  ppuVar2 = *(uint ***)(this + 0x28);
  __n = (long)ppuVar2 - (long)__src;
  uVar4 = (long)__n >> 3;
  if (param_3 < uVar4) {
    std::__ndk1::vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>>::insert
              ((vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>> *)(this + 0x20),
               (int)__src + param_3 * 8,&local_70);
  }
  else if (ppuVar2 == *(uint ***)(this + 0x30)) {
    uVar1 = uVar4 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 2)) {
      uVar1 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
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
    ppuVar2 = (uint **)((long)__dest_00 + uVar4 * 8);
    *ppuVar2 = __dest;
    if (0 < (long)__n) {
      memcpy(__dest_00,__src,__n);
    }
    *(void **)(this + 0x20) = __dest_00;
    *(uint ***)(this + 0x28) = ppuVar2 + 1;
    *(void **)(this + 0x30) = (void *)((long)__dest_00 + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *ppuVar2 = __dest;
    *(uint ***)(this + 0x28) = ppuVar2 + 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


