// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChildren
// Entry Point: 009db3ac
// Size: 380 bytes
// Signature: undefined __thiscall getChildren(ProceduralPlacementProjectObjectsMask * this, vector * param_1, TransformGroup * param_2)


/* ProceduralPlacementProjectObjectsMask::getChildren(std::__ndk1::vector<TransformGroup*,
   std::__ndk1::allocator<TransformGroup*> >&, TransformGroup*) */

void __thiscall
ProceduralPlacementProjectObjectsMask::getChildren
          (ProceduralPlacementProjectObjectsMask *this,vector *param_1,TransformGroup *param_2)

{
  ulong uVar1;
  long *plVar2;
  void *__dest;
  long lVar3;
  int iVar4;
  void *__src;
  ulong __n;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_2 + 0x28);
  iVar4 = (int)((ulong)(*(long *)(param_2 + 0x30) - lVar5) >> 3);
  if (iVar4 != 0) {
    lVar3 = ((ulong)(*(long *)(param_2 + 0x30) - lVar5) >> 3 & 0xffffffff) * 8;
    lVar6 = 0;
    while( true ) {
      lVar5 = *(long *)(lVar5 + lVar6);
      if ((*(byte *)(lVar5 + 0x11) >> 3 & 1) != 0) {
        plVar2 = *(long **)(param_1 + 8);
        if (plVar2 == *(long **)(param_1 + 0x10)) {
          __src = *(void **)param_1;
          __n = (long)plVar2 - (long)__src;
          uVar1 = ((long)__n >> 3) + 1;
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
            __dest = (void *)0x0;
          }
          else {
            if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            __dest = operator_new(uVar1 << 3);
          }
          plVar2 = (long *)((long)__dest + ((long)__n >> 3) * 8);
          *plVar2 = lVar5;
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
          }
          *(void **)param_1 = __dest;
          *(long **)(param_1 + 8) = plVar2 + 1;
          *(void **)(param_1 + 0x10) = (void *)((long)__dest + uVar1 * 8);
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          *plVar2 = lVar5;
          *(long **)(param_1 + 8) = plVar2 + 1;
        }
      }
      if (lVar3 + -8 == lVar6) break;
      lVar5 = *(long *)(param_2 + 0x28);
      lVar6 = lVar6 + 8;
    }
    if (iVar4 != 0) {
      lVar5 = 0;
      do {
        getChildren(this,param_1,*(TransformGroup **)(*(long *)(param_2 + 0x28) + lVar5));
        lVar5 = lVar5 + 8;
      } while (lVar3 != lVar5);
    }
  }
  return;
}


