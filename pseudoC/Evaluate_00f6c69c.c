// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Evaluate
// Entry Point: 00f6c69c
// Size: 1528 bytes
// Signature: undefined __thiscall Evaluate(GJK * this, MinkowskiDiff * param_1, btVector3 * param_2)


/* gjkepa2_impl::GJK::Evaluate(gjkepa2_impl::MinkowskiDiff const&, btVector3 const&) */

void __thiscall gjkepa2_impl::GJK::Evaluate(GJK *this,MinkowskiDiff *param_1,btVector3 *param_2)

{
  sSimplex *psVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint local_f4;
  undefined8 local_f0;
  float local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  ulong local_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong local_a8;
  long local_a0;
  
  lVar4 = tpidr_el0;
  local_a0 = *(long *)(lVar4 + 0x28);
  *(GJK **)(this + 0x198) = this + 0x118;
  *(GJK **)(this + 0x1a0) = this + 0x138;
  *(undefined8 *)(this + 0x1b8) = 4;
  *(GJK **)(this + 0x1a8) = this + 0x158;
  *(GJK **)(this + 0x1b0) = this + 0x178;
  *(undefined4 *)(this + 0x1c8) = 0;
  uVar19 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar19;
  uVar19 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = uVar19;
  uVar19 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = uVar19;
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x30) = uVar19;
  uVar19 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x40) = uVar19;
  uVar19 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x50) = uVar19;
  uVar19 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x60) = uVar19;
  uVar19 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x70) = uVar19;
  uVar12 = *(undefined8 *)(param_1 + 0x88);
  uVar19 = *(undefined8 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  psVar1 = (sSimplex *)(this + 0xa8);
  *(undefined8 *)(this + 0x88) = uVar12;
  *(undefined8 *)(this + 0x80) = uVar19;
  uVar19 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x90) = uVar19;
  fVar17 = *(float *)(this + 0x90);
  fVar20 = *(float *)(this + 0x94);
  fVar24 = *(float *)(this + 0x98);
  fVar18 = -fVar17;
  uVar21 = NEON_fmadd(fVar20,fVar20,fVar17 * fVar17);
  fVar20 = -fVar20;
  fVar17 = (float)NEON_fmadd(fVar24,fVar24,uVar21);
  fVar24 = -fVar24;
  if (fVar17 <= 0.0) {
    fVar18 = 1.0;
    fVar20 = 0.0;
    fVar24 = 0.0;
  }
  local_e0 = CONCAT44(fVar20,fVar18);
  uStack_d8 = (ulong)(uint)fVar24;
  appendvertice(this,psVar1,(btVector3 *)&local_e0);
  lVar7 = *(long *)(this + 0xa8);
  uVar15 = 0;
  uVar16 = 0;
  *(undefined4 *)(this + 200) = 0x3f800000;
  uVar19 = *(undefined8 *)(lVar7 + 0x10);
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(lVar7 + 0x18);
  *(undefined8 *)(this + 0x90) = uVar19;
  uStack_d8 = *(ulong *)(lVar7 + 0x18);
  local_e0 = *(undefined8 *)(lVar7 + 0x10);
  uVar19 = *(undefined8 *)(this + 0x90);
  fVar18 = *(float *)(this + 0x98);
  uVar14 = (ulong)*(uint *)(this + 0x1bc);
  local_d0 = local_e0;
  local_c8 = uStack_d8;
  local_c0 = local_e0;
  uStack_b8 = uStack_d8;
  local_b0 = local_e0;
  local_a8 = uStack_d8;
  do {
    fVar20 = (float)uVar19;
    fVar24 = (float)((ulong)uVar19 >> 0x20);
    fVar22 = (float)NEON_fmadd(fVar18,fVar18,fVar20 * fVar20 + fVar24 * fVar24);
    fVar22 = SQRT(fVar22);
    if (fVar22 < 0.0001) {
      *(undefined4 *)(this + 0x1c8) = 1;
LAB_00f6cbc0:
      iVar5 = *(int *)(this + 0x1c8);
      break;
    }
    local_f0 = CONCAT44(-fVar24,-fVar20);
    local_e8 = -fVar18;
    plVar2 = (long *)(this + uVar14 * 0x38 + 0xa8);
    local_e4 = 0;
    appendvertice(this,(sSimplex *)plVar2,(btVector3 *)&local_f0);
    uVar6 = *(uint *)(this + uVar14 * 0x38 + 0xd8);
    lVar7 = *(long *)(this + (ulong)(uVar6 - 1) * 8 + uVar14 * 0x38 + 0xa8);
    fVar18 = *(float *)(undefined8 *)(lVar7 + 0x10);
    fVar24 = *(float *)(lVar7 + 0x14);
    fVar20 = *(float *)(lVar7 + 0x18);
    uVar21 = NEON_fmadd(fVar24 - local_e0._4_4_,fVar24 - local_e0._4_4_,
                        (fVar18 - (float)local_e0) * (fVar18 - (float)local_e0));
    fVar25 = (float)NEON_fmadd(fVar20 - (float)uStack_d8,fVar20 - (float)uStack_d8,uVar21);
    if (fVar25 < 0.0001) {
LAB_00f6cb8c:
      uVar14 = (ulong)*(uint *)(this + 0x1bc);
      iVar5 = *(int *)(this + uVar14 * 0x38 + 0xd8);
      *(uint *)(this + uVar14 * 0x38 + 0xd8) = iVar5 - 1U;
      uVar16 = *(uint *)(this + 0x1b8);
      uVar19 = *(undefined8 *)(this + (ulong)(iVar5 - 1U) * 8 + uVar14 * 0x38 + 0xa8);
      *(uint *)(this + 0x1b8) = uVar16 + 1;
      *(undefined8 *)(this + (ulong)uVar16 * 8 + 0x198) = uVar19;
      goto LAB_00f6cbc0;
    }
    uVar21 = NEON_fmadd(fVar24 - local_d0._4_4_,fVar24 - local_d0._4_4_,
                        (fVar18 - (float)local_d0) * (fVar18 - (float)local_d0));
    fVar25 = (float)NEON_fmadd(fVar20 - (float)local_c8,fVar20 - (float)local_c8,uVar21);
    if (fVar25 < 0.0001) goto LAB_00f6cb8c;
    uVar21 = NEON_fmadd(fVar24 - local_c0._4_4_,fVar24 - local_c0._4_4_,
                        (fVar18 - (float)local_c0) * (fVar18 - (float)local_c0));
    fVar25 = (float)NEON_fmadd(fVar20 - (float)uStack_b8,fVar20 - (float)uStack_b8,uVar21);
    if (fVar25 < 0.0001) goto LAB_00f6cb8c;
    uVar21 = NEON_fmadd(fVar24 - local_b0._4_4_,fVar24 - local_b0._4_4_,
                        (fVar18 - (float)local_b0) * (fVar18 - (float)local_b0));
    fVar25 = (float)NEON_fmadd(fVar20 - (float)local_a8,fVar20 - (float)local_a8,uVar21);
    if (fVar25 < 0.0001) goto LAB_00f6cb8c;
    uVar21 = NEON_fmadd(fVar24,*(undefined4 *)(this + 0x94),fVar18 * *(float *)(this + 0x90));
    fVar18 = (float)NEON_fmadd(fVar20,*(undefined4 *)(this + 0x98),uVar21);
    uVar15 = uVar15 + 1 & 3;
    fVar18 = (float)NEON_fmadd(fVar22,0xbf7ff972,fVar18 / fVar22);
    uVar19 = *(undefined8 *)(lVar7 + 0x10);
    (&uStack_d8)[(ulong)uVar15 * 2] = *(ulong *)(lVar7 + 0x18);
    (&local_e0)[(ulong)uVar15 * 2] = uVar19;
    if (-0.0 <= fVar18) goto LAB_00f6cb8c;
    local_f4 = 0;
    if (uVar6 == 4) {
      fVar17 = (float)projectorigin((btVector3 *)(*plVar2 + 0x10),
                                    (btVector3 *)(*(long *)(this + uVar14 * 0x38 + 0xb0) + 0x10),
                                    (btVector3 *)(*(long *)(this + uVar14 * 0x38 + 0xb8) + 0x10),
                                    (btVector3 *)(*(long *)(this + uVar14 * 0x38 + 0xc0) + 0x10),
                                    (float *)&local_f0,&local_f4);
LAB_00f6ca88:
      uVar6 = local_f4;
      if (fVar17 < 0.0) {
LAB_00f6cc54:
        uVar14 = (ulong)*(uint *)(this + 0x1bc);
        iVar5 = *(int *)(this + uVar14 * 0x38 + 0xd8);
        *(uint *)(this + uVar14 * 0x38 + 0xd8) = iVar5 - 1U;
        uVar16 = *(uint *)(this + 0x1b8);
        uVar19 = *(undefined8 *)(this + (ulong)(iVar5 - 1U) * 8 + uVar14 * 0x38 + 0xa8);
        *(uint *)(this + 0x1b8) = uVar16 + 1;
        *(undefined8 *)(this + (ulong)uVar16 * 8 + 0x198) = uVar19;
        iVar5 = *(int *)(this + 0x1c8);
        break;
      }
    }
    else {
      if (uVar6 == 3) {
        fVar17 = (float)projectorigin((btVector3 *)(*plVar2 + 0x10),
                                      (btVector3 *)(*(long *)(this + uVar14 * 0x38 + 0xb0) + 0x10),
                                      (btVector3 *)(*(long *)(this + uVar14 * 0x38 + 0xb8) + 0x10),
                                      (float *)&local_f0,&local_f4);
        goto LAB_00f6ca88;
      }
      if (uVar6 != 2) goto LAB_00f6ca88;
      lVar8 = *plVar2;
      fVar18 = *(float *)(lVar8 + 0x10);
      fVar20 = *(float *)(lVar8 + 0x14);
      lVar7 = *(long *)(this + uVar14 * 0x38 + 0xb0);
      fVar17 = *(float *)(lVar8 + 0x18);
      fVar26 = *(float *)(lVar7 + 0x10);
      fVar27 = *(float *)(lVar7 + 0x14);
      fVar28 = *(float *)(lVar7 + 0x18);
      fVar22 = fVar26 - fVar18;
      fVar24 = fVar27 - fVar20;
      fVar25 = fVar28 - fVar17;
      uVar21 = NEON_fmadd(fVar24,fVar24,fVar22 * fVar22);
      fVar29 = (float)NEON_fmadd(fVar25,fVar25,uVar21);
      if (fVar29 <= 0.0) goto LAB_00f6cc54;
      fVar30 = (float)NEON_fmadd(fVar24,fVar20,fVar22 * fVar18);
      fVar30 = (float)NEON_fnmadd(fVar25,fVar17,-fVar30);
      fVar30 = fVar30 / fVar29;
      if (1.0 <= fVar30) {
        uVar21 = NEON_fmadd(fVar27,fVar27,fVar26 * fVar26);
        local_f0 = 0x3f80000000000000;
        fVar17 = (float)NEON_fmadd(fVar28,fVar28,uVar21);
        uVar6 = 2;
      }
      else if (fVar30 <= 0.0) {
        uVar21 = NEON_fmadd(fVar20,fVar20,fVar18 * fVar18);
        local_f0 = 0x3f800000;
        fVar17 = (float)NEON_fmadd(fVar17,fVar17,uVar21);
        uVar6 = 1;
      }
      else {
        fVar18 = (float)NEON_fmadd(fVar30,fVar22,fVar18);
        uVar21 = NEON_fmadd(fVar30,fVar24,fVar20);
        uVar23 = NEON_fmadd(fVar30,fVar25,fVar17);
        uVar21 = NEON_fmadd(uVar21,uVar21,fVar18 * fVar18);
        fVar17 = (float)NEON_fmadd(uVar23,uVar23,uVar21);
        local_f0 = CONCAT44(fVar30,1.0 - fVar30);
        uVar6 = 3;
      }
    }
    uVar3 = 1 - (int)uVar14;
    uVar13 = (ulong)uVar3;
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0x98) = 0;
    *(uint *)(this + 0x1bc) = uVar3;
    *(uint *)(this + uVar13 * 0x38 + 0xd8) = 0;
    uVar3 = *(uint *)(this + uVar14 * 0x38 + 0xd8);
    if (uVar3 == 0) {
      uVar19 = 0;
      fVar18 = 0.0;
    }
    else {
      uVar19 = 0;
      fVar18 = 0.0;
      uVar10 = 0;
      uVar9 = 0;
      uVar11 = *(uint *)(this + 0x1b8);
      do {
        uVar12 = *(undefined8 *)(psVar1 + uVar9 * 8 + uVar14 * 0x38);
        if ((uVar6 >> (ulong)((uint)uVar9 & 0x1f) & 1) == 0) {
          *(uint *)(this + 0x1b8) = uVar11 + 1;
          *(undefined8 *)(this + (ulong)uVar11 * 8 + 0x198) = uVar12;
          uVar11 = uVar11 + 1;
        }
        else {
          fVar20 = *(float *)((long)&local_f0 + uVar9 * 4);
          lVar7 = uVar13 * 0x38 + 0xa8;
          *(undefined8 *)(this + (ulong)uVar10 * 8 + lVar7) = uVar12;
          *(uint *)(this + uVar13 * 0x38 + 0xd8) = uVar10 + 1;
          *(float *)(this + (ulong)uVar10 * 4 + lVar7 + 0x20) = fVar20;
          uVar12 = *(undefined8 *)(*(long *)(psVar1 + uVar9 * 8 + uVar14 * 0x38) + 0x10);
          uVar19 = CONCAT44((float)((ulong)uVar19 >> 0x20) + (float)((ulong)uVar12 >> 0x20) * fVar20
                            ,(float)uVar19 + (float)uVar12 * fVar20);
          fVar18 = (float)NEON_fmadd(*(undefined4 *)
                                      (*(long *)(psVar1 + uVar9 * 8 + uVar14 * 0x38) + 0x18),fVar20,
                                     fVar18);
          *(undefined8 *)(this + 0x90) = uVar19;
          *(float *)(this + 0x98) = fVar18;
          uVar10 = uVar10 + 1;
        }
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    iVar5 = *(int *)(this + 0x1c8);
    uVar16 = uVar16 + 1;
    if (uVar6 == 0xf) {
      iVar5 = 1;
    }
    if (0x7f < uVar16) {
      iVar5 = 2;
    }
    *(int *)(this + 0x1c8) = iVar5;
    uVar14 = uVar13;
  } while (iVar5 == 0);
  *(GJK **)(this + 0x1c0) = this + uVar14 * 0x38 + 0xa8;
  if (iVar5 == 1) {
    fVar18 = 0.0;
  }
  else {
    if (iVar5 != 0) goto LAB_00f6cc0c;
    uVar21 = NEON_fmadd(*(undefined4 *)(this + 0x94),*(undefined4 *)(this + 0x94),
                        *(float *)(this + 0x90) * *(float *)(this + 0x90));
    fVar18 = (float)NEON_fmadd(*(undefined4 *)(this + 0x98),*(undefined4 *)(this + 0x98),uVar21);
    fVar18 = SQRT(fVar18);
  }
  *(float *)(this + 0xa0) = fVar18;
LAB_00f6cc0c:
  if (*(long *)(lVar4 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


