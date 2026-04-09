// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 008bd7a0
// Size: 736 bytes
// Signature: undefined __thiscall insert(vector<SoundPlayer::IChannel*,std::__ndk1::allocator<SoundPlayer::IChannel*>> * this, __wrap_iter param_1, IChannel * * param_2)


/* std::__ndk1::vector<SoundPlayer::IChannel*, std::__ndk1::allocator<SoundPlayer::IChannel*>
   >::insert(std::__ndk1::__wrap_iter<SoundPlayer::IChannel* const*>, SoundPlayer::IChannel*&&) */

IChannel ** __thiscall
std::__ndk1::vector<SoundPlayer::IChannel*,std::__ndk1::allocator<SoundPlayer::IChannel*>>::insert
          (vector<SoundPlayer::IChannel*,std::__ndk1::allocator<SoundPlayer::IChannel*>> *this,
          __wrap_iter param_1,IChannel **param_2)

{
  IChannel **__src;
  IChannel **ppIVar1;
  long lVar2;
  ulong uVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  IChannel **ppIVar8;
  IChannel **ppIVar10;
  ulong uVar11;
  ulong uVar12;
  IChannel **ppIVar13;
  ulong uVar14;
  IChannel **ppIVar15;
  IChannel *pIVar16;
  IChannel *pIVar17;
  IChannel *pIVar18;
  void *local_70;
  IChannel **local_68;
  IChannel **local_60;
  void *local_58;
  vector<SoundPlayer::IChannel*,std::__ndk1::allocator<SoundPlayer::IChannel*>> *local_50;
  long local_48;
  IChannel **ppIVar9;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar6 = *(ulong *)this;
  ppIVar1 = *(IChannel ***)(this + 8);
  uVar11 = param_1 - uVar6;
  __src = (IChannel **)(uVar6 + (uVar11 & 0xfffffffffffffff8));
  if (*(IChannel ***)(this + 0x10) <= ppIVar1) {
    uVar3 = ((long)((long)ppIVar1 - uVar6) >> 3) + 1;
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar6 = (long)*(IChannel ***)(this + 0x10) - uVar6;
    uVar14 = (long)uVar6 >> 2;
    if (uVar3 <= uVar14) {
      uVar3 = uVar14;
    }
    local_50 = this + 0x10;
    if (0x7ffffffffffffff7 < uVar6) {
      uVar3 = 0x1fffffffffffffff;
    }
    if (uVar3 == 0) {
      local_70 = (void *)0x0;
    }
    else {
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_70 = operator_new(uVar3 << 3);
    }
    local_68 = (IChannel **)((long)local_70 + ((long)uVar11 >> 3) * 8);
    local_58 = (void *)((long)local_70 + uVar3 * 8);
    local_60 = local_68;
                    /* try { // try from 008bd8c4 to 008bd8cf has its CatchHandler @ 008bda80 */
    __split_buffer<SoundPlayer::IChannel*,std::__ndk1::allocator<SoundPlayer::IChannel*>&>::
    push_back((__split_buffer<SoundPlayer::IChannel*,std::__ndk1::allocator<SoundPlayer::IChannel*>&>
               *)&local_70,param_2);
    ppIVar15 = local_68;
    sVar4 = (long)__src - (long)*(void **)this;
    local_68 = (IChannel **)((long)local_68 - sVar4);
    if (0 < (long)sVar4) {
      memcpy(local_68,*(void **)this,sVar4);
    }
    lVar5 = *(long *)(this + 8);
    sVar4 = lVar5 - (long)__src;
    if (0 < (long)sVar4) {
      memcpy(local_60,__src,sVar4);
      local_60 = (IChannel **)((long)local_60 + sVar4);
      lVar5 = *(long *)(this + 8);
    }
    local_70 = *(void **)this;
    *(IChannel ***)this = local_68;
    *(IChannel ***)(this + 8) = local_60;
    uVar7 = *(undefined8 *)(this + 0x10);
    *(void **)(this + 0x10) = local_58;
    local_60 = (IChannel **)lVar5;
    if (lVar5 - (long)local_70 != 0) {
      local_60 = (IChannel **)
                 (lVar5 + ((lVar5 - (long)local_70) - 8U >> 3 ^ 0xffffffffffffffff) * 8);
    }
    local_68 = (IChannel **)local_70;
    local_58 = (void *)uVar7;
    if (local_70 != (void *)0x0) {
      operator_delete(local_70);
    }
    goto LAB_008bda3c;
  }
  ppIVar15 = __src;
  if (__src == ppIVar1) {
    *__src = *param_2;
    *(IChannel ***)(this + 8) = __src + 1;
    goto LAB_008bda3c;
  }
  uVar3 = (long)ppIVar1 + (-8 - (long)__src);
  uVar14 = uVar3 & 0xfffffffffffffff8;
  ppIVar8 = (IChannel **)((long)__src + uVar14);
  ppIVar13 = ppIVar1;
  if (ppIVar8 < ppIVar1) {
    uVar12 = uVar11 & 0xfffffffffffffff8;
    ppIVar13 = (IChannel **)(uVar12 + uVar6 + uVar14 + 8);
    ppIVar10 = ppIVar1;
    if (ppIVar1 <= ppIVar13) {
      ppIVar10 = ppIVar13;
    }
    uVar14 = (long)ppIVar10 + (~uVar6 - (uVar12 + uVar14));
    ppIVar10 = ppIVar1;
    if (0x17 < uVar14) {
      ppIVar13 = (IChannel **)(uVar12 + uVar6 + (uVar3 & 0xfffffffffffffff8) + 8);
      ppIVar9 = ppIVar1;
      if (ppIVar1 <= ppIVar13) {
        ppIVar9 = ppIVar13;
      }
      lVar5 = ((long)uVar3 >> 3) + ((long)uVar11 >> 3);
      uVar11 = (long)ppIVar9 + (~uVar6 - (uVar12 + (uVar3 & 0xfffffffffffffff8)));
      if (((IChannel **)(uVar6 + (lVar5 + (uVar11 >> 3)) * 8 + 8) <= ppIVar1) ||
         ((IChannel **)((long)ppIVar1 + (uVar11 & 0xfffffffffffffff8) + 8) <= ppIVar8)) {
        uVar11 = (uVar14 >> 3) + 1;
        ppIVar13 = ppIVar1 + 2;
        uVar14 = uVar11 & 0x3ffffffffffffffc;
        ppIVar10 = (IChannel **)(uVar6 + lVar5 * 8 + 0x10);
        ppIVar8 = ppIVar8 + uVar14;
        uVar6 = uVar14;
        do {
          ppIVar9 = ppIVar10 + -1;
          pIVar16 = ppIVar10[-2];
          pIVar18 = ppIVar10[1];
          pIVar17 = *ppIVar10;
          ppIVar10 = ppIVar10 + 4;
          uVar6 = uVar6 - 4;
          ppIVar13[-1] = *ppIVar9;
          ppIVar13[-2] = pIVar16;
          ppIVar13[1] = pIVar18;
          *ppIVar13 = pIVar17;
          ppIVar13 = ppIVar13 + 4;
        } while (uVar6 != 0);
        ppIVar13 = ppIVar1 + uVar14;
        ppIVar10 = ppIVar1 + uVar14;
        if (uVar11 == uVar14) goto LAB_008bda20;
      }
    }
    do {
      ppIVar9 = ppIVar8 + 1;
      *ppIVar10 = *ppIVar8;
      ppIVar8 = ppIVar9;
      ppIVar13 = ppIVar10 + 1;
      ppIVar10 = ppIVar10 + 1;
    } while (ppIVar9 < ppIVar1);
  }
LAB_008bda20:
  *(IChannel ***)(this + 8) = ppIVar13;
  if (uVar3 != 0) {
    memmove(ppIVar1 + -((long)uVar3 >> 3),__src,uVar3);
  }
  *__src = *param_2;
LAB_008bda3c:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ppIVar15;
}


