// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateImageMemory
// Entry Point: 00abe528
// Size: 1912 bytes
// Signature: undefined __thiscall allocateImageMemory(VulkanMemoryAllocator * this, uint param_1, uint param_2, uint param_3, void * param_4)


/* VulkanMemoryAllocator::allocateImageMemory(unsigned int, unsigned int, unsigned int, void*) */

void ** __thiscall
VulkanMemoryAllocator::allocateImageMemory
          (VulkanMemoryAllocator *this,uint param_1,uint param_2,uint param_3,void *param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  void **ppvVar10;
  void *pvVar11;
  void **ppvVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  void **ppvVar16;
  uint *puVar17;
  uint uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  void *local_a8;
  uint local_a0 [2];
  void *local_98;
  undefined8 local_90;
  uint local_88 [2];
  uint *local_80;
  ulong uStack_78;
  uint local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar15 = (ulong)param_3;
  uVar14 = (ulong)param_1;
  Mutex::enterCriticalSection();
  if (param_4 == (void *)0x0) {
    lVar8 = *(long *)(this + 0x218);
    puVar17 = (uint *)(lVar8 + uVar15 * 0x38);
    if (param_1 < *puVar17) {
      lVar19 = lVar8 + uVar15 * 0x38;
      plVar20 = (long *)(lVar19 + 8);
      lVar6 = *plVar20;
      uVar14 = *(long *)(lVar19 + 0x10) - lVar6;
      if ((int)(uVar14 >> 3) != 0) {
        lVar19 = 0;
        while( true ) {
          ppvVar12 = *(void ***)(lVar6 + lVar19);
                    /* try { // try from 00abe67c to 00abe693 has its CatchHandler @ 00abecdc */
          uVar4 = SubAllocator::alloc((SubAllocator *)(ppvVar12 + 1),param_1,param_2,local_88,
                                      local_a0,(uint *)&local_a8);
          uVar18 = local_a0[0];
          if ((uVar4 & 1) != 0) break;
          if ((uVar14 >> 3 & 0xffffffff) * 8 + -8 == lVar19) goto LAB_00abe6ac;
          lVar6 = *plVar20;
          lVar19 = lVar19 + 8;
        }
        uVar1 = *(uint *)((long)ppvVar12 + 0x3c);
        if (((byte)this[(ulong)uVar1 * 8 + 0x14] & 1) == 0) {
          *(ulong *)(this + 0x270) = *(long *)(this + 0x270) - (ulong)local_a0[0];
        }
        else {
          this[0x27c] = (VulkanMemoryAllocator)0x1;
          *(ulong *)(this + 0x268) = *(long *)(this + 0x268) - (ulong)local_a0[0];
        }
                    /* try { // try from 00abea30 to 00abea37 has its CatchHandler @ 00abeca0 */
        ppvVar16 = (void **)operator_new(0x30);
        pvVar11 = *ppvVar12;
        *ppvVar16 = ppvVar12;
        *(uint *)(ppvVar16 + 2) = uVar1;
        *(uint *)(ppvVar16 + 1) = local_88[0];
        *(uint *)((long)ppvVar16 + 0xc) = uVar18;
        ppvVar16[3] = pvVar11;
        ppvVar16[4] = (void *)0x0;
        *(undefined4 *)(ppvVar16 + 5) = local_a8._0_4_;
        goto LAB_00abe5e8;
      }
    }
LAB_00abe6ac:
    lVar19 = lVar8 + uVar15 * 0x38;
    plVar21 = (long *)(lVar19 + 0x20);
    lVar6 = *plVar21;
    plVar20 = (long *)(lVar19 + 0x28);
    uVar14 = *plVar20 - lVar6;
    if ((int)(uVar14 >> 3) != 0) {
      lVar19 = 0;
      while( true ) {
        ppvVar12 = *(void ***)(lVar6 + lVar19 * 8);
                    /* try { // try from 00abe6ec to 00abe703 has its CatchHandler @ 00abece4 */
        uVar4 = SubAllocator::alloc((SubAllocator *)(ppvVar12 + 1),param_1,param_2,local_88,local_a0
                                    ,(uint *)&local_a8);
        uVar18 = local_a0[0];
        if ((uVar4 & 1) != 0) break;
        if ((uVar14 >> 3 & 0xffffffff) - 1 == lVar19) goto LAB_00abe73c;
        lVar6 = *plVar21;
        lVar19 = lVar19 + 1;
      }
      uVar1 = *(uint *)((long)ppvVar12 + 0x3c);
      if (((byte)this[(ulong)uVar1 * 8 + 0x14] & 1) == 0) {
        *(ulong *)(this + 0x270) = *(long *)(this + 0x270) - (ulong)local_a0[0];
      }
      else {
        this[0x27c] = (VulkanMemoryAllocator)0x1;
        *(ulong *)(this + 0x268) = *(long *)(this + 0x268) - (ulong)local_a0[0];
      }
                    /* try { // try from 00abe908 to 00abea0f has its CatchHandler @ 00abecc8 */
      ppvVar16 = (void **)operator_new(0x30);
      lVar6 = *plVar20;
      *ppvVar16 = ppvVar12;
      lVar9 = *plVar21;
      *(uint *)(ppvVar16 + 2) = uVar1;
      pvVar11 = *ppvVar12;
      *(uint *)(ppvVar16 + 1) = local_88[0];
      *(uint *)((long)ppvVar16 + 0xc) = uVar18;
      ppvVar16[3] = pvVar11;
      ppvVar16[4] = (void *)0x0;
      *(undefined4 *)(ppvVar16 + 5) = local_a8._0_4_;
      if (lVar19 + 1U < (ulong)(lVar6 - lVar9 >> 3)) {
        *(undefined8 *)(lVar9 + lVar19 * 8) = *(undefined8 *)(lVar6 + -8);
        lVar6 = *plVar20;
      }
      *plVar20 = lVar6 + -8;
      lVar8 = lVar8 + uVar15 * 0x38;
      puVar7 = (undefined8 *)(lVar8 + 0x10);
      ppvVar10 = (void **)*puVar7;
      if (ppvVar10 == *(void ***)(void **)(lVar8 + 0x18)) {
        pvVar11 = *(void **)(lVar8 + 8);
        uVar15 = (long)ppvVar10 - (long)pvVar11;
        uVar14 = ((long)uVar15 >> 3) + 1;
        if (uVar14 >> 0x3d != 0) {
                    /* try { // try from 00abec78 to 00abec7f has its CatchHandler @ 00abecc8 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar14 <= (ulong)((long)uVar15 >> 2)) {
          uVar14 = (long)uVar15 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar15) {
          uVar14 = 0x1fffffffffffffff;
        }
        if (uVar14 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar14 >> 0x3d != 0) {
                    /* try { // try from 00abec84 to 00abec8f has its CatchHandler @ 00abecc8 */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar5 = operator_new(uVar14 << 3);
        }
        ppvVar10 = (void **)((long)pvVar5 + ((long)uVar15 >> 3) * 8);
        *ppvVar10 = ppvVar12;
        if (0 < (long)uVar15) {
          memcpy(pvVar5,pvVar11,uVar15);
        }
        *puVar7 = ppvVar10 + 1;
        *(void **)(lVar8 + 0x18) = (void *)((long)pvVar5 + uVar14 * 8);
        *(void **)(lVar8 + 8) = pvVar5;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
        }
      }
      else {
        *ppvVar10 = ppvVar12;
        *puVar7 = ppvVar10 + 1;
      }
      goto LAB_00abe5e8;
    }
LAB_00abe73c:
    uVar1 = *puVar17;
    local_88[0] = 5;
    uVar18 = uVar1;
    if (uVar1 <= param_1) {
      uVar18 = param_1;
    }
    uVar14 = (ulong)uVar18;
    local_80 = (uint *)0x0;
    if (*(char *)(*(long *)(this + 8) + 0x43d) != '\0') {
      local_80 = local_a0;
      local_98 = (void *)0x0;
      local_a0[0] = 0x3b9bb460;
      local_90 = 0x100000001;
    }
    local_a8 = (void *)0x0;
                    /* try { // try from 00abe798 to 00abe817 has its CatchHandler @ 00abeccc */
    uStack_78 = uVar14;
    local_70 = param_3;
    iVar3 = (*vkAllocateMemory)(*(undefined8 *)(*(long *)(this + 8) + 0x18),local_88,0,&local_a8);
    if (iVar3 == 0) {
      if (((byte)this[uVar15 * 8 + 0x14] & 1) == 0) {
        plVar20 = (long *)(this + 0x270);
        *(ulong *)(this + 0x260) = *(long *)(this + 0x260) + uVar14;
      }
      else {
        plVar20 = (long *)(this + 0x268);
        *(ulong *)(this + 600) = *(long *)(this + 600) + uVar14;
      }
      *plVar20 = *plVar20 + uVar14;
      if (local_a8 == (void *)0x0) goto LAB_00abe7b4;
LAB_00abea88:
                    /* try { // try from 00abea88 to 00abea8f has its CatchHandler @ 00abecb8 */
      pvVar11 = local_a8;
      ppvVar12 = (void **)operator_new(0x40);
      *ppvVar12 = pvVar11;
                    /* try { // try from 00abea9c to 00abeaab has its CatchHandler @ 00abeca8 */
      SubAllocator::SubAllocator((SubAllocator *)(ppvVar12 + 1),uVar18,0x10);
      *(uint *)((long)ppvVar12 + 0x3c) = param_3;
                    /* try { // try from 00abeab4 to 00abebcb has its CatchHandler @ 00abecc4 */
      uVar14 = SubAllocator::alloc((SubAllocator *)(ppvVar12 + 1),param_1,param_2,local_88,local_a0,
                                   (uint *)&local_a8);
      uVar18 = local_a0[0];
      if ((uVar14 & 1) == 0) {
        ppvVar16 = (void **)0x0;
      }
      else {
        uVar1 = *(uint *)((long)ppvVar12 + 0x3c);
        if (((byte)this[(ulong)uVar1 * 8 + 0x14] & 1) == 0) {
          *(ulong *)(this + 0x270) = *(long *)(this + 0x270) - (ulong)local_a0[0];
        }
        else {
          this[0x27c] = (VulkanMemoryAllocator)0x1;
          *(ulong *)(this + 0x268) = *(long *)(this + 0x268) - (ulong)local_a0[0];
        }
        ppvVar16 = (void **)operator_new(0x30);
        pvVar11 = *ppvVar12;
        *ppvVar16 = ppvVar12;
        *(uint *)(ppvVar16 + 1) = local_88[0];
        *(uint *)((long)ppvVar16 + 0xc) = uVar18;
        ppvVar16[3] = pvVar11;
        ppvVar16[4] = (void *)0x0;
        *(uint *)(ppvVar16 + 2) = uVar1;
        *(undefined4 *)(ppvVar16 + 5) = local_a8._0_4_;
      }
      lVar8 = lVar8 + uVar15 * 0x38;
      puVar13 = (undefined8 *)(lVar8 + 0x10);
      puVar7 = (undefined8 *)*puVar13;
      if (puVar7 == *(undefined8 **)(void **)(lVar8 + 0x18)) {
        pvVar11 = *(void **)(lVar8 + 8);
        uVar15 = (long)puVar7 - (long)pvVar11;
        uVar14 = ((long)uVar15 >> 3) + 1;
        if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00abec80 to 00abec83 has its CatchHandler @ 00abecc4 */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar14 <= (ulong)((long)uVar15 >> 2)) {
          uVar14 = (long)uVar15 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar15) {
          uVar14 = 0x1fffffffffffffff;
        }
        if (uVar14 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar14 >> 0x3d != 0) {
                    /* try { // try from 00abec90 to 00abec9b has its CatchHandler @ 00abecc4 */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar5 = operator_new(uVar14 << 3);
        }
        puVar7 = (undefined8 *)((long)pvVar5 + ((long)uVar15 >> 3) * 8);
        *puVar7 = ppvVar12;
        if (0 < (long)uVar15) {
          memcpy(pvVar5,pvVar11,uVar15);
        }
        *(void **)(lVar8 + 0x18) = (void *)((long)pvVar5 + uVar14 * 8);
        *puVar13 = puVar7 + 1;
        *(void **)(lVar8 + 8) = pvVar5;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
        }
      }
      else {
        *puVar7 = ppvVar12;
        *puVar13 = puVar7 + 1;
      }
      this[0x27c] = (VulkanMemoryAllocator)0x1;
      goto LAB_00abe5e8;
    }
