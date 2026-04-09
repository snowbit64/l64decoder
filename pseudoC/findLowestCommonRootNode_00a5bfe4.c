// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findLowestCommonRootNode
// Entry Point: 00a5bfe4
// Size: 500 bytes
// Signature: undefined __cdecl findLowestCommonRootNode(uint param_1, TransformGroup * * param_2)


/* ScenegraphUtil::findLowestCommonRootNode(unsigned int, TransformGroup**) */

undefined8 ScenegraphUtil::findLowestCommonRootNode(uint param_1,TransformGroup **param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *__dest;
  undefined8 uVar3;
  long lVar4;
  TransformGroup **ppTVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  TransformGroup *pTVar10;
  TransformGroup **ppTVar11;
  void *local_80;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    uVar3 = 0;
LAB_00a5c18c:
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  ppTVar5 = (TransformGroup **)0x0;
  pTVar10 = *param_2;
  local_80 = (void *)0x0;
LAB_00a5c04c:
  uVar9 = (long)ppTVar5 - (long)local_80;
  uVar6 = ((long)uVar9 >> 3) + 1;
  if (uVar6 >> 0x3d != 0) {
                    /* try { // try from 00a5c1c0 to 00a5c1d3 has its CatchHandler @ 00a5c1dc */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  if (uVar6 <= (ulong)((long)uVar9 >> 2)) {
    uVar6 = (long)uVar9 >> 2;
  }
  if (0x7ffffffffffffff7 < uVar9) {
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
                    /* try { // try from 00a5c088 to 00a5c08b has its CatchHandler @ 00a5c1d8 */
    __dest = operator_new(uVar6 << 3);
  }
  ppTVar5 = (TransformGroup **)((long)__dest + ((long)uVar9 >> 3) * 8);
  ppTVar11 = ppTVar5 + 1;
  *ppTVar5 = pTVar10;
  if (0 < (long)uVar9) {
    memcpy(__dest,local_80,uVar9);
  }
  ppTVar5 = (TransformGroup **)((long)__dest + uVar6 * 8);
  if (local_80 != (void *)0x0) {
    operator_delete(local_80);
  }
  do {
    pTVar10 = *(TransformGroup **)(pTVar10 + 0x20);
    if ((pTVar10 == (TransformGroup *)0x0) || (((byte)pTVar10[0x10] >> 5 & 1) == 0)) {
      if (param_1 < 2) {
        uVar6 = 0;
LAB_00a5c180:
        uVar2 = *(undefined8 *)((long)__dest + uVar6 * 8);
      }
      else {
        uVar6 = 0;
        uVar9 = 1;
LAB_00a5c12c:
        pTVar10 = param_2[uVar9];
        do {
          uVar7 = (uint)((ulong)((long)ppTVar11 - (long)__dest) >> 3);
          if (uVar7 != 0) {
            uVar8 = 0;
            do {
              if (*(TransformGroup **)((long)__dest + (ulong)uVar8 * 8) == pTVar10) {
                uVar9 = uVar9 + 1;
                if (uVar8 <= (uint)uVar6) {
                  uVar8 = (uint)uVar6;
                }
                uVar6 = (ulong)uVar8;
                if (uVar9 != param_1) goto LAB_00a5c12c;
                goto LAB_00a5c180;
              }
              uVar8 = uVar8 + 1;
            } while (uVar7 != uVar8);
          }
          pTVar10 = *(TransformGroup **)(pTVar10 + 0x20);
        } while ((pTVar10 != (TransformGroup *)0x0) && (((byte)pTVar10[0x10] >> 5 & 1) != 0));
        uVar3 = 0;
        uVar2 = 0;
        if (__dest == (void *)0x0) goto LAB_00a5c18c;
      }
      uVar3 = uVar2;
      operator_delete(__dest);
      goto LAB_00a5c18c;
    }
    local_80 = __dest;
    if (ppTVar11 == ppTVar5) goto LAB_00a5c04c;
    *ppTVar11 = pTVar10;
    ppTVar11 = ppTVar11 + 1;
  } while( true );
}


