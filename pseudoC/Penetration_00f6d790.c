// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Penetration
// Entry Point: 00f6d790
// Size: 816 bytes
// Signature: undefined __cdecl Penetration(btConvexShape * param_1, btTransform * param_2, btConvexShape * param_3, btTransform * param_4, btVector3 * param_5, sResults * param_6, bool param_7)


/* btGjkEpaSolver2::Penetration(btConvexShape const*, btTransform const&, btConvexShape const*,
   btTransform const&, btVector3 const&, btGjkEpaSolver2::sResults&, bool) */

void btGjkEpaSolver2::Penetration
               (btConvexShape *param_1,btTransform *param_2,btConvexShape *param_3,
               btTransform *param_4,btVector3 *param_5,sResults *param_6,bool param_7)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  float fVar16;
  undefined8 in_d2;
  undefined8 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_7348;
  float local_7340;
  undefined4 local_733c;
  float local_7338;
  float fStack_7334;
  float local_7330;
  undefined4 uStack_732c;
  undefined4 local_7310 [4];
  uint local_7300;
  undefined8 local_72f8;
  undefined8 local_72f0;
  float local_72e8;
  undefined auStack_6340 [72];
  undefined8 auStack_62f8 [3];
  undefined auStack_62e0 [24576];
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined *local_2c8;
  undefined4 local_2c0;
  GJK aGStack_2b8 [144];
  undefined8 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_100;
  undefined4 local_f0;
  long local_e8 [16];
  code *local_68;
  ulong uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00f6c4e4();
  local_7338 = -(float)*(undefined8 *)param_5;
  fStack_7334 = -(float)((ulong)*(undefined8 *)param_5 >> 0x20);
  local_7330 = -*(float *)(param_5 + 8);
  local_220 = 0;
  local_228 = 0;
  local_100 = 0;
  local_218 = 0;
  local_f0 = 2;
  uStack_732c = 0;
  iVar3 = gjkepa2_impl::GJK::Evaluate
                    (aGStack_2b8,(MinkowskiDiff *)local_e8,(btVector3 *)&local_7338);
  if (iVar3 == 2) {
    uVar4 = 0;
    *(undefined4 *)param_6 = 2;
  }
  else {
    uVar4 = 0;
    if (iVar3 == 1) {
      puVar7 = (undefined *)0x0;
      lVar5 = 0;
      local_7338 = 1.261169e-44;
      lVar8 = 0x6000;
      local_2d8 = 0;
      local_2d0 = 0;
      local_2e0 = 0;
      local_72f8 = 0;
      local_72f0 = 0;
      local_72e8 = 0.0;
      do {
        lVar9 = 0xff - lVar5;
        local_2c8 = auStack_6340 + lVar8;
        *(undefined8 *)((long)auStack_62f8 + lVar8) = 0;
        *(undefined **)((long)auStack_62f8 + lVar8 + 8) = puVar7;
        if (puVar7 != (undefined *)0x0) {
          *(undefined **)(puVar7 + 0x48) = local_2c8;
        }
        lVar5 = lVar5 + 1;
        lVar8 = lVar8 + -0x60;
        puVar7 = auStack_62e0 + lVar9 * 0x60;
      } while (lVar8 != 0);
      local_7348 = CONCAT44(-(float)((ulong)*(undefined8 *)param_5 >> 0x20),
                            -(float)*(undefined8 *)param_5);
      local_7340 = -*(float *)(param_5 + 8);
      uVar15 = (ulong)(uint)local_7340;
      local_2c0 = 0x100;
      local_733c = 0;
      iVar3 = gjkepa2_impl::EPA::Evaluate((EPA *)&local_7338,aGStack_2b8,(btVector3 *)&local_7348);
      if (iVar3 == 9) {
        uVar4 = 0;
        *(undefined4 *)param_6 = 3;
      }
      else {
        if (local_7300 == 0) {
          fVar23 = 0.0;
          fVar26 = 0.0;
          fVar24 = 0.0;
        }
        else {
          fVar24 = 0.0;
          fVar26 = 0.0;
          fVar23 = 0.0;
          uVar10 = 0;
          do {
            plVar1 = (long *)(local_e8[0] + ((long)uStack_60 >> 1));
            pcVar6 = local_68;
            if ((uStack_60 & 1) != 0) {
              pcVar6 = *(code **)(local_68 + *plVar1);
            }
            uVar11 = (*pcVar6)(plVar1,*(undefined8 *)(&local_7330 + uVar10 * 2));
            uVar19 = local_7310[uVar10];
            uVar10 = uVar10 + 1;
            fVar23 = (float)NEON_fmadd(uVar11,uVar19,fVar23);
            fVar26 = (float)NEON_fmadd((int)uVar15,uVar19,fVar26);
            fVar24 = (float)NEON_fmadd((int)in_d2,uVar19,fVar24);
          } while (uVar10 < local_7300);
        }
        uVar4 = 1;
        *(undefined4 *)param_6 = 1;
        uVar12 = *(undefined8 *)param_2;
        uVar21 = *(undefined8 *)(param_2 + 8);
        uVar17 = *(undefined8 *)(param_2 + 4);
        fVar13 = *(float *)(param_2 + 0x10);
        fVar22 = *(float *)(param_2 + 0x18);
        fVar18 = *(float *)(param_2 + 0x14);
        uVar19 = *(undefined4 *)(param_2 + 0x28);
        uVar11 = NEON_fmadd(*(undefined4 *)(param_2 + 0x24),fVar26,
                            *(float *)(param_2 + 0x20) * fVar23);
        uVar20 = *(undefined8 *)(param_2 + 0x30);
        fVar16 = *(float *)(param_2 + 0x38);
        *(undefined4 *)(param_6 + 0x10) = 0;
        fVar14 = (float)NEON_fmadd(uVar19,fVar24,uVar11);
        *(float *)(param_6 + 0xc) = fVar14 + fVar16;
        fVar25 = (float)NEON_fmsub((float)local_72f0,local_72e8,fVar24);
        *(ulong *)(param_6 + 4) =
             CONCAT44(fVar13 * fVar23 + fVar18 * fVar26 + fVar22 * fVar24 +
                      (float)((ulong)uVar20 >> 0x20),
                      (float)uVar12 * fVar23 + (float)uVar17 * fVar26 + (float)uVar21 * fVar24 +
                      (float)uVar20);
        uVar12 = *(undefined8 *)param_2;
        fVar23 = fVar23 - local_72e8 * (float)local_72f8;
        uVar17 = *(undefined8 *)(param_2 + 4);
        fVar13 = (float)((ulong)local_72f8 >> 0x20);
        fVar26 = fVar26 - local_72e8 * fVar13;
        fVar24 = *(float *)(param_2 + 0x10);
        fVar18 = *(float *)(param_2 + 0x14);
        uVar21 = *(undefined8 *)(param_2 + 8);
        uVar11 = NEON_fmadd(*(undefined4 *)(param_2 + 0x24),fVar26,
                            *(float *)(param_2 + 0x20) * fVar23);
        fVar22 = *(float *)(param_2 + 0x18);
        fVar16 = *(float *)(param_2 + 0x38);
        fVar14 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x28),fVar25,uVar11);
        uVar20 = *(undefined8 *)(param_2 + 0x30);
        *(ulong *)(param_6 + 0x24) = CONCAT44(-fVar13,-(float)local_72f8);
        *(undefined4 *)(param_6 + 0x20) = 0;
        *(float *)(param_6 + 0x2c) = -(float)local_72f0;
        *(undefined4 *)(param_6 + 0x30) = 0;
        *(float *)(param_6 + 0x34) = -local_72e8;
        *(float *)(param_6 + 0x1c) = fVar14 + fVar16;
        *(ulong *)(param_6 + 0x14) =
             CONCAT44(fVar24 * fVar23 + fVar18 * fVar26 + fVar22 * fVar25 +
                      (float)((ulong)uVar20 >> 0x20),
                      (float)uVar12 * fVar23 + (float)uVar17 * fVar26 + (float)uVar21 * fVar25 +
                      (float)uVar20);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


