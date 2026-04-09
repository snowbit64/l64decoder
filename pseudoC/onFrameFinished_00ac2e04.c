// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onFrameFinished
// Entry Point: 00ac2e04
// Size: 2112 bytes
// Signature: undefined onFrameFinished(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanResourceAllocator::onFrameFinished() */

void VulkanResourceAllocator::onFrameFinished(void)

{
  long **pplVar1;
  int iVar2;
  VulkanResourceAllocator *in_x0;
  void *pvVar3;
  Allocation *pAVar4;
  long lVar5;
  long *plVar6;
  ulong **ppuVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  void *pvVar13;
  long *plVar14;
  ulong **__dest;
  undefined8 *__dest_00;
  uint uVar15;
  long lVar16;
  size_t sVar17;
  ulong uVar18;
  ulong *puVar19;
  undefined8 *puVar20;
  
  Mutex::enterCriticalSection();
  lVar5 = *(long *)(in_x0 + 0x950);
  uVar9 = (*(long *)(in_x0 + 0x958) - lVar5 >> 3) * -0x3333333333333333;
  if ((int)uVar9 != 0) {
    lVar16 = 0;
    uVar15 = 0;
    iVar2 = 0;
    while( true ) {
      lVar10 = *(long *)(lVar5 + lVar16 * 0x28);
      if ((lVar10 == 0) ||
         ((*(ulong *)(lVar5 + lVar16 * 0x28 + 8) <= *(ulong *)(lVar10 + 8) &&
          ((lVar10 = *(long *)(lVar5 + lVar16 * 0x28 + 0x10), lVar10 == 0 ||
           (*(ulong *)(lVar5 + lVar16 * 0x28 + 0x18) <= *(ulong *)(lVar10 + 8))))))) {
                    /* try { // try from 00ac2ec8 to 00ac2ecf has its CatchHandler @ 00ac365c */
        deleteBuffer(in_x0,*(Buffer **)(lVar5 + lVar16 * 0x28 + 0x20));
        iVar2 = iVar2 + 1;
      }
      else {
        if (iVar2 != 0) goto LAB_00ac2ef0;
        uVar15 = (int)lVar16 + 1;
      }
      if (lVar16 + 1U == (uVar9 & 0xffffffff)) break;
      lVar16 = lVar16 + 1;
      lVar5 = *(long *)(in_x0 + 0x950);
    }
    if (iVar2 != 0) {
      lVar5 = *(long *)(in_x0 + 0x950);
LAB_00ac2ef0:
      pvVar3 = (void *)(lVar5 + (ulong)(uVar15 + iVar2) * 0x28);
      pvVar13 = (void *)(lVar5 + (ulong)uVar15 * 0x28);
      sVar17 = *(long *)(in_x0 + 0x958) - (long)pvVar3;
      if (sVar17 != 0) {
        memmove(pvVar13,pvVar3,sVar17);
      }
      *(size_t *)(in_x0 + 0x958) = (long)pvVar13 + sVar17;
    }
  }
  lVar5 = *(long *)(in_x0 + 0x968);
  uVar9 = (*(long *)(in_x0 + 0x970) - lVar5 >> 3) * -0x3333333333333333;
  if ((int)uVar9 != 0) {
    lVar16 = 0;
    iVar2 = 0;
    uVar15 = 0;
    while( true ) {
      lVar10 = *(long *)(lVar5 + lVar16 * 0x28);
      if ((lVar10 == 0) ||
         ((*(ulong *)(lVar5 + lVar16 * 0x28 + 8) <= *(ulong *)(lVar10 + 8) &&
          ((lVar10 = *(long *)(lVar5 + lVar16 * 0x28 + 0x10), lVar10 == 0 ||
           (*(ulong *)(lVar5 + lVar16 * 0x28 + 0x18) <= *(ulong *)(lVar10 + 8))))))) {
        plVar14 = *(long **)(lVar5 + lVar16 * 0x28 + 0x20);
        lVar5 = *plVar14;
        if (lVar5 != 0) {
                    /* try { // try from 00ac2fd4 to 00ac2ff3 has its CatchHandler @ 00ac3660 */
          (*vkDestroyImage)(*(undefined8 *)(*(long *)(in_x0 + 0x980) + 0x18),lVar5,0);
        }
        pAVar4 = (Allocation *)plVar14[2];
        if (pAVar4 != (Allocation *)0x0) {
          VulkanMemoryAllocator::freeImageMemory
                    (*(VulkanMemoryAllocator **)(*(long *)(in_x0 + 0x980) + 0x378),pAVar4);
        }
        iVar2 = iVar2 + 1;
      }
      else {
        if (iVar2 != 0) goto LAB_00ac3018;
        uVar15 = (int)lVar16 + 1;
      }
      if (lVar16 + 1U == (uVar9 & 0xffffffff)) break;
      lVar16 = lVar16 + 1;
      lVar5 = *(long *)(in_x0 + 0x968);
    }
    if (iVar2 != 0) {
      lVar5 = *(long *)(in_x0 + 0x968);
LAB_00ac3018:
      pvVar3 = (void *)(lVar5 + (ulong)(iVar2 + uVar15) * 0x28);
      pvVar13 = (void *)(lVar5 + (ulong)uVar15 * 0x28);
      sVar17 = *(long *)(in_x0 + 0x970) - (long)pvVar3;
      if (sVar17 != 0) {
        memmove(pvVar13,pvVar3,sVar17);
      }
      *(size_t *)(in_x0 + 0x970) = (long)pvVar13 + sVar17;
    }
  }
  lVar5 = 0;
  do {
    plVar14 = *(long **)(in_x0 + lVar5 * 0x18 + 0x9b8);
    plVar6 = *(long **)(in_x0 + lVar5 * 0x18 + 0x9c0);
    if (plVar14 != plVar6) {
      pplVar1 = (long **)(in_x0 + lVar5 * 0x18 + 0x990);
      do {
        while ((*plVar14 == 0 ||
               (((ulong)plVar14[1] <= *(ulong *)(*plVar14 + 8) &&
                ((plVar14[2] == 0 || ((ulong)plVar14[3] <= *(ulong *)(plVar14[2] + 8)))))))) {
                    /* try { // try from 00ac30f0 to 00ac3163 has its CatchHandler @ 00ac3674 */
          (*vkResetCommandPool)
                    (*(undefined8 *)(*(long *)(in_x0 + 0x980) + 0x18),
                     *(undefined8 *)(plVar14[4] + 0x18),0);
          plVar6 = *pplVar1;
          plVar11 = *(long **)(in_x0 + lVar5 * 0x18 + 0x998);
          lVar16 = plVar14[4];
          *(undefined4 *)(lVar16 + 0x38) = 0;
          if (plVar6 == plVar11) {
            pvVar3 = *(void **)(in_x0 + lVar5 * 0x18 + 0x988);
            uVar18 = (long)plVar6 - (long)pvVar3;
            uVar9 = ((long)uVar18 >> 3) + 1;
            if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 00ac35f4 to 00ac3607 has its CatchHandler @ 00ac3670 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar9 <= (ulong)((long)uVar18 >> 2)) {
              uVar9 = (long)uVar18 >> 2;
            }
            if (0x7ffffffffffffff7 < uVar18) {
              uVar9 = 0x1fffffffffffffff;
            }
            if (uVar9 == 0) {
              pvVar13 = (void *)0x0;
            }
            else {
              if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
              pvVar13 = operator_new(uVar9 << 3);
            }
            plVar6 = (long *)((long)pvVar13 + ((long)uVar18 >> 3) * 8);
            *plVar6 = plVar14[4];
            if (0 < (long)uVar18) {
              memcpy(pvVar13,pvVar3,uVar18);
            }
            *(void **)(in_x0 + lVar5 * 0x18 + 0x988) = pvVar13;
            *pplVar1 = plVar6 + 1;
            *(long **)(in_x0 + lVar5 * 0x18 + 0x998) = (long *)((long)pvVar13 + uVar9 * 8);
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
          }
          else {
            *plVar6 = lVar16;
            *pplVar1 = plVar6 + 1;
          }
          sVar17 = (long)*(long **)(in_x0 + lVar5 * 0x18 + 0x9c0) - (long)(plVar14 + 5);
          if (sVar17 != 0) {
            memmove(plVar14,plVar14 + 5,sVar17);
          }
          plVar6 = (long *)((long)plVar14 + sVar17);
          *(long **)(in_x0 + lVar5 * 0x18 + 0x9c0) = plVar6;
          if (plVar14 == plVar6) goto LAB_00ac3054;
        }
        plVar14 = plVar14 + 5;
      } while (plVar14 != plVar6);
    }
LAB_00ac3054:
    lVar5 = lVar5 + 1;
  } while (lVar5 != 2);
  plVar14 = *(long **)(in_x0 + 0xa00);
  plVar6 = *(long **)(in_x0 + 0xa08);
  if (plVar14 != plVar6) {
    uVar15 = *(uint *)(*(long *)(in_x0 + 0x980) + 0x3b4);
    do {
      while ((*plVar14 == 0 ||
             (((ulong)plVar14[1] <= *(ulong *)(*plVar14 + 8) &&
              ((plVar14[2] == 0 || ((ulong)plVar14[3] <= *(ulong *)(plVar14[2] + 8)))))))) {
                    /* try { // try from 00ac325c to 00ac3263 has its CatchHandler @ 00ac3664 */
        (*vkResetDescriptorPool)
                  (*(undefined8 *)(*(long *)(in_x0 + 0x980) + 0x18),
                   *(undefined8 *)(plVar14[4] + 0x10),0);
        plVar6 = *(long **)(in_x0 + 0x9f0);
        lVar5 = plVar14[4];
        if (plVar6 < *(long **)(in_x0 + 0x9f8)) {
          *plVar6 = lVar5;
          plVar6[1] = (ulong)uVar15;
          *(long **)(in_x0 + 0x9f0) = plVar6 + 2;
        }
        else {
          pvVar3 = *(void **)(in_x0 + 0x9e8);
          sVar17 = (long)plVar6 - (long)pvVar3;
          uVar9 = ((long)sVar17 >> 4) + 1;
          if (uVar9 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar18 = (long)*(long **)(in_x0 + 0x9f8) - (long)pvVar3;
          uVar12 = (long)uVar18 >> 3;
          if (uVar9 <= uVar12) {
            uVar9 = uVar12;
          }
          if (0x7fffffffffffffef < uVar18) {
            uVar9 = 0xfffffffffffffff;
          }
          if (uVar9 >> 0x3c != 0) {
                    /* try { // try from 00ac3608 to 00ac361b has its CatchHandler @ 00ac3668 */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00ac32cc to 00ac32cf has its CatchHandler @ 00ac3654 */
          pvVar13 = operator_new(uVar9 << 4);
          plVar6 = (long *)((long)pvVar13 + ((long)sVar17 >> 4) * 0x10);
          *plVar6 = lVar5;
          plVar6[1] = (ulong)uVar15;
          if (0 < (long)sVar17) {
            memcpy(pvVar13,pvVar3,sVar17);
          }
          *(void **)(in_x0 + 0x9e8) = pvVar13;
          *(long **)(in_x0 + 0x9f0) = plVar6 + 2;
          *(void **)(in_x0 + 0x9f8) = (void *)((long)pvVar13 + uVar9 * 0x10);
          if (pvVar3 != (void *)0x0) {
            operator_delete(pvVar3);
          }
        }
        sVar17 = *(long *)(in_x0 + 0xa08) - (long)(plVar14 + 5);
        if (sVar17 != 0) {
          memmove(plVar14,plVar14 + 5,sVar17);
        }
        plVar6 = (long *)((long)plVar14 + sVar17);
        *(long **)(in_x0 + 0xa08) = plVar6;
        if (plVar14 == plVar6) goto LAB_00ac3348;
      }
      plVar14 = plVar14 + 5;
    } while (plVar14 != plVar6);
  }
LAB_00ac3348:
  __dest = *(ulong ***)(in_x0 + 0xa60);
  ppuVar7 = *(ulong ***)(in_x0 + 0xa68);
  if (__dest != ppuVar7) {
    do {
      puVar19 = *__dest;
      if (puVar19[1] < *puVar19) {
        __dest = __dest + 1;
      }
      else {
        sVar17 = (long)ppuVar7 - (long)(__dest + 1);
        if (sVar17 != 0) {
          memmove(__dest,__dest + 1,sVar17);
        }
        ppuVar7 = *(ulong ***)(in_x0 + 0xa50);
        *(size_t *)(in_x0 + 0xa68) = (long)__dest + sVar17;
        if (ppuVar7 == *(ulong ***)(in_x0 + 0xa58)) {
          pvVar3 = *(void **)(in_x0 + 0xa48);
          uVar18 = (long)ppuVar7 - (long)pvVar3;
          uVar9 = ((long)uVar18 >> 3) + 1;
          if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 00ac361c to 00ac3623 has its CatchHandler @ 00ac3658 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar9 <= (ulong)((long)uVar18 >> 2)) {
            uVar9 = (long)uVar18 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar18) {
            uVar9 = 0x1fffffffffffffff;
          }
          if (uVar9 == 0) {
            pvVar13 = (void *)0x0;
          }
          else {
            if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 00ac362c to 00ac3637 has its CatchHandler @ 00ac3658 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00ac3400 to 00ac3403 has its CatchHandler @ 00ac364c */
            pvVar13 = operator_new(uVar9 << 3);
          }
          ppuVar7 = (ulong **)((long)pvVar13 + ((long)uVar18 >> 3) * 8);
          *ppuVar7 = puVar19;
          if (0 < (long)uVar18) {
            memcpy(pvVar13,pvVar3,uVar18);
          }
          *(void **)(in_x0 + 0xa48) = pvVar13;
          *(ulong ***)(in_x0 + 0xa50) = ppuVar7 + 1;
          *(void **)(in_x0 + 0xa58) = (void *)((long)pvVar13 + uVar9 * 8);
          if (pvVar3 != (void *)0x0) {
            operator_delete(pvVar3);
          }
        }
        else {
          *ppuVar7 = puVar19;
          *(ulong ***)(in_x0 + 0xa50) = ppuVar7 + 1;
        }
      }
      ppuVar7 = *(ulong ***)(in_x0 + 0xa68);
    } while (__dest != ppuVar7);
  }
  __dest_00 = *(undefined8 **)(in_x0 + 0xa30);
  if (__dest_00 != *(undefined8 **)(in_x0 + 0xa38)) {
    do {
      puVar20 = (undefined8 *)*__dest_00;
                    /* try { // try from 00ac34ac to 00ac34cf has its CatchHandler @ 00ac366c */
      iVar2 = (*vkGetFenceStatus)(*(undefined8 *)(*(long *)(in_x0 + 0x980) + 0x18),puVar20[3]);
      if (iVar2 == 0) {
        (*vkResetFences)(*(undefined8 *)(*(long *)(in_x0 + 0x980) + 0x18),1,puVar20 + 3);
        *(undefined4 *)((long)puVar20 + 0x24) = 0;
        puVar20[6] = 0;
        lVar5 = *(long *)(in_x0 + 0xa38);
        puVar20[1] = *puVar20;
        sVar17 = lVar5 - (long)(__dest_00 + 1);
        if (sVar17 != 0) {
          memmove(__dest_00,__dest_00 + 1,sVar17);
        }
        puVar8 = *(undefined8 **)(in_x0 + 0xa20);
        *(size_t *)(in_x0 + 0xa38) = (long)__dest_00 + sVar17;
        if (puVar8 == *(undefined8 **)(in_x0 + 0xa28)) {
          pvVar3 = *(void **)(in_x0 + 0xa18);
          uVar18 = (long)puVar8 - (long)pvVar3;
          uVar9 = ((long)uVar18 >> 3) + 1;
          if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 00ac3624 to 00ac362b has its CatchHandler @ 00ac3650 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar9 <= (ulong)((long)uVar18 >> 2)) {
            uVar9 = (long)uVar18 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar18) {
            uVar9 = 0x1fffffffffffffff;
          }
          if (uVar9 == 0) {
            pvVar13 = (void *)0x0;
          }
          else {
            if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 00ac3638 to 00ac3643 has its CatchHandler @ 00ac3650 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00ac3568 to 00ac356b has its CatchHandler @ 00ac366c */
            pvVar13 = operator_new(uVar9 << 3);
          }
          puVar8 = (undefined8 *)((long)pvVar13 + ((long)uVar18 >> 3) * 8);
          *puVar8 = puVar20;
          if (0 < (long)uVar18) {
            memcpy(pvVar13,pvVar3,uVar18);
          }
          *(void **)(in_x0 + 0xa18) = pvVar13;
          *(undefined8 **)(in_x0 + 0xa20) = puVar8 + 1;
          *(void **)(in_x0 + 0xa28) = (void *)((long)pvVar13 + uVar9 * 8);
          if (pvVar3 != (void *)0x0) {
            operator_delete(pvVar3);
          }
        }
        else {
          *puVar8 = puVar20;
          *(undefined8 **)(in_x0 + 0xa20) = puVar8 + 1;
        }
      }
      else {
        __dest_00 = __dest_00 + 1;
      }
    } while (__dest_00 != *(undefined8 **)(in_x0 + 0xa38));
  }
                    /* try { // try from 00ac35c0 to 00ac35cb has its CatchHandler @ 00ac3648 */
  garbageCollect(in_x0,false);
                    /* try { // try from 00ac35cc to 00ac35d3 has its CatchHandler @ 00ac3644 */
  Mutex::leaveCriticalSection();
  return;
}


