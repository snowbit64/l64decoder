// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findNodes
// Entry Point: 00749fd0
// Size: 364 bytes
// Signature: undefined __cdecl findNodes(uint param_1, TransformGroup * * param_2, vector * param_3, map * param_4)


/* CloneUtil::findNodes(unsigned int, TransformGroup**, std::__ndk1::vector<RawTransformGroup*,
   std::__ndk1::allocator<RawTransformGroup*> >&, std::__ndk1::map<TransformGroup*, TransformGroup*,
   std::__ndk1::less<TransformGroup*>, std::__ndk1::allocator<std::__ndk1::pair<TransformGroup*
   const, TransformGroup*> > >&) */

void CloneUtil::findNodes(uint param_1,TransformGroup **param_2,vector *param_3,map *param_4)

{
  map **ppmVar1;
  ulong uVar2;
  void *__dest;
  map **ppmVar3;
  TransformGroup *pTVar4;
  ulong uVar5;
  map **ppmVar6;
  ulong uVar7;
  void *__src;
  size_t __n;
  ulong uVar8;
  map *pmVar9;
  
  if (param_1 != 0) {
    uVar8 = 0;
    ppmVar1 = (map **)(param_4 + 8);
    do {
      ppmVar6 = (map **)*ppmVar1;
      if (ppmVar6 != (map **)0x0) {
        pTVar4 = param_2[uVar8];
        ppmVar3 = ppmVar1;
        do {
          if ((TransformGroup *)ppmVar6[4] >= pTVar4) {
            ppmVar3 = ppmVar6;
          }
          ppmVar6 = (map **)ppmVar6[(TransformGroup *)ppmVar6[4] < pTVar4];
        } while (ppmVar6 != (map **)0x0);
        if ((ppmVar3 != ppmVar1) && ((TransformGroup *)ppmVar3[4] <= pTVar4)) {
          ppmVar6 = *(map ***)(param_3 + 8);
          pmVar9 = ppmVar3[5];
          if (ppmVar6 < *(map ***)(param_3 + 0x10)) {
            *ppmVar6 = pmVar9;
            *(map ***)(param_3 + 8) = ppmVar6 + 1;
          }
          else {
            __src = *(void **)param_3;
            __n = (long)ppmVar6 - (long)__src;
            uVar2 = ((long)__n >> 3) + 1;
            if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar5 = (long)*(map ***)(param_3 + 0x10) - (long)__src;
            uVar7 = (long)uVar5 >> 2;
            if (uVar2 <= uVar7) {
              uVar2 = uVar7;
            }
            if (0x7ffffffffffffff7 < uVar5) {
              uVar2 = 0x1fffffffffffffff;
            }
            if (uVar2 == 0) {
              __dest = (void *)0x0;
            }
            else {
              if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
              __dest = operator_new(uVar2 << 3);
            }
            ppmVar6 = (map **)((long)__dest + ((long)__n >> 3) * 8);
            *ppmVar6 = pmVar9;
            if (0 < (long)__n) {
              memcpy(__dest,__src,__n);
            }
            *(void **)param_3 = __dest;
            *(map ***)(param_3 + 8) = ppmVar6 + 1;
            *(void **)(param_3 + 0x10) = (void *)((long)__dest + uVar2 * 8);
            if (__src != (void *)0x0) {
              operator_delete(__src);
            }
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != param_1);
  }
  return;
}


