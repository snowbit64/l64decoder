// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeCurveCost
// Entry Point: 0073d2a8
// Size: 3364 bytes
// Signature: undefined __cdecl computeCurveCost(Vector2 * param_1, uint param_2)


/* VehicleNavigationAgent::computeCurveCost(Vector2 const*, unsigned int) const */

void VehicleNavigationAgent::computeCurveCost(Vector2 *param_1,uint param_2)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined2 uVar7;
  long lVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  void *pvVar21;
  void *pvVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int in_w2;
  ulong uVar25;
  size_t sVar26;
  byte bVar27;
  short sVar28;
  float *pfVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 *puVar35;
  ushort uVar36;
  ushort uVar37;
  ushort uVar38;
  ushort uVar39;
  undefined8 *puVar40;
  ushort *puVar41;
  uint uVar42;
  float fVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  float fVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined8 uVar49;
  float in_s1;
  undefined8 uVar50;
  undefined8 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined4 uVar55;
  float fVar56;
  undefined4 local_100;
  undefined local_fc [4];
  undefined4 local_f8;
  ushort local_f4 [2];
  float local_f0;
  float local_ec;
  ushort local_e8 [2];
  ushort local_e4 [2];
  ushort local_e0 [2];
  ushort local_dc [2];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  long local_a0;
  
  puVar23 = (undefined8 *)(ulong)param_2;
  lVar8 = tpidr_el0;
  local_a0 = *(long *)(lVar8 + 0x28);
  iVar18 = in_w2 + -1;
  local_d8 = *puVar23;
  local_d0 = local_d8;
  if (iVar18 != 0) {
    fVar46 = (float)local_d8;
    pfVar29 = (float *)((long)puVar23 + 0xc);
    fVar43 = (float)((ulong)local_d8 >> 0x20);
    fVar52 = fVar46;
    in_s1 = fVar43;
    do {
      fVar53 = pfVar29[-1];
      if (fVar53 < fVar52) {
        local_d0 = CONCAT44(local_d0._4_4_,fVar53);
        fVar52 = fVar53;
      }
      fVar54 = *pfVar29;
      if (fVar54 < in_s1) {
        local_d0 = CONCAT44(fVar54,(undefined4)local_d0);
        in_s1 = fVar54;
      }
      if (fVar46 < fVar53) {
        local_d8 = CONCAT44(local_d8._4_4_,fVar53);
        fVar46 = fVar53;
      }
      if (fVar43 < fVar54) {
        local_d8 = CONCAT44(fVar54,(float)local_d8);
        fVar43 = fVar54;
      }
      pfVar29 = pfVar29 + 2;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  VehicleNavigationGridAdapter::getLowerCostPosition
            (*(VehicleNavigationGridAdapter **)(param_1 + 0x12a0),local_dc,local_e4,&local_ec,
             &local_f0,(Vector2 *)&local_d0);
  local_dc[0] = local_dc[0] + 1;
  local_e4[0] = local_e4[0] + 1;
  VehicleNavigationGridAdapter::getUpperCostPosition
            (*(VehicleNavigationGridAdapter **)(param_1 + 0x12a0),local_e0,local_e8,&local_ec,
             &local_f0,(Vector2 *)&local_d8);
  uVar3 = local_dc[0];
  uVar36 = local_e4[0];
  uVar39 = local_e0[0] - 1;
  uVar37 = local_e8[0] - 1;
  local_e8[0] = uVar37;
  local_e0[0] = uVar39;
  if (in_w2 == 2) {
    fVar52 = *(float *)puVar23;
    fVar53 = *(float *)((long)puVar23 + 4);
    uVar19 = (ulong)(uint)*(float *)((long)puVar23 + 0xc);
    fVar46 = (float)local_d8;
    fVar43 = local_d8._4_4_;
    fVar54 = *(float *)(puVar23 + 1) - fVar52;
    fVar56 = *(float *)((long)puVar23 + 0xc) - fVar53;
    local_b8 = (undefined8 *)CONCAT44(fVar56,fVar54);
    uVar14 = getShiftedOctant((Vector2 *)&local_b8);
    bVar10 = fVar52 != fVar46;
    fVar46 = 0.0;
    uVar55 = 0;
    uVar2 = uVar3;
    if (bVar10) {
      uVar2 = uVar39;
      uVar39 = uVar3;
    }
    fVar52 = (float)NEON_fmadd(fVar54,fVar54,fVar56 * fVar56);
    sVar28 = -1;
    sVar6 = sVar28;
    if (bVar10) {
      sVar6 = 1;
    }
    bVar11 = fVar53 != fVar43;
    uVar3 = uVar36;
    if (bVar11) {
      uVar3 = uVar37;
      uVar37 = uVar36;
    }
    if (bVar11) {
      sVar28 = 1;
    }
    do {
      fVar53 = (float)uVar19;
      fVar43 = (float)VehicleNavigationGridAdapter::getCostCellTopLeftCorner
                                (*(VehicleNavigationGridAdapter **)(param_1 + 0x12a0),uVar39,uVar37)
      ;
      uVar19 = solveCoordOnLineSegment((float *)&local_c0,(Vector2 *)puVar23,0,fVar43,fVar46,1.0);
      fVar43 = (float)local_c0;
      if ((uVar19 & 1) == 0) {
        fVar43 = 1.0;
      }
      uVar20 = solveCoordOnLineSegment((float *)&local_c8,(Vector2 *)puVar23,1,fVar53,fVar46,fVar43)
      ;
      fVar53 = local_c8;
      if ((uVar20 & 1) == 0) {
        fVar53 = fVar43;
      }
      uVar36 = uVar39;
      uVar38 = uVar37;
      if (fVar53 == 1.0) break;
      uVar15 = VehicleNavigationGridAdapter::getCellCost
                         (*(VehicleNavigationGridAdapter **)(param_1 + 0x12a0),
                          uVar39 + -(ushort)bVar10,uVar37 + -(ushort)bVar11,uVar14);
      uVar44 = NEON_fmadd((float)(ulong)(uVar15 & 0xff),0x3d71e3c8,0x3f800000);
      uVar19 = 0x7f800000;
      uVar45 = 0x7f800000;
      if ((uVar15 & 0xff) != 0xff) {
        uVar45 = uVar44;
      }
      bVar12 = (uVar20 & 1) == 0;
      sVar4 = sVar28;
      if (bVar12) {
        sVar4 = 0;
      }
      sVar5 = 0;
      if (bVar12) {
        sVar5 = sVar6;
      }
      uVar37 = sVar4 + uVar37;
      uVar39 = sVar5 + uVar39;
      uVar55 = NEON_fmadd(SQRT(fVar52) * (fVar53 - fVar46),uVar45,uVar55);
      fVar46 = fVar53;
    } while ((uVar39 != uVar2) || (uVar36 = uVar2, uVar38 = uVar3, uVar37 != uVar3));
    uVar15 = VehicleNavigationGridAdapter::getCellCost
                       (*(VehicleNavigationGridAdapter **)(param_1 + 0x12a0),
                        uVar36 + -(ushort)bVar10,uVar38 + -(ushort)bVar11,uVar14);
    uVar44 = NEON_fmadd((float)(ulong)(uVar15 & 0xff),0x3d71e3c8,0x3f800000);
    uVar45 = 0x7f800000;
    if ((uVar15 & 0xff) != 0xff) {
      uVar45 = uVar44;
    }
    uVar15 = NEON_fmadd(SQRT(fVar52) * (1.0 - fVar46),uVar45,uVar55);
    uVar19 = (ulong)uVar15;
    goto LAB_0073de8c;
  }
  local_b8 = (undefined8 *)0x0;
  local_b0 = (undefined8 *)0x0;
  local_a8 = (undefined8 *)0x0;
                    /* try { // try from 0073d5dc to 0073d5df has its CatchHandler @ 0073e008 */
  fVar46 = (float)VehicleNavigationGridAdapter::getCostCellTopLeftCorner
                            (*(VehicleNavigationGridAdapter **)(param_1 + 0x12a0),local_dc[0],
                             local_e4[0]);
  local_f4[0] = local_dc[0];
  if (local_e0[0] + 1 != (int)(short)local_dc[0]) {
    do {
                    /* try { // try from 0073d940 to 0073d95f has its CatchHandler @ 0073e020 */
      uVar37 = local_f4[0];
      uVar15 = solveCoordOnQuadraticBezier
                         ((float *)&local_c0,(float *)&local_c8,(Vector2 *)puVar23,0,fVar46,0.0,1.0)
      ;
      if (uVar15 != 0) {
        uVar19 = 0;
        do {
          local_f8 = *(float *)((long)&local_c0 + uVar19 * 4);
          puVar24 = local_b8;
          for (puVar35 = local_b8;
              (puVar35 != local_b0 && (puVar24 = puVar35, *(float *)puVar35 < local_f8));
              puVar35 = puVar35 + 1) {
            puVar24 = local_b0;
          }
          local_100 = 0;
          local_fc[0] = (float)(&local_c8)[uVar19] < 0.0;
                    /* try { // try from 0073d9b0 to 0073d9c7 has its CatchHandler @ 0073e02c */
          FUN_0073e048(&local_b8,puVar24,&local_f8,local_f4,&local_100,local_fc);
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar15);
      }
      local_f4[0] = uVar37 + 1;
      fVar46 = fVar46 + *(float *)(*(long *)(param_1 + 0x12a0) + 0x30);
    } while (local_e0[0] + 1 != (int)(short)local_f4[0]);
  }
  local_f4[0] = local_e4[0];
  if (local_e8[0] + 1 != (int)(short)local_e4[0]) {
    do {
                    /* try { // try from 0073da10 to 0073da2f has its CatchHandler @ 0073e018 */
      uVar37 = local_f4[0];
      uVar15 = solveCoordOnQuadraticBezier
                         ((float *)&local_c0,(float *)&local_c8,(Vector2 *)puVar23,1,in_s1,0.0,1.0);
      if (uVar15 != 0) {
        uVar19 = 0;
        do {
          local_f8 = *(float *)((long)&local_c0 + uVar19 * 4);
          puVar24 = local_b8;
          for (puVar35 = local_b8;
              (puVar35 != local_b0 && (puVar24 = puVar35, *(float *)puVar35 < local_f8));
              puVar35 = puVar35 + 1) {
            puVar24 = local_b0;
          }
          local_100 = 1;
          local_fc[0] = (float)(&local_c8)[uVar19] < 0.0;
                    /* try { // try from 0073da80 to 0073da97 has its CatchHandler @ 0073e028 */
          FUN_0073e048(&local_b8,puVar24,&local_f8,local_f4,&local_100,local_fc);
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar15);
      }
      local_f4[0] = uVar37 + 1;
      in_s1 = in_s1 + *(float *)(*(long *)(param_1 + 0x12a0) + 0x30);
    } while (local_e8[0] + 1 != (int)(short)local_f4[0]);
  }
  local_c0 = CONCAT44((float)((ulong)puVar23[1] >> 0x20) - (float)((ulong)*puVar23 >> 0x20),
                      (float)puVar23[1] - (float)*puVar23);
                    /* try { // try from 0073d620 to 0073d627 has its CatchHandler @ 0073e004 */
  uVar16 = getShiftedOctant((Vector2 *)&local_c0);
  local_c0 = CONCAT44((float)((ulong)puVar23[2] >> 0x20) - (float)((ulong)puVar23[1] >> 0x20),
                      (float)puVar23[2] - (float)puVar23[1]);
                    /* try { // try from 0073d638 to 0073d63f has its CatchHandler @ 0073e000 */
  uVar17 = getShiftedOctant((Vector2 *)&local_c0);
  uVar15 = uVar17 - uVar16 & 7;
  uVar42 = uVar17;
  uVar9 = uVar16;
  if (uVar15 < 5) {
    uVar42 = uVar16;
    uVar9 = uVar17;
  }
  if (((DAT_01052c28 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_01052c28), iVar18 != 0)) {
    DAT_01052c20 = 0.9238795;
    __cxa_guard_release(&DAT_01052c28);
  }
  if (((DAT_01052c38 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_01052c38), iVar18 != 0)) {
    DAT_01052c30 = 0.3826835;
    __cxa_guard_release(&DAT_01052c38);
  }
  if (((DAT_01052c80 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_01052c80), iVar18 != 0)) {
    DAT_01052c54 = -DAT_01052c20;
    DAT_01052c4c = -DAT_01052c30;
    DAT_01052c40 = DAT_01052c20;
    DAT_01052c44 = DAT_01052c30;
    DAT_01052c48 = DAT_01052c20;
    DAT_01052c50 = DAT_01052c30;
    DAT_01052c6c = DAT_01052c30;
    DAT_01052c74 = DAT_01052c20;
    DAT_01052c78 = DAT_01052c30;
    DAT_01052c7c = DAT_01052c20;
    DAT_01052c58 = DAT_01052c4c;
    DAT_01052c5c = DAT_01052c54;
    DAT_01052c60 = DAT_01052c54;
    DAT_01052c64 = DAT_01052c4c;
    DAT_01052c68 = DAT_01052c54;
    DAT_01052c70 = DAT_01052c4c;
    __cxa_guard_release(&DAT_01052c80);
  }
  bVar27 = 6;
  if (uVar15 < 5) {
    bVar27 = 2;
  }
  if ((uVar42 & 0xffff) != (uVar9 & 0xffff)) {
    do {
      uVar42 = uVar42 + 1 & 7;
                    /* try { // try from 0073daf0 to 0073dafb has its CatchHandler @ 0073e01c */
      bVar13 = solveTangentQuadraticBezier
                         ((float *)&local_c0,(Vector2 *)puVar23,
                          (Vector2 *)(&DAT_01052c40 + (ulong)uVar42 * 2));
      puVar35 = local_b8;
      fVar46 = (float)local_c0;
      if (((bVar13 & 0.0 < (float)local_c0) == 1) &&
         (puVar24 = local_b8, puVar40 = local_b8, (float)local_c0 < 1.0)) {
        for (; (puVar24 != local_b0 && (puVar40 = puVar24, *(float *)puVar24 < (float)local_c0));
            puVar24 = puVar24 + 1) {
          puVar40 = local_b0;
        }
        uVar19 = (long)puVar40 - (long)local_b8;
        uVar20 = (long)uVar19 >> 3;
        puVar24 = (undefined8 *)((long)local_b8 + (uVar19 & 0xfffffffffffffff8));
        uVar7 = (undefined2)uVar42;
        if (local_b0 < local_a8) {
          if (puVar24 == local_b0) {
            *(float *)local_b0 = (float)local_c0;
            *(undefined2 *)((long)local_b8 + uVar20 * 8 + 4) = uVar7;
            *(byte *)((long)local_b8 + uVar20 * 8 + 6) =
                 *(byte *)((long)local_b8 + uVar20 * 8 + 6) & 0xf8 | bVar27;
            local_b0 = local_b0 + 1;
          }
          else {
            uVar25 = (long)local_b0 + (-8 - (long)puVar24);
            uVar33 = uVar25 & 0xfffffffffffffff8;
            puVar40 = (undefined8 *)((long)puVar24 + uVar33);
            puVar32 = local_b0;
            if (puVar40 < local_b0) {
              uVar19 = uVar19 & 0xfffffffffffffff8;
              puVar32 = (undefined8 *)((long)local_b8 + uVar33 + uVar19 + 8);
              puVar31 = local_b0;
              if (local_b0 <= puVar32) {
                puVar31 = puVar32;
              }
              uVar33 = (long)puVar31 + (~(ulong)local_b8 - (uVar19 + uVar33));
              puVar31 = local_b0;
              if (0x17 < uVar33) {
                puVar32 = (undefined8 *)
                          ((long)local_b8 + (uVar25 & 0xfffffffffffffff8) + uVar19 + 8);
                puVar30 = local_b0;
                if (local_b0 <= puVar32) {
                  puVar30 = puVar32;
                }
                lVar1 = ((long)uVar25 >> 3) + uVar20;
                uVar19 = (long)puVar30 +
                         (~(ulong)local_b8 - (uVar19 + (uVar25 & 0xfffffffffffffff8)));
                if ((local_b8 + lVar1 + (uVar19 >> 3) + 1 <= local_b0) ||
                   ((undefined8 *)((long)local_b0 + (uVar19 & 0xfffffffffffffff8) + 8) <= puVar40))
                {
                  uVar19 = (uVar33 >> 3) + 1;
                  puVar32 = local_b0 + 2;
                  uVar34 = uVar19 & 0x3ffffffffffffffc;
                  puVar31 = local_b8 + lVar1 + 2;
                  puVar40 = puVar40 + uVar34;
                  uVar33 = uVar34;
                  do {
                    puVar30 = puVar31 + -1;
                    uVar49 = puVar31[-2];
                    uVar51 = puVar31[1];
                    uVar50 = *puVar31;
                    puVar31 = puVar31 + 4;
                    uVar33 = uVar33 - 4;
                    puVar32[-1] = *puVar30;
                    puVar32[-2] = uVar49;
                    puVar32[1] = uVar51;
                    *puVar32 = uVar50;
                    puVar32 = puVar32 + 4;
                  } while (uVar33 != 0);
                  puVar32 = local_b0 + uVar34;
                  puVar31 = local_b0 + uVar34;
                  if (uVar19 == uVar34) goto LAB_0073ddf0;
                }
              }
              do {
                puVar30 = puVar40 + 1;
                *puVar31 = *puVar40;
                puVar40 = puVar30;
                puVar32 = puVar31 + 1;
                puVar31 = puVar31 + 1;
              } while (puVar30 < local_b0);
            }
LAB_0073ddf0:
            if (uVar25 != 0) {
              puVar40 = local_b0 + -((long)uVar25 >> 3);
              local_b0 = puVar32;
              memmove(puVar40,puVar24,uVar25);
              puVar32 = local_b0;
            }
            local_b0 = puVar32;
            *(float *)puVar24 = fVar46;
            *(undefined2 *)((long)puVar35 + uVar20 * 8 + 4) = uVar7;
            *(byte *)((long)puVar35 + uVar20 * 8 + 6) = bVar27;
          }
        }
        else {
          uVar25 = ((long)local_b0 - (long)local_b8 >> 3) + 1;
          if (uVar25 >> 0x3d != 0) {
                    /* try { // try from 0073dec8 to 0073dedb has its CatchHandler @ 0073e014 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar33 = (long)local_a8 - (long)local_b8 >> 2;
          if (uVar25 <= uVar33) {
            uVar25 = uVar33;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)local_a8 - (long)local_b8)) {
            uVar25 = 0x1fffffffffffffff;
          }
          if (uVar25 == 0) {
            pvVar21 = (void *)0x0;
          }
          else {
            if (uVar25 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 0073dc14 to 0073dc17 has its CatchHandler @ 0073e010 */
            pvVar21 = operator_new(uVar25 << 3);
          }
          pfVar29 = (float *)((long)pvVar21 + uVar20 * 8);
          puVar35 = (undefined8 *)((long)pvVar21 + uVar25 * 8);
          if (uVar20 == uVar25) {
            if ((long)uVar19 < 1) {
              uVar20 = (long)uVar19 >> 2;
              if (uVar19 == 0) {
                uVar20 = 1;
              }
              if (uVar20 >> 0x3d != 0) {
                    /* try { // try from 0073dfbc to 0073dfc7 has its CatchHandler @ 0073dfcc */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 0073dd18 to 0073dd1b has its CatchHandler @ 0073dfd0 */
              pvVar22 = operator_new(uVar20 << 3);
              puVar35 = (undefined8 *)((long)pvVar22 + uVar20 * 8);
              pfVar29 = (float *)((long)pvVar22 + (uVar20 & 0x7ffffffffffffffc) * 2);
              if (pvVar21 != (void *)0x0) {
                operator_delete(pvVar21);
                fVar46 = (float)local_c0;
              }
            }
            else {
              uVar19 = uVar20 + 2;
              if (-1 < (long)(uVar20 + 1)) {
                uVar19 = uVar20 + 1;
              }
              pfVar29 = pfVar29 + -(uVar19 & 0x3ffffffffffffffe);
            }
          }
          *(undefined2 *)(pfVar29 + 1) = uVar7;
          *pfVar29 = fVar46;
          *(byte *)((long)pfVar29 + 6) = *(byte *)((long)pfVar29 + 6) & 0xf8 | bVar27;
          sVar26 = (long)puVar24 - (long)local_b8;
          puVar40 = (undefined8 *)((long)pfVar29 - sVar26);
          if (0 < (long)sVar26) {
            memcpy(puVar40,local_b8,sVar26);
          }
          puVar32 = (undefined8 *)(pfVar29 + 2);
          sVar26 = (long)local_b0 - (long)puVar24;
          if (0 < (long)sVar26) {
            memcpy(puVar32,puVar24,sVar26);
            puVar32 = (undefined8 *)((long)puVar32 + sVar26);
          }
          puVar24 = local_b8;
          bVar10 = local_b8 != (undefined8 *)0x0;
          local_b8 = puVar40;
          local_b0 = puVar32;
          local_a8 = puVar35;
          if (bVar10) {
            operator_delete(puVar24);
          }
        }
      }
    } while (uVar42 != (uVar9 & 0xffff));
  }
  local_c0 = *puVar23;
                    /* try { // try from 0073d6b0 to 0073d6c7 has its CatchHandler @ 0073dffc */
  VehicleNavigationGridAdapter::getLowerCostPosition
            (*(VehicleNavigationGridAdapter **)(param_1 + 0x12a0),(ushort *)&local_c8,
             (ushort *)&local_f8,&local_ec,&local_f0,(Vector2 *)&local_c0);
  puVar35 = local_b0;
  if (local_ec == 0.0) {
    fVar46 = *(float *)(puVar23 + 1);
    if ((fVar46 < *(float *)puVar23) ||
       ((fVar46 == *(float *)puVar23 && (*(float *)(puVar23 + 2) < fVar46)))) {
      local_c8 = (float)CONCAT22(local_c8._2_2_,(ushort)local_c8 + -1);
    }
  }
  if (local_f0 == 0.0) {
    fVar46 = *(float *)((long)puVar23 + 0xc);
    if ((fVar46 < *(float *)((long)puVar23 + 4)) ||
       ((fVar46 == *(float *)((long)puVar23 + 4) && (*(float *)((long)puVar23 + 0x14) < fVar46)))) {
      local_f8 = (float)CONCAT22(local_f8._2_2_,(ushort)local_f8 + -1);
    }
  }
  puVar24 = local_b8;
  if (local_b8 == local_b0) {
LAB_0073d76c:
    if (puVar24 == local_b0) goto LAB_0073d78c;
    uVar37 = (*(ushort *)((long)puVar24 + 4) + (*(byte *)((long)puVar24 + 6) >> 2 & 1)) - 1;
  }
  else {
    do {
      if ((*(byte *)((long)puVar24 + 6) & 3) == 0) goto LAB_0073d76c;
      puVar24 = puVar24 + 1;
    } while (puVar24 != local_b0);
LAB_0073d78c:
    uVar37 = (ushort)local_c8;
  }
  puVar24 = local_b8;
  if (local_b8 == local_b0) {
LAB_0073d7c0:
    if (puVar24 == local_b0) goto LAB_0073d7e0;
    uVar39 = (*(ushort *)((long)puVar24 + 4) + (*(byte *)((long)puVar24 + 6) >> 2 & 1)) - 1;
  }
  else {
    do {
      if ((*(byte *)((long)puVar24 + 6) & 3) == 1) goto LAB_0073d7c0;
      puVar24 = puVar24 + 1;
    } while (puVar24 != local_b0);
LAB_0073d7e0:
    uVar39 = (ushort)local_f8;
  }
  puVar24 = local_b8;
  if (local_b8 == local_b0) {
LAB_0073d810:
    if (puVar24 != local_b0) {
      uVar16 = ((uint)*(ushort *)((long)puVar24 + 4) + (*(byte *)((long)puVar24 + 6) >> 2 & 1)) - 1
               & 7;
    }
  }
  else {
    do {
      if ((*(byte *)((long)puVar24 + 6) & 3) == 2) goto LAB_0073d810;
      puVar24 = puVar24 + 1;
    } while (puVar24 != local_b0);
  }
  uVar36 = (ushort)uVar16;
  if (local_b8 == local_b0) {
    fVar46 = 0.0;
    uVar55 = 0;
  }
  else {
    uVar55 = 0;
    puVar41 = (ushort *)((long)local_b8 + 4);
    fVar43 = 0.0;
    do {
      fVar46 = *(float *)(puVar41 + -2);
                    /* try { // try from 0073d884 to 0073d8ab has its CatchHandler @ 0073e024 */
      uVar44 = arcLengthQuadraticBezier((Vector2 *)puVar23,fVar43,fVar46);
      uVar15 = VehicleNavigationGridAdapter::getCellCost
                         (*(VehicleNavigationGridAdapter **)(param_1 + 0x12a0),uVar37,uVar39,
                          (ushort)uVar16);
      bVar27 = *(byte *)(puVar41 + 1);
      uVar47 = NEON_fmadd((float)(ulong)(uVar15 & 0xff),0x3d71e3c8,0x3f800000);
      uVar45 = 0x7f800000;
      if ((uVar15 & 0xff) != 0xff) {
        uVar45 = uVar47;
      }
      if ((bVar27 & 3) == 0) {
        uVar37 = *puVar41 - (bVar27 >> 2 & 1);
      }
      else if ((bVar27 & 3) == 1) {
        uVar39 = *puVar41 - (bVar27 >> 2 & 1);
      }
      else if ((bVar27 & 3) == 2) {
        uVar16 = (uint)*puVar41 - (bVar27 >> 2 & 1) & 7;
      }
      uVar36 = (ushort)uVar16;
      uVar55 = NEON_fmadd(uVar44,uVar45,uVar55);
      puVar24 = (undefined8 *)(puVar41 + 2);
      puVar41 = puVar41 + 4;
      fVar43 = fVar46;
    } while (puVar24 != puVar35);
  }
                    /* try { // try from 0073de20 to 0073de4b has its CatchHandler @ 0073e00c */
  uVar47 = arcLengthQuadraticBezier((Vector2 *)puVar23,fVar46,1.0);
  uVar15 = VehicleNavigationGridAdapter::getCellCost
                     (*(VehicleNavigationGridAdapter **)(param_1 + 0x12a0),uVar37,uVar39,uVar36);
  uVar48 = NEON_fmadd((float)(ulong)(uVar15 & 0xff),0x3d71e3c8,0x3f800000);
  uVar44 = 0;
  uVar45 = 0x7f800000;
  if ((uVar15 & 0xff) != 0xff) {
    uVar45 = uVar48;
  }
  if (local_b8 != (undefined8 *)0x0) {
    local_b0 = local_b8;
    uVar44 = 0;
    operator_delete(local_b8);
  }
  uVar55 = NEON_fmadd(uVar47,uVar45,uVar55);
  uVar19 = CONCAT44(uVar44,uVar55);
LAB_0073de8c:
  if (*(long *)(lVar8 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar19);
  }
  return;
}


