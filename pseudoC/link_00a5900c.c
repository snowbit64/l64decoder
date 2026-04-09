// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: link
// Entry Point: 00a5900c
// Size: 444 bytes
// Signature: undefined __thiscall link(Node * this, Node * param_1, uint param_2)


/* Node::link(Node*, unsigned int) */

ulong __thiscall Node::link(Node *this,Node *param_1,uint param_2)

{
  long lVar1;
  void *__dest;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  void **this_00;
  ulong uVar5;
  void *__src;
  Node **ppNVar6;
  Node **ppNVar7;
  Node *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  uVar5 = (ulong)param_2;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(param_1 + 0x20);
  local_70 = param_1;
  if (plVar3 != (long *)0x0) {
    uVar4 = plVar3[6] - plVar3[5];
    if ((int)(uVar4 >> 3) != 0) {
      uVar2 = 0;
      do {
        if (*(Node **)(plVar3[5] + uVar2 * 8) == param_1) {
          (**(code **)(*plVar3 + 0x10))(plVar3,uVar2,0);
          break;
        }
        uVar2 = uVar2 + 1;
      } while ((uVar4 >> 3 & 0xffffffff) != uVar2);
    }
  }
  ppNVar6 = *(Node ***)(this + 0x30);
  *(Node **)(param_1 + 0x20) = this;
  this_00 = (void **)(this + 0x28);
  __src = *this_00;
  uVar4 = (long)ppNVar6 - (long)__src;
  uVar2 = (long)uVar4 >> 3;
  if (uVar5 < uVar2) {
    std::__ndk1::vector<Node*,std::__ndk1::allocator<Node*>>::insert
              ((vector<Node*,std::__ndk1::allocator<Node*>> *)this_00,(int)__src + param_2 * 8,
               &local_70);
  }
  else {
    if (ppNVar6 == *(Node ***)(this + 0x38)) {
      uVar5 = uVar2 + 1;
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar5 <= (ulong)((long)uVar4 >> 2)) {
        uVar5 = (long)uVar4 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar4) {
        uVar5 = 0x1fffffffffffffff;
      }
      if (uVar5 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar5 << 3);
      }
      ppNVar6 = (Node **)((long)__dest + uVar2 * 8);
      ppNVar7 = ppNVar6 + 1;
      *ppNVar6 = param_1;
      if (0 < (long)uVar4) {
        memcpy(__dest,__src,uVar4);
      }
      *(void **)(this + 0x28) = __dest;
      *(Node ***)(this + 0x30) = ppNVar7;
      *(void **)(this + 0x38) = (void *)((long)__dest + uVar5 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        ppNVar7 = *(Node ***)(this + 0x30);
      }
    }
    else {
      ppNVar7 = ppNVar6 + 1;
      *ppNVar6 = param_1;
      *(Node ***)(this + 0x30) = ppNVar7;
    }
    uVar5 = (ulong)((int)((ulong)((long)ppNVar7 - (long)*this_00) >> 3) - 1);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