LAB_00abe7b4:
    if (param_1 < uVar1) {
      uVar14 = (ulong)param_1;
      local_88[0] = 5;
      local_80 = (uint *)0x0;
      if (*(char *)(*(long *)(this + 8) + 0x43d) != '\0') {
        local_80 = local_a0;
        local_98 = (void *)0x0;
        local_a0[0] = 0x3b9bb460;
        local_90 = 0x100000001;
      }
      local_a8 = (void *)0x0;
      uStack_78 = uVar14;
      local_70 = param_3;
      iVar3 = (*vkAllocateMemory)(*(undefined8 *)(*(long *)(this + 8) + 0x18),local_88,0,&local_a8);
      if (iVar3 == 0) {
        if (((byte)this[uVar15 * 8 + 0x14] & 1) == 0) {
          plVar20 = (long *)(this + 0x270);
          *(ulong *)(this + 0x260) = *(long *)(this + 0x260) + uVar14;
        }
        else {
          plVar20 = (long *)(this + 0x268);
          *(ulong *)(this + 600) = *(long *)(this + 600) + uVar14;
        }
        *plVar20 = *plVar20 + uVar14;
        uVar18 = param_1;
        if (local_a8 != (void *)0x0) goto LAB_00abea88;
      }
    }
  }
  else {
    local_88[0] = 5;
    local_80 = (uint *)param_4;
    if (*(char *)(*(long *)(this + 8) + 0x43d) != '\0') {
      local_80 = local_a0;
      local_a0[0] = 0x3b9bb460;
      local_90 = 0x100000001;
      local_98 = param_4;
    }
    local_a8 = (void *)0x0;
                    /* try { // try from 00abe5d0 to 00abe5df has its CatchHandler @ 00abecd0 */
    uStack_78 = uVar14;
    local_70 = param_3;
    iVar3 = (*vkAllocateMemory)(*(undefined8 *)(*(long *)(this + 8) + 0x18),local_88,0,&local_a8);
    pvVar11 = local_a8;
    if (iVar3 == 0) {
      if (((byte)this[uVar15 * 8 + 0x14] & 1) == 0) {
        plVar20 = (long *)(this + 0x270);
        *(ulong *)(this + 0x260) = *(long *)(this + 0x260) + uVar14;
      }
      else {
        plVar20 = (long *)(this + 0x268);
        *(ulong *)(this + 600) = *(long *)(this + 600) + uVar14;
      }
      *plVar20 = *plVar20 + uVar14;
      if (local_a8 != (void *)0x0) {
                    /* try { // try from 00abe864 to 00abe86b has its CatchHandler @ 00abecbc */
        ppvVar16 = (void **)operator_new(0x30);
        *ppvVar16 = (void *)0x0;
        *(undefined4 *)(ppvVar16 + 1) = 0;
        *(uint *)((long)ppvVar16 + 0xc) = param_1;
        ppvVar16[3] = pvVar11;
        ppvVar16[4] = (void *)0x0;
        *(undefined4 *)(ppvVar16 + 5) = 0;
        *(uint *)(ppvVar16 + 2) = param_3;
        goto LAB_00abe5e8;
      }
    }
  }
  ppvVar16 = (void **)0x0;
LAB_00abe5e8:
                    /* try { // try from 00abe5e8 to 00abe5ef has its CatchHandler @ 00abecd8 */
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ppvVar16;
}


