// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: expandJumps
// Entry Point: 00efb8fc
// Size: 3332 bytes
// Signature: undefined expandJumps(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::BytecodeBuilder::expandJumps() */

void Luau::BytecodeBuilder::expandJumps(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined uVar4;
  long lVar5;
  void *pvVar6;
  int iVar7;
  long in_x0;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined4 *puVar17;
  void *pvVar18;
  ulong uVar19;
  void *pvVar20;
  size_t sVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  undefined4 *local_f0;
  undefined4 *local_d8;
  undefined4 *local_d0;
  undefined4 *local_c8;
  undefined4 *local_c0;
  undefined4 *local_b0;
  undefined4 *local_98;
  void *local_80;
  
  lVar5 = tpidr_el0;
  lVar11 = *(long *)(lVar5 + 0x28);
  if (*(char *)(in_x0 + 0xb0) == '\0') goto LAB_00efc3fc;
  FUN_00efe6a4(*(undefined8 *)(in_x0 + 0x80),*(undefined8 *)(in_x0 + 0x88));
  pvVar18 = *(void **)(in_x0 + 0x20);
  pvVar20 = *(void **)(in_x0 + 0x28);
  local_80 = (void *)0x0;
  uVar15 = (long)pvVar20 - (long)pvVar18;
  if (uVar15 == 0) {
    puVar17 = (undefined4 *)0x0;
    puVar8 = (undefined4 *)0x0;
    local_c0 = (undefined4 *)0x0;
    local_98 = (undefined4 *)0x0;
    local_b0 = (undefined4 *)0x0;
    pvVar6 = (void *)0x0;
    if (pvVar20 != pvVar18) goto LAB_00efb9e0;
LAB_00efc300:
    local_80 = pvVar6;
    puVar12 = *(uint **)(in_x0 + 0x80);
    puVar13 = *(uint **)(in_x0 + 0x88);
    local_c8 = puVar8;
    pvVar18 = pvVar20;
    local_d8 = local_b0;
    if (puVar12 != puVar13) {
LAB_00efc350:
      do {
        while( true ) {
          uVar3 = *(uint *)((long)local_80 + (ulong)*puVar12 * 4);
          uVar2 = puVar12[1] + ~*puVar12;
          uVar1 = -uVar2;
          if (-1 < (int)uVar2) {
            uVar1 = uVar2;
          }
          iVar7 = *(int *)((long)local_80 + (ulong)puVar12[1] * 4) - uVar3;
          pvVar18 = pvVar20;
          if (0x2aaa < uVar1) break;
          *(short *)((long)local_c8 + (ulong)uVar3 * 4 + 2) =
               (short)((uint)(iVar7 * 0x10000 + -0x10000) >> 0x10);
          puVar12 = puVar12 + 2;
          if (puVar12 == puVar13) goto LAB_00efc394;
        }
        local_c8[uVar3 - 1] = (uint)*(byte *)(local_c8 + (uVar3 - 1)) | iVar7 * 0x100;
        *(undefined2 *)((long)local_c8 + (ulong)uVar3 * 4 + 2) = 0xfffe;
        puVar12 = puVar12 + 2;
      } while (puVar12 != puVar13);
    }
  }
  else {
    if ((long)uVar15 < 0) {
                    /* try { // try from 00efc5a4 to 00efc5ab has its CatchHandler @ 00efc63c */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00efb95c to 00efb963 has its CatchHandler @ 00efc63c */
    local_80 = operator_new(uVar15);
    lVar16 = (long)uVar15 >> 2;
    memset(local_80,0,lVar16 * 4);
                    /* try { // try from 00efb998 to 00efb9bb has its CatchHandler @ 00efc638 */
    puVar8 = (undefined4 *)operator_new(uVar15);
    puVar17 = puVar8 + lVar16;
    local_b0 = (undefined4 *)operator_new(uVar15);
    local_c0 = local_b0 + lVar16;
    pvVar6 = local_80;
    local_98 = puVar8;
    if (pvVar20 == pvVar18) goto LAB_00efc300;
LAB_00efb9e0:
    uVar15 = 0;
    uVar26 = 0;
    local_f0 = local_b0;
    puVar10 = local_b0;
    local_c8 = local_98;
    puVar8 = local_98;
    local_d8 = local_b0;
    do {
      lVar16 = *(long *)(in_x0 + 0x80);
      uVar4 = *(undefined *)((long)pvVar18 + uVar26 * 4);
      local_d0 = puVar10;
      if ((uVar15 < (ulong)(*(long *)(in_x0 + 0x88) - lVar16 >> 3)) &&
         (uVar2 = *(uint *)(lVar16 + uVar15 * 8), uVar26 == uVar2)) {
        uVar2 = *(int *)(lVar16 + uVar15 * 8 + 4) + ~uVar2;
        uVar1 = -uVar2;
        if (-1 < (int)uVar2) {
          uVar1 = uVar2;
        }
        if (0x2aaa < uVar1) {
          if (puVar8 < puVar17) {
            puVar14 = puVar8 + 1;
            *puVar8 = 0x10017;
            puVar9 = local_98;
            if (puVar17 <= puVar14) goto LAB_00efbbcc;
LAB_00efbaa0:
            puVar8 = puVar14 + 1;
            *puVar14 = 0x43;
            lVar16 = *(long *)(in_x0 + 0x38);
            local_98 = puVar9;
            if (puVar10 == local_c0) goto LAB_00efbc84;
LAB_00efbac4:
            puVar9 = puVar10 + 1;
            *puVar10 = *(undefined4 *)(lVar16 + uVar26 * 4);
            puVar10 = local_d8;
            if (puVar9 == local_c0) {
LAB_00efbd5c:
              uVar19 = (long)puVar9 - (long)puVar10;
              lVar24 = (long)uVar19 >> 2;
              uVar22 = lVar24 + 1;
              if (uVar22 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar22 <= (ulong)((long)uVar19 >> 1)) {
                uVar22 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar22 = 0x3fffffffffffffff;
              }
              if (uVar22 == 0) {
                local_f0 = (undefined4 *)0x0;
                local_d0 = (undefined4 *)(lVar24 * 4);
                *local_d0 = *(undefined4 *)(lVar16 + uVar26 * 4);
              }
              else {
                if (uVar22 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 00efbda8 to 00efbdab has its CatchHandler @ 00efc614 */
                local_f0 = (undefined4 *)operator_new(uVar22 << 2);
                local_d0 = local_f0 + lVar24;
                *local_d0 = *(undefined4 *)(lVar16 + uVar26 * 4);
              }
              local_d0 = local_d0 + 1;
              if (0 < (long)uVar19) {
                memcpy(local_f0,puVar10,uVar19);
              }
              local_c0 = local_f0 + uVar22;
              local_d8 = local_f0;
              if (puVar10 != (undefined4 *)0x0) {
                operator_delete(puVar10);
              }
              goto LAB_00efbe0c;
            }
          }
          else {
            sVar21 = (long)puVar8 - (long)local_98;
            uVar22 = ((long)sVar21 >> 2) + 1;
            if (uVar22 >> 0x3e != 0) {
                    /* try { // try from 00efc4f4 to 00efc4fb has its CatchHandler @ 00efc658 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar19 = (long)puVar17 - (long)local_98 >> 1;
            if (uVar22 <= uVar19) {
              uVar22 = uVar19;
            }
            if (0x7ffffffffffffffb < (ulong)((long)puVar17 - (long)local_98)) {
              uVar22 = 0x3fffffffffffffff;
            }
            if (uVar22 == 0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              if (uVar22 >> 0x3e != 0) {
                    /* try { // try from 00efc574 to 00efc57f has its CatchHandler @ 00efc658 */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00efbb64 to 00efbb67 has its CatchHandler @ 00efc604 */
              puVar9 = (undefined4 *)operator_new(uVar22 << 2);
            }
            puVar14 = puVar9 + ((long)sVar21 >> 2) + 1;
            puVar9[(long)sVar21 >> 2] = 0x10017;
            if (0 < (long)sVar21) {
              memcpy(puVar9,local_98,sVar21);
            }
            puVar17 = puVar9 + uVar22;
            if (local_98 != (undefined4 *)0x0) {
              operator_delete(local_98);
            }
            local_c8 = puVar9;
            if (puVar14 < puVar17) goto LAB_00efbaa0;
LAB_00efbbcc:
            sVar21 = (long)puVar14 - (long)puVar9;
            lVar16 = (long)sVar21 >> 2;
            uVar22 = lVar16 + 1;
            if (uVar22 >> 0x3e != 0) {
                    /* try { // try from 00efc514 to 00efc51b has its CatchHandler @ 00efc654 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar19 = (long)puVar17 - (long)puVar9 >> 1;
            if (uVar22 <= uVar19) {
              uVar22 = uVar19;
            }
            if (0x7ffffffffffffffb < (ulong)((long)puVar17 - (long)puVar9)) {
              uVar22 = 0x3fffffffffffffff;
            }
            if (uVar22 == 0) {
              local_98 = (undefined4 *)0x0;
              puVar8 = (undefined4 *)(lVar16 * 4);
              *puVar8 = 0x43;
            }
            else {
              if (uVar22 >> 0x3e != 0) {
                    /* try { // try from 00efc598 to 00efc5a3 has its CatchHandler @ 00efc654 */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00efbc18 to 00efbc1b has its CatchHandler @ 00efc600 */
              local_98 = (undefined4 *)operator_new(uVar22 << 2);
              puVar8 = local_98 + lVar16;
              *puVar8 = 0x43;
            }
            puVar8 = puVar8 + 1;
            if (0 < (long)sVar21) {
              memcpy(local_98,puVar9,sVar21);
            }
            puVar17 = local_98 + uVar22;
            if (puVar9 != (undefined4 *)0x0) {
              operator_delete(puVar9);
            }
            lVar16 = *(long *)(in_x0 + 0x38);
            local_c8 = local_98;
            if (puVar10 != local_c0) goto LAB_00efbac4;
LAB_00efbc84:
            uVar19 = (long)puVar10 - (long)local_d8;
            lVar24 = (long)uVar19 >> 2;
            uVar22 = lVar24 + 1;
            if (uVar22 >> 0x3e != 0) {
                    /* try { // try from 00efc534 to 00efc55b has its CatchHandler @ 00efc65c */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar22 <= (ulong)((long)uVar19 >> 1)) {
              uVar22 = (long)uVar19 >> 1;
            }
            if (0x7ffffffffffffffb < uVar19) {
              uVar22 = 0x3fffffffffffffff;
            }
            if (uVar22 == 0) {
              puVar10 = (undefined4 *)0x0;
              puVar9 = (undefined4 *)(lVar24 * 4);
              *puVar9 = *(undefined4 *)(lVar16 + uVar26 * 4);
            }
            else {
              if (uVar22 >> 0x3e != 0) {
                    /* try { // try from 00efc5c8 to 00efc5fb has its CatchHandler @ 00efc65c */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00efbccc to 00efbccf has its CatchHandler @ 00efc614 */
              puVar10 = (undefined4 *)operator_new(uVar22 << 2);
              puVar9 = puVar10 + lVar24;
              *puVar9 = *(undefined4 *)(lVar16 + uVar26 * 4);
            }
            puVar9 = puVar9 + 1;
            if (0 < (long)uVar19) {
              memcpy(puVar10,local_d8,uVar19);
            }
            local_c0 = puVar10 + uVar22;
            if (local_d8 != (undefined4 *)0x0) {
              operator_delete(local_d8);
              lVar16 = *(long *)(in_x0 + 0x38);
            }
            local_f0 = puVar10;
            if (puVar9 == local_c0) goto LAB_00efbd5c;
          }
          *puVar9 = *(undefined4 *)(lVar16 + uVar26 * 4);
          local_d8 = puVar10;
          local_d0 = puVar9 + 1;
        }
LAB_00efbe0c:
        uVar15 = uVar15 + 1;
      }
      iVar7 = FUN_00efb464(uVar4);
      uVar22 = (long)puVar8 - (long)local_98;
      lVar24 = (long)uVar22 >> 2;
      lVar16 = *(long *)(in_x0 + 0x20);
      *(int *)((long)local_80 + uVar26 * 4) = (int)lVar24;
      iVar25 = (int)uVar26;
      if (puVar8 == puVar17) {
        uVar19 = lVar24 + 1;
        if (uVar19 >> 0x3e != 0) goto LAB_00efc45c;
        if (uVar19 <= (ulong)((long)uVar22 >> 1)) {
          uVar19 = (long)uVar22 >> 1;
        }
        if (0x7ffffffffffffffb < uVar22) {
          uVar19 = 0x3fffffffffffffff;
        }
        if (uVar19 == 0) {
          local_c8 = (undefined4 *)0x0;
          puVar9 = (undefined4 *)(lVar24 * 4);
          *puVar9 = *(undefined4 *)(lVar16 + uVar26 * 4);
        }
        else {
          if (uVar19 >> 0x3e != 0) goto LAB_00efc4b4;
                    /* try { // try from 00efbecc to 00efbecf has its CatchHandler @ 00efc660 */
          local_c8 = (undefined4 *)operator_new(uVar19 << 2);
          puVar9 = local_c8 + lVar24;
          *puVar9 = *(undefined4 *)(lVar16 + uVar26 * 4);
        }
        puVar9 = puVar9 + 1;
        if (0 < (long)uVar22) {
          memcpy(local_c8,local_98,uVar22);
        }
        puVar17 = local_c8 + uVar19;
        if (local_98 != (undefined4 *)0x0) {
          operator_delete(local_98);
        }
        lVar16 = *(long *)(in_x0 + 0x38);
        local_98 = local_c8;
        if (local_d0 != local_c0) goto LAB_00efbe6c;
LAB_00efbf40:
        uVar19 = (long)local_d0 - (long)local_d8;
        uVar22 = ((long)uVar19 >> 2) + 1;
        if (uVar22 >> 0x3e != 0) goto LAB_00efc434;
        if (uVar22 <= (ulong)((long)uVar19 >> 1)) {
          uVar22 = (long)uVar19 >> 1;
        }
        if (0x7ffffffffffffffb < uVar19) {
          uVar22 = 0x3fffffffffffffff;
        }
        if (uVar22 == 0) {
          local_f0 = (undefined4 *)0x0;
        }
        else {
          if (uVar22 >> 0x3e != 0) goto LAB_00efc488;
                    /* try { // try from 00efbf88 to 00efbf8b has its CatchHandler @ 00efc660 */
          local_f0 = (undefined4 *)operator_new(uVar22 << 2);
        }
        puVar10 = local_f0 + ((long)uVar19 >> 2) + 1;
        local_f0[(long)uVar19 >> 2] = *(undefined4 *)(lVar16 + uVar26 * 4);
        if (0 < (long)uVar19) {
          memcpy(local_f0,local_d8,uVar19);
        }
        local_c0 = local_f0 + uVar22;
        if (local_d8 != (undefined4 *)0x0) {
          operator_delete(local_d8);
        }
        puVar14 = puVar10;
        puVar8 = puVar9;
        local_d8 = local_f0;
        if (iVar7 + iVar25 != iVar25 + 1) goto LAB_00efc038;
LAB_00efba10:
        uVar26 = uVar26 + 1;
      }
      else {
        puVar9 = puVar8 + 1;
        *puVar8 = *(undefined4 *)(lVar16 + uVar26 * 4);
        lVar16 = *(long *)(in_x0 + 0x38);
        if (local_d0 == local_c0) goto LAB_00efbf40;
LAB_00efbe6c:
        puVar10 = local_d0 + 1;
        *local_d0 = *(undefined4 *)(lVar16 + uVar26 * 4);
        puVar14 = puVar10;
        puVar8 = puVar9;
        if (iVar7 + iVar25 == iVar25 + 1) goto LAB_00efba10;
LAB_00efc038:
        lVar23 = uVar26 + 1;
        uVar22 = (long)puVar9 - (long)local_98;
        lVar24 = *(long *)(in_x0 + 0x20);
        lVar16 = (long)uVar22 >> 2;
        *(int *)((long)local_80 + lVar23 * 4) = (int)lVar16;
        if (puVar9 == puVar17) {
          uVar19 = lVar16 + 1;
          if (uVar19 >> 0x3e != 0) {
LAB_00efc45c:
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar19 <= (ulong)((long)uVar22 >> 1)) {
            uVar19 = (long)uVar22 >> 1;
          }
          if (0x7ffffffffffffffb < uVar22) {
            uVar19 = 0x3fffffffffffffff;
          }
          if (uVar19 == 0) {
            local_c8 = (undefined4 *)0x0;
            puVar9 = (undefined4 *)(lVar16 * 4);
            *puVar9 = *(undefined4 *)(lVar24 + lVar23 * 4);
          }
          else {
            if (uVar19 >> 0x3e != 0) {
LAB_00efc4b4:
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00efc0d0 to 00efc0d7 has its CatchHandler @ 00efc660 */
            local_c8 = (undefined4 *)operator_new(uVar19 << 2);
            puVar9 = local_c8 + lVar16;
            *puVar9 = *(undefined4 *)(lVar24 + lVar23 * 4);
          }
          if (0 < (long)uVar22) {
            memcpy(local_c8,local_98,uVar22);
          }
          puVar17 = local_c8 + uVar19;
          if (local_98 != (undefined4 *)0x0) {
            operator_delete(local_98);
          }
          lVar16 = *(long *)(in_x0 + 0x38);
          local_98 = local_c8;
        }
        else {
          *puVar9 = *(undefined4 *)(lVar24 + lVar23 * 4);
          lVar16 = *(long *)(in_x0 + 0x38);
        }
        puVar8 = puVar9 + 1;
        if (puVar14 == local_c0) {
          uVar19 = (long)puVar14 - (long)local_d8;
          uVar22 = ((long)uVar19 >> 2) + 1;
          if (uVar22 >> 0x3e != 0) {
LAB_00efc434:
                    /* try { // try from 00efc450 to 00efc4db has its CatchHandler @ 00efc684 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar22 <= (ulong)((long)uVar19 >> 1)) {
            uVar22 = (long)uVar19 >> 1;
          }
          if (0x7ffffffffffffffb < uVar19) {
            uVar22 = 0x3fffffffffffffff;
          }
          if (uVar22 == 0) {
            local_f0 = (undefined4 *)0x0;
          }
          else {
            if (uVar22 >> 0x3e != 0) {
LAB_00efc488:
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00efc198 to 00efc19f has its CatchHandler @ 00efc660 */
            local_f0 = (undefined4 *)operator_new(uVar22 << 2);
          }
          puVar10 = local_f0 + ((long)uVar19 >> 2) + 1;
          local_f0[(long)uVar19 >> 2] = *(undefined4 *)(lVar16 + lVar23 * 4);
          if (0 < (long)uVar19) {
            memcpy(local_f0,local_d8,uVar19);
          }
          local_c0 = local_f0 + uVar22;
          if (local_d8 != (undefined4 *)0x0) {
            operator_delete(local_d8);
          }
          uVar26 = uVar26 + 2;
          local_d8 = local_f0;
        }
        else {
          uVar26 = uVar26 + 2;
          puVar10 = puVar14 + 1;
          *puVar14 = *(undefined4 *)(lVar16 + lVar23 * 4);
        }
      }
      pvVar18 = *(void **)(in_x0 + 0x20);
    } while (uVar26 < (ulong)(*(long *)(in_x0 + 0x28) - (long)pvVar18 >> 2));
    local_b0 = local_f0;
    puVar12 = *(uint **)(in_x0 + 0x80);
    puVar13 = *(uint **)(in_x0 + 0x88);
    local_d8 = puVar10;
    pvVar20 = pvVar18;
    if (puVar12 != puVar13) goto LAB_00efc350;
  }
LAB_00efc394:
  pvVar20 = *(void **)(in_x0 + 0x38);
  *(undefined4 **)(in_x0 + 0x30) = puVar17;
  *(undefined4 **)(in_x0 + 0x38) = local_b0;
  *(undefined4 **)(in_x0 + 0x20) = local_c8;
  *(undefined4 **)(in_x0 + 0x28) = puVar8;
  *(undefined4 **)(in_x0 + 0x40) = local_d8;
  *(undefined4 **)(in_x0 + 0x48) = local_c0;
  if (pvVar20 != (void *)0x0) {
    operator_delete(pvVar20);
  }
  if (pvVar18 != (void *)0x0) {
    operator_delete(pvVar18);
  }
  if (local_80 != (void *)0x0) {
    operator_delete(local_80);
  }
LAB_00efc3fc:
  if (*(long *)(lVar5 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


