// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: issueCallbacks
// Entry Point: 0094398c
// Size: 1964 bytes
// Signature: undefined __thiscall issueCallbacks(I3DStreamingManager * this, float param_1, uint param_2, uint param_3)


/* I3DStreamingManager::issueCallbacks(float, unsigned int, unsigned int) */

void __thiscall
I3DStreamingManager::issueCallbacks
          (I3DStreamingManager *this,float param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  void **ppvVar7;
  void **ppvVar8;
  void **ppvVar9;
  void **ppvVar10;
  void **ppvVar11;
  void *pvVar12;
  void **ppvVar13;
  void *pvVar14;
  void **ppvVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  void **local_90;
  void **local_88;
  void **local_80;
  
  lVar2 = tpidr_el0;
  uVar18 = (ulong)param_2;
  lVar6 = *(long *)(lVar2 + 0x28);
  local_88 = (void **)0x0;
  local_80 = (void **)0x0;
                    /* try { // try from 009439dc to 009439e3 has its CatchHandler @ 00944140 */
  Mutex::enterCriticalSection();
  ppvVar10 = (void **)(this + 8);
  ppvVar7 = (void **)*ppvVar10;
  ppvVar15 = *(void ***)(this + 0x10);
  ppvVar13 = *(void ***)(this + 0x28);
  ppvVar8 = (void **)(this + 0x20);
  ppvVar9 = (void **)*ppvVar8;
  uVar1 = ((long)ppvVar13 - (long)ppvVar9 >> 3) + ((long)ppvVar15 - (long)ppvVar7 >> 3);
  if (uVar18 <= uVar1) {
    uVar1 = uVar18;
  }
  if (uVar1 != 0) {
                    /* try { // try from 00943a2c to 00943a2f has its CatchHandler @ 00944138 */
    local_88 = (void **)operator_new(uVar1 << 3);
    local_80 = local_88 + uVar1;
  }
  *ppvVar10 = (void *)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  ppvVar11 = ppvVar7;
  local_90 = local_88;
  if (ppvVar7 != ppvVar15) {
    do {
      pvVar12 = *ppvVar11;
      iVar17 = (int)uVar18;
      if (((param_3 == 0) || (*(uint *)((long)pvVar12 + 0x4c8) == param_3)) &&
         (*(int *)((long)pvVar12 + 0x4d0) == 6)) {
        if (*(float *)((long)pvVar12 + 0x4d8) <= param_1 && iVar17 != 0) {
          if (local_88 == local_80) {
            uVar18 = (long)local_88 - (long)local_90;
            uVar1 = ((long)uVar18 >> 3) + 1;
            if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 009440e4 to 009440f3 has its CatchHandler @ 0094415c */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar1 <= (ulong)((long)uVar18 >> 2)) {
              uVar1 = (long)uVar18 >> 2;
            }
            if (0x7ffffffffffffff7 < uVar18) {
              uVar1 = 0x1fffffffffffffff;
            }
            if (uVar1 == 0) {
              ppvVar9 = (void **)0x0;
            }
            else {
              if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00944104 to 0094411b has its CatchHandler @ 0094415c */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00943c40 to 00943c43 has its CatchHandler @ 00944154 */
              ppvVar9 = (void **)operator_new(uVar1 << 3);
            }
            local_88 = ppvVar9 + ((long)uVar18 >> 3) + 1;
            ppvVar9[(long)uVar18 >> 3] = pvVar12;
            if (0 < (long)uVar18) {
              memcpy(ppvVar9,local_90,uVar18);
            }
            local_80 = ppvVar9 + uVar1;
            if (local_90 != (void **)0x0) {
              operator_delete(local_90);
            }
            uVar18 = (ulong)(iVar17 - 1);
            local_90 = ppvVar9;
          }
          else {
            *local_88 = pvVar12;
            uVar18 = (ulong)(iVar17 - 1);
            local_88 = local_88 + 1;
          }
        }
        else {
          *(float *)((long)pvVar12 + 0x4d8) = *(float *)((long)pvVar12 + 0x4d8) - param_1;
          *(float *)((long)pvVar12 + 0x4d4) = *(float *)((long)pvVar12 + 0x4d4) + param_1;
          ppvVar9 = *(void ***)(this + 0x10);
          if (ppvVar9 != *(void ***)(this + 0x18)) goto LAB_00943a7c;
          pvVar14 = *ppvVar10;
          uVar16 = (long)ppvVar9 - (long)pvVar14;
          uVar1 = ((long)uVar16 >> 3) + 1;
          if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar1 <= (ulong)((long)uVar16 >> 2)) {
            uVar1 = (long)uVar16 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar16) {
            uVar1 = 0x1fffffffffffffff;
          }
          if (uVar1 == 0) {
            pvVar3 = (void *)0x0;
          }
          else {
            if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00943b2c to 00943b87 has its CatchHandler @ 00944154 */
            pvVar3 = operator_new(uVar1 << 3);
          }
          ppvVar9 = (void **)((long)pvVar3 + ((long)uVar16 >> 3) * 8);
          *ppvVar9 = pvVar12;
          if (0 < (long)uVar16) {
            memcpy(pvVar3,pvVar14,uVar16);
          }
          *(void **)(this + 8) = pvVar3;
          *(void ***)(this + 0x10) = ppvVar9 + 1;
          *(void **)(this + 0x18) = (void *)((long)pvVar3 + uVar1 * 8);
          if (pvVar14 != (void *)0x0) {
            operator_delete(pvVar14);
          }
        }
      }
      else {
        *(float *)((long)pvVar12 + 0x4d4) = *(float *)((long)pvVar12 + 0x4d4) + param_1;
        ppvVar9 = *(void ***)(this + 0x10);
        if (ppvVar9 == *(void ***)(this + 0x18)) {
          pvVar14 = *ppvVar10;
          uVar16 = (long)ppvVar9 - (long)pvVar14;
          uVar1 = ((long)uVar16 >> 3) + 1;
          if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 009440bc to 009440c3 has its CatchHandler @ 0094415c */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar1 <= (ulong)((long)uVar16 >> 2)) {
            uVar1 = (long)uVar16 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar16) {
            uVar1 = 0x1fffffffffffffff;
          }
          if (uVar1 == 0) {
            pvVar3 = (void *)0x0;
          }
          else {
            if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 009440cc to 009440d7 has its CatchHandler @ 0094415c */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            pvVar3 = operator_new(uVar1 << 3);
          }
          ppvVar9 = (void **)((long)pvVar3 + ((long)uVar16 >> 3) * 8);
          *ppvVar9 = pvVar12;
          if (0 < (long)uVar16) {
            memcpy(pvVar3,pvVar14,uVar16);
          }
          *(void **)(this + 8) = pvVar3;
          *(void ***)(this + 0x10) = ppvVar9 + 1;
          *(void **)(this + 0x18) = (void *)((long)pvVar3 + uVar1 * 8);
          if (pvVar14 != (void *)0x0) {
            operator_delete(pvVar14);
          }
        }
        else {
LAB_00943a7c:
          *ppvVar9 = pvVar12;
          *(void ***)(this + 0x10) = ppvVar9 + 1;
        }
      }
      ppvVar11 = ppvVar11 + 1;
    } while (ppvVar11 != ppvVar15);
    ppvVar9 = *(void ***)(this + 0x20);
    ppvVar13 = *(void ***)(this + 0x28);
  }
  *ppvVar8 = (void *)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  for (ppvVar10 = ppvVar9; ppvVar10 != ppvVar13; ppvVar10 = ppvVar10 + 1) {
    pvVar12 = *ppvVar10;
    iVar17 = (int)uVar18;
    if (((param_3 == 0) || (*(uint *)((long)pvVar12 + 0x4c8) == param_3)) &&
       (*(int *)((long)pvVar12 + 0x4d0) == 6)) {
      if (*(float *)((long)pvVar12 + 0x4d8) <= param_1 && iVar17 != 0) {
        if (local_88 == local_80) {
          uVar18 = (long)local_88 - (long)local_90;
          uVar1 = ((long)uVar18 >> 3) + 1;
          if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 009440f4 to 00944103 has its CatchHandler @ 00944158 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar1 <= (ulong)((long)uVar18 >> 2)) {
            uVar1 = (long)uVar18 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar18) {
            uVar1 = 0x1fffffffffffffff;
          }
          if (uVar1 == 0) {
            ppvVar15 = (void **)0x0;
          }
          else {
            if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 0094411c to 00944133 has its CatchHandler @ 00944158 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00943eec to 00943eef has its CatchHandler @ 00944150 */
            ppvVar15 = (void **)operator_new(uVar1 << 3);
          }
          local_88 = ppvVar15 + ((long)uVar18 >> 3) + 1;
          ppvVar15[(long)uVar18 >> 3] = pvVar12;
          if (0 < (long)uVar18) {
            memcpy(ppvVar15,local_90,uVar18);
          }
          local_80 = ppvVar15 + uVar1;
          if (local_90 != (void **)0x0) {
            operator_delete(local_90);
          }
          uVar18 = (ulong)(iVar17 - 1);
          local_90 = ppvVar15;
        }
        else {
          *local_88 = pvVar12;
          uVar18 = (ulong)(iVar17 - 1);
          local_88 = local_88 + 1;
        }
      }
      else {
        *(float *)((long)pvVar12 + 0x4d8) = *(float *)((long)pvVar12 + 0x4d8) - param_1;
        *(float *)((long)pvVar12 + 0x4d4) = *(float *)((long)pvVar12 + 0x4d4) + param_1;
        ppvVar15 = *(void ***)(this + 0x28);
        if (ppvVar15 != *(void ***)(this + 0x30)) goto LAB_00943d28;
        pvVar14 = *ppvVar8;
        uVar16 = (long)ppvVar15 - (long)pvVar14;
        uVar1 = ((long)uVar16 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar1 <= (ulong)((long)uVar16 >> 2)) {
          uVar1 = (long)uVar16 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar16) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 == 0) {
          pvVar3 = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00943dd8 to 00943e33 has its CatchHandler @ 00944150 */
          pvVar3 = operator_new(uVar1 << 3);
        }
        ppvVar15 = (void **)((long)pvVar3 + ((long)uVar16 >> 3) * 8);
        *ppvVar15 = pvVar12;
        if (0 < (long)uVar16) {
          memcpy(pvVar3,pvVar14,uVar16);
        }
        *(void **)(this + 0x20) = pvVar3;
        *(void ***)(this + 0x28) = ppvVar15 + 1;
        *(void **)(this + 0x30) = (void *)((long)pvVar3 + uVar1 * 8);
        if (pvVar14 != (void *)0x0) {
          operator_delete(pvVar14);
        }
      }
    }
    else {
      *(float *)((long)pvVar12 + 0x4d4) = *(float *)((long)pvVar12 + 0x4d4) + param_1;
      ppvVar15 = *(void ***)(this + 0x28);
      if (ppvVar15 == *(void ***)(this + 0x30)) {
        pvVar14 = *ppvVar8;
        uVar16 = (long)ppvVar15 - (long)pvVar14;
        uVar1 = ((long)uVar16 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 009440c4 to 009440cb has its CatchHandler @ 00944158 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar1 <= (ulong)((long)uVar16 >> 2)) {
          uVar1 = (long)uVar16 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar16) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 == 0) {
          pvVar3 = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 009440d8 to 009440e3 has its CatchHandler @ 00944158 */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar3 = operator_new(uVar1 << 3);
        }
        ppvVar15 = (void **)((long)pvVar3 + ((long)uVar16 >> 3) * 8);
        *ppvVar15 = pvVar12;
        if (0 < (long)uVar16) {
          memcpy(pvVar3,pvVar14,uVar16);
        }
        *(void **)(this + 0x20) = pvVar3;
        *(void ***)(this + 0x28) = ppvVar15 + 1;
        *(void **)(this + 0x30) = (void *)((long)pvVar3 + uVar1 * 8);
        if (pvVar14 != (void *)0x0) {
          operator_delete(pvVar14);
        }
      }
      else {
LAB_00943d28:
        *ppvVar15 = pvVar12;
        *(void ***)(this + 0x28) = ppvVar15 + 1;
      }
    }
  }
                    /* try { // try from 00943f94 to 00943f9b has its CatchHandler @ 0094413c */
  Mutex::leaveCriticalSection();
  ppvVar13 = local_90;
  do {
    if (ppvVar13 == local_88) {
      if (ppvVar9 != (void **)0x0) {
        operator_delete(ppvVar9);
      }
      if (ppvVar7 != (void **)0x0) {
        operator_delete(ppvVar7);
      }
      if (local_90 != (void **)0x0) {
        operator_delete(local_90);
      }
      if (*(long *)(lVar2 + 0x28) == lVar6) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pvVar12 = *ppvVar13;
                    /* try { // try from 00943fd4 to 00943fdb has its CatchHandler @ 00944170 */
    plVar4 = (long *)I3DLoad::getSceneGraphRoot();
    iVar17 = *(int *)((long)pvVar12 + 0x4dc);
    if (*(char *)((long)pvVar12 + 0x4cc) != '\0') {
      iVar17 = 1;
    }
    if ((iVar17 != 0) && (plVar4 != (long *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4);
      plVar4 = (long *)0x0;
    }
    plVar5 = *(long **)((long)pvVar12 + 0x218);
    if (plVar5 == (long *)0x0) {
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
        plVar4 = *(long **)((long)pvVar12 + 0x218);
        goto joined_r0x0094404c;
      }
    }
    else {
                    /* try { // try from 00944020 to 00944027 has its CatchHandler @ 0094416c */
      (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined4 *)((long)pvVar12 + 0x4c8),plVar4,iVar17);
      plVar4 = *(long **)((long)pvVar12 + 0x218);
joined_r0x0094404c:
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    I3DLoad::~I3DLoad((I3DLoad *)((long)pvVar12 + 0x220));
    operator_delete(pvVar12);
    ppvVar13 = ppvVar13 + 1;
  } while( true );
}


