// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementRaycastPhysicsMask
// Entry Point: 009dfafc
// Size: 6600 bytes
// Signature: undefined __thiscall ProceduralPlacementRaycastPhysicsMask(ProceduralPlacementRaycastPhysicsMask * this, uint param_1, uint param_2, float param_3, uint param_4)


/* ProceduralPlacementRaycastPhysicsMask::ProceduralPlacementRaycastPhysicsMask(unsigned int,
   unsigned int, float, unsigned int) */

void __thiscall
ProceduralPlacementRaycastPhysicsMask::ProceduralPlacementRaycastPhysicsMask
          (ProceduralPlacementRaycastPhysicsMask *this,uint param_1,uint param_2,float param_3,
          uint param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  TransformGroup *pTVar5;
  long lVar6;
  void *pvVar7;
  void *__dest;
  ulong uVar8;
  ulong uVar9;
  void **ppvVar10;
  size_t sVar11;
  ulong uVar12;
  undefined8 *puVar13;
  void **ppvVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  float fVar18;
  undefined8 uVar19;
  ushort local_c0;
  void *local_b0;
  ushort local_a8;
  void *local_98;
  byte local_90;
  undefined uStack_8f;
  undefined6 uStack_8e;
  undefined8 uStack_88;
  void *local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_90 = 0;
  uStack_8f = 0;
  local_a8 = 0;
  local_c0 = 0;
                    /* try { // try from 009dfb4c to 009dfb5b has its CatchHandler @ 009e1554 */
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(basic_string *)&local_90,(basic_string *)&local_a8,
             (basic_string *)&local_c0);
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  ppvVar10 = (void **)(this + 200);
  *ppvVar10 = (void *)0x0;
  *(undefined ***)this = &PTR__ProceduralPlacementRaycastPhysicsMask_00fe2800;
                    /* try { // try from 009dfb98 to 009dfbaf has its CatchHandler @ 009e1550 */
  getRaycastPhysicsMaskSignature(param_1,param_2,param_3,param_4);
  if ((*(byte *)(this + 0x70) & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  *(uint *)(this + 0xe8) = param_1;
  *(uint *)(this + 0xec) = param_2;
  *(float *)(this + 0xf0) = param_3;
  *(undefined8 *)(this + 0x78) = uStack_88;
  *(ulong *)(this + 0x70) = CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90));
  *(void **)(this + 0x80) = local_80;
  if (param_4 < 9) {
    if (param_4 < 5) {
      if (param_4 < 3) {
        puVar13 = *(undefined8 **)(this + 0xd0);
        puVar15 = *(undefined8 **)(this + 0xd8);
        if (param_4 == 2) {
          if (puVar13 < puVar15) {
            uVar19 = NEON_fmov(0x3e800000,4);
            puVar15 = puVar13 + 1;
            *puVar13 = uVar19;
            *(undefined8 **)(this + 0xd0) = puVar15;
          }
          else {
            pvVar7 = *ppvVar10;
            sVar11 = (long)puVar13 - (long)pvVar7;
            uVar12 = ((long)sVar11 >> 3) + 1;
            if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e147c to 009e1483 has its CatchHandler @ 009e14d4 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar8 = (long)puVar15 - (long)pvVar7 >> 2;
            if (uVar12 <= uVar8) {
              uVar12 = uVar8;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)puVar15 - (long)pvVar7)) {
              uVar12 = 0x1fffffffffffffff;
            }
            if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e1490 to 009e149b has its CatchHandler @ 009e14d4 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 009e0fe4 to 009e0fe7 has its CatchHandler @ 009e14d4 */
            pvVar4 = operator_new(uVar12 << 3);
            uVar19 = NEON_fmov(0x3e800000,4);
            puVar13 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
            puVar15 = puVar13 + 1;
            *puVar13 = uVar19;
            if (0 < (long)sVar11) {
              memcpy(pvVar4,pvVar7,sVar11);
            }
            *(void **)(this + 200) = pvVar4;
            *(undefined8 **)(this + 0xd0) = puVar15;
            *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar12 * 8);
            if (pvVar7 != (void *)0x0) {
              operator_delete(pvVar7);
              puVar15 = *(undefined8 **)(this + 0xd0);
            }
          }
          if (puVar15 < *(undefined8 **)(this + 0xd8)) {
            uVar19 = NEON_fmov(0xbe800000,4);
            goto LAB_009e103c;
          }
          pvVar7 = *ppvVar10;
          sVar11 = (long)puVar15 - (long)pvVar7;
          uVar12 = ((long)sVar11 >> 3) + 1;
          if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e14a8 to 009e14bf has its CatchHandler @ 009e14c4 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar8 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
          uVar9 = (long)uVar8 >> 2;
          if (uVar12 <= uVar9) {
            uVar12 = uVar9;
          }
          if (0x7ffffffffffffff7 < uVar8) {
            uVar12 = 0x1fffffffffffffff;
          }
          if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 009e1228 to 009e122b has its CatchHandler @ 009e14c4 */
          __dest = operator_new(uVar12 << 3);
          uVar19 = NEON_fmov(0xbe800000,4);
          puVar13 = (undefined8 *)((long)__dest + ((long)sVar11 >> 3) * 8);
          pvVar4 = (void *)((long)__dest + uVar12 * 8);
          *puVar13 = uVar19;
        }
        else {
          if (puVar13 < puVar15) {
            *puVar13 = 0;
            *(undefined8 **)(this + 0xd0) = puVar13 + 1;
            goto LAB_009e10e0;
          }
          pvVar7 = *ppvVar10;
          sVar11 = (long)puVar13 - (long)pvVar7;
          uVar12 = ((long)sVar11 >> 3) + 1;
          if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e1484 to 009e148f has its CatchHandler @ 009e14c8 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar8 = (long)puVar15 - (long)pvVar7 >> 2;
          if (uVar12 <= uVar8) {
            uVar12 = uVar8;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)puVar15 - (long)pvVar7)) {
            uVar12 = 0x1fffffffffffffff;
          }
          if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e149c to 009e14a7 has its CatchHandler @ 009e14c8 */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 009e1094 to 009e1097 has its CatchHandler @ 009e14c8 */
          __dest = operator_new(uVar12 << 3);
          puVar13 = (undefined8 *)((long)__dest + ((long)sVar11 >> 3) * 8);
          pvVar4 = (void *)((long)__dest + uVar12 * 8);
          *puVar13 = 0;
        }
        if (0 < (long)sVar11) {
          memcpy(__dest,pvVar7,sVar11);
        }
        *(void **)(this + 200) = __dest;
        *(undefined8 **)(this + 0xd0) = puVar13 + 1;
        *(void **)(this + 0xd8) = pvVar4;
        goto joined_r0x009e0f98;
      }
      puVar13 = *(undefined8 **)(this + 0xd0);
      if (puVar13 < *(undefined8 **)(this + 0xd8)) {
        puVar15 = puVar13 + 1;
        *puVar13 = 0xbec00000be000000;
        *(undefined8 **)(this + 0xd0) = puVar15;
      }
      else {
        pvVar7 = *ppvVar10;
        sVar11 = (long)puVar13 - (long)pvVar7;
        uVar12 = ((long)sVar11 >> 3) + 1;
        if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e142c to 009e143f has its CatchHandler @ 009e14e4 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar8 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
        uVar9 = (long)uVar8 >> 2;
        if (uVar12 <= uVar9) {
          uVar12 = uVar9;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar12 = 0x1fffffffffffffff;
        }
        if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 009e0d3c to 009e0d3f has its CatchHandler @ 009e14e4 */
        pvVar4 = operator_new(uVar12 << 3);
        puVar13 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
        puVar15 = puVar13 + 1;
        *puVar13 = 0xbec00000be000000;
        if (0 < (long)sVar11) {
          memcpy(pvVar4,pvVar7,sVar11);
        }
        *(void **)(this + 200) = pvVar4;
        *(undefined8 **)(this + 0xd0) = puVar15;
        *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar12 * 8);
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7);
          puVar15 = *(undefined8 **)(this + 0xd0);
        }
      }
      if (puVar15 < *(undefined8 **)(this + 0xd8)) {
        puVar17 = puVar15 + 1;
        *puVar15 = 0xbe0000003ec00000;
        *(undefined8 **)(this + 0xd0) = puVar17;
      }
      else {
        pvVar7 = *ppvVar10;
        sVar11 = (long)puVar15 - (long)pvVar7;
        uVar12 = ((long)sVar11 >> 3) + 1;
        if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e1440 to 009e1453 has its CatchHandler @ 009e14e0 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar8 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
        uVar9 = (long)uVar8 >> 2;
        if (uVar12 <= uVar9) {
          uVar12 = uVar9;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar12 = 0x1fffffffffffffff;
        }
        if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 009e0e04 to 009e0e07 has its CatchHandler @ 009e14e0 */
        pvVar4 = operator_new(uVar12 << 3);
        puVar13 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
        puVar17 = puVar13 + 1;
        *puVar13 = 0xbe0000003ec00000;
        if (0 < (long)sVar11) {
          memcpy(pvVar4,pvVar7,sVar11);
        }
        *(void **)(this + 200) = pvVar4;
        *(undefined8 **)(this + 0xd0) = puVar17;
        *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar12 * 8);
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7);
          puVar17 = *(undefined8 **)(this + 0xd0);
        }
      }
      if (puVar17 < *(undefined8 **)(this + 0xd8)) {
        puVar15 = puVar17 + 1;
        *puVar17 = 0x3e000000bec00000;
        *(undefined8 **)(this + 0xd0) = puVar15;
      }
      else {
        pvVar7 = *ppvVar10;
        sVar11 = (long)puVar17 - (long)pvVar7;
        uVar12 = ((long)sVar11 >> 3) + 1;
        if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e1454 to 009e1467 has its CatchHandler @ 009e14dc */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar8 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
        uVar9 = (long)uVar8 >> 2;
        if (uVar12 <= uVar9) {
          uVar12 = uVar9;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar12 = 0x1fffffffffffffff;
        }
        if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 009e0eb4 to 009e0eb7 has its CatchHandler @ 009e14dc */
        pvVar4 = operator_new(uVar12 << 3);
        puVar13 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
        puVar15 = puVar13 + 1;
        *puVar13 = 0x3e000000bec00000;
        if (0 < (long)sVar11) {
          memcpy(pvVar4,pvVar7,sVar11);
        }
        *(void **)(this + 200) = pvVar4;
        *(undefined8 **)(this + 0xd0) = puVar15;
        *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar12 * 8);
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7);
          puVar15 = *(undefined8 **)(this + 0xd0);
        }
      }
      if (puVar15 < *(undefined8 **)(this + 0xd8)) {
        uVar19 = 0x3ec000003e000000;
        goto LAB_009e103c;
      }
      pvVar7 = *ppvVar10;
      sVar11 = (long)puVar15 - (long)pvVar7;
      uVar12 = ((long)sVar11 >> 3) + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e1468 to 009e147b has its CatchHandler @ 009e14d8 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar8 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
      uVar9 = (long)uVar8 >> 2;
      if (uVar12 <= uVar9) {
        uVar12 = uVar9;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009e0f5c to 009e0f5f has its CatchHandler @ 009e14d8 */
      pvVar4 = operator_new(uVar12 << 3);
      puVar13 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
      uVar19 = 0x3ec000003e000000;
    }
    else {
      puVar13 = *(undefined8 **)(this + 0xd0);
      if (puVar13 < *(undefined8 **)(this + 0xd8)) {
        puVar15 = puVar13 + 1;
        *puVar13 = 0xbe4000003d800000;
        *(undefined8 **)(this + 0xd0) = puVar15;
      }
      else {
        pvVar7 = *ppvVar10;
        sVar11 = (long)puVar13 - (long)pvVar7;
        uVar12 = ((long)sVar11 >> 3) + 1;
        if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e138c to 009e139f has its CatchHandler @ 009e1504 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar8 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
        uVar9 = (long)uVar8 >> 2;
        if (uVar12 <= uVar9) {
          uVar12 = uVar9;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar12 = 0x1fffffffffffffff;
        }
        if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 009e07f4 to 009e07f7 has its CatchHandler @ 009e1504 */
        pvVar4 = operator_new(uVar12 << 3);
        puVar13 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
        puVar15 = puVar13 + 1;
        *puVar13 = 0xbe4000003d800000;
        if (0 < (long)sVar11) {
          memcpy(pvVar4,pvVar7,sVar11);
        }
        *(void **)(this + 200) = pvVar4;
        *(undefined8 **)(this + 0xd0) = puVar15;
        *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar12 * 8);
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7);
          puVar15 = *(undefined8 **)(this + 0xd0);
        }
      }
      if (puVar15 < *(undefined8 **)(this + 0xd8)) {
        puVar17 = puVar15 + 1;
        *puVar15 = 0x3e400000bd800000;
        *(undefined8 **)(this + 0xd0) = puVar17;
      }
      else {
        pvVar7 = *ppvVar10;
        sVar11 = (long)puVar15 - (long)pvVar7;
        uVar12 = ((long)sVar11 >> 3) + 1;
        if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e13a0 to 009e13b3 has its CatchHandler @ 009e1500 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar8 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
        uVar9 = (long)uVar8 >> 2;
        if (uVar12 <= uVar9) {
          uVar12 = uVar9;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar12 = 0x1fffffffffffffff;
        }
        if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 009e08c8 to 009e08cb has its CatchHandler @ 009e1500 */
        pvVar4 = operator_new(uVar12 << 3);
        puVar13 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
        puVar17 = puVar13 + 1;
        *puVar13 = 0x3e400000bd800000;
        if (0 < (long)sVar11) {
          memcpy(pvVar4,pvVar7,sVar11);
        }
        *(void **)(this + 200) = pvVar4;
        *(undefined8 **)(this + 0xd0) = puVar17;
        *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar12 * 8);
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7);
          puVar17 = *(undefined8 **)(this + 0xd0);
        }
      }
      if (puVar17 < *(undefined8 **)(this + 0xd8)) {
        puVar15 = puVar17 + 1;
        *puVar17 = 0x3d8000003ea00000;
        *(undefined8 **)(this + 0xd0) = puVar15;
      }
      else {
        pvVar7 = *ppvVar10;
        sVar11 = (long)puVar17 - (long)pvVar7;
        uVar12 = ((long)sVar11 >> 3) + 1;
        if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e13b4 to 009e13c7 has its CatchHandler @ 009e14fc */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar8 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
        uVar9 = (long)uVar8 >> 2;
        if (uVar12 <= uVar9) {
          uVar12 = uVar9;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar12 = 0x1fffffffffffffff;
        }
        if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 009e0978 to 009e097b has its CatchHandler @ 009e14fc */
        pvVar4 = operator_new(uVar12 << 3);
        puVar13 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
        puVar15 = puVar13 + 1;
        *puVar13 = 0x3d8000003ea00000;
        if (0 < (long)sVar11) {
          memcpy(pvVar4,pvVar7,sVar11);
        }
        *(void **)(this + 200) = pvVar4;
        *(undefined8 **)(this + 0xd0) = puVar15;
        *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar12 * 8);
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7);
          puVar15 = *(undefined8 **)(this + 0xd0);
        }
      }
      if (puVar15 < *(undefined8 **)(this + 0xd8)) {
        puVar17 = puVar15 + 1;
        *puVar15 = 0xbea00000be400000;
        *(undefined8 **)(this + 0xd0) = puVar17;
      }
      else {
        pvVar7 = *ppvVar10;
        sVar11 = (long)puVar15 - (long)pvVar7;
        uVar12 = ((long)sVar11 >> 3) + 1;
        if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e13c8 to 009e13db has its CatchHandler @ 009e14f8 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar8 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
        uVar9 = (long)uVar8 >> 2;
        if (uVar12 <= uVar9) {
          uVar12 = uVar9;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar12 = 0x1fffffffffffffff;
        }
        if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 009e0a28 to 009e0a2b has its CatchHandler @ 009e14f8 */
        pvVar4 = operator_new(uVar12 << 3);
        puVar13 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
        puVar17 = puVar13 + 1;
        *puVar13 = 0xbea00000be400000;
        if (0 < (long)sVar11) {
          memcpy(pvVar4,pvVar7,sVar11);
        }
        *(void **)(this + 200) = pvVar4;
        *(undefined8 **)(this + 0xd0) = puVar17;
        *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar12 * 8);
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7);
          puVar17 = *(undefined8 **)(this + 0xd0);
        }
      }
      if (puVar17 < *(undefined8 **)(this + 0xd8)) {
        puVar15 = puVar17 + 1;
        *puVar17 = 0x3ea00000bea00000;
        *(undefined8 **)(this + 0xd0) = puVar15;
      }
      else {
        pvVar7 = *ppvVar10;
        sVar11 = (long)puVar17 - (long)pvVar7;
        uVar12 = ((long)sVar11 >> 3) + 1;
        if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e13dc to 009e13ef has its CatchHandler @ 009e14f4 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar8 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
        uVar9 = (long)uVar8 >> 2;
        if (uVar12 <= uVar9) {
          uVar12 = uVar9;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar12 = 0x1fffffffffffffff;
        }
        if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 009e0ad8 to 009e0adb has its CatchHandler @ 009e14f4 */
        pvVar4 = operator_new(uVar12 << 3);
        puVar13 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
        puVar15 = puVar13 + 1;
        *puVar13 = 0x3ea00000bea00000;
        if (0 < (long)sVar11) {
          memcpy(pvVar4,pvVar7,sVar11);
        }
        *(void **)(this + 200) = pvVar4;
        *(undefined8 **)(this + 0xd0) = puVar15;
        *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar12 * 8);
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7);
          puVar15 = *(undefined8 **)(this + 0xd0);
        }
      }
      if (puVar15 < *(undefined8 **)(this + 0xd8)) {
        puVar17 = puVar15 + 1;
        *puVar15 = 0xbd800000bee00000;
        *(undefined8 **)(this + 0xd0) = puVar17;
      }
      else {
        pvVar7 = *ppvVar10;
        sVar11 = (long)puVar15 - (long)pvVar7;
        uVar12 = ((long)sVar11 >> 3) + 1;
        if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e13f0 to 009e1403 has its CatchHandler @ 009e14f0 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar8 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
        uVar9 = (long)uVar8 >> 2;
        if (uVar12 <= uVar9) {
          uVar12 = uVar9;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar12 = 0x1fffffffffffffff;
        }
        if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 009e0b88 to 009e0b8b has its CatchHandler @ 009e14f0 */
        pvVar4 = operator_new(uVar12 << 3);
        puVar13 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
        puVar17 = puVar13 + 1;
        *puVar13 = 0xbd800000bee00000;
        if (0 < (long)sVar11) {
          memcpy(pvVar4,pvVar7,sVar11);
        }
        *(void **)(this + 200) = pvVar4;
        *(undefined8 **)(this + 0xd0) = puVar17;
        *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar12 * 8);
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7);
          puVar17 = *(undefined8 **)(this + 0xd0);
        }
      }
      if (puVar17 < *(undefined8 **)(this + 0xd8)) {
        puVar15 = puVar17 + 1;
        *puVar17 = 0x3ee000003e400000;
        *(undefined8 **)(this + 0xd0) = puVar15;
      }
      else {
        pvVar7 = *ppvVar10;
        sVar11 = (long)puVar17 - (long)pvVar7;
        uVar12 = ((long)sVar11 >> 3) + 1;
        if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e1404 to 009e1417 has its CatchHandler @ 009e14ec */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar8 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
        uVar9 = (long)uVar8 >> 2;
        if (uVar12 <= uVar9) {
          uVar12 = uVar9;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar12 = 0x1fffffffffffffff;
        }
        if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 009e0c38 to 009e0c3b has its CatchHandler @ 009e14ec */
        pvVar4 = operator_new(uVar12 << 3);
        puVar13 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
        puVar15 = puVar13 + 1;
        *puVar13 = 0x3ee000003e400000;
        if (0 < (long)sVar11) {
          memcpy(pvVar4,pvVar7,sVar11);
        }
        *(void **)(this + 200) = pvVar4;
        *(undefined8 **)(this + 0xd0) = puVar15;
        *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar12 * 8);
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7);
          puVar15 = *(undefined8 **)(this + 0xd0);
        }
      }
      if (puVar15 < *(undefined8 **)(this + 0xd8)) {
        uVar19 = 0xbee000003ee00000;
LAB_009e103c:
        *puVar15 = uVar19;
        *(undefined8 **)(this + 0xd0) = puVar15 + 1;
        goto LAB_009e10e0;
      }
      pvVar7 = *ppvVar10;
      sVar11 = (long)puVar15 - (long)pvVar7;
      uVar12 = ((long)sVar11 >> 3) + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e1418 to 009e142b has its CatchHandler @ 009e14e8 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar8 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
      uVar9 = (long)uVar8 >> 2;
      if (uVar12 <= uVar9) {
        uVar12 = uVar9;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009e0ce0 to 009e0ce3 has its CatchHandler @ 009e14e8 */
      pvVar4 = operator_new(uVar12 << 3);
      puVar13 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
      uVar19 = 0xbee000003ee00000;
    }
    *puVar13 = uVar19;
    if (0 < (long)sVar11) {
      memcpy(pvVar4,pvVar7,sVar11);
    }
    *(void **)(this + 200) = pvVar4;
    *(undefined8 **)(this + 0xd0) = puVar13 + 1;
    *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar12 * 8);
  }
  else {
    ppvVar14 = (void **)(this + 0xd8);
    puVar13 = (undefined8 *)(this + 0xd0);
    puVar15 = (undefined8 *)*puVar13;
    if (puVar15 < *ppvVar14) {
      puVar17 = puVar15 + 1;
      *puVar15 = 0x3d8000003d800000;
      *puVar13 = puVar17;
    }
    else {
      pvVar7 = *ppvVar10;
      sVar11 = (long)puVar15 - (long)pvVar7;
      uVar12 = ((long)sVar11 >> 3) + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e124c to 009e125f has its CatchHandler @ 009e1548 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar8 = (long)*ppvVar14 - (long)pvVar7;
      uVar9 = (long)uVar8 >> 2;
      if (uVar12 <= uVar9) {
        uVar12 = uVar9;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dfca0 to 009dfca3 has its CatchHandler @ 009e1548 */
      pvVar4 = operator_new(uVar12 << 3);
      puVar15 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
      puVar17 = puVar15 + 1;
      *puVar15 = 0x3d8000003d800000;
      if (0 < (long)sVar11) {
        memcpy(pvVar4,pvVar7,sVar11);
      }
      *ppvVar10 = pvVar4;
      *puVar13 = puVar17;
      *ppvVar14 = (void *)((long)pvVar4 + uVar12 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar17 = (undefined8 *)*puVar13;
      }
    }
    if (puVar17 < *ppvVar14) {
      puVar16 = puVar17 + 1;
      *puVar17 = 0xbe400000bd800000;
      *puVar13 = puVar16;
    }
    else {
      pvVar7 = *ppvVar10;
      sVar11 = (long)puVar17 - (long)pvVar7;
      uVar12 = ((long)sVar11 >> 3) + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e1260 to 009e1273 has its CatchHandler @ 009e1544 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar8 = (long)*ppvVar14 - (long)pvVar7;
      uVar9 = (long)uVar8 >> 2;
      if (uVar12 <= uVar9) {
        uVar12 = uVar9;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dfd7c to 009dfd7f has its CatchHandler @ 009e1544 */
      pvVar4 = operator_new(uVar12 << 3);
      puVar15 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
      puVar16 = puVar15 + 1;
      *puVar15 = 0xbe400000bd800000;
      if (0 < (long)sVar11) {
        memcpy(pvVar4,pvVar7,sVar11);
      }
      *ppvVar10 = pvVar4;
      *puVar13 = puVar16;
      *ppvVar14 = (void *)((long)pvVar4 + uVar12 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar16 = (undefined8 *)*puVar13;
      }
    }
    if (puVar16 < *ppvVar14) {
      puVar17 = puVar16 + 1;
      *puVar16 = 0xbe000000be400000;
      *puVar13 = puVar17;
    }
    else {
      pvVar7 = *ppvVar10;
      sVar11 = (long)puVar16 - (long)pvVar7;
      uVar12 = ((long)sVar11 >> 3) + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e1274 to 009e1287 has its CatchHandler @ 009e1540 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar8 = (long)*ppvVar14 - (long)pvVar7;
      uVar9 = (long)uVar8 >> 2;
      if (uVar12 <= uVar9) {
        uVar12 = uVar9;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dfe30 to 009dfe33 has its CatchHandler @ 009e1540 */
      pvVar4 = operator_new(uVar12 << 3);
      puVar15 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
      puVar17 = puVar15 + 1;
      *puVar15 = 0xbe000000be400000;
      if (0 < (long)sVar11) {
        memcpy(pvVar4,pvVar7,sVar11);
      }
      *ppvVar10 = pvVar4;
      *puVar13 = puVar17;
      *ppvVar14 = (void *)((long)pvVar4 + uVar12 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar17 = (undefined8 *)*puVar13;
      }
    }
    if (puVar17 < *ppvVar14) {
      puVar16 = puVar17 + 1;
      *puVar17 = 0xbd8000003e800000;
      *puVar13 = puVar16;
    }
    else {
      pvVar7 = *ppvVar10;
      sVar11 = (long)puVar17 - (long)pvVar7;
      uVar12 = ((long)sVar11 >> 3) + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e1288 to 009e129b has its CatchHandler @ 009e153c */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar8 = (long)*ppvVar14 - (long)pvVar7;
      uVar9 = (long)uVar8 >> 2;
      if (uVar12 <= uVar9) {
        uVar12 = uVar9;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dfee4 to 009dfee7 has its CatchHandler @ 009e153c */
      pvVar4 = operator_new(uVar12 << 3);
      puVar15 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
      puVar16 = puVar15 + 1;
      *puVar15 = 0xbd8000003e800000;
      if (0 < (long)sVar11) {
        memcpy(pvVar4,pvVar7,sVar11);
      }
      *ppvVar10 = pvVar4;
      *puVar13 = puVar16;
      *ppvVar14 = (void *)((long)pvVar4 + uVar12 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar16 = (undefined8 *)*puVar13;
      }
    }
    if (puVar16 < *ppvVar14) {
      puVar17 = puVar16 + 1;
      *puVar16 = 0xbe000000bea00000;
      *puVar13 = puVar17;
    }
    else {
      pvVar7 = *ppvVar10;
      sVar11 = (long)puVar16 - (long)pvVar7;
      uVar12 = ((long)sVar11 >> 3) + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e129c to 009e12af has its CatchHandler @ 009e1538 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar8 = (long)*ppvVar14 - (long)pvVar7;
      uVar9 = (long)uVar8 >> 2;
      if (uVar12 <= uVar9) {
        uVar12 = uVar9;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dff98 to 009dff9b has its CatchHandler @ 009e1538 */
      pvVar4 = operator_new(uVar12 << 3);
      puVar15 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
      puVar17 = puVar15 + 1;
      *puVar15 = 0xbe000000bea00000;
      if (0 < (long)sVar11) {
        memcpy(pvVar4,pvVar7,sVar11);
      }
      *ppvVar10 = pvVar4;
      *puVar13 = puVar17;
      *ppvVar14 = (void *)((long)pvVar4 + uVar12 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar17 = (undefined8 *)*puVar13;
      }
    }
    if (puVar17 < *ppvVar14) {
      puVar16 = puVar17 + 1;
      *puVar17 = 0x3ea000003e000000;
      *puVar13 = puVar16;
    }
    else {
      pvVar7 = *ppvVar10;
      sVar11 = (long)puVar17 - (long)pvVar7;
      uVar12 = ((long)sVar11 >> 3) + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e12b0 to 009e12c3 has its CatchHandler @ 009e1534 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar8 = (long)*ppvVar14 - (long)pvVar7;
      uVar9 = (long)uVar8 >> 2;
      if (uVar12 <= uVar9) {
        uVar12 = uVar9;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009e004c to 009e004f has its CatchHandler @ 009e1534 */
      pvVar4 = operator_new(uVar12 << 3);
      puVar15 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
      puVar16 = puVar15 + 1;
      *puVar15 = 0x3ea000003e000000;
      if (0 < (long)sVar11) {
        memcpy(pvVar4,pvVar7,sVar11);
      }
      *ppvVar10 = pvVar4;
      *puVar13 = puVar16;
      *ppvVar14 = (void *)((long)pvVar4 + uVar12 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar16 = (undefined8 *)*puVar13;
      }
    }
    if (puVar16 < *ppvVar14) {
      puVar17 = puVar16 + 1;
      *puVar16 = 0x3e4000003ea00000;
      *puVar13 = puVar17;
    }
    else {
      pvVar7 = *ppvVar10;
      sVar11 = (long)puVar16 - (long)pvVar7;
      uVar12 = ((long)sVar11 >> 3) + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e12c4 to 009e12d7 has its CatchHandler @ 009e1530 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar8 = (long)*ppvVar14 - (long)pvVar7;
      uVar9 = (long)uVar8 >> 2;
      if (uVar12 <= uVar9) {
        uVar12 = uVar9;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009e0100 to 009e0103 has its CatchHandler @ 009e1530 */
      pvVar4 = operator_new(uVar12 << 3);
      puVar15 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
      puVar17 = puVar15 + 1;
      *puVar15 = 0x3e4000003ea00000;
      if (0 < (long)sVar11) {
        memcpy(pvVar4,pvVar7,sVar11);
      }
      *ppvVar10 = pvVar4;
      *puVar13 = puVar17;
      *ppvVar14 = (void *)((long)pvVar4 + uVar12 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar17 = (undefined8 *)*puVar13;
      }
    }
    if (puVar17 < *ppvVar14) {
      puVar16 = puVar17 + 1;
      *puVar17 = 0xbea000003e400000;
      *puVar13 = puVar16;
    }
    else {
      pvVar7 = *ppvVar10;
      sVar11 = (long)puVar17 - (long)pvVar7;
      uVar12 = ((long)sVar11 >> 3) + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e12d8 to 009e12eb has its CatchHandler @ 009e152c */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar8 = (long)*ppvVar14 - (long)pvVar7;
      uVar9 = (long)uVar8 >> 2;
      if (uVar12 <= uVar9) {
        uVar12 = uVar9;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009e01b4 to 009e01b7 has its CatchHandler @ 009e152c */
      pvVar4 = operator_new(uVar12 << 3);
      puVar15 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
      puVar16 = puVar15 + 1;
      *puVar15 = 0xbea000003e400000;
      if (0 < (long)sVar11) {
        memcpy(pvVar4,pvVar7,sVar11);
      }
      *ppvVar10 = pvVar4;
      *puVar13 = puVar16;
      *ppvVar14 = (void *)((long)pvVar4 + uVar12 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar16 = (undefined8 *)*puVar13;
      }
    }
    if (puVar16 < *ppvVar14) {
      puVar17 = puVar16 + 1;
      *puVar16 = 0x3ec00000be000000;
      *puVar13 = puVar17;
    }
    else {
      pvVar7 = *ppvVar10;
      sVar11 = (long)puVar16 - (long)pvVar7;
      uVar12 = ((long)sVar11 >> 3) + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e12ec to 009e12ff has its CatchHandler @ 009e1528 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar8 = (long)*ppvVar14 - (long)pvVar7;
      uVar9 = (long)uVar8 >> 2;
      if (uVar12 <= uVar9) {
        uVar12 = uVar9;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009e0268 to 009e026b has its CatchHandler @ 009e1528 */
      pvVar4 = operator_new(uVar12 << 3);
      puVar15 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
      puVar17 = puVar15 + 1;
      *puVar15 = 0x3ec00000be000000;
      if (0 < (long)sVar11) {
        memcpy(pvVar4,pvVar7,sVar11);
      }
      *ppvVar10 = pvVar4;
      *puVar13 = puVar17;
      *ppvVar14 = (void *)((long)pvVar4 + uVar12 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar17 = (undefined8 *)*puVar13;
      }
    }
    if (puVar17 < *ppvVar14) {
      puVar16 = puVar17 + 1;
      *puVar17 = 0xbee0000000000000;
      *puVar13 = puVar16;
    }
    else {
      pvVar7 = *ppvVar10;
      sVar11 = (long)puVar17 - (long)pvVar7;
      uVar12 = ((long)sVar11 >> 3) + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e1300 to 009e1313 has its CatchHandler @ 009e1524 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar8 = (long)*ppvVar14 - (long)pvVar7;
      uVar9 = (long)uVar8 >> 2;
      if (uVar12 <= uVar9) {
        uVar12 = uVar9;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009e031c to 009e031f has its CatchHandler @ 009e1524 */
      pvVar4 = operator_new(uVar12 << 3);
      puVar15 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
      puVar16 = puVar15 + 1;
      *puVar15 = 0xbee0000000000000;
      if (0 < (long)sVar11) {
        memcpy(pvVar4,pvVar7,sVar11);
      }
      *ppvVar10 = pvVar4;
      *puVar13 = puVar16;
      *ppvVar14 = (void *)((long)pvVar4 + uVar12 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar16 = (undefined8 *)*puVar13;
      }
    }
    if (puVar16 < *ppvVar14) {
      puVar17 = puVar16 + 1;
      *puVar16 = 0xbec00000be800000;
      *puVar13 = puVar17;
    }
    else {
      pvVar7 = *ppvVar10;
      sVar11 = (long)puVar16 - (long)pvVar7;
      uVar12 = ((long)sVar11 >> 3) + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e1314 to 009e1327 has its CatchHandler @ 009e1520 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar8 = (long)*ppvVar14 - (long)pvVar7;
      uVar9 = (long)uVar8 >> 2;
      if (uVar12 <= uVar9) {
        uVar12 = uVar9;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009e03d0 to 009e03d3 has its CatchHandler @ 009e1520 */
      pvVar4 = operator_new(uVar12 << 3);
      puVar15 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
      puVar17 = puVar15 + 1;
      *puVar15 = 0xbec00000be800000;
      if (0 < (long)sVar11) {
        memcpy(pvVar4,pvVar7,sVar11);
      }
      *ppvVar10 = pvVar4;
      *puVar13 = puVar17;
      *ppvVar14 = (void *)((long)pvVar4 + uVar12 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar17 = (undefined8 *)*puVar13;
      }
    }
    if (puVar17 < *ppvVar14) {
      puVar16 = puVar17 + 1;
      *puVar17 = 0x3e800000bec00000;
      *puVar13 = puVar16;
    }
    else {
      pvVar7 = *ppvVar10;
      sVar11 = (long)puVar17 - (long)pvVar7;
      uVar12 = ((long)sVar11 >> 3) + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e1328 to 009e133b has its CatchHandler @ 009e151c */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar8 = (long)*ppvVar14 - (long)pvVar7;
      uVar9 = (long)uVar8 >> 2;
      if (uVar12 <= uVar9) {
        uVar12 = uVar9;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009e0484 to 009e0487 has its CatchHandler @ 009e151c */
      pvVar4 = operator_new(uVar12 << 3);
      puVar15 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
      puVar16 = puVar15 + 1;
      *puVar15 = 0x3e800000bec00000;
      if (0 < (long)sVar11) {
        memcpy(pvVar4,pvVar7,sVar11);
      }
      *ppvVar10 = pvVar4;
      *puVar13 = puVar16;
      *ppvVar14 = (void *)((long)pvVar4 + uVar12 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar16 = (undefined8 *)*puVar13;
      }
    }
    if (puVar16 < *ppvVar14) {
      puVar17 = puVar16 + 1;
      *puVar16 = 0xbf000000;
      *puVar13 = puVar17;
    }
    else {
      pvVar7 = *ppvVar10;
      sVar11 = (long)puVar16 - (long)pvVar7;
      uVar12 = ((long)sVar11 >> 3) + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e133c to 009e134f has its CatchHandler @ 009e1518 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar8 = (long)*ppvVar14 - (long)pvVar7;
      uVar9 = (long)uVar8 >> 2;
      if (uVar12 <= uVar9) {
        uVar12 = uVar9;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009e0538 to 009e053b has its CatchHandler @ 009e1518 */
      pvVar4 = operator_new(uVar12 << 3);
      puVar15 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
      puVar17 = puVar15 + 1;
      *puVar15 = 0xbf000000;
      if (0 < (long)sVar11) {
        memcpy(pvVar4,pvVar7,sVar11);
      }
      *ppvVar10 = pvVar4;
      *puVar13 = puVar17;
      *ppvVar14 = (void *)((long)pvVar4 + uVar12 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar17 = (undefined8 *)*puVar13;
      }
    }
    if (puVar17 < *ppvVar14) {
      puVar16 = puVar17 + 1;
      *puVar17 = 0xbe8000003ee00000;
      *puVar13 = puVar16;
    }
    else {
      pvVar7 = *ppvVar10;
      sVar11 = (long)puVar17 - (long)pvVar7;
      uVar12 = ((long)sVar11 >> 3) + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e1350 to 009e1363 has its CatchHandler @ 009e1514 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar8 = (long)*ppvVar14 - (long)pvVar7;
      uVar9 = (long)uVar8 >> 2;
      if (uVar12 <= uVar9) {
        uVar12 = uVar9;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009e05ec to 009e05ef has its CatchHandler @ 009e1514 */
      pvVar4 = operator_new(uVar12 << 3);
      puVar15 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
      puVar16 = puVar15 + 1;
      *puVar15 = 0xbe8000003ee00000;
      if (0 < (long)sVar11) {
        memcpy(pvVar4,pvVar7,sVar11);
      }
      *ppvVar10 = pvVar4;
      *puVar13 = puVar16;
      *ppvVar14 = (void *)((long)pvVar4 + uVar12 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar16 = (undefined8 *)*puVar13;
      }
    }
    if (puVar16 < *ppvVar14) {
      puVar17 = puVar16 + 1;
      *puVar16 = 0x3ee000003ec00000;
      *puVar13 = puVar17;
    }
    else {
      pvVar7 = *ppvVar10;
      sVar11 = (long)puVar16 - (long)pvVar7;
      uVar12 = ((long)sVar11 >> 3) + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e1364 to 009e1377 has its CatchHandler @ 009e1510 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar8 = (long)*ppvVar14 - (long)pvVar7;
      uVar9 = (long)uVar8 >> 2;
      if (uVar12 <= uVar9) {
        uVar12 = uVar9;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009e06a0 to 009e06a3 has its CatchHandler @ 009e1510 */
      pvVar4 = operator_new(uVar12 << 3);
      puVar15 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
      puVar17 = puVar15 + 1;
      *puVar15 = 0x3ee000003ec00000;
      if (0 < (long)sVar11) {
        memcpy(pvVar4,pvVar7,sVar11);
      }
      *ppvVar10 = pvVar4;
      *puVar13 = puVar17;
      *ppvVar14 = (void *)((long)pvVar4 + uVar12 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar17 = (undefined8 *)*puVar13;
      }
    }
    if (puVar17 < *ppvVar14) {
      *puVar17 = 0xbf000000bee00000;
      *puVar13 = puVar17 + 1;
      goto LAB_009e10e0;
    }
    pvVar7 = *ppvVar10;
    sVar11 = (long)puVar17 - (long)pvVar7;
    uVar12 = ((long)sVar11 >> 3) + 1;
    if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 009e1378 to 009e138b has its CatchHandler @ 009e1508 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar8 = (long)*ppvVar14 - (long)pvVar7;
    uVar9 = (long)uVar8 >> 2;
    if (uVar12 <= uVar9) {
      uVar12 = uVar9;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar12 = 0x1fffffffffffffff;
    }
    if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
                    /* try { // try from 009e075c to 009e075f has its CatchHandler @ 009e1508 */
    pvVar4 = operator_new(uVar12 << 3);
    puVar15 = (undefined8 *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
    *puVar15 = 0xbf000000bee00000;
    if (0 < (long)sVar11) {
      memcpy(pvVar4,pvVar7,sVar11);
    }
    *puVar13 = puVar15 + 1;
    *ppvVar14 = (void *)((long)pvVar4 + uVar12 * 8);
    *ppvVar10 = pvVar4;
  }
joined_r0x009e0f98:
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
LAB_009e10e0:
                    /* try { // try from 009e10e0 to 009e10ef has its CatchHandler @ 009e15a4 */
  EngineManager::getInstance();
  pTVar5 = (TransformGroup *)Renderer::getRootNode();
  lVar6 = ProceduralPlacementManager::getTerrainNode(pTVar5);
  *(long *)(this + 0xe0) = lVar6 + 0x170;
                    /* try { // try from 009e10f8 to 009e10fb has its CatchHandler @ 009e154c */
  fVar18 = (float)BaseTerrain::getUnitsPerPixel();
                    /* try { // try from 009e1104 to 009e1157 has its CatchHandler @ 009e15a8 */
  iVar2 = BaseTerrain::getHeightMapSize();
  iVar2 = (int)((fVar18 * (float)(ulong)(iVar2 - 1)) / param_3 + 0.5);
  *(int *)(this + 0x50) = iVar2;
  *(int *)(this + 0x54) = iVar2;
  iVar2 = (**(code **)(*(long *)this + 0x40))(this);
  iVar3 = (**(code **)(*(long *)this + 0x48))(this);
  pvVar7 = operator_new__((ulong)(uint)(iVar3 * iVar2) << 2);
  uVar12 = 0;
  *(void **)(this + 0x58) = pvVar7;
  while( true ) {
                    /* try { // try from 009e1168 to 009e1183 has its CatchHandler @ 009e15ac */
    iVar2 = (**(code **)(*(long *)this + 0x40))(this);
    iVar3 = (**(code **)(*(long *)this + 0x48))(this);
    if ((uint)(iVar3 * iVar2) <= uVar12) break;
    *(undefined4 *)(*(long *)(this + 0x58) + uVar12 * 4) = 0;
    uVar12 = uVar12 + 1;
  }
                    /* try { // try from 009e11a0 to 009e11a7 has its CatchHandler @ 009e15a8 */
  updateRegion();
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


