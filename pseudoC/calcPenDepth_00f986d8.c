// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcPenDepth
// Entry Point: 00f986d8
// Size: 2340 bytes
// Signature: undefined __thiscall calcPenDepth(btMinkowskiPenetrationDepthSolver * this, btVoronoiSimplexSolver * param_1, btConvexShape * param_2, btConvexShape * param_3, btTransform * param_4, btTransform * param_5, btVector3 * param_6, btVector3 * param_7, btVector3 * param_8, btIDebugDraw * param_9)


/* btMinkowskiPenetrationDepthSolver::calcPenDepth(btVoronoiSimplexSolver&, btConvexShape const*,
   btConvexShape const*, btTransform const&, btTransform const&, btVector3&, btVector3&, btVector3&,
   btIDebugDraw*) */

void __thiscall
btMinkowskiPenetrationDepthSolver::calcPenDepth
          (btMinkowskiPenetrationDepthSolver *this,btVoronoiSimplexSolver *param_1,
          btConvexShape *param_2,btConvexShape *param_3,btTransform *param_4,btTransform *param_5,
          btVector3 *param_6,btVector3 *param_7,btVector3 *param_8,btIDebugDraw *param_9)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  float *pfVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  float *pfVar16;
  float *pfVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  float fVar42;
  undefined4 uVar43;
  undefined **local_1160 [3];
  undefined4 local_1148;
  undefined4 uStack_1144;
  undefined4 uStack_1140;
  undefined4 uStack_113c;
  float local_1138;
  char local_1134;
  undefined8 local_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined8 uStack_1118;
  undefined8 local_1110;
  undefined8 uStack_1108;
  undefined4 local_1100;
  undefined4 uStack_10fc;
  undefined4 local_10f8;
  undefined4 local_10f4;
  undefined8 local_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 local_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined4 local_10b0;
  undefined **local_10a0;
  float local_1098;
  float local_1094;
  float local_1090;
  undefined4 local_108c;
  undefined8 local_1088;
  btVoronoiSimplexSolver *pbStack_1080;
  btConvexShape *local_1078;
  btConvexShape *pbStack_1070;
  undefined4 local_1068;
  undefined4 local_1064;
  undefined4 local_1060;
  undefined4 local_105c;
  undefined local_1058;
  undefined4 local_1050;
  undefined8 local_1044;
  undefined8 local_1038;
  undefined4 local_1030 [166];
  undefined8 local_d98;
  undefined4 local_d90 [78];
  undefined8 local_c58;
  undefined4 local_c50 [166];
  undefined8 local_9b8;
  undefined4 local_9b0 [78];
  float local_878 [248];
  float local_498 [248];
  long local_b8;
  
  lVar4 = tpidr_el0;
  local_b8 = *(long *)(lVar4 + 0x28);
  if (*(int *)(param_2 + 8) - 0x11U < 2) {
    bVar5 = *(int *)(param_3 + 8) - 0x11U < 2;
  }
  else {
    bVar5 = false;
  }
  lVar9 = 0;
  do {
    getPenetrationDirections();
    uVar19 = *(undefined8 *)(param_4 + 0x10);
    fVar25 = *(float *)(param_4 + 0x18);
    uVar21 = *(undefined8 *)(param_4 + 0x20);
    fVar22 = *(float *)((long)&DAT_02125940 + lVar9);
    fVar23 = *(float *)((long)&DAT_02125944 + lVar9);
    uVar34 = *(undefined8 *)param_5;
    *(undefined4 *)((long)local_1030 + lVar9 + 4) = 0;
    fVar36 = *(float *)((long)&DAT_02125948 + lVar9);
    fVar38 = *(float *)(param_5 + 8);
    lVar1 = lVar9 + 0x10;
    uVar28 = *(undefined4 *)(param_4 + 0x28);
    uVar41 = *(undefined8 *)(param_5 + 0x10);
    *(undefined4 *)((long)local_c50 + lVar9 + 4) = 0;
    fVar25 = (float)NEON_fmadd(uVar28,fVar36,fVar25 * fVar23);
    uVar28 = NEON_fmadd(*(undefined4 *)(param_5 + 0x18),fVar23,fVar38 * fVar22);
    uVar24 = *(undefined8 *)param_4;
    uVar26 = NEON_fnmadd(*(undefined4 *)(param_4 + 8),fVar22,-fVar25);
    uVar40 = *(undefined8 *)(param_5 + 0x20);
    uVar29 = *(undefined4 *)(param_5 + 0x28);
    *(undefined4 *)((long)local_c50 + lVar9) = uVar26;
    uVar28 = NEON_fmadd(uVar29,fVar36,uVar28);
    *(ulong *)((long)&local_c58 + lVar9) =
         CONCAT44(-((float)((ulong)uVar19 >> 0x20) * fVar23 +
                   (float)((ulong)uVar21 >> 0x20) * fVar36) -
                  (float)((ulong)uVar24 >> 0x20) * fVar22,
                  -((float)uVar19 * fVar23 + (float)uVar21 * fVar36) - (float)uVar24 * fVar22);
    *(ulong *)((long)&local_1038 + lVar9) =
         CONCAT44((float)((ulong)uVar34 >> 0x20) * fVar22 + (float)((ulong)uVar41 >> 0x20) * fVar23
                  + (float)((ulong)uVar40 >> 0x20) * fVar36,
                  (float)uVar34 * fVar22 + (float)uVar41 * fVar23 + (float)uVar40 * fVar36);
    *(undefined4 *)((long)local_1030 + lVar9) = uVar28;
    lVar9 = lVar1;
  } while (lVar1 != 0x2a0);
  iVar6 = (**(code **)(*(long *)param_2 + 0xa8))(param_2);
  if ((iVar6 == 0) || (iVar6 < 1)) {
    uVar8 = 0x2a;
  }
  else {
    lVar9 = 0;
    iVar11 = 0;
    do {
      iVar14 = iVar11;
      (**(code **)(*(long *)param_2 + 0xb0))(param_2,iVar14,local_498);
      local_498[3] = 0.0;
      uVar28 = NEON_fmadd(local_498[1],*(undefined4 *)(param_4 + 4),local_498[0] * *(float *)param_4
                         );
      uVar29 = NEON_fmadd(*(undefined4 *)(param_4 + 0x14),local_498[1],
                          *(float *)(param_4 + 0x10) * local_498[0]);
      uVar26 = NEON_fmadd(*(undefined4 *)(param_4 + 0x24),local_498[1],
                          *(float *)(param_4 + 0x20) * local_498[0]);
      local_498[0] = (float)NEON_fmadd(local_498[2],*(undefined4 *)(param_4 + 8),uVar28);
      local_498[1] = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x18),local_498[2],uVar29);
      local_498[2] = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x28),local_498[2],uVar26);
      getPenetrationDirections();
      fVar25 = local_498[2];
      fVar23 = local_498[1];
      fVar22 = local_498[0];
      *(ulong *)(lVar9 + 0x2125be8) = CONCAT44(local_498[3],local_498[2]);
      *(ulong *)(&DAT_02125be0 + lVar9) = CONCAT44(local_498[1],local_498[0]);
      fVar18 = (float)*(undefined8 *)(param_4 + 0x10) * local_498[1];
      fVar20 = (float)((ulong)*(undefined8 *)(param_4 + 0x10) >> 0x20) * local_498[1];
      fVar32 = (float)*(undefined8 *)param_5 * local_498[0];
      fVar35 = (float)((ulong)*(undefined8 *)param_5 >> 0x20) * local_498[0];
      uVar24 = *(undefined8 *)(param_5 + 0x10);
      fVar36 = (float)*(undefined8 *)(param_4 + 0x20) * local_498[2];
      fVar38 = (float)((ulong)*(undefined8 *)(param_4 + 0x20) >> 0x20) * local_498[2];
      fVar27 = *(float *)(param_5 + 8) * local_498[0];
      uVar28 = *(undefined4 *)(param_5 + 0x18);
      fVar30 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x28),local_498[2],
                                 *(float *)(param_4 + 0x18) * local_498[1]);
      uVar26 = *(undefined4 *)(param_4 + 8);
      *(undefined4 *)((long)local_9b0 + lVar9 + 4) = 0;
      *(undefined4 *)((long)local_d90 + lVar9 + 4) = 0;
      uVar28 = NEON_fmadd(uVar28,fVar23,fVar27);
      uVar19 = *(undefined8 *)param_4;
      uVar26 = NEON_fnmadd(uVar26,fVar22,-fVar30);
      uVar21 = *(undefined8 *)(param_5 + 0x20);
      uVar29 = *(undefined4 *)(param_5 + 0x28);
      *(undefined4 *)((long)local_9b0 + lVar9) = uVar26;
      uVar28 = NEON_fmadd(uVar29,fVar25,uVar28);
      *(ulong *)((long)&local_9b8 + lVar9) =
           CONCAT44(-(fVar20 + fVar38) - (float)((ulong)uVar19 >> 0x20) * fVar22,
                    -(fVar18 + fVar36) - (float)uVar19 * fVar22);
      *(ulong *)((long)&local_d98 + lVar9) =
           CONCAT44(fVar35 + (float)((ulong)uVar24 >> 0x20) * fVar23 +
                    (float)((ulong)uVar21 >> 0x20) * fVar25,
                    fVar32 + (float)uVar24 * fVar23 + (float)uVar21 * fVar25);
      *(undefined4 *)((long)local_d90 + lVar9) = uVar28;
      lVar9 = lVar9 + 0x10;
      iVar11 = iVar14 + 1;
    } while (iVar6 != iVar14 + 1);
    uVar8 = iVar14 + 0x2b;
  }
  iVar6 = (**(code **)(*(long *)param_3 + 0xa8))(param_3);
  if ((iVar6 != 0) && (0 < iVar6)) {
    uVar7 = (ulong)uVar8;
    iVar11 = 0;
    puVar15 = &local_1038;
    puVar10 = &local_c58;
    puVar13 = &DAT_02125940;
    do {
      (**(code **)(*(long *)param_3 + 0xb0))(param_3,iVar11,local_498);
      local_498[3] = 0.0;
      uVar28 = NEON_fmadd(local_498[1],*(undefined4 *)(param_5 + 4),local_498[0] * *(float *)param_5
                         );
      uVar29 = NEON_fmadd(*(undefined4 *)(param_5 + 0x14),local_498[1],
                          *(float *)(param_5 + 0x10) * local_498[0]);
      uVar26 = NEON_fmadd(*(undefined4 *)(param_5 + 0x24),local_498[1],
                          *(float *)(param_5 + 0x20) * local_498[0]);
      local_498[0] = (float)NEON_fmadd(local_498[2],*(undefined4 *)(param_5 + 8),uVar28);
      local_498[1] = (float)NEON_fmadd(*(undefined4 *)(param_5 + 0x18),local_498[2],uVar29);
      local_498[2] = (float)NEON_fmadd(*(undefined4 *)(param_5 + 0x28),local_498[2],uVar26);
      getPenetrationDirections();
      fVar25 = local_498[2];
      fVar23 = local_498[1];
      fVar22 = local_498[0];
      puVar2 = puVar15 + uVar7 * 2;
      iVar11 = iVar11 + 1;
      puVar3 = puVar10 + uVar7 * 2;
      puVar15 = puVar15 + 2;
      puVar10 = puVar10 + 2;
      *(ulong *)((long)(puVar13 + uVar7 * 4) + 8) = CONCAT44(local_498[3],local_498[2]);
      *(ulong *)(puVar13 + uVar7 * 4) = CONCAT44(local_498[1],local_498[0]);
      puVar13 = puVar13 + 4;
      uVar19 = *(undefined8 *)(param_4 + 0x10);
      fVar36 = *(float *)(param_4 + 0x18);
      *(undefined4 *)((long)puVar3 + 0xc) = 0;
      uVar21 = *(undefined8 *)(param_4 + 0x20);
      *(undefined4 *)((long)puVar2 + 0xc) = 0;
      uVar24 = *(undefined8 *)param_5;
      uVar34 = *(undefined8 *)(param_5 + 0x10);
      fVar36 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x28),fVar25,fVar36 * fVar23);
      uVar40 = *(undefined8 *)param_4;
      uVar28 = NEON_fmadd(*(undefined4 *)(param_5 + 0x18),fVar23,*(float *)(param_5 + 8) * fVar22);
      uVar29 = NEON_fnmadd(*(undefined4 *)(param_4 + 8),fVar22,-fVar36);
      uVar41 = *(undefined8 *)(param_5 + 0x20);
      uVar26 = *(undefined4 *)(param_5 + 0x28);
      *(undefined4 *)(puVar3 + 1) = uVar29;
      uVar28 = NEON_fmadd(uVar26,fVar25,uVar28);
      *puVar3 = CONCAT44(-((float)((ulong)uVar19 >> 0x20) * fVar23 +
                          (float)((ulong)uVar21 >> 0x20) * fVar25) -
                         (float)((ulong)uVar40 >> 0x20) * fVar22,
                         -((float)uVar19 * fVar23 + (float)uVar21 * fVar25) - (float)uVar40 * fVar22
                        );
      *puVar2 = CONCAT44((float)((ulong)uVar24 >> 0x20) * fVar22 +
                         (float)((ulong)uVar34 >> 0x20) * fVar23 +
                         (float)((ulong)uVar41 >> 0x20) * fVar25,
                         (float)uVar24 * fVar22 + (float)uVar34 * fVar23 + (float)uVar41 * fVar25);
      *(undefined4 *)(puVar2 + 1) = uVar28;
    } while (iVar6 != iVar11);
    uVar8 = uVar8 + iVar11;
  }
  (**(code **)(*(long *)param_2 + 0x98))(param_2,&local_c58,local_498,uVar8);
  (**(code **)(*(long *)param_3 + 0x98))(param_3,&local_1038,local_878,uVar8);
  if ((int)uVar8 < 1) {
    fVar23 = 0.0;
    fVar22 = 1e+18;
    fVar25 = 0.0;
    fVar36 = 0.0;
    fVar38 = 0.0;
  }
  else {
    fVar22 = 1e+18;
    fVar38 = 0.0;
    fVar36 = 0.0;
    fVar25 = 0.0;
    fVar23 = 0.0;
    uVar7 = (ulong)uVar8;
    pfVar12 = local_498 + 2;
    pfVar16 = local_878 + 2;
    pfVar17 = (float *)&DAT_02125948;
    do {
      getPenetrationDirections();
      fVar20 = pfVar17[-2];
      fVar27 = pfVar17[-1];
      fVar18 = 0.0;
      if (!bVar5) {
        fVar18 = *pfVar17;
      }
      uVar28 = NEON_fmadd(fVar27,fVar27,fVar20 * fVar20);
      fVar30 = (float)NEON_fmadd(fVar18,fVar18,uVar28);
      if (0.01 < fVar30) {
        fVar30 = pfVar12[-2];
        fVar32 = pfVar12[-1];
        fVar33 = pfVar16[-2];
        fVar37 = pfVar16[-1];
        fVar31 = *pfVar12;
        fVar39 = *pfVar16;
        uVar26 = NEON_fmadd(*(undefined4 *)(param_4 + 4),fVar32,*(float *)param_4 * fVar30);
        uVar29 = NEON_fmadd(*(undefined4 *)(param_4 + 0x14),fVar32,
                            *(float *)(param_4 + 0x10) * fVar30);
        uVar28 = NEON_fmadd(*(undefined4 *)(param_4 + 0x24),fVar32,
                            *(float *)(param_4 + 0x20) * fVar30);
        fVar35 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x18),fVar31,uVar29);
        uVar29 = NEON_fmadd(*(undefined4 *)(param_5 + 4),fVar37,*(float *)param_5 * fVar33);
        fVar32 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x28),fVar31,uVar28);
        uVar43 = NEON_fmadd(*(undefined4 *)(param_5 + 0x14),fVar37,
                            *(float *)(param_5 + 0x10) * fVar33);
        uVar28 = NEON_fmadd(*(undefined4 *)(param_5 + 0x24),fVar37,
                            *(float *)(param_5 + 0x20) * fVar33);
        fVar33 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 8),fVar31,uVar26);
        fVar42 = (float)NEON_fmadd(*(undefined4 *)(param_5 + 8),fVar39,uVar29);
        fVar37 = (float)NEON_fmadd(*(undefined4 *)(param_5 + 0x18),fVar39,uVar43);
        fVar31 = (float)NEON_fmadd(*(undefined4 *)(param_5 + 0x28),fVar39,uVar28);
        fVar30 = 0.0;
        if (!bVar5) {
          fVar30 = (fVar31 + *(float *)(param_5 + 0x38)) - (fVar32 + *(float *)(param_4 + 0x38));
        }
        uVar28 = NEON_fmadd((fVar37 + *(float *)(param_5 + 0x34)) -
                            (fVar35 + *(float *)(param_4 + 0x34)),fVar27,
                            ((fVar42 + *(float *)(param_5 + 0x30)) -
                            (fVar33 + *(float *)(param_4 + 0x30))) * fVar20);
        fVar30 = (float)NEON_fmadd(fVar30,fVar18,uVar28);
        if (fVar30 < fVar22) {
          fVar38 = pfVar17[1];
          fVar22 = fVar30;
          fVar23 = fVar20;
          fVar25 = fVar27;
          fVar36 = fVar18;
        }
      }
      uVar7 = uVar7 - 1;
      pfVar17 = pfVar17 + 4;
      pfVar12 = pfVar12 + 4;
      pfVar16 = pfVar16 + 4;
    } while (uVar7 != 0);
  }
  if ((0xd < *(uint *)(param_2 + 8)) ||
     ((1 << (ulong)(*(uint *)(param_2 + 8) & 0x1f) & 0x2d33U) == 0)) {
    (**(code **)(*(long *)param_2 + 0x60))(param_2);
  }
  if ((0xd < *(uint *)(param_3 + 8)) ||
     ((1 << (ulong)(*(uint *)(param_3 + 8) & 0x1f) & 0x2d33U) == 0)) {
    (**(code **)(*(long *)param_3 + 0x60))(param_3);
  }
  if (fVar22 < 0.0) {
    bVar5 = false;
  }
  else {
    switch(*(undefined4 *)(param_2 + 8)) {
    case 0:
    case 1:
    case 4:
    case 5:
    case 10:
    case 0xb:
    case 0xd:
      fVar18 = *(float *)(param_2 + 0x3c);
      break;
    default:
      fVar18 = (float)(**(code **)(*(long *)param_2 + 0x60))(param_2);
      break;
    case 8:
      fVar18 = *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x2c);
    }
    local_1064 = *(undefined4 *)(param_3 + 8);
    switch(local_1064) {
    case 0:
      fVar20 = *(float *)(param_3 + 0x3c);
      local_1064 = 0;
      break;
    case 1:
      fVar20 = *(float *)(param_3 + 0x3c);
      local_1064 = 1;
      break;
    default:
      fVar20 = (float)(**(code **)(*(long *)param_3 + 0x60))(param_3);
      local_1064 = *(undefined4 *)(param_3 + 8);
      break;
    case 4:
    case 5:
      fVar20 = *(float *)(param_3 + 0x3c);
      break;
    case 8:
      local_1064 = 8;
      fVar20 = *(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x2c);
      break;
    case 10:
      fVar20 = *(float *)(param_3 + 0x3c);
      local_1064 = 10;
      break;
    case 0xb:
      fVar20 = *(float *)(param_3 + 0x3c);
      local_1064 = 0xb;
      break;
    case 0xd:
      fVar20 = *(float *)(param_3 + 0x3c);
      local_1064 = 0xd;
    }
    local_1068 = *(undefined4 *)(param_2 + 8);
    local_10a0 = &PTR__btDiscreteCollisionDetectorInterface_0101b4e0;
    local_1088 = 0;
    fVar20 = fVar22 + 0.5 + fVar18 + fVar20;
    pbStack_1080 = param_1;
    local_1078 = param_2;
    pbStack_1070 = param_3;
    local_1060 = (**(code **)(*(long *)param_2 + 0x60))(param_2);
    local_105c = (**(code **)(*(long *)param_3 + 0x60))(param_3);
    uStack_1128 = *(undefined8 *)(param_4 + 8);
    local_1130 = *(undefined8 *)param_4;
    uStack_1118 = *(undefined8 *)(param_4 + 0x18);
    uStack_1120 = *(undefined8 *)(param_4 + 0x10);
    local_1044 = 0x100000001;
    local_1050 = 0xffffffff;
    uStack_1108 = *(undefined8 *)(param_4 + 0x28);
    local_1110 = *(undefined8 *)(param_4 + 0x20);
    local_1058 = 0;
    local_10f8 = NEON_fmadd(fVar20,fVar36,*(undefined4 *)(param_4 + 0x38));
    local_10f4 = 0;
    local_1100 = NEON_fmadd(fVar20,fVar23,*(undefined4 *)(param_4 + 0x30));
    uStack_10fc = NEON_fmadd(fVar20,fVar25,*(undefined4 *)(param_4 + 0x34));
    uStack_10e8 = *(undefined8 *)(param_5 + 8);
    local_10f0 = *(undefined8 *)param_5;
    uStack_10d8 = *(undefined8 *)(param_5 + 0x18);
    uStack_10e0 = *(undefined8 *)(param_5 + 0x10);
    local_10b0 = 0x5d5e0b6b;
    local_1090 = -fVar36;
    local_1160[0] = &PTR__Result_0101c458;
    local_1134 = '\0';
    local_108c = 0;
    uStack_10c8 = *(undefined8 *)(param_5 + 0x28);
    local_10d0 = *(undefined8 *)(param_5 + 0x20);
    uStack_10b8 = *(undefined8 *)(param_5 + 0x38);
    uStack_10c0 = *(undefined8 *)(param_5 + 0x30);
    local_1098 = -fVar23;
    local_1094 = -fVar25;
    btGjkPairDetector::getClosestPointsNonVirtual
              ((btGjkPairDetector *)&local_10a0,(ClosestPointInput *)&local_1130,
               (Result *)local_1160,param_9,true);
    if (local_1134 != '\0') {
      fVar20 = fVar20 - local_1138;
      *(undefined4 *)(param_7 + 0xc) = 0;
      uVar26 = NEON_fmsub(fVar20,fVar23,local_1148);
      uVar29 = NEON_fmsub(fVar20,fVar25,uStack_1144);
      uVar28 = NEON_fmsub(fVar20,fVar36,uStack_1140);
      *(undefined4 *)param_7 = uVar26;
      *(undefined4 *)(param_7 + 4) = uVar29;
      *(undefined4 *)(param_7 + 8) = uVar28;
      *(ulong *)(param_8 + 8) = CONCAT44(uStack_113c,uStack_1140);
      *(ulong *)param_8 = CONCAT44(uStack_1144,local_1148);
      *(float *)param_6 = fVar23;
      *(float *)(param_6 + 4) = fVar25;
      *(float *)(param_6 + 8) = fVar36;
      *(float *)(param_6 + 0xc) = fVar38;
    }
    bVar5 = local_1134 != '\0';
  }
  if (*(long *)(lVar4 + 0x28) != local_b8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar5);
  }
  return;
}


