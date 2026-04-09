// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Distance
// Entry Point: 00f6c170
// Size: 884 bytes
// Signature: undefined __cdecl Distance(btConvexShape * param_1, btTransform * param_2, btConvexShape * param_3, btTransform * param_4, btVector3 * param_5, sResults * param_6)


/* btGjkEpaSolver2::Distance(btConvexShape const*, btTransform const&, btConvexShape const*,
   btTransform const&, btVector3 const&, btGjkEpaSolver2::sResults&) */

void btGjkEpaSolver2::Distance
               (btConvexShape *param_1,btTransform *param_2,btConvexShape *param_3,
               btTransform *param_4,btVector3 *param_5,sResults *param_6)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  float *pfVar4;
  code *pcVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  float in_s1;
  float fVar9;
  ulong in_d2;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_310;
  float local_300;
  float local_2f0;
  GJK aGStack_2c8 [144];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined8 local_110;
  long local_108;
  undefined4 local_100;
  long local_f8;
  long local_f0;
  undefined4 local_e8;
  float local_e4;
  undefined4 uStack_e0;
  undefined4 local_d8;
  float local_d4;
  undefined4 uStack_d0;
  undefined4 local_c8;
  float local_c4;
  undefined4 local_c0;
  float local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  undefined8 local_84;
  code *local_78;
  ulong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00f6c4e4();
  local_238 = 0;
  uStack_230 = 0;
  local_110 = 0;
  local_100 = 2;
  local_228 = 0;
  iVar3 = gjkepa2_impl::GJK::Evaluate(aGStack_2c8,(MinkowskiDiff *)&local_f8,param_5);
  if (iVar3 == 0) {
    if (*(int *)(local_108 + 0x30) == 0) {
      fVar24 = 0.0;
      fVar25 = 0.0;
      fVar26 = 0.0;
      local_310 = 0.0;
      local_300 = 0.0;
      local_2f0 = 0.0;
    }
    else {
      fVar25 = 0.0;
      fVar26 = 0.0;
      fVar24 = 0.0;
      uVar6 = 0;
      local_2f0 = 0.0;
      local_300 = 0.0;
      local_310 = 0.0;
      do {
        fVar9 = (float)in_d2;
        plVar1 = (long *)(local_f8 + ((long)uStack_70 >> 1));
        pcVar5 = local_78;
        if ((uStack_70 & 1) != 0) {
          pcVar5 = *(code **)(local_78 + *plVar1);
        }
        fVar7 = *(float *)(local_108 + uVar6 * 4 + 0x20);
        in_d2 = (ulong)(uint)fVar7;
        uVar8 = (*pcVar5)(plVar1,*(undefined8 *)(local_108 + uVar6 * 8));
        plVar1 = (long *)(local_f0 + ((long)uStack_70 >> 1));
        pcVar5 = local_78;
        if ((uStack_70 & 1) != 0) {
          pcVar5 = *(code **)(local_78 + *plVar1);
        }
        pfVar4 = *(float **)(local_108 + uVar6 * 8);
        fVar12 = pfVar4[1];
        fVar21 = pfVar4[2];
        local_5c = 0;
        fVar11 = -*pfVar4;
        uVar10 = NEON_fmadd(uStack_e0,fVar21,local_e4 * fVar12);
        uVar15 = NEON_fmadd(uStack_d0,fVar21,local_d4 * fVar12);
        uVar13 = NEON_fmadd(local_c0,fVar21,local_c4 * fVar12);
        local_68 = NEON_fnmsub(local_e8,fVar11,uVar10);
        uStack_64 = NEON_fnmsub(local_d8,fVar11,uVar15);
        local_60 = NEON_fnmsub(local_c8,fVar11,uVar13);
        local_310 = (float)NEON_fmadd(uVar8,fVar7,local_310);
        local_300 = (float)NEON_fmadd(in_s1,fVar7,local_300);
        local_2f0 = (float)NEON_fmadd(fVar9,fVar7,local_2f0);
        fVar21 = (float)(*pcVar5)(plVar1,&local_68);
        uVar6 = uVar6 + 1;
        uVar8 = NEON_fmadd(uStack_b4,in_s1,fVar21 * local_b8);
        fVar11 = fStack_a4 * in_s1;
        fVar12 = local_94 * in_s1;
        in_s1 = (float)NEON_fmadd(local_b0,fVar9,uVar8);
        in_s1 = in_s1 + local_88;
        fVar24 = (float)NEON_fmadd(in_s1,fVar7,fVar24);
        fVar25 = fVar25 + (local_a8 * fVar21 + fVar11 + fStack_a0 * fVar9 + (float)local_84) * fVar7
        ;
        fVar26 = fVar26 + (local_98 * fVar21 + fVar12 + local_90 * fVar9 +
                          (float)((ulong)local_84 >> 0x20)) * fVar7;
      } while (uVar6 < *(uint *)(local_108 + 0x30));
    }
    fVar9 = local_310 - fVar24;
    fVar7 = local_300 - fVar25;
    fVar12 = local_2f0 - fVar26;
    uVar14 = *(undefined8 *)param_2;
    uVar18 = *(undefined8 *)(param_2 + 4);
    fVar21 = *(float *)(param_2 + 0x10);
    fVar19 = *(float *)(param_2 + 0x14);
    uVar8 = NEON_fmadd(fVar7,fVar7,fVar9 * fVar9);
    uVar22 = *(undefined8 *)(param_2 + 8);
    uVar10 = NEON_fmadd(*(undefined4 *)(param_2 + 0x24),local_300,
                        *(float *)(param_2 + 0x20) * local_310);
    uVar20 = *(undefined8 *)(param_2 + 0x30);
    fVar11 = (float)NEON_fmadd(fVar12,fVar12,uVar8);
    fVar23 = *(float *)(param_2 + 0x18);
    fVar11 = SQRT(fVar11);
    fVar16 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x28),local_2f0,uVar10);
    fVar17 = *(float *)(param_2 + 0x38);
    *(undefined4 *)(param_6 + 0x10) = 0;
    *(float *)(param_6 + 0xc) = fVar16 + fVar17;
    *(ulong *)(param_6 + 4) =
         CONCAT44(fVar21 * local_310 + fVar19 * local_300 + fVar23 * local_2f0 +
                  (float)((ulong)uVar20 >> 0x20),
                  (float)uVar14 * local_310 + (float)uVar18 * local_300 + (float)uVar22 * local_2f0
                  + (float)uVar20);
    uVar14 = *(undefined8 *)param_2;
    uVar18 = *(undefined8 *)(param_2 + 4);
    fVar21 = *(float *)(param_2 + 0x10);
    fVar19 = *(float *)(param_2 + 0x14);
    uVar20 = *(undefined8 *)(param_2 + 8);
    uVar8 = NEON_fmadd(*(undefined4 *)(param_2 + 0x24),fVar25,*(float *)(param_2 + 0x20) * fVar24);
    fVar23 = *(float *)(param_2 + 0x18);
    fVar17 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x28),fVar26,uVar8);
    fVar16 = 1.0 / fVar11;
    if (fVar11 <= 0.0001) {
      fVar16 = 1.0;
    }
    uVar22 = *(undefined8 *)(param_2 + 0x30);
    *(float *)(param_6 + 0x1c) = fVar17 + *(float *)(param_2 + 0x38);
    *(undefined4 *)(param_6 + 0x20) = 0;
    *(undefined4 *)(param_6 + 0x30) = 0;
    *(float *)(param_6 + 0x34) = fVar11;
    *(ulong *)(param_6 + 0x14) =
         CONCAT44(fVar21 * fVar24 + fVar19 * fVar25 + fVar23 * fVar26 +
                  (float)((ulong)uVar22 >> 0x20),
                  (float)uVar14 * fVar24 + (float)uVar18 * fVar25 + (float)uVar20 * fVar26 +
                  (float)uVar22);
    *(float *)(param_6 + 0x24) = fVar16 * fVar9;
    *(float *)(param_6 + 0x28) = fVar16 * fVar7;
    *(float *)(param_6 + 0x2c) = fVar16 * fVar12;
  }
  else {
    uVar8 = 1;
    if (iVar3 != 1) {
      uVar8 = 2;
    }
    *(undefined4 *)param_6 = uVar8;
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3 == 0);
  }
  return;
}


