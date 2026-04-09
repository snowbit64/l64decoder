// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: collectCompoundChildren
// Entry Point: 009b4b64
// Size: 392 bytes
// Signature: undefined __cdecl collectCompoundChildren(TransformGroup * param_1, vector * param_2)


/* ScenegraphPhysicsUtil::collectCompoundChildren(TransformGroup*, std::__ndk1::vector<GsShape*,
   std::__ndk1::allocator<GsShape*> >&) */

void ScenegraphPhysicsUtil::collectCompoundChildren(TransformGroup *param_1,vector *param_2)

{
  TransformGroup **ppTVar1;
  long lVar2;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  void *__src;
  TransformGroup *pTVar5;
  size_t __n;
  ulong uVar6;
  
  if (((((byte)param_1[0x11] >> 3 & 1) != 0) &&
      (lVar2 = RawTransformGroup::getPhysicsObject(), (*(byte *)(lVar2 + 8) >> 3 & 1) != 0)) &&
     (lVar2 = RawTransformGroup::getPhysicsObject(), (*(byte *)(lVar2 + 9) >> 2 & 1) != 0)) {
    ppTVar1 = *(TransformGroup ***)(param_2 + 8);
    if (ppTVar1 < *(TransformGroup ***)(param_2 + 0x10)) {
      *ppTVar1 = param_1;
      *(TransformGroup ***)(param_2 + 8) = ppTVar1 + 1;
    }
    else {
      __src = *(void **)param_2;
      __n = (long)ppTVar1 - (long)__src;
      uVar6 = ((long)__n >> 3) + 1;
      if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar3 = (long)*(TransformGroup ***)(param_2 + 0x10) - (long)__src;
      uVar4 = (long)uVar3 >> 2;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      if (0x7ffffffffffffff7 < uVar3) {
        uVar6 = 0x1fffffffffffffff;
      }
      if (uVar6 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar6 << 3);
      }
      ppTVar1 = (TransformGroup **)((long)__dest + ((long)__n >> 3) * 8);
      *ppTVar1 = param_1;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)param_2 = __dest;
      *(TransformGroup ***)(param_2 + 8) = ppTVar1 + 1;
      *(void **)(param_2 + 0x10) = (void *)((long)__dest + uVar6 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if ((int)((ulong)(*(long *)(param_1 + 0x30) - lVar2) >> 3) != 0) {
    uVar6 = 0;
    do {
      pTVar5 = *(TransformGroup **)(lVar2 + uVar6 * 8);
      if ((((byte)pTVar5[0x10] >> 5 & 1) != 0) &&
         ((lVar2 = RawTransformGroup::getPhysicsObject(), (*(byte *)(lVar2 + 8) >> 3 & 1) == 0 ||
          (lVar2 = RawTransformGroup::getPhysicsObject(), (*(byte *)(lVar2 + 9) >> 1 & 1) == 0)))) {
        collectCompoundChildren(pTVar5,param_2);
      }
      lVar2 = *(long *)(param_1 + 0x28);
      uVar6 = uVar6 + 1;
    } while (uVar6 < ((ulong)(*(long *)(param_1 + 0x30) - lVar2) >> 3 & 0xffffffff));
  }
  return;
}


