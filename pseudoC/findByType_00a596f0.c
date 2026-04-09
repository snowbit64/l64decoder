// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findByType
// Entry Point: 00a596f0
// Size: 324 bytes
// Signature: undefined __cdecl findByType(Node * param_1, ulonglong param_2, vector * param_3)


/* NodeUtil::findByType(Node*, unsigned long long, std::__ndk1::vector<Node*,
   std::__ndk1::allocator<Node*> >&) */

void NodeUtil::findByType(Node *param_1,ulonglong param_2,vector *param_3)

{
  Node **ppNVar1;
  void *__dest;
  long lVar2;
  void *__src;
  ulong uVar3;
  ulong __n;
  
  if ((*(ulong *)(param_1 + 0x10) & param_2) != 0) {
    ppNVar1 = *(Node ***)(param_3 + 8);
    if (ppNVar1 == *(Node ***)(param_3 + 0x10)) {
      __src = *(void **)param_3;
      __n = (long)ppNVar1 - (long)__src;
      uVar3 = ((long)__n >> 3) + 1;
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar3 <= (ulong)((long)__n >> 2)) {
        uVar3 = (long)__n >> 2;
      }
      if (0x7ffffffffffffff7 < __n) {
        uVar3 = 0x1fffffffffffffff;
      }
      if (uVar3 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar3 << 3);
      }
      ppNVar1 = (Node **)((long)__dest + ((long)__n >> 3) * 8);
      *ppNVar1 = param_1;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)param_3 = __dest;
      *(Node ***)(param_3 + 8) = ppNVar1 + 1;
      *(void **)(param_3 + 0x10) = (void *)((long)__dest + uVar3 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      *ppNVar1 = param_1;
      *(Node ***)(param_3 + 8) = ppNVar1 + 1;
    }
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if ((int)((ulong)(*(long *)(param_1 + 0x30) - lVar2) >> 3) != 0) {
    uVar3 = 0;
    do {
      findByType(*(Node **)(lVar2 + uVar3 * 8),param_2,param_3);
      lVar2 = *(long *)(param_1 + 0x28);
      uVar3 = uVar3 + 1;
    } while (uVar3 < ((ulong)(*(long *)(param_1 + 0x30) - lVar2) >> 3 & 0xffffffff));
  }
  return;
}


