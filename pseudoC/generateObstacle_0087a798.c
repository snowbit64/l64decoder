// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateObstacle
// Entry Point: 0087a798
// Size: 3084 bytes
// Signature: undefined __thiscall generateObstacle(ObstacleWallDetector * this, vector * param_1, Vector2 * param_2, ObstacleAvoidance * param_3)


/* ObstacleWallDetector::generateObstacle(std::__ndk1::vector<ObstacleWallDetector::HitPoint,
   std::__ndk1::allocator<ObstacleWallDetector::HitPoint> >&, Vector2 const&, ObstacleAvoidance*) */

void __thiscall
ObstacleWallDetector::generateObstacle
          (ObstacleWallDetector *this,vector *param_1,Vector2 *param_2,ObstacleAvoidance *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  float *pfVar4;
  undefined8 *puVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  size_t sVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float *local_e0;
  float *local_d8;
  float *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  __less a_Stack_b0 [8];
  long local_a8;
  
  lVar2 = tpidr_el0;
  local_a8 = *(long *)(lVar2 + 0x28);
  local_c8 = (undefined8 *)0x0;
  local_c0 = (undefined8 *)0x0;
  local_b8 = (undefined8 *)0x0;
  local_e0 = (float *)0x0;
  local_d8 = (float *)0x0;
  local_d0 = (float *)0x0;
                    /* try { // try from 0087a7f0 to 0087a7f7 has its CatchHandler @ 0087b3b4 */
  std::__ndk1::
  __sort<std::__ndk1::__less<ObstacleWallDetector::HitPoint,ObstacleWallDetector::HitPoint>&,ObstacleWallDetector::HitPoint*>
            (*(HitPoint **)param_1,*(HitPoint **)(param_1 + 8),a_Stack_b0);
  lVar6 = *(long *)param_1;
  lVar15 = 0x14;
  if (*(long *)(param_1 + 8) - lVar6 == 0x14) {
    uVar13 = 0;
  }
  else {
    uVar9 = 0;
    do {
      puVar3 = local_c8;
      pfVar7 = local_e0;
      uVar11 = (ulong)((int)uVar9 + 1);
      puVar10 = (undefined8 *)(lVar6 + uVar9 * 0x14);
      pfVar8 = (float *)(lVar6 + uVar11 * 0x14);
      fVar16 = *(float *)((long)puVar10 + 4);
      fVar17 = *(float *)puVar10 - *pfVar8;
      fVar18 = fVar16 - pfVar8[1];
      fVar17 = (float)NEON_fmadd(fVar18,fVar18,fVar17 * fVar17);
      if (2.25 <= fVar17) {
        if (local_c8 != local_c0) {
          fVar16 = *(float *)((long)local_c8 + 4) - *(float *)((long)local_c0 + -4);
          fVar17 = *(float *)local_c8 - *(float *)(local_c0 + -1);
          fVar19 = (float)NEON_fmadd(fVar17,fVar17,fVar16 * fVar16);
          fVar18 = 1.0;
          if (1e-06 < fVar19) {
            fVar18 = 1.0 / SQRT(fVar19);
          }
          if (local_d8 == local_d0) {
            uVar14 = (long)local_d8 - (long)local_e0;
            uVar13 = ((long)uVar14 >> 3) + 1;
            if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar13 <= (ulong)((long)uVar14 >> 2)) {
              uVar13 = (long)uVar14 >> 2;
            }
            if (0x7ffffffffffffff7 < uVar14) {
              uVar13 = 0x1fffffffffffffff;
            }
            if (uVar13 >> 0x3d != 0) {
                    /* try { // try from 0087b330 to 0087b343 has its CatchHandler @ 0087b3c4 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 0087aa04 to 0087aa07 has its CatchHandler @ 0087b3e4 */
            pfVar4 = (float *)operator_new(uVar13 << 3);
            pfVar8 = pfVar4 + ((long)uVar14 >> 3) * 2;
            *pfVar8 = fVar17 * fVar18;
            pfVar8[1] = fVar16 * fVar18;
            if (0 < (long)uVar14) {
              memcpy(pfVar4,pfVar7,uVar14);
            }
            local_d8 = pfVar8 + 2;
            local_d0 = pfVar4 + uVar13 * 2;
            local_e0 = pfVar4;
            if (pfVar7 != (float *)0x0) {
              operator_delete(pfVar7);
            }
          }
          else {
            *local_d8 = fVar17 * fVar18;
            local_d8[1] = fVar16 * fVar18;
            local_d8 = local_d8 + 2;
          }
                    /* try { // try from 0087aa48 to 0087aa57 has its CatchHandler @ 0087b3e4 */
          ObstacleAvoidance::addObstacle(param_3,(vector *)&local_c8,(vector *)&local_e0);
          lVar6 = *(long *)param_1;
          local_c0 = local_c8;
          local_d8 = local_e0;
          fVar16 = *(float *)(lVar6 + uVar9 * 0x14 + 4);
        }
        puVar3 = local_c8;
        pfVar7 = (float *)(lVar6 + uVar9 * 0x14);
        fVar19 = pfVar7[2];
        fVar20 = pfVar7[3];
        fVar21 = fVar20 * 1.5 * 0.5;
        fVar17 = fVar19 * -1.5 * 0.5;
        fVar18 = *pfVar7 + fVar21;
        fVar16 = fVar16 + fVar17;
        if (local_c8 < local_b8) {
          local_c0 = local_c8 + 1;
          *(float *)local_c8 = fVar18;
          *(float *)((long)local_c8 + 4) = fVar16;
        }
        else {
          uVar14 = (long)local_b8 - (long)local_c8;
          uVar13 = (long)uVar14 >> 2;
          if (uVar14 == 0) {
            uVar13 = 1;
          }
          if (0x7ffffffffffffff7 < uVar14) {
            uVar13 = 0x1fffffffffffffff;
          }
          if (uVar13 >> 0x3d != 0) {
                    /* try { // try from 0087b2dc to 0087b2e7 has its CatchHandler @ 0087b3cc */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 0087aaec to 0087aaef has its CatchHandler @ 0087b3d0 */
          local_c8 = (undefined8 *)operator_new(uVar13 << 3);
          local_c0 = local_c8 + 1;
          local_b8 = local_c8 + uVar13;
          *(float *)local_c8 = fVar18;
          *(float *)((long)local_c8 + 4) = fVar16;
          if (puVar3 != (undefined8 *)0x0) {
            operator_delete(puVar3);
          }
        }
        puVar3 = local_c8;
        pfVar7 = (float *)(*(long *)param_1 + uVar9 * 0x14);
        fVar21 = *pfVar7 - fVar21;
        fVar17 = pfVar7[1] - fVar17;
        if (local_c0 < local_b8) {
          *(float *)local_c0 = fVar21;
          *(float *)((long)local_c0 + 4) = fVar17;
          local_c0 = local_c0 + 1;
        }
        else {
          sVar12 = (long)local_c0 - (long)local_c8;
          uVar9 = ((long)sVar12 >> 3) + 1;
          if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 0087b2c0 to 0087b2c7 has its CatchHandler @ 0087b3e8 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar13 = (long)local_b8 - (long)local_c8 >> 2;
          if (uVar9 <= uVar13) {
            uVar9 = uVar13;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)local_b8 - (long)local_c8)) {
            uVar9 = 0x1fffffffffffffff;
          }
          if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 0087b2e8 to 0087b2f3 has its CatchHandler @ 0087b3e8 */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 0087ab88 to 0087ab8b has its CatchHandler @ 0087b3c8 */
          puVar5 = (undefined8 *)operator_new(uVar9 << 3);
          puVar10 = puVar5 + ((long)sVar12 >> 3);
          *(float *)puVar10 = fVar21;
          *(float *)((long)puVar10 + 4) = fVar17;
          if (0 < (long)sVar12) {
            memcpy(puVar5,puVar3,sVar12);
          }
          local_c0 = puVar10 + 1;
          local_b8 = puVar5 + uVar9;
          local_c8 = puVar5;
          if (puVar3 != (undefined8 *)0x0) {
            operator_delete(puVar3);
          }
        }
        pfVar7 = local_e0;
        if (local_d8 == local_d0) {
          uVar13 = (long)local_d8 - (long)local_e0;
          uVar9 = ((long)uVar13 >> 3) + 1;
          if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar9 <= (ulong)((long)uVar13 >> 2)) {
            uVar9 = (long)uVar13 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar13) {
            uVar9 = 0x1fffffffffffffff;
          }
          if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 0087b2f4 to 0087b307 has its CatchHandler @ 0087b3e0 */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 0087ac2c to 0087ac2f has its CatchHandler @ 0087b3f0 */
          pfVar4 = (float *)operator_new(uVar9 << 3);
          pfVar8 = pfVar4 + ((long)uVar13 >> 3) * 2;
          *pfVar8 = fVar20;
          pfVar8[1] = -fVar19;
          if (0 < (long)uVar13) {
            memcpy(pfVar4,pfVar7,uVar13);
          }
          local_d8 = pfVar8 + 2;
          local_d0 = pfVar4 + uVar9 * 2;
          local_e0 = pfVar4;
          if (pfVar7 != (float *)0x0) {
            operator_delete(pfVar7);
          }
        }
        else {
          *local_d8 = fVar20;
          local_d8[1] = -fVar19;
          local_d8 = local_d8 + 2;
        }
        pfVar7 = local_e0;
        if (local_d8 < local_d0) {
          *local_d8 = -fVar20;
          local_d8[1] = fVar19;
          local_d8 = local_d8 + 2;
        }
        else {
          sVar12 = (long)local_d8 - (long)local_e0;
          uVar9 = ((long)sVar12 >> 3) + 1;
          if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar13 = (long)local_d0 - (long)local_e0 >> 2;
          if (uVar9 <= uVar13) {
            uVar9 = uVar13;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)local_d0 - (long)local_e0)) {
            uVar9 = 0x1fffffffffffffff;
          }
          if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 0087b2c8 to 0087b2db has its CatchHandler @ 0087b3ec */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 0087acd4 to 0087acd7 has its CatchHandler @ 0087b3d4 */
          pfVar4 = (float *)operator_new(uVar9 << 3);
          pfVar8 = pfVar4 + ((long)sVar12 >> 3) * 2;
          *pfVar8 = -fVar20;
          pfVar8[1] = fVar19;
          if (0 < (long)sVar12) {
            memcpy(pfVar4,pfVar7,sVar12);
          }
          local_d8 = pfVar8 + 2;
          local_d0 = pfVar4 + uVar9 * 2;
          local_e0 = pfVar4;
          if (pfVar7 != (float *)0x0) {
            operator_delete(pfVar7);
          }
        }
                    /* try { // try from 0087ad1c to 0087ad2b has its CatchHandler @ 0087b3f0 */
        ObstacleAvoidance::addObstacle(param_3,(vector *)&local_c8,(vector *)&local_e0);
        local_c0 = local_c8;
        local_d8 = local_e0;
      }
      else {
        if (local_c8 == local_c0) {
          if (local_c8 == local_b8) {
                    /* try { // try from 0087ad3c to 0087addb has its CatchHandler @ 0087b3c0 */
            local_c8 = (undefined8 *)operator_new(8);
            local_c0 = local_c8 + 1;
            *local_c8 = *puVar10;
            local_b8 = local_c0;
            if (puVar3 != (undefined8 *)0x0) {
              operator_delete(puVar3);
            }
          }
          else {
            local_c0 = local_c8 + 1;
            *local_c8 = *puVar10;
          }
        }
        puVar3 = local_c8;
        puVar10 = (undefined8 *)(*(long *)param_1 + uVar11 * 0x14);
        if (local_c0 == local_b8) {
          uVar14 = (long)local_c0 - (long)local_c8;
          uVar13 = ((long)uVar14 >> 3) + 1;
          if (uVar13 >> 0x3d != 0) {
                    /* try { // try from 0087b31c to 0087b32f has its CatchHandler @ 0087b3d8 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar13 <= (ulong)((long)uVar14 >> 2)) {
            uVar13 = (long)uVar14 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar14) {
            uVar13 = 0x1fffffffffffffff;
          }
          if (uVar13 == 0) {
            puVar5 = (undefined8 *)0x0;
          }
          else {
            if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            puVar5 = (undefined8 *)operator_new(uVar13 << 3);
          }
          puVar1 = puVar5 + ((long)uVar14 >> 3);
          *puVar1 = *puVar10;
          if (0 < (long)uVar14) {
            memcpy(puVar5,puVar3,uVar14);
          }
          local_b8 = puVar5 + uVar13;
          local_c8 = puVar5;
          local_c0 = puVar1 + 1;
          if (puVar3 != (undefined8 *)0x0) {
            operator_delete(puVar3);
          }
        }
        else {
          *local_c0 = *puVar10;
          local_c0 = local_c0 + 1;
        }
        pfVar7 = local_e0;
        pfVar4 = (float *)(*(long *)param_1 + uVar11 * 0x14);
        pfVar8 = (float *)(*(long *)param_1 + uVar9 * 0x14);
        fVar16 = pfVar4[1] - pfVar8[1];
        fVar17 = *pfVar4 - *pfVar8;
        fVar19 = (float)NEON_fmadd(fVar17,fVar17,fVar16 * fVar16);
        fVar18 = 1.0;
        if (1e-06 < fVar19) {
          fVar18 = 1.0 / SQRT(fVar19);
        }
        if (local_d8 == local_d0) {
          uVar13 = (long)local_d8 - (long)local_e0;
          uVar9 = ((long)uVar13 >> 3) + 1;
          if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar9 <= (ulong)((long)uVar13 >> 2)) {
            uVar9 = (long)uVar13 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar13) {
            uVar9 = 0x1fffffffffffffff;
          }
          if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 0087b308 to 0087b31b has its CatchHandler @ 0087b3dc */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 0087a97c to 0087a97f has its CatchHandler @ 0087b3bc */
          pfVar4 = (float *)operator_new(uVar9 << 3);
          pfVar8 = pfVar4 + ((long)uVar13 >> 3) * 2;
          *pfVar8 = fVar17 * fVar18;
          pfVar8[1] = fVar16 * fVar18;
          if (0 < (long)uVar13) {
            memcpy(pfVar4,pfVar7,uVar13);
          }
          local_d8 = pfVar8 + 2;
          local_d0 = pfVar4 + uVar9 * 2;
          local_e0 = pfVar4;
          if (pfVar7 != (float *)0x0) {
            operator_delete(pfVar7);
          }
        }
        else {
          *local_d8 = fVar17 * fVar18;
          local_d8[1] = fVar16 * fVar18;
          local_d8 = local_d8 + 2;
        }
      }
      lVar6 = *(long *)param_1;
      lVar15 = *(long *)(param_1 + 8) - lVar6;
      uVar13 = (lVar15 >> 2) * -0x3333333333333333 - 1;
      uVar9 = uVar11;
    } while (uVar11 < uVar13);
  }
  puVar3 = local_c8;
  pfVar7 = local_e0;
  if (local_c8 == local_c0) {
    if (lVar15 != 0) {
      pfVar7 = (float *)(lVar6 + uVar13 * 0x14);
      fVar16 = pfVar7[2];
      fVar17 = pfVar7[3];
      fVar18 = fVar17 * 1.5 * 0.5;
      fVar19 = fVar16 * -1.5 * 0.5;
      fVar21 = *pfVar7 + fVar18;
      fVar20 = pfVar7[1] + fVar19;
      if (local_c8 < local_b8) {
        local_c0 = local_c8 + 1;
        *(float *)local_c8 = fVar21;
        *(float *)((long)local_c8 + 4) = fVar20;
      }
      else {
        uVar11 = (long)local_b8 - (long)local_c8;
        uVar9 = (long)uVar11 >> 2;
        if (uVar11 == 0) {
          uVar9 = 1;
        }
        if (0x7ffffffffffffff7 < uVar11) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 0087b358 to 0087b363 has its CatchHandler @ 0087b3a4 */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 0087b014 to 0087b017 has its CatchHandler @ 0087b3a4 */
        local_c8 = (undefined8 *)operator_new(uVar9 << 3);
        local_c0 = local_c8 + 1;
        local_b8 = local_c8 + uVar9;
        *(float *)local_c8 = fVar21;
        *(float *)((long)local_c8 + 4) = fVar20;
        if (puVar3 != (undefined8 *)0x0) {
          operator_delete(puVar3);
        }
      }
      puVar3 = local_c8;
      pfVar7 = (float *)(*(long *)param_1 + uVar13 * 0x14);
      fVar18 = *pfVar7 - fVar18;
      fVar19 = pfVar7[1] - fVar19;
      if (local_c0 < local_b8) {
        *(float *)local_c0 = fVar18;
        *(float *)((long)local_c0 + 4) = fVar19;
        local_c0 = local_c0 + 1;
      }
      else {
        sVar12 = (long)local_c0 - (long)local_c8;
        uVar9 = ((long)sVar12 >> 3) + 1;
        if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 0087b364 to 0087b377 has its CatchHandler @ 0087b3ac */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar11 = (long)local_b8 - (long)local_c8 >> 2;
        if (uVar9 <= uVar11) {
          uVar9 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)local_b8 - (long)local_c8)) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 0087b0b4 to 0087b0b7 has its CatchHandler @ 0087b3ac */
        puVar5 = (undefined8 *)operator_new(uVar9 << 3);
        puVar10 = puVar5 + ((long)sVar12 >> 3);
        *(float *)puVar10 = fVar18;
        *(float *)((long)puVar10 + 4) = fVar19;
        if (0 < (long)sVar12) {
          memcpy(puVar5,puVar3,sVar12);
        }
        local_c8 = puVar5;
        local_c0 = puVar10 + 1;
        local_b8 = puVar5 + uVar9;
        if (puVar3 != (undefined8 *)0x0) {
          operator_delete(puVar3);
        }
      }
      pfVar7 = local_e0;
      if (local_d8 == local_d0) {
        uVar11 = (long)local_d8 - (long)local_e0;
        uVar9 = ((long)uVar11 >> 3) + 1;
        if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 0087b38c to 0087b39f has its CatchHandler @ 0087b3b0 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar9 <= (ulong)((long)uVar11 >> 2)) {
          uVar9 = (long)uVar11 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar11) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 0087b15c to 0087b15f has its CatchHandler @ 0087b3b0 */
        pfVar4 = (float *)operator_new(uVar9 << 3);
        pfVar8 = pfVar4 + ((long)uVar11 >> 3) * 2;
        *pfVar8 = fVar17;
        pfVar8[1] = -fVar16;
        if (0 < (long)uVar11) {
          memcpy(pfVar4,pfVar7,uVar11);
        }
        local_e0 = pfVar4;
        local_d8 = pfVar8 + 2;
        local_d0 = pfVar4 + uVar9 * 2;
        if (pfVar7 != (float *)0x0) {
          operator_delete(pfVar7);
        }
      }
      else {
        *local_d8 = fVar17;
        local_d8[1] = -fVar16;
        local_d8 = local_d8 + 2;
      }
      pfVar7 = local_e0;
      if (local_d8 < local_d0) {
        *local_d8 = -fVar17;
        local_d8[1] = fVar16;
        local_d8 = local_d8 + 2;
      }
      else {
        sVar12 = (long)local_d8 - (long)local_e0;
        uVar9 = ((long)sVar12 >> 3) + 1;
        if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 0087b378 to 0087b38b has its CatchHandler @ 0087b3a8 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar11 = (long)local_d0 - (long)local_e0 >> 2;
        if (uVar9 <= uVar11) {
          uVar9 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)local_d0 - (long)local_e0)) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 0087b20c to 0087b20f has its CatchHandler @ 0087b3a8 */
        pfVar4 = (float *)operator_new(uVar9 << 3);
        pfVar8 = pfVar4 + ((long)sVar12 >> 3) * 2;
        *pfVar8 = -fVar17;
        pfVar8[1] = fVar16;
        if (0 < (long)sVar12) {
          memcpy(pfVar4,pfVar7,sVar12);
        }
        local_e0 = pfVar4;
        local_d8 = pfVar8 + 2;
        local_d0 = pfVar4 + uVar9 * 2;
        if (pfVar7 != (float *)0x0) {
          operator_delete(pfVar7);
        }
      }
                    /* try { // try from 0087b250 to 0087b25f has its CatchHandler @ 0087b3b0 */
      ObstacleAvoidance::addObstacle(param_3,(vector *)&local_c8,(vector *)&local_e0);
    }
  }
  else {
    fVar16 = *(float *)((long)local_c8 + 4) - *(float *)((long)local_c0 + -4);
    fVar17 = *(float *)local_c8 - *(float *)(local_c0 + -1);
    fVar19 = (float)NEON_fmadd(fVar17,fVar17,fVar16 * fVar16);
    fVar18 = 1.0;
    if (1e-06 < fVar19) {
      fVar18 = 1.0 / SQRT(fVar19);
    }
    if (local_d8 == local_d0) {
      uVar11 = (long)local_d8 - (long)local_e0;
      uVar9 = ((long)uVar11 >> 3) + 1;
      if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 0087b344 to 0087b357 has its CatchHandler @ 0087b3b8 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar9 <= (ulong)((long)uVar11 >> 2)) {
        uVar9 = (long)uVar11 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar11) {
        uVar9 = 0x1fffffffffffffff;
      }
      if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 0087af90 to 0087af93 has its CatchHandler @ 0087b3b8 */
      pfVar4 = (float *)operator_new(uVar9 << 3);
      pfVar8 = pfVar4 + ((long)uVar11 >> 3) * 2;
      *pfVar8 = fVar17 * fVar18;
      pfVar8[1] = fVar16 * fVar18;
      if (0 < (long)uVar11) {
        memcpy(pfVar4,pfVar7,uVar11);
      }
      local_e0 = pfVar4;
      local_d8 = pfVar8 + 2;
      local_d0 = pfVar4 + uVar9 * 2;
      if (pfVar7 != (float *)0x0) {
        operator_delete(pfVar7);
      }
    }
    else {
      *local_d8 = fVar17 * fVar18;
      local_d8[1] = fVar16 * fVar18;
      local_d8 = local_d8 + 2;
    }
                    /* try { // try from 0087afd8 to 0087afe7 has its CatchHandler @ 0087b3b8 */
    ObstacleAvoidance::addObstacle(param_3,(vector *)&local_c8,(vector *)&local_e0);
  }
  if (local_e0 != (float *)0x0) {
    local_d8 = local_e0;
    operator_delete(local_e0);
  }
  if (local_c8 != (undefined8 *)0x0) {
    local_c0 = local_c8;
    operator_delete(local_c8);
  }
  if (*(long *)(lVar2 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


