// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Evaluate
// Entry Point: 00f6dac0
// Size: 1848 bytes
// Signature: undefined __thiscall Evaluate(EPA * this, GJK * param_1, btVector3 * param_2)


/* gjkepa2_impl::EPA::Evaluate(gjkepa2_impl::GJK&, btVector3 const&) */

void __thiscall gjkepa2_impl::EPA::Evaluate(EPA *this,GJK *param_1,btVector3 *param_2)

{
  uint *puVar1;
  long *plVar2;
  sSV *psVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  sSV *psVar11;
  int iVar12;
  float *pfVar13;
  code *pcVar14;
  sSV *psVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  undefined8 *puVar20;
  sSV **ppsVar21;
  long lVar22;
  float *pfVar23;
  float *pfVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  sSV *psVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  undefined8 local_e0;
  long local_d0;
  long lStack_c8;
  uint local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined4 local_ac;
  long local_a8;
  
  lVar5 = tpidr_el0;
  local_a8 = *(long *)(lVar5 + 0x28);
  ppsVar21 = *(sSV ***)(param_1 + 0x1c0);
  if ((1 < *(uint *)(ppsVar21 + 6)) && (uVar7 = GJK::EncloseOrigin(), (uVar7 & 1) != 0)) {
    lVar16 = *(long *)(this + 0x7060);
    puVar1 = (uint *)(this + 0x7058);
    if (lVar16 != 0) {
      iVar12 = *(int *)(this + 0x7078);
      iVar18 = *(int *)(this + 0x7068);
      do {
        if (*(long *)(lVar16 + 0x50) != 0) {
          *(undefined8 *)(*(long *)(lVar16 + 0x50) + 0x48) = *(undefined8 *)(lVar16 + 0x48);
        }
        if (*(long *)(lVar16 + 0x48) != 0) {
          *(undefined8 *)(*(long *)(lVar16 + 0x48) + 0x50) = *(undefined8 *)(lVar16 + 0x50);
        }
        if (*(long *)(this + 0x7060) == lVar16) {
          *(undefined8 *)(this + 0x7060) = *(undefined8 *)(lVar16 + 0x50);
        }
        *(undefined8 *)(lVar16 + 0x48) = 0;
        *(undefined8 *)(lVar16 + 0x50) = *(undefined8 *)(this + 0x7070);
        if (*(long *)(this + 0x7070) != 0) {
          *(long *)(*(long *)(this + 0x7070) + 0x48) = lVar16;
        }
        *(long *)(this + 0x7070) = lVar16;
        lVar16 = *(long *)(this + 0x7060);
        iVar12 = iVar12 + 1;
        iVar18 = iVar18 + -1;
      } while (lVar16 != 0);
      *(int *)(this + 0x7068) = iVar18;
      *(int *)(this + 0x7078) = iVar12;
    }
    *(undefined4 *)this = 0;
    *puVar1 = 0;
    psVar15 = ppsVar21[2];
    psVar28 = ppsVar21[3];
    psVar3 = *ppsVar21;
    psVar11 = ppsVar21[1];
    fVar26 = *(float *)(psVar28 + 0x10);
    fVar29 = *(float *)(psVar28 + 0x14);
    fVar34 = *(float *)(psVar28 + 0x18);
    uVar39 = NEON_fmadd((*(float *)(psVar11 + 0x18) - fVar34) * (*(float *)(psVar3 + 0x10) - fVar26)
                        ,*(float *)(psVar15 + 0x14) - fVar29,
                        (*(float *)(psVar11 + 0x14) - fVar29) * (*(float *)(psVar3 + 0x18) - fVar34)
                        * (*(float *)(psVar15 + 0x10) - fVar26));
    uVar30 = NEON_fmadd((*(float *)(psVar11 + 0x10) - fVar26) * (*(float *)(psVar3 + 0x18) - fVar34)
                        ,*(float *)(psVar15 + 0x14) - fVar29,
                        (*(float *)(psVar11 + 0x18) - fVar34) * (*(float *)(psVar3 + 0x14) - fVar29)
                        * (*(float *)(psVar15 + 0x10) - fVar26));
    fVar36 = (float)NEON_fmadd((*(float *)(psVar11 + 0x10) - fVar26) *
                               (*(float *)(psVar3 + 0x14) - fVar29),
                               *(float *)(psVar15 + 0x18) - fVar34,uVar39);
    fVar26 = (float)NEON_fmadd((*(float *)(psVar11 + 0x14) - fVar29) *
                               (*(float *)(psVar3 + 0x10) - fVar26),
                               *(float *)(psVar15 + 0x18) - fVar34,uVar30);
    psVar28 = psVar3;
    if (fVar26 - fVar36 < 0.0) {
      *ppsVar21 = psVar11;
      ppsVar21[1] = psVar3;
      psVar28 = (sSV *)NEON_rev64(ppsVar21[4],4);
      ppsVar21[4] = psVar28;
      psVar28 = psVar11;
      psVar11 = psVar3;
    }
    lVar16 = newface(this,psVar28,psVar11,psVar15,true);
    lVar8 = newface(this,ppsVar21[1],*ppsVar21,ppsVar21[3],true);
    lVar9 = newface(this,ppsVar21[2],ppsVar21[1],ppsVar21[3],true);
    lVar10 = newface(this,*ppsVar21,ppsVar21[2],ppsVar21[3],true);
    if (*(int *)(this + 0x7068) == 4) {
      pfVar23 = *(float **)(this + 0x7060);
      pfVar13 = *(float **)(pfVar23 + 0x14);
      if (pfVar13 != (float *)0x0) {
        fVar26 = pfVar23[4] * pfVar23[4];
        pfVar24 = pfVar23;
        do {
          fVar29 = pfVar13[4] * pfVar13[4];
          bVar6 = fVar26 <= fVar29;
          fVar26 = (float)NEON_fminnm(fVar29,fVar26);
          pfVar23 = pfVar13;
          if (bVar6) {
            pfVar23 = pfVar24;
          }
          pfVar13 = *(float **)(pfVar13 + 0x14);
          pfVar24 = pfVar23;
        } while (pfVar13 != (float *)0x0);
      }
      lVar17 = *(long *)(pfVar23 + 6);
      lVar22 = *(long *)(pfVar23 + 8);
      uVar19 = 0;
      fVar29 = *pfVar23;
      fVar26 = pfVar23[1];
      local_e0 = *(undefined8 *)(pfVar23 + 2);
      fVar34 = pfVar23[4];
      lVar25 = *(long *)(pfVar23 + 10);
      *(undefined *)(lVar16 + 0x58) = 0;
      *(long *)(lVar16 + 0x30) = lVar8;
      *(undefined *)(lVar8 + 0x58) = 0;
      *(long *)(lVar8 + 0x30) = lVar16;
      *(undefined *)(lVar16 + 0x59) = 0;
      *(long *)(lVar16 + 0x38) = lVar9;
      *(undefined *)(lVar9 + 0x58) = 1;
      *(long *)(lVar9 + 0x30) = lVar16;
      *(undefined *)(lVar16 + 0x5a) = 0;
      *(long *)(lVar16 + 0x40) = lVar10;
      *(undefined *)(lVar10 + 0x58) = 2;
      *(long *)(lVar10 + 0x30) = lVar16;
      *(undefined *)(lVar8 + 0x59) = 2;
      *(long *)(lVar8 + 0x38) = lVar10;
      *(undefined *)(lVar10 + 0x5a) = 1;
      *(long *)(lVar10 + 0x40) = lVar8;
      *(undefined *)(lVar8 + 0x5a) = 1;
      *(long *)(lVar8 + 0x40) = lVar9;
      *(undefined2 *)(lVar9 + 0x59) = 0x102;
      *(long *)(lVar9 + 0x38) = lVar8;
      *(long *)(lVar9 + 0x40) = lVar10;
      *(undefined *)(lVar10 + 0x59) = 2;
      *(long *)(lVar10 + 0x38) = lVar9;
      *(undefined4 *)this = 0;
      do {
        uVar4 = *puVar1;
        uVar7 = (ulong)uVar4;
        if (0x7f < uVar4) {
          uVar30 = 6;
LAB_00f6e09c:
          *(undefined4 *)this = uVar30;
          break;
        }
        local_d0 = 0;
        lStack_c8 = 0;
        local_c0 = 0;
        uVar19 = uVar19 + 1;
        *puVar1 = uVar4 + 1;
        fVar36 = *pfVar23;
        fVar31 = pfVar23[1];
        fVar37 = pfVar23[2];
        *(char *)((long)pfVar23 + 0x5b) = (char)uVar19;
        uVar30 = NEON_fmadd(fVar31,fVar31,fVar36 * fVar36);
        fVar35 = (float)NEON_fmadd(fVar37,fVar37,uVar30);
        fVar35 = 1.0 / SQRT(fVar35);
        fVar31 = fVar35 * fVar31;
        fVar37 = fVar35 * fVar37;
        puVar20 = (undefined8 *)(this + uVar7 * 0x20 + 0x54);
        *(float *)puVar20 = fVar35 * fVar36;
        *(float *)(this + uVar7 * 0x20 + 0x58) = fVar31;
        *(undefined4 *)(this + uVar7 * 0x20 + 0x60) = 0;
        *(float *)(this + uVar7 * 0x20 + 0x5c) = fVar37;
        pcVar14 = *(code **)(param_1 + 0x80);
        plVar2 = (long *)(*(long *)param_1 + ((long)*(ulong *)(param_1 + 0x88) >> 1));
        if ((*(ulong *)(param_1 + 0x88) & 1) != 0) {
          pcVar14 = *(code **)(pcVar14 + *plVar2);
        }
        fVar35 = (float)(*pcVar14)(plVar2,puVar20);
        local_ac = 0;
        local_b8 = CONCAT44(-(float)((ulong)*puVar20 >> 0x20),-(float)*puVar20);
        fVar32 = -*(float *)(this + uVar7 * 0x20 + 0x5c);
        fVar36 = fVar37;
        local_b0 = fVar32;
        fVar27 = (float)MinkowskiDiff::Support1((MinkowskiDiff *)param_1,(btVector3 *)&local_b8);
        *(float *)(this + uVar7 * 0x20 + 100) = fVar35 - fVar27;
        *(float *)(this + uVar7 * 0x20 + 0x68) = fVar31 - fVar32;
        *(float *)(this + uVar7 * 0x20 + 0x6c) = fVar37 - fVar36;
        *(undefined4 *)(this + uVar7 * 0x20 + 0x70) = 0;
        uVar30 = NEON_fmadd(fVar31 - fVar32,pfVar23[1],(fVar35 - fVar27) * *pfVar23);
        fVar36 = (float)NEON_fmadd(fVar37 - fVar36,pfVar23[2],uVar30);
        if (fVar36 - pfVar23[4] <= 0.0001) {
          uVar30 = 7;
          goto LAB_00f6e09c;
        }
        uVar7 = expand(this,uVar19,(sSV *)puVar20,*(sFace **)(pfVar23 + 0xc),
                       (uint)*(byte *)(pfVar23 + 0x16),(sHorizon *)&local_d0);
        if (((uVar7 & 1) == 0) ||
           (uVar7 = expand(this,uVar19,(sSV *)puVar20,*(sFace **)(pfVar23 + 0xe),
                           (uint)*(byte *)((long)pfVar23 + 0x59),(sHorizon *)&local_d0),
           (uVar7 & 1) == 0)) {
          uVar30 = 4;
          goto LAB_00f6e09c;
        }
        uVar7 = expand(this,uVar19,(sSV *)puVar20,*(sFace **)(pfVar23 + 0x10),
                       (uint)*(byte *)((long)pfVar23 + 0x5a),(sHorizon *)&local_d0);
        uVar30 = 4;
        if (((uVar7 & 1) == 0) || (local_c0 < 3)) goto LAB_00f6e09c;
        *(undefined *)(local_d0 + 0x59) = 2;
        *(long *)(local_d0 + 0x38) = lStack_c8;
        *(long *)(lStack_c8 + 0x40) = local_d0;
        *(undefined *)(lStack_c8 + 0x5a) = 1;
        if (*(long *)(pfVar23 + 0x14) != 0) {
          *(undefined8 *)(*(long *)(pfVar23 + 0x14) + 0x48) = *(undefined8 *)(pfVar23 + 0x12);
        }
        if (*(long *)(pfVar23 + 0x12) != 0) {
          *(undefined8 *)(*(long *)(pfVar23 + 0x12) + 0x50) = *(undefined8 *)(pfVar23 + 0x14);
        }
        if (*(float **)(this + 0x7060) == pfVar23) {
          *(undefined8 *)(this + 0x7060) = *(undefined8 *)(pfVar23 + 0x14);
        }
        *(int *)(this + 0x7068) = *(int *)(this + 0x7068) + -1;
        *(undefined8 *)(pfVar23 + 0x12) = 0;
        *(undefined8 *)(pfVar23 + 0x14) = *(undefined8 *)(this + 0x7070);
        if (*(long *)(this + 0x7070) != 0) {
          *(float **)(*(long *)(this + 0x7070) + 0x48) = pfVar23;
        }
        *(float **)(this + 0x7070) = pfVar23;
        pfVar23 = *(float **)(this + 0x7060);
        *(int *)(this + 0x7078) = *(int *)(this + 0x7078) + 1;
        pfVar13 = *(float **)(pfVar23 + 0x14);
        if (pfVar13 != (float *)0x0) {
          fVar26 = pfVar23[4] * pfVar23[4];
          pfVar24 = pfVar23;
          do {
            fVar29 = pfVar13[4] * pfVar13[4];
            bVar6 = fVar26 <= fVar29;
            fVar26 = (float)NEON_fminnm(fVar29,fVar26);
            pfVar23 = pfVar13;
            if (bVar6) {
              pfVar23 = pfVar24;
            }
            pfVar13 = *(float **)(pfVar13 + 0x14);
            pfVar24 = pfVar23;
          } while (pfVar13 != (float *)0x0);
        }
        lVar17 = *(long *)(pfVar23 + 6);
        lVar22 = *(long *)(pfVar23 + 8);
        fVar29 = *pfVar23;
        fVar26 = pfVar23[1];
        local_e0 = *(undefined8 *)(pfVar23 + 2);
        fVar34 = pfVar23[4];
        lVar25 = *(long *)(pfVar23 + 10);
      } while (uVar19 != 0xff);
      *(float *)(this + 0x40) = fVar29;
      *(float *)(this + 0x44) = fVar26;
      fVar26 = fVar34 * fVar26;
      *(float *)(this + 0x50) = fVar34;
      fVar29 = fVar34 * fVar29;
      *(undefined8 *)(this + 0x48) = local_e0;
      fVar34 = fVar34 * (float)local_e0;
      *(undefined4 *)(this + 0x38) = 3;
      uVar30 = *(undefined4 *)this;
      *(long *)(this + 8) = lVar17;
      *(long *)(this + 0x10) = lVar22;
      *(long *)(this + 0x18) = lVar25;
      fVar36 = *(float *)(lVar22 + 0x14) - fVar26;
      fVar35 = *(float *)(lVar22 + 0x10) - fVar29;
      fVar31 = *(float *)(lVar25 + 0x10) - fVar29;
      fVar37 = *(float *)(lVar22 + 0x18) - fVar34;
      fVar27 = *(float *)(lVar25 + 0x14) - fVar26;
      fVar40 = *(float *)(lVar25 + 0x18) - fVar34;
      fVar32 = (float)NEON_fnmsub(fVar27,fVar35,fVar31 * fVar36);
      uVar39 = NEON_fnmsub(fVar40,fVar36,fVar27 * fVar37);
      uVar38 = NEON_fnmsub(fVar31,fVar37,fVar40 * fVar35);
      uVar39 = NEON_fmadd(uVar39,uVar39,fVar32 * fVar32);
      fVar31 = (float)NEON_fmadd(uVar38,uVar38,uVar39);
      fVar31 = SQRT(fVar31);
      *(float *)(this + 0x28) = fVar31;
      fVar35 = *(float *)(lVar25 + 0x14) - fVar26;
      fVar36 = *(float *)(lVar25 + 0x10) - fVar29;
      fVar37 = *(float *)(lVar17 + 0x10) - fVar29;
      fVar27 = *(float *)(lVar25 + 0x18) - fVar34;
      fVar32 = *(float *)(lVar17 + 0x14) - fVar26;
      fVar40 = *(float *)(lVar17 + 0x18) - fVar34;
      fVar41 = (float)NEON_fnmsub(fVar32,fVar36,fVar37 * fVar35);
      uVar38 = NEON_fnmsub(fVar40,fVar35,fVar32 * fVar27);
      uVar39 = NEON_fnmsub(fVar37,fVar27,fVar40 * fVar36);
      uVar38 = NEON_fmadd(uVar38,uVar38,fVar41 * fVar41);
      fVar35 = (float)NEON_fmadd(uVar39,uVar39,uVar38);
      fVar35 = SQRT(fVar35);
      *(float *)(this + 0x2c) = fVar35;
      fVar27 = *(float *)(lVar17 + 0x14) - fVar26;
      fVar32 = *(float *)(lVar22 + 0x10) - fVar29;
      fVar29 = *(float *)(lVar17 + 0x10) - fVar29;
      fVar37 = *(float *)(lVar17 + 0x18) - fVar34;
      fVar26 = *(float *)(lVar22 + 0x14) - fVar26;
      fVar34 = *(float *)(lVar22 + 0x18) - fVar34;
      fVar36 = (float)NEON_fnmsub(fVar26,fVar29,fVar32 * fVar27);
      uVar39 = NEON_fnmsub(fVar34,fVar27,fVar26 * fVar37);
      uVar38 = NEON_fnmsub(fVar32,fVar37,fVar34 * fVar29);
      uVar39 = NEON_fmadd(uVar39,uVar39,fVar36 * fVar36);
      fVar26 = (float)NEON_fmadd(uVar38,uVar38,uVar39);
      fVar29 = 1.0 / (fVar35 + fVar31 + SQRT(fVar26));
      *(float *)(this + 0x28) = fVar31 * fVar29;
      *(float *)(this + 0x2c) = fVar35 * fVar29;
      *(float *)(this + 0x30) = SQRT(fVar26) * fVar29;
      goto LAB_00f6e044;
    }
  }
  *(undefined4 *)this = 8;
  fVar26 = (float)*(undefined8 *)param_2;
  fVar29 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar34 = *(float *)(param_2 + 8);
  fVar36 = (float)NEON_fmadd(fVar34,fVar34,fVar26 * fVar26 + fVar29 * fVar29);
  if (SQRT(fVar36) <= 0.0) {
    fVar36 = 0.0;
    uVar33 = 0x3f800000;
  }
  else {
    fVar36 = 1.0 / SQRT(fVar36);
    uVar33 = CONCAT44(-fVar29 * fVar36,-fVar26 * fVar36);
    fVar36 = fVar36 * -fVar34;
  }
  *(undefined8 *)(this + 0x40) = uVar33;
  *(float *)(this + 0x48) = fVar36;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  uVar30 = 8;
  *(undefined4 *)(this + 0x38) = 1;
  psVar15 = *ppsVar21;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  *(sSV **)(this + 8) = psVar15;
LAB_00f6e044:
  if (*(long *)(lVar5 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar30);
  }
  return;
}


