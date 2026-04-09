// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcTimeOfImpact
// Entry Point: 00f72ba8
// Size: 1860 bytes
// Signature: undefined __thiscall calcTimeOfImpact(btSubsimplexConvexCast * this, btTransform * param_1, btTransform * param_2, btTransform * param_3, btTransform * param_4, CastResult * param_5)


/* btSubsimplexConvexCast::calcTimeOfImpact(btTransform const&, btTransform const&, btTransform
   const&, btTransform const&, btConvexCast::CastResult&) */

void __thiscall
btSubsimplexConvexCast::calcTimeOfImpact
          (btSubsimplexConvexCast *this,btTransform *param_1,btTransform *param_2,
          btTransform *param_3,btTransform *param_4,CastResult *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  undefined4 *puVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  uint *puVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar22;
  undefined8 uVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  uint uVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  float fVar54;
  float fVar55;
  uint local_260;
  float local_208;
  float local_204;
  float local_178;
  float local_174;
  undefined8 local_170;
  undefined8 uStack_160;
  undefined8 local_c0;
  float local_b8;
  undefined4 local_b4;
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  puVar6 = *(undefined4 **)(this + 8);
  *(undefined *)(puVar6 + 0x4e) = 0;
  *puVar6 = 0;
  *(undefined *)(puVar6 + 0x59) = 1;
  *(undefined8 *)(puVar6 + 0x54) = 0;
  *(undefined8 *)(puVar6 + 0x56) = 0;
  *(undefined *)(puVar6 + 0x58) = 0;
  *(undefined8 *)(puVar6 + 0x4b) = 0x5d5e0b6b;
  *(undefined8 *)(puVar6 + 0x49) = 0x5d5e0b6b5d5e0b6b;
  *(byte *)(puVar6 + 0x53) = *(byte *)(puVar6 + 0x53) & 0xf0;
  uStack_160 = *(undefined8 *)(param_1 + 0x30);
  local_b4 = 0;
  local_170 = *(undefined8 *)(param_3 + 0x30);
  local_174 = *(float *)(param_1 + 0x38);
  uVar45 = *(undefined4 *)(param_1 + 0x28);
  local_178 = *(float *)(param_3 + 0x38);
  uVar50 = *(undefined8 *)param_3;
  fVar55 = ((float)((ulong)local_170 >> 0x20) - *(float *)(param_4 + 0x34)) +
           (*(float *)(param_2 + 0x34) - (float)((ulong)uStack_160 >> 0x20));
  fVar42 = *(float *)(param_1 + 0x18);
  uVar53 = *(undefined8 *)(param_3 + 0x10);
  fVar54 = (local_178 - *(float *)(param_4 + 0x38)) + (*(float *)(param_2 + 0x38) - local_174);
  fVar51 = (float)*(undefined8 *)(param_1 + 0x10);
  fVar52 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  fVar35 = (float)*(undefined8 *)(param_1 + 0x20);
  fVar40 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  fVar36 = ((float)local_170 - *(float *)(param_4 + 0x30)) +
           (*(float *)(param_2 + 0x30) - (float)uStack_160);
  fVar13 = (float)NEON_fmadd(uVar45,fVar54,fVar42 * fVar55);
  fVar27 = *(float *)(param_1 + 8);
  local_b8 = (float)NEON_fnmadd(fVar27,fVar36,-fVar13);
  fVar28 = *(float *)(param_3 + 8);
  fVar46 = (float)*(undefined8 *)param_1;
  fVar47 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar21 = CONCAT44(-(fVar52 * fVar55 + fVar40 * fVar54) - fVar47 * fVar36,
                    -(fVar51 * fVar55 + fVar35 * fVar54) - fVar46 * fVar36);
  fVar14 = *(float *)(param_3 + 0x18);
  uVar20 = *(undefined8 *)(param_3 + 0x20);
  uVar15 = *(undefined4 *)(param_3 + 0x28);
  local_c0 = uVar21;
  fVar13 = fVar28;
  fVar16 = (float)(**(code **)(**(long **)(this + 0x10) + 0x80))(*(long **)(this + 0x10),&local_c0);
  local_b4 = 0;
  uVar17 = (undefined4)uVar21;
  uVar31 = NEON_fmadd(*(undefined4 *)(param_1 + 4),uVar17,fVar16 * *(float *)param_1);
  uVar43 = NEON_fmadd(*(undefined4 *)(param_1 + 0x14),uVar17,*(float *)(param_1 + 0x10) * fVar16);
  uVar37 = NEON_fmadd(*(undefined4 *)(param_3 + 0x18),fVar55,*(float *)(param_3 + 8) * fVar36);
  local_c0 = CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar36 +
                      (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20) * fVar55 +
                      (float)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20) * fVar54,
                      (float)*(undefined8 *)param_3 * fVar36 +
                      (float)*(undefined8 *)(param_3 + 0x10) * fVar55 +
                      (float)*(undefined8 *)(param_3 + 0x20) * fVar54);
  local_b8 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 0x28),fVar54,uVar37);
  uVar17 = NEON_fmadd(*(undefined4 *)(param_1 + 0x24),uVar17,*(float *)(param_1 + 0x20) * fVar16);
  fVar32 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),fVar13,uVar31);
  fVar23 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x18),fVar13,uVar43);
  fVar13 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),fVar13,uVar17);
  fVar29 = *(float *)(param_1 + 0x30);
  fVar38 = *(float *)(param_1 + 0x38);
  fVar32 = fVar32 + fVar29;
  fVar48 = fVar23 + *(float *)(param_1 + 0x34);
  fVar16 = (float)(**(code **)(**(long **)(this + 0x18) + 0x80))(*(long **)(this + 0x18),&local_c0);
  uVar31 = NEON_fmadd(*(undefined4 *)(param_3 + 4),fVar23,fVar16 * *(float *)param_3);
  uVar37 = NEON_fmadd(*(undefined4 *)(param_3 + 0x14),fVar23,*(float *)(param_3 + 0x10) * fVar16);
  uVar17 = NEON_fmadd(*(undefined4 *)(param_3 + 0x24),fVar23,*(float *)(param_3 + 0x20) * fVar16);
  fVar16 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 8),fVar29,uVar31);
  fVar24 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 0x18),fVar29,uVar37);
  fVar23 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 0x28),fVar29,uVar17);
  fVar32 = fVar32 - (fVar16 + *(float *)(param_3 + 0x30));
  fVar16 = 0.0;
  fVar48 = fVar48 - (fVar24 + *(float *)(param_3 + 0x34));
  fVar24 = (fVar13 + fVar38) - (fVar23 + *(float *)(param_3 + 0x38));
  local_208 = 0.0;
  uVar17 = NEON_fmadd(fVar48,fVar48,fVar32 * fVar32);
  fVar23 = (float)NEON_fmadd(fVar24,fVar24,uVar17);
  local_204 = 0.0;
  local_260 = 0;
  fVar13 = 0.0;
  if (0.0001 < fVar23) {
    uVar49 = 0;
    fVar16 = 0.0;
    iVar11 = 0x20;
    fVar23 = (float)uVar50;
    fVar38 = (float)uVar53;
    fVar29 = (float)((ulong)uVar50 >> 0x20);
    fVar12 = (float)((ulong)uVar53 >> 0x20);
    fVar22 = (float)((ulong)uVar20 >> 0x20);
    fVar13 = 0.0;
    local_260 = 0;
    local_204 = 0.0;
    local_208 = 0.0;
    do {
      if (iVar11 == 0) break;
      local_b4 = 0;
      fVar25 = (float)NEON_fmadd(fVar24,uVar45,fVar48 * fVar42);
      local_c0 = CONCAT44(-(fVar52 * fVar48 + fVar40 * fVar24) - fVar47 * fVar32,
                          -(fVar51 * fVar48 + fVar35 * fVar24) - fVar46 * fVar32);
      local_b8 = (float)NEON_fnmadd(fVar27,fVar32,-fVar25);
      fVar26 = local_b8;
      fVar30 = fVar27;
      fVar18 = (float)(**(code **)(**(long **)(this + 0x10) + 0x80))
                                (*(long **)(this + 0x10),&local_c0);
      local_b4 = 0;
      uVar17 = NEON_fmadd(fVar48,fVar14,fVar32 * fVar28);
      local_c0 = CONCAT44(fVar29 * fVar32 + fVar12 * fVar48 + fVar22 * fVar24,
                          fVar23 * fVar32 + fVar38 * fVar48 + (float)uVar20 * fVar24);
      local_b8 = (float)NEON_fmadd(fVar24,uVar15,uVar17);
      uVar21 = uVar20;
      fVar25 = local_b8;
      fVar19 = (float)(**(code **)(**(long **)(this + 0x18) + 0x80))
                                (*(long **)(this + 0x18),&local_c0);
      if (1.0 < fVar13) goto LAB_00f732a4;
      uVar31 = NEON_fmadd(fVar18,fVar35,local_174);
      fVar33 = (float)uStack_160 + fVar46 * fVar18 + fVar47 * fVar26 + fVar27 * fVar30;
      fVar34 = (float)((ulong)uStack_160 >> 0x20) + fVar51 * fVar18 + fVar52 * fVar26 +
               fVar42 * fVar30;
      fVar18 = (float)uVar21;
      fVar39 = (float)local_170 + fVar23 * fVar19 + fVar29 * fVar25 + fVar28 * fVar18;
      fVar41 = (float)((ulong)local_170 >> 0x20) + fVar38 * fVar19 + fVar12 * fVar25 +
               fVar14 * fVar18;
      uVar17 = NEON_fmadd(fVar19,(float)uVar20,local_178);
      uVar31 = NEON_fmadd(fVar26,fVar40,uVar31);
      uVar17 = NEON_fmadd(fVar25,fVar22,uVar17);
      fVar19 = fVar33 - fVar39;
      fVar44 = fVar34 - fVar41;
      fVar26 = (float)NEON_fmadd(fVar30,uVar45,uVar31);
      fVar25 = (float)NEON_fmadd(fVar18,uVar15,uVar17);
      fVar30 = fVar26 - fVar25;
      fVar18 = (float)NEON_fmadd(fVar24,fVar30,fVar32 * fVar19 + fVar48 * fVar44);
      if (0.0 < fVar18) {
        uVar17 = NEON_fmadd(fVar48,fVar55,fVar32 * fVar36);
        fVar16 = (float)NEON_fmadd(fVar24,fVar54,uVar17);
        if (-1.421085e-14 <= fVar16) goto LAB_00f732a4;
        fVar13 = fVar13 - fVar18 / fVar16;
        fVar16 = 1.0 - fVar13;
        local_174 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x38),fVar13,
                                      *(float *)(param_1 + 0x38) * fVar16);
        local_170 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20) * fVar16 +
                             (float)((ulong)*(undefined8 *)(param_4 + 0x30) >> 0x20) * fVar13,
                             (float)*(undefined8 *)(param_3 + 0x30) * fVar16 +
                             (float)*(undefined8 *)(param_4 + 0x30) * fVar13);
        local_178 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x38),fVar13,
                                      *(float *)(param_3 + 0x38) * fVar16);
        uStack_160 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) * fVar16 +
                              (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20) * fVar13,
                              (float)*(undefined8 *)(param_1 + 0x30) * fVar16 +
                              (float)*(undefined8 *)(param_2 + 0x30) * fVar13);
        fVar16 = fVar32;
        local_260 = uVar49;
        local_208 = fVar48;
        local_204 = fVar24;
      }
      puVar10 = *(uint **)(this + 8);
      uVar49 = *puVar10;
      if ((int)uVar49 < 1) {
        bVar5 = false;
      }
      else {
        uVar7 = 0;
        pfVar8 = (float *)(puVar10 + 3);
        bVar5 = true;
        do {
          fVar24 = fVar19 - (float)*(undefined8 *)(pfVar8 + -2);
          fVar32 = fVar44 - (float)((ulong)*(undefined8 *)(pfVar8 + -2) >> 0x20);
          fVar24 = (float)NEON_fmadd(fVar30 - *pfVar8,fVar30 - *pfVar8,
                                     fVar24 * fVar24 + fVar32 * fVar32);
          if (fVar24 <= (float)puVar10[0x4d]) break;
          uVar7 = uVar7 + 1;
          pfVar8 = pfVar8 + 4;
          bVar5 = uVar7 < uVar49;
        } while (uVar49 != uVar7);
      }
      if ((((float)puVar10[0x4c] == 0.0) && (fVar30 == (float)puVar10[0x4b])) &&
         (fVar44 == (float)puVar10[0x4a])) {
        bVar5 = (bool)(fVar19 == (float)puVar10[0x49] | bVar5);
      }
      if (!bVar5) {
        puVar10[0x4c] = 0;
        puVar10[0x4b] = (uint)fVar30;
        puVar10[(long)(int)uVar49 * 4 + 4] = 0;
        uVar2 = *puVar10;
        *(ulong *)(puVar10 + 0x49) = CONCAT44(fVar44,fVar19);
        puVar10[(long)(int)uVar49 * 4 + 3] = (uint)fVar30;
        puVar10[(long)(int)uVar2 * 4 + 0x18] = 0;
        uVar3 = *puVar10;
        puVar10[(long)(int)uVar2 * 4 + 0x17] = (uint)fVar26;
        puVar10[(long)(int)uVar3 * 4 + 0x2c] = 0;
        *(undefined *)(puVar10 + 0x59) = 1;
        uVar1 = *puVar10;
        *(ulong *)(puVar10 + (long)(int)uVar49 * 4 + 1) = CONCAT44(fVar44,fVar19);
        *(ulong *)(puVar10 + (long)(int)uVar2 * 4 + 0x15) = CONCAT44(fVar34,fVar33);
        *(ulong *)(puVar10 + (long)(int)uVar3 * 4 + 0x29) = CONCAT44(fVar41,fVar39);
        puVar10[(long)(int)uVar3 * 4 + 0x2b] = (uint)fVar25;
        *puVar10 = uVar1 + 1;
        puVar10 = *(uint **)(this + 8);
      }
      uVar7 = btVoronoiSimplexSolver::updateClosestVectorAndPoints();
      if ((uVar7 & 1) == 0) break;
      fVar32 = (float)puVar10[0x45];
      fVar48 = (float)puVar10[0x46];
      iVar11 = iVar11 + -1;
      fVar24 = (float)puVar10[0x47];
      uVar49 = puVar10[0x48];
      uVar17 = NEON_fmadd(fVar48,fVar48,fVar32 * fVar32);
      fVar25 = (float)NEON_fmadd(fVar24,fVar24,uVar17);
    } while (0.0001 < fVar25);
  }
  fVar24 = 0.0;
  uVar15 = NEON_fmadd(local_208,local_208,fVar16 * fVar16);
  *(float *)(param_5 + 0xa8) = fVar13;
  fVar23 = (float)NEON_fmadd(local_204,local_204,uVar15);
  fVar13 = 0.0;
  fVar14 = 0.0;
  uVar49 = 0;
  if (1.421085e-14 <= fVar23) {
    fVar14 = 1.0 / SQRT(fVar23);
    fVar24 = fVar14 * fVar16;
    fVar13 = fVar14 * local_208;
    fVar14 = fVar14 * local_204;
    uVar49 = local_260;
  }
  *(float *)(param_5 + 0x88) = fVar24;
  *(float *)(param_5 + 0x8c) = fVar13;
  *(float *)(param_5 + 0x90) = fVar14;
  *(uint *)(param_5 + 0x94) = uVar49;
  uVar15 = NEON_fmadd(fVar13,fVar55,fVar24 * fVar36);
  fVar13 = (float)NEON_fmadd(fVar14,fVar54,uVar15);
  if (-*(float *)(param_5 + 0xb8) <= fVar13) {
LAB_00f732a4:
    uVar20 = 0;
  }
  else {
    lVar9 = *(long *)(this + 8);
    btVoronoiSimplexSolver::updateClosestVectorAndPoints();
    uVar20 = 1;
    uVar21 = *(undefined8 *)(lVar9 + 0x104);
    *(undefined8 *)(param_5 + 0xa0) = *(undefined8 *)(lVar9 + 0x10c);
    *(undefined8 *)(param_5 + 0x98) = uVar21;
  }
  if (*(long *)(lVar4 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar20);
  }
  return;
}


