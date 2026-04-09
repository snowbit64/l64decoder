// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextHeadingAndCurvature
// Entry Point: 00738440
// Size: 3172 bytes
// Signature: undefined __thiscall getNextHeadingAndCurvature(VehicleNavigationAgent * this, Vector2 * param_1, float * param_2, float * param_3, bool * param_4, bool * param_5, ushort * param_6, PlanarPose * param_7, float param_8, bool param_9)


/* VehicleNavigationAgent::getNextHeadingAndCurvature(Vector2&, float&, float&, bool&, bool&,
   unsigned short&, PlanarPose const*, float, bool) const */

void __thiscall
VehicleNavigationAgent::getNextHeadingAndCurvature
          (VehicleNavigationAgent *this,Vector2 *param_1,float *param_2,float *param_3,bool *param_4
          ,bool *param_5,ushort *param_6,PlanarPose *param_7,float param_8,bool param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  bool bVar10;
  byte bVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  float *pfVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  bool bVar26;
  uint uVar27;
  byte bVar28;
  uint uVar29;
  float fVar31;
  undefined8 uVar30;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  bool abStack_a6c [4];
  undefined8 local_a68;
  float local_a5c;
  PlanarPose *local_a58;
  VehicleNavigationAgent *pVStack_a50;
  undefined8 *local_a48;
  float *local_a40;
  float *local_a38;
  FixedPoint16 *local_a30;
  bool *local_a28;
  undefined4 *puStack_a20;
  undefined4 *local_a18;
  PlanarPose **local_a10;
  undefined8 *local_a08;
  uint *local_a00;
  ushort *local_9f8;
  float local_9ec;
  undefined8 local_9e8;
  ushort local_9dc [2];
  ushort local_9d8 [2];
  FixedPoint16 local_9d4 [4];
  uint local_9d0;
  float local_9cc;
  PlanarPose *local_9c8;
  undefined8 local_9c0;
  undefined8 uStack_9b8;
  undefined8 local_9b0;
  undefined8 uStack_9a8;
  undefined8 auStack_9a0 [3];
  undefined8 local_988;
  float local_980 [4];
  ushort uStack_970;
  byte abStack_96e [22];
  float afStack_958 [548];
  undefined4 local_c8;
  float fStack_c4;
  undefined4 local_c0;
  float fStack_bc;
  long local_b8;
  
  lVar8 = tpidr_el0;
  local_b8 = *(long *)(lVar8 + 0x28);
  local_9cc = param_8;
  local_9c8 = param_7;
  bVar11 = getHeadingBounds(this,(Vector2 *)&local_c0,(Vector2 *)&local_c8,param_7);
  local_9d0 = 0;
  *param_4 = (bool)(bVar11 & 1);
  uVar13 = VehicleNavigationGridAdapter::getCornerNode
                     (*(VehicleNavigationGridAdapter **)(this + 0x12a0),param_7);
  uVar17 = (uint)uVar13 & 0xffff;
  uVar27 = 2;
  uVar16 = uVar17 - *(ushort *)(this + 0x1376);
  uVar2 = -uVar16;
  if (-1 < (int)uVar16) {
    uVar2 = uVar16;
  }
  uVar16 = (uint)((ulong)uVar13 >> 0x10) & 0xffff;
  if (uVar2 < 4) {
    uVar27 = uVar16 - *(ushort *)(this + 0x1378);
    uVar2 = -uVar27;
    if (-1 < (int)uVar27) {
      uVar2 = uVar27;
    }
    uVar27 = 4;
    if (3 < uVar2) {
      uVar27 = 2;
    }
  }
  uVar2 = (uVar27 | 1) + uVar17;
  uVar4 = 0;
  if (uVar27 <= uVar17) {
    uVar4 = uVar17 - uVar27;
  }
  uVar17 = *(ushort *)(this + 0x30) - 1;
  if ((int)uVar17 <= (int)uVar2) {
    uVar2 = uVar17;
  }
  uVar3 = (uVar27 | 1) + uVar16;
  uVar1 = 0;
  if (uVar27 <= uVar16) {
    uVar1 = uVar16 - uVar27;
  }
  if ((int)uVar17 <= (int)uVar3) {
    uVar3 = uVar17;
  }
  if ((uVar3 & 0xffff) < uVar1) {
    local_980[0] = INFINITY;
    goto LAB_00739060;
  }
  do {
    if (uVar4 <= (uVar2 & 0xffff)) {
      uVar17 = uVar4;
      do {
        uVar27 = 0xffff;
        do {
          uVar16 = uVar27 + ((uint)((ulong)uVar13 >> 0x20) & 0xffff) & 7;
          iVar12 = getCurve((Vector2 *)this,(bool *)&local_9b0,local_9d4,local_9d8,(NodeId)local_9dc
                           );
          uVar29 = (uint)((ulong)uVar17 & 0xffff);
          if (iVar12 == 0) goto switchD_007387e4_caseD_0;
          uVar6 = *(ushort *)(this + 0x30);
          if ((uVar29 < uVar6) && ((uVar1 & 0xffff) < (uint)uVar6)) {
            if (((uVar29 - *(ushort *)(this + 0x32) & 0xffff) < 0xe) &&
               (uVar7 = (int)((ulong)uVar1 & 0xffff) - (uint)*(ushort *)(this + 0x34),
               (uVar7 & 0xffff) < 0xe)) {
              uVar15 = (uint)*(ushort *)
                              (this + (ulong)uVar16 * 2 +
                                      (ulong)(ushort)(uVar29 - *(ushort *)(this + 0x32)) * 0x10 +
                                      ((ulong)uVar7 & 0xffff) * 0xe0 + 0x36);
              if (*(ushort *)
                   (this + (ulong)uVar16 * 2 +
                           (ulong)(ushort)(uVar29 - *(ushort *)(this + 0x32)) * 0x10 +
                           ((ulong)uVar7 & 0xffff) * 0xe0 + 0x36) == 0xffff) goto LAB_007386e0;
            }
            else {
              lVar23 = *(long *)(this + 0x28);
              lVar21 = ((ulong)uVar17 & 0xffff) + ((ulong)uVar1 & 0xffff) * (ulong)uVar6;
              uVar6 = *(ushort *)(lVar23 + lVar21 * 6);
              uVar15 = (uint)uVar6;
              if ((uVar6 == 0xffff) ||
                 ((uVar16 != *(byte *)(lVar23 + lVar21 * 6 + 4) >> 5 &&
                  ((uVar15 = (uint)*(ushort *)(lVar23 + lVar21 * 6 + 2), uVar15 == 0xffff ||
                   (uVar16 != *(byte *)(lVar23 + lVar21 * 6 + 5) >> 5)))))) goto LAB_007386e0;
            }
            fVar33 = (float)(uVar15 | 0x49800000) + -1048576.0;
          }
          else {
LAB_007386e0:
            fVar33 = INFINITY;
          }
          fVar34 = INFINITY;
          if (local_9d8[0] != 0xffff) {
            fVar34 = (float)(local_9d8[0] | 0x49800000) + -1048576.0;
          }
          if (local_9d4[0] == (FixedPoint16)0x0) {
            local_9e8 = *(undefined8 *)(param_7 + 8);
          }
          else {
            local_9e8 = CONCAT44(-(float)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20),
                                 -(float)*(undefined8 *)(param_7 + 8));
          }
          local_a48 = &local_9e8;
          local_9ec = INFINITY;
          local_a40 = &local_9ec;
          local_a38 = &local_9cc;
          local_a30 = local_9d4;
          puStack_a20 = &local_c0;
          local_a18 = &local_c8;
          local_a08 = &local_988;
          local_a10 = &local_9c8;
          local_a00 = &local_9d0;
          local_9f8 = local_9dc;
          local_a58 = param_7;
          pVStack_a50 = this;
          local_a28 = param_4;
          switch(iVar12) {
          case 2:
            fVar37 = (float)closestPointLineSegment
                                      (&local_a5c,(Vector2 *)&local_9b0,(Vector2 *)param_7);
            if (fVar37 < *(float *)(this + 5000)) {
              fVar40 = (float)uStack_9a8 - (float)local_9b0;
              fVar38 = (float)((ulong)local_9b0 >> 0x20);
              fVar36 = (float)((ulong)uStack_9a8 >> 0x20) - fVar38;
              uVar30 = CONCAT44(fVar36,fVar40);
              fVar41 = SQRT(fVar36 * fVar36 + fVar40 * fVar40);
              if (0.0001 <= fVar41) {
                uVar30 = CONCAT44(fVar36 * (1.0 / fVar41),fVar40 * (1.0 / fVar41));
              }
              fVar31 = (float)((ulong)uVar30 >> 0x20);
              fVar39 = local_9e8._4_4_ * fVar31 + (float)local_9e8 * (float)uVar30;
              if (0.5 < fVar39) {
                fVar39 = 1.0 - fVar39;
                fVar33 = (float)NEON_fmadd(fVar34 - fVar33,local_a5c,fVar33);
                if (fVar34 == 0.0) {
                  local_9ec = fVar41 * (1.0 - local_a5c);
                }
                else {
                  fVar41 = (float)NEON_fmadd(SQRT(fVar37),0x40800000,fVar39 * 200.0);
                  fVar33 = fVar41 + fVar33;
                }
                fVar39 = (float)NEON_fmadd(fVar39,0xc0000000,0x3f800000);
                fVar37 = 1.0 - fVar37 / *(float *)(this + 5000);
                fVar41 = (ABS(local_9cc) * -0.4) / *(float *)(this + 0x138c) + 1.0;
                fVar37 = fVar37 * fVar37 * fVar37 * fVar39 * fVar39 * fVar39 *
                         fVar41 * fVar41 * fVar41;
                if (7.999998e-07 <= fVar37) {
                  if (local_9d4[0] != (FixedPoint16)0x0) {
                    uVar30 = CONCAT44(-fVar31,-(float)uVar30);
                  }
                  uVar32 = (undefined4)((ulong)uVar30 >> 0x20);
                  local_a68 = uVar30;
                  if (fVar34 == 0.0) {
                    local_9c0 = CONCAT44(fVar38 + fVar36 * local_a5c,
                                         (float)local_9b0 + fVar40 * local_a5c);
                    uVar30 = correctHeading((Vector2 *)&local_9c0,(Vector2 *)param_7,
                                            (Vector2 *)&local_a68,local_9d4[0] != (FixedPoint16)0x0)
                    ;
                    local_a68 = CONCAT44(uVar32,(int)uVar30);
                  }
                  if (*param_4 == false) {
                    bVar26 = true;
                    bVar10 = true;
                  }
                  else {
                    fVar34 = (float)NEON_fmadd(local_c8,uVar32,(float)uVar30 * -fStack_c4);
                    fVar38 = (float)NEON_fmadd(local_c0,uVar32,(float)uVar30 * -fStack_bc);
                    bVar10 = 0.0 <= fVar34;
                    bVar26 = fVar38 <= 0.0;
                    if ((0.0 < fVar38) && (fVar34 < 0.0)) break;
                  }
                  uVar16 = *(uint *)(this + 0x13a0);
                  if (uVar16 != 0) {
                    uVar20 = 0;
                    do {
                      while ((*(ulong *)(this + 0x13a8) >> (uVar20 & 0x3f) & 1) != 0) {
                        uVar7 = (int)uVar20 + 1;
                        uStack_9b8 = *(undefined8 *)((long)(local_9c8 + (ulong)uVar7 * 0x10) + 8);
                        uVar30 = *(undefined8 *)(local_9c8 + (ulong)uVar7 * 0x10);
                        local_9c0 = CONCAT44((float)((ulong)uVar30 >> 0x20) +
                                             (float)((ulong)uStack_9b8 >> 0x20) *
                                             *(float *)(this + uVar20 * 0xc + 0x13b8),
                                             (float)uVar30 +
                                             (float)uStack_9b8 *
                                             *(float *)(this + uVar20 * 0xc + 0x13b8));
                        fVar34 = (float)computeMinCostToGoal(this,(PlanarPose *)&local_9c0);
                        uVar16 = *(uint *)(this + 0x13a0);
                        if (fVar33 < fVar34) {
                          fVar33 = fVar34;
                        }
                        uVar20 = (ulong)uVar7;
                        if (uVar7 == uVar16) goto LAB_00738afc;
                      }
                      uVar7 = (int)uVar20 + 1;
                      uVar20 = (ulong)uVar7;
                    } while (uVar7 != uVar16);
                  }
LAB_00738afc:
                  if (ABS(fVar33) != INFINITY) {
                    lVar23 = (long)(int)local_9d0;
                    lVar21 = lVar23 * 0x1c;
                    bVar11 = 2;
                    if (!bVar26) {
                      bVar11 = 0;
                    }
                    bVar28 = 4;
                    if (!bVar10) {
                      bVar28 = 0;
                    }
                    local_9d0 = local_9d0 + 1;
                    bVar5 = abStack_96e[lVar21];
                    local_980[lVar23 * 7 + 3] = fVar37;
                    local_980[lVar23 * 7] = fVar33;
                    local_980[lVar23 * 7 + 1] = local_9ec;
                    *(undefined8 *)((long)&local_988 + lVar21) = local_a68;
                    local_980[lVar23 * 7 + 2] = 0.0;
                    abStack_96e[lVar21] = bVar28 | bVar11 | (byte)local_9d4[0] | bVar5 & 0xf8;
                    *(ushort *)(abStack_96e + lVar21 + -2) = local_9dc[0];
                  }
                }
              }
            }
            break;
          case 3:
            puVar14 = &local_9b0;
            goto LAB_00738604;
          case 5:
            FUN_0073ae28(fVar33,fVar34,&local_a58,&local_9b0);
            puVar14 = auStack_9a0;
            fVar33 = fVar34;
            fVar34 = 0.0;
LAB_00738604:
            FUN_0073ae28(fVar33,fVar34,&local_a58,puVar14);
            break;
          case -1:
            fVar33 = (float)getNextCurvatureTeleport
                                      (this,(Vector2 *)&local_9c0,(float *)&local_a68,&local_a5c,
                                       abStack_a6c,local_9dc[0],local_9c8,local_9cc);
            if (ABS(fVar33) != INFINITY) {
              lVar23 = (long)(int)local_9d0;
              lVar21 = lVar23 * 0x1c;
              local_9d0 = local_9d0 + 1;
              bVar11 = abStack_96e[lVar21];
              local_980[lVar23 * 7 + 3] = local_a5c;
              local_980[lVar23 * 7] = fVar33;
              *(undefined8 *)((long)&local_988 + lVar21) = local_9c0;
              local_980[lVar23 * 7 + 1] = local_9ec;
              local_980[lVar23 * 7 + 2] = (float)local_a68;
              abStack_96e[lVar21] = bVar11 & 0xf8 | 6;
              *(ushort *)(abStack_96e + lVar21 + -2) = local_9dc[0];
            }
          }
switchD_007387e4_caseD_0:
          uVar27 = uVar27 + 1;
        } while ((uVar27 & 0xffff) < 3);
        uVar17 = uVar29 + 1;
      } while ((uVar17 & 0xffff) <= (uVar2 & 0xffff));
    }
    uVar1 = uVar1 + 1;
  } while ((uVar1 & 0xffff) <= (uVar3 & 0xffff));
  if (local_9d0 == 0) {
    local_980[0] = INFINITY;
    goto LAB_00739060;
  }
  FUN_0073f8ec(&local_988,(long)&local_988 + (long)(int)local_9d0 * 0x1c);
  if (uStack_970 != 0xffff) {
    *(undefined8 *)param_1 = local_988;
    *param_2 = local_980[2];
    *param_5 = false;
    *param_3 = local_980[1];
    *param_6 = uStack_970;
    goto LAB_00739060;
  }
  uVar17 = local_9d0;
  if (100.0 < local_980[(long)(int)(local_9d0 - 1) * 7] - local_980[0]) {
    pfVar19 = (float *)((long)&uStack_9b8 + (long)(int)local_9d0 * 0x1c);
    do {
      fVar33 = *pfVar19;
      uVar17 = uVar17 - 1;
      pfVar19 = pfVar19 + -7;
    } while (100.0 < fVar33 - local_980[0]);
  }
  if (this[0x1382] == (VehicleNavigationAgent)0x0) {
    *param_5 = false;
  }
  else {
    if (uVar17 == 0) {
      puVar14 = &local_988;
      bVar26 = false;
      *param_5 = false;
      puVar18 = puVar14;
LAB_00738db4:
      puVar25 = puVar18;
      puVar18 = puVar25;
      if (puVar25 != puVar14) {
        while (puVar9 = puVar18, puVar18 = (undefined8 *)((long)puVar9 + 0x1c), puVar18 != puVar14)
        {
          if ((bool)(*(byte *)((long)puVar9 + 0x36) & 1) == bVar26) {
            uVar13 = *(undefined8 *)((long)puVar9 + 0x27);
            uVar35 = *(undefined8 *)((long)puVar9 + 0x24);
            uVar30 = *puVar18;
            *(undefined8 *)((long)puVar25 + 0x13) = *(undefined8 *)((long)puVar9 + 0x2f);
            *(undefined8 *)((long)puVar25 + 0xb) = uVar13;
            puVar25[1] = uVar35;
            *puVar25 = uVar30;
            puVar25 = (undefined8 *)((long)puVar25 + 0x1c);
          }
        }
      }
    }
    else {
      uVar20 = (ulong)uVar17;
      if (uVar17 == 1) {
        fVar33 = 0.0;
        fVar34 = 0.0;
        uVar24 = 0;
LAB_00738d14:
        lVar21 = uVar20 - uVar24;
        pfVar19 = local_980 + uVar24 * 7 + 3;
        do {
          fVar37 = -0.0;
          if ((*(byte *)((long)pfVar19 + 6) & 1) != 0) {
            fVar37 = *pfVar19;
          }
          fVar34 = fVar34 + *pfVar19;
          lVar21 = lVar21 + -1;
          fVar33 = fVar33 + fVar37;
          pfVar19 = pfVar19 + 7;
        } while (lVar21 != 0);
      }
      else {
        uVar24 = uVar20 & 0xfffffffe;
        fVar33 = 0.0;
        fVar34 = 0.0;
        pfVar19 = afStack_958;
        uVar22 = uVar24;
        do {
          fVar37 = -0.0;
          if ((*(byte *)((long)pfVar19 + -0x16) & 1) != 0) {
            fVar37 = pfVar19[-7];
          }
          fVar38 = -0.0;
          if ((*(byte *)((long)pfVar19 + 6) & 1) != 0) {
            fVar38 = *pfVar19;
          }
          fVar34 = fVar34 + pfVar19[-7] + *pfVar19;
          uVar22 = uVar22 - 2;
          fVar33 = fVar33 + fVar37 + fVar38;
          pfVar19 = pfVar19 + 0xe;
        } while (uVar22 != 0);
        if (uVar24 != uVar20) goto LAB_00738d14;
      }
      fVar37 = 0.25;
      if (!param_9) {
        fVar37 = 0.75;
      }
      puVar25 = (undefined8 *)((long)&local_988 + (long)(int)uVar17 * 0x1c);
      bVar26 = fVar37 * fVar34 < fVar33;
      *param_5 = bVar26;
      puVar18 = &local_988;
      puVar14 = puVar25;
      if (uVar17 == 0) goto LAB_00738db4;
      lVar21 = (long)(int)uVar17 * 0x1c;
      puVar18 = &local_988;
      do {
        if ((bool)(*(byte *)((long)puVar18 + 0x1a) & 1) != bVar26) goto LAB_00738db4;
        puVar18 = (undefined8 *)((long)puVar18 + 0x1c);
        lVar21 = lVar21 + -0x1c;
      } while (lVar21 != 0);
    }
    uVar17 = (int)((ulong)((long)puVar25 - (long)&local_988) >> 2) * -0x49249249;
    local_9d0 = uVar17;
  }
  *(undefined8 *)param_1 = 0;
  *param_2 = 0.0;
  *param_3 = INFINITY;
  if (*param_4 == false) {
    if (uVar17 != 0) {
      fVar33 = 0.0;
      local_980[0] = 0.0;
      uVar20 = (ulong)uVar17;
      pfVar19 = local_980 + 1;
      do {
        if (*(short *)(pfVar19 + 3) == -1) {
          fVar38 = pfVar19[1];
          fVar34 = pfVar19[2];
          fVar37 = *pfVar19;
          *(ulong *)param_1 =
               CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                        (float)((ulong)*(undefined8 *)(pfVar19 + -3) >> 0x20) * fVar34,
                        (float)*(undefined8 *)param_1 +
                        (float)*(undefined8 *)(pfVar19 + -3) * fVar34);
          fVar38 = (float)NEON_fmadd(fVar38,fVar34,*param_2);
          *param_2 = fVar38;
          if (fVar37 < *param_3) {
            *param_3 = fVar37;
          }
          fVar33 = fVar33 + fVar34;
          local_980[0] = (float)NEON_fmadd(pfVar19[-1],fVar34,local_980[0]);
        }
        pfVar19 = pfVar19 + 7;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
      goto LAB_00739004;
    }
LAB_00738ffc:
    local_980[0] = 0.0;
    fVar33 = 0.0;
  }
  else {
    if (uVar17 == 0) goto LAB_00738ffc;
    uVar22 = (ulong)uVar17;
    fVar33 = 0.0;
    fVar34 = 0.0;
    pfVar19 = local_980 + 3;
    uVar20 = uVar22;
    do {
      if (*(short *)(pfVar19 + 1) == -1) {
        if ((*(byte *)((long)pfVar19 + 6) >> 1 & 1) == 0) {
          if ((*(byte *)((long)pfVar19 + 6) >> 2 & 1) != 0) {
            fVar33 = fVar33 + *pfVar19;
          }
        }
        else {
          fVar34 = fVar34 + *pfVar19;
        }
      }
      pfVar19 = pfVar19 + 7;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
    if (fVar34 <= fVar33) {
      if (uVar17 == 0) goto LAB_00738ffc;
      fVar33 = 0.0;
      local_980[0] = 0.0;
      pfVar19 = local_980 + 2;
      do {
        if ((*(short *)(pfVar19 + 2) == -1) && ((*(byte *)((long)pfVar19 + 10) >> 2 & 1) != 0)) {
          fVar37 = *pfVar19;
          fVar34 = pfVar19[1];
          *(ulong *)param_1 =
               CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                        (float)((ulong)*(undefined8 *)(pfVar19 + -4) >> 0x20) * fVar34,
                        (float)*(undefined8 *)param_1 +
                        (float)*(undefined8 *)(pfVar19 + -4) * fVar34);
          fVar37 = (float)NEON_fmadd(fVar37,fVar34,*param_2);
          *param_2 = fVar37;
          if (pfVar19[-1] < *param_3) {
            *param_3 = pfVar19[-1];
          }
          fVar33 = fVar33 + fVar34;
          local_980[0] = (float)NEON_fmadd(pfVar19[-2],fVar34,local_980[0]);
        }
        pfVar19 = pfVar19 + 7;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
    else {
      if (uVar17 == 0) goto LAB_00738ffc;
      fVar33 = 0.0;
      local_980[0] = 0.0;
      pfVar19 = local_980 + 2;
      do {
        if ((*(short *)(pfVar19 + 2) == -1) && ((*(byte *)((long)pfVar19 + 10) >> 1 & 1) != 0)) {
          fVar37 = *pfVar19;
          fVar34 = pfVar19[1];
          *(ulong *)param_1 =
               CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                        (float)((ulong)*(undefined8 *)(pfVar19 + -4) >> 0x20) * fVar34,
                        (float)*(undefined8 *)param_1 +
                        (float)*(undefined8 *)(pfVar19 + -4) * fVar34);
          fVar37 = (float)NEON_fmadd(fVar37,fVar34,*param_2);
          *param_2 = fVar37;
          if (pfVar19[-1] < *param_3) {
            *param_3 = pfVar19[-1];
          }
          fVar33 = fVar33 + fVar34;
          local_980[0] = (float)NEON_fmadd(pfVar19[-2],fVar34,local_980[0]);
        }
        pfVar19 = pfVar19 + 7;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
LAB_00739004:
  fVar37 = *(float *)param_1;
  fVar34 = *(float *)(param_1 + 4);
  fVar38 = 1.0;
  fVar40 = (float)NEON_fmadd(fVar37,fVar37,fVar34 * fVar34);
  if (1e-06 < fVar40) {
    fVar38 = 1.0 / SQRT(fVar40);
  }
  *(float *)param_1 = fVar37 * fVar38;
  *(float *)(param_1 + 4) = fVar34 * fVar38;
  local_980[0] = local_980[0] * (1.0 / fVar33);
  *param_2 = (1.0 / fVar33) * *param_2;
  *param_6 = 0xffff;
LAB_00739060:
  if (*(long *)(lVar8 + 0x28) == local_b8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_980[0]);
}


