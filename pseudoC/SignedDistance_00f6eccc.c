// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SignedDistance
// Entry Point: 00f6eccc
// Size: 1304 bytes
// Signature: undefined __cdecl SignedDistance(btVector3 * param_1, float param_2, btConvexShape * param_3, btTransform * param_4, sResults * param_5)


/* WARNING: Switch with 1 destination removed at 0x00f6f11c */
/* WARNING: Exceeded maximum restarts with more pending */
/* btGjkEpaSolver2::SignedDistance(btVector3 const&, float, btConvexShape const*, btTransform
   const&, btGjkEpaSolver2::sResults&) */

void btGjkEpaSolver2::SignedDistance
               (btVector3 *param_1,float param_2,btConvexShape *param_3,btTransform *param_4,
               sResults *param_5)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  code *pcVar6;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  ulong in_d2;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  float fVar16;
  uint uVar17;
  undefined8 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_3d0;
  float local_3c0;
  float local_3b0;
  GJK aGStack_388 [144];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined8 local_1d0;
  long local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined **local_178;
  uint local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined8 uStack_154;
  float local_14c;
  float local_13c;
  long local_130;
  long local_128;
  undefined4 local_120;
  float local_11c;
  undefined4 uStack_118;
  undefined4 local_110;
  float local_10c;
  undefined4 uStack_108;
  undefined4 local_100;
  float local_fc;
  undefined4 local_f8;
  float local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  undefined8 local_bc;
  code *local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  uVar4 = 0x3f8000003f800000;
  local_178 = &PTR__btConvexShape_0101c5e8;
  local_160 = 0xffffffff;
  local_170 = 8;
  local_168 = 0;
  local_190 = 0x3f800000;
  uStack_180 = *(undefined8 *)(param_1 + 8);
  local_188 = *(undefined8 *)param_1;
  uStack_154 = 0x3f800000;
  local_15c = 0x3f8000003f800000;
  local_1ac = 0;
  local_1b4 = 0;
  local_1b8 = 0x3f800000;
  local_1a4 = 0x3f800000;
  local_198 = 0;
  local_1a0 = 0;
  local_14c = param_2;
  local_13c = param_2;
  FUN_00f6c4e4(param_3,param_4,&local_178,&local_1b8,param_5,&local_130,0);
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_1d0 = 0;
  local_1c0 = 2;
  local_2e8 = 0;
  uStack_98 = 0x3f800000;
  local_a0 = 0x3f8000003f800000;
  iVar3 = gjkepa2_impl::GJK::Evaluate
                    (aGStack_388,(MinkowskiDiff *)&local_130,(btVector3 *)&local_a0);
  if (iVar3 == 1) {
    uVar4 = Penetration(param_3,param_4,(btConvexShape *)&local_178,(btTransform *)&local_1b8,
                        (btVector3 *)&local_2f8,param_5,true);
    if ((uVar4 & 1) != 0) {
      fVar23 = (float)*(undefined8 *)(param_5 + 4) - (float)*(undefined8 *)(param_5 + 0x14);
      fVar25 = (float)((ulong)*(undefined8 *)(param_5 + 4) >> 0x20) -
               (float)((ulong)*(undefined8 *)(param_5 + 0x14) >> 0x20);
      fVar11 = *(float *)(param_5 + 0xc) - *(float *)(param_5 + 0x1c);
      fVar24 = (float)NEON_fmadd(fVar11,fVar11,fVar23 * fVar23 + fVar25 * fVar25);
      fVar24 = SQRT(fVar24);
      if (1.192093e-07 <= fVar24) {
        *(undefined4 *)(param_5 + 0x30) = 0;
        fVar12 = 1.0 / fVar24;
        *(ulong *)(param_5 + 0x24) = CONCAT44(fVar25 * fVar12,fVar23 * fVar12);
        *(float *)(param_5 + 0x2c) = fVar12 * fVar11;
      }
      fVar24 = -fVar24;
      goto LAB_00f6f170;
    }
  }
  else if (iVar3 == 0) {
    if (*(int *)(local_1c8 + 0x30) == 0) {
      fVar24 = 0.0;
      fVar25 = 0.0;
      fVar23 = 0.0;
      local_3d0 = 0.0;
      local_3c0 = 0.0;
      local_3b0 = 0.0;
    }
    else {
      fVar24 = 0.0;
      fVar25 = 0.0;
      fVar23 = 0.0;
      uVar7 = 0;
      local_3b0 = 0.0;
      local_3c0 = 0.0;
      local_3d0 = 0.0;
      do {
        fVar12 = (float)in_d2;
        fVar11 = (float)uVar4;
        plVar1 = (long *)(local_130 + ((long)uStack_a8 >> 1));
        pcVar6 = local_b0;
        if ((uStack_a8 & 1) != 0) {
          pcVar6 = *(code **)(local_b0 + *plVar1);
        }
        fVar8 = *(float *)(local_1c8 + uVar7 * 4 + 0x20);
        in_d2 = (ulong)(uint)fVar8;
        uVar9 = (*pcVar6)(plVar1,*(undefined8 *)(local_1c8 + uVar7 * 8));
        plVar1 = (long *)(local_128 + ((long)uStack_a8 >> 1));
        pcVar6 = local_b0;
        if ((uStack_a8 & 1) != 0) {
          pcVar6 = *(code **)(local_b0 + *plVar1);
        }
        pfVar5 = *(float **)(local_1c8 + uVar7 * 8);
        fVar19 = pfVar5[1];
        fVar28 = pfVar5[2];
        fVar16 = -*pfVar5;
        uVar14 = NEON_fmadd(uStack_118,fVar28,local_11c * fVar19);
        uVar22 = NEON_fmadd(uStack_108,fVar28,local_10c * fVar19);
        uVar20 = NEON_fmadd(local_f8,fVar28,local_fc * fVar19);
        uVar14 = NEON_fnmsub(local_120,fVar16,uVar14);
        uVar22 = NEON_fnmsub(local_110,fVar16,uVar22);
        uVar17 = NEON_fnmsub(local_100,fVar16,uVar20);
        local_a0 = CONCAT44(uVar22,uVar14);
        local_3d0 = (float)NEON_fmadd(uVar9,fVar8,local_3d0);
        uStack_98 = (ulong)uVar17;
        local_3c0 = (float)NEON_fmadd(fVar11,fVar8,local_3c0);
        local_3b0 = (float)NEON_fmadd(fVar12,fVar8,local_3b0);
        fVar16 = (float)(*pcVar6)(plVar1,&local_a0);
        uVar7 = uVar7 + 1;
        uVar9 = NEON_fmadd(uStack_ec,fVar11,fVar16 * local_f0);
        fVar19 = (float)NEON_fmadd(local_e8,fVar12,uVar9);
        uVar4 = (ulong)(uint)(fVar19 + local_c0);
        fVar23 = (float)NEON_fmadd(fVar19 + local_c0,fVar8,fVar23);
        fVar24 = fVar24 + (local_e0 * fVar16 + fStack_dc * fVar11 + fStack_d8 * fVar12 +
                          (float)local_bc) * fVar8;
        fVar25 = fVar25 + (local_d0 * fVar16 + local_cc * fVar11 + local_c8 * fVar12 +
                          (float)((ulong)local_bc >> 0x20)) * fVar8;
      } while (uVar7 < *(uint *)(local_1c8 + 0x30));
    }
    uVar10 = *(undefined8 *)param_4;
    fVar11 = *(float *)(param_4 + 0x10);
    uVar13 = *(undefined8 *)(param_4 + 4);
    uVar9 = NEON_fmadd(*(undefined4 *)(param_4 + 0x24),local_3c0,
                       *(float *)(param_4 + 0x20) * local_3d0);
    fVar16 = *(float *)(param_4 + 0x14);
    uVar18 = *(undefined8 *)(param_4 + 8);
    fVar12 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x28),local_3b0,uVar9);
    fVar19 = *(float *)(param_4 + 0x18);
    fVar8 = *(float *)(param_4 + 0x38);
    uVar15 = *(undefined8 *)(param_4 + 0x30);
    *(undefined4 *)(param_5 + 0x10) = 0;
    fVar28 = (float)uVar10 * local_3d0 + (float)uVar13 * local_3c0 + (float)uVar18 * local_3b0 +
             (float)uVar15;
    fVar26 = fVar11 * local_3d0 + fVar16 * local_3c0 + fVar19 * local_3b0 +
             (float)((ulong)uVar15 >> 0x20);
    *(float *)(param_5 + 0xc) = fVar12 + fVar8;
    *(ulong *)(param_5 + 4) = CONCAT44(fVar26,fVar28);
    uVar10 = *(undefined8 *)(param_4 + 4);
    uVar13 = *(undefined8 *)(param_4 + 0x14);
    uVar15 = *(undefined8 *)(param_4 + 0x24);
    uVar18 = *(undefined8 *)param_4;
    uVar21 = *(undefined8 *)(param_4 + 0x30);
    fVar19 = *(float *)(param_4 + 0x10);
    fVar11 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x20),fVar23,(float)uVar15 * fVar24);
    fVar16 = *(float *)(param_4 + 0x38);
    *(undefined4 *)(param_5 + 0x20) = 0;
    fVar27 = (float)uVar10 * fVar24 + (float)uVar18 * fVar23 +
             (float)((ulong)uVar10 >> 0x20) * fVar25 + (float)uVar21;
    fVar23 = (float)uVar13 * fVar24 + fVar19 * fVar23 +
             (float)((ulong)uVar13 >> 0x20) * fVar25 + (float)((ulong)uVar21 >> 0x20);
    fVar16 = fVar11 + (float)((ulong)uVar15 >> 0x20) * fVar25 + fVar16;
    *(ulong *)(param_5 + 0x14) = CONCAT44(fVar23,fVar27);
    *(float *)(param_5 + 0x1c) = fVar16;
    switch(*(undefined4 *)(param_3 + 8)) {
    case 0:
    case 1:
    case 4:
    case 5:
    case 10:
    case 0xb:
    case 0xd:
      fVar24 = *(float *)(param_3 + 0x3c);
      break;
    default:
      fVar24 = (float)(**(code **)(*(long *)param_3 + 0x60))(param_3);
      break;
    case 8:
      fVar24 = *(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x2c);
    }
    fVar27 = fVar27 - fVar28;
    fVar23 = fVar23 - fVar26;
    fVar16 = fVar16 - (fVar12 + fVar8);
    if (local_170 < 0xe) {
                    /* WARNING: This code block may not be properly labeled as switch case */
      fVar25 = (float)local_15c * local_14c;
    }
    else {
      fVar25 = (float)(*(code *)local_178[0xc])(&local_178);
    }
    fVar25 = fVar25 + fVar24;
    *(undefined4 *)(param_5 + 0x30) = 0;
    fVar24 = (float)NEON_fmadd(fVar16,fVar16,fVar27 * fVar27 + fVar23 * fVar23);
    fVar11 = 1.0 / SQRT(fVar24);
    uVar9 = NEON_fmadd(fVar11 * fVar16,fVar25,*(undefined4 *)(param_5 + 0xc));
    fVar24 = SQRT(fVar24) - fVar25;
    *(ulong *)(param_5 + 0x24) = CONCAT44(fVar23 * fVar11,fVar27 * fVar11);
    *(float *)(param_5 + 0x2c) = fVar11 * fVar16;
    *(ulong *)(param_5 + 4) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 4) >> 0x20) + fVar23 * fVar11 * fVar25,
                  (float)*(undefined8 *)(param_5 + 4) + fVar27 * fVar11 * fVar25);
    *(undefined4 *)(param_5 + 0xc) = uVar9;
    goto LAB_00f6f170;
  }
  fVar24 = 3.402823e+38;
LAB_00f6f170:
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar24);
}


