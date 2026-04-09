// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNavMeshPath
// Entry Point: 00709eac
// Size: 836 bytes
// Signature: undefined __thiscall getNavMeshPath(AnimalLocomotionSystem * this, Vector3 * param_1, Vector3 * param_2, vector * param_3)


/* AnimalLocomotionSystem::getNavMeshPath(Vector3 const&, Vector3 const&,
   std::__ndk1::vector<Vector3, std::__ndk1::allocator<Vector3> >&) */

bool __thiscall
AnimalLocomotionSystem::getNavMeshPath
          (AnimalLocomotionSystem *this,Vector3 *param_1,Vector3 *param_2,vector *param_3)

{
  long lVar1;
  int iVar2;
  NavigationMeshPath *pNVar3;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)(this + 0x3b0);
  uStack_60 = 0x461c40003fc90fa6;
  local_68 = 0xbfc90fa63f000000;
  fVar19 = *(float *)(param_1 + 4) - *(float *)(lVar6 + 0x38);
  fVar35 = *(float *)(param_2 + 4) - *(float *)(lVar6 + 0x38);
  fVar14 = *(float *)param_1 - *(float *)(lVar6 + 0x34);
  fVar29 = *(float *)param_2 - *(float *)(lVar6 + 0x34);
  fVar24 = *(float *)(param_1 + 8) - *(float *)(lVar6 + 0x3c);
  uVar51 = NEON_fmadd(fVar14,*(undefined4 *)(lVar6 + 4),fVar19 * *(float *)(lVar6 + 8));
  uVar43 = NEON_fmadd(fVar14,*(undefined4 *)(lVar6 + 0x14),fVar19 * *(float *)(lVar6 + 0x18));
  uVar15 = NEON_fmadd(fVar14,*(undefined4 *)(lVar6 + 0x24),fVar19 * *(float *)(lVar6 + 0x28));
  uVar20 = NEON_fmadd(fVar29,*(undefined4 *)(lVar6 + 4),*(float *)(lVar6 + 8) * fVar35);
  fVar14 = *(float *)(param_2 + 8) - *(float *)(lVar6 + 0x3c);
  uVar40 = NEON_fmadd(fVar29,*(undefined4 *)(lVar6 + 0x14),*(float *)(lVar6 + 0x18) * fVar35);
  uVar30 = NEON_fmadd(fVar29,*(undefined4 *)(lVar6 + 0x24),*(float *)(lVar6 + 0x28) * fVar35);
  local_80 = NEON_fmadd(fVar24,*(undefined4 *)(lVar6 + 0xc),uVar51);
  uStack_74 = NEON_fmadd(fVar14,*(undefined4 *)(lVar6 + 0xc),uVar20);
  uStack_7c = NEON_fmadd(fVar24,*(undefined4 *)(lVar6 + 0x1c),uVar43);
  local_78 = NEON_fmadd(fVar24,*(undefined4 *)(lVar6 + 0x2c),uVar15);
  local_70 = NEON_fmadd(fVar14,*(undefined4 *)(lVar6 + 0x1c),uVar40);
  uStack_6c = NEON_fmadd(fVar14,*(undefined4 *)(lVar6 + 0x2c),uVar30);
  pNVar3 = (NavigationMeshPath *)
           DetourNavigationMeshQuery::createPath
                     (*(DetourNavigationMeshQuery **)(lVar6 + 0x50),(PathRequestDesc *)&local_80);
  iVar2 = NavigationMeshPath::getState();
  if (iVar2 == 0) {
    uVar4 = NavigationMeshPath::getNumOfWaypoints();
    uVar12 = uVar4 & 0xffffffff;
    pfVar5 = (float *)NavigationMeshPath::getWaypoints();
    pfVar8 = *(float **)param_3;
    lVar6 = *(long *)(param_3 + 8) - (long)pfVar8 >> 2;
    uVar7 = lVar6 * -0x5555555555555555;
    if (uVar12 <= uVar7) {
      if (uVar12 <= uVar7 && uVar7 - uVar12 != 0) {
        *(float **)(param_3 + 8) = pfVar8 + uVar12 * 3;
      }
    }
    else {
      std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>::__append
                ((vector<Vector3,std::__ndk1::allocator<Vector3>> *)param_3,
                 uVar12 + lVar6 * 0x5555555555555555);
      pfVar8 = *(float **)param_3;
    }
    if ((uint)uVar4 != 0) {
      lVar6 = *(long *)(this + 0x3b0);
      if ((uint)uVar4 < 4) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        if ((pfVar5 + uVar12 * 3 <= pfVar8 || pfVar8 + uVar12 * 3 <= pfVar5) &&
           ((float *)(lVar6 + 0x40U) <= pfVar8 || pfVar8 + uVar12 * 3 <= (float *)(lVar6 + 4U))) {
          uVar7 = uVar4 & 0xfffffffc;
          uVar4 = uVar7;
          pfVar10 = pfVar8;
          pfVar11 = pfVar5;
          do {
            fVar29 = pfVar11[3];
            fVar16 = pfVar11[4];
            fVar21 = pfVar11[5];
            fVar35 = pfVar11[6];
            fVar17 = pfVar11[7];
            fVar22 = pfVar11[8];
            fVar13 = pfVar11[9];
            fVar18 = pfVar11[10];
            fVar23 = pfVar11[0xb];
            uVar4 = uVar4 - 4;
            fVar25 = *pfVar11;
            fVar31 = pfVar11[1];
            fVar36 = pfVar11[2];
            fVar26 = pfVar11[3];
            fVar32 = pfVar11[4];
            fVar37 = pfVar11[5];
            fVar27 = pfVar11[6];
            fVar33 = pfVar11[7];
            fVar38 = pfVar11[8];
            fVar28 = pfVar11[9];
            fVar34 = pfVar11[10];
            fVar39 = pfVar11[0xb];
            fVar41 = *(float *)(lVar6 + 0x14);
            fVar42 = *(float *)(lVar6 + 0x18);
            fVar44 = *(float *)(lVar6 + 0x1c);
            fVar45 = *(float *)(lVar6 + 4);
            fVar48 = *(float *)(lVar6 + 8);
            fVar50 = *(float *)(lVar6 + 0x2c);
            fVar46 = *(float *)(lVar6 + 0xc);
            fVar49 = *(float *)(lVar6 + 0x24);
            fVar47 = *(float *)(lVar6 + 0x28);
            fVar14 = *(float *)(lVar6 + 0x34);
            fVar19 = *(float *)(lVar6 + 0x38);
            fVar24 = *(float *)(lVar6 + 0x3c);
            *pfVar10 = pfVar11[1] * fVar41 + *pfVar11 * fVar45 + pfVar11[2] * fVar49 + fVar14;
            pfVar10[1] = fVar31 * fVar42 + fVar25 * fVar48 + fVar36 * fVar47 + fVar19;
            pfVar10[2] = fVar31 * fVar44 + fVar25 * fVar46 + fVar36 * fVar50 + fVar24;
            pfVar10[3] = fVar16 * fVar41 + fVar29 * fVar45 + fVar21 * fVar49 + fVar14;
            pfVar10[4] = fVar32 * fVar42 + fVar26 * fVar48 + fVar37 * fVar47 + fVar19;
            pfVar10[5] = fVar32 * fVar44 + fVar26 * fVar46 + fVar37 * fVar50 + fVar24;
            pfVar10[6] = fVar17 * fVar41 + fVar35 * fVar45 + fVar22 * fVar49 + fVar14;
            pfVar10[7] = fVar33 * fVar42 + fVar27 * fVar48 + fVar38 * fVar47 + fVar19;
            pfVar10[8] = fVar33 * fVar44 + fVar27 * fVar46 + fVar38 * fVar50 + fVar24;
            pfVar10[9] = fVar18 * fVar41 + fVar13 * fVar45 + fVar23 * fVar49 + fVar14;
            pfVar10[10] = fVar34 * fVar42 + fVar28 * fVar48 + fVar39 * fVar47 + fVar19;
            pfVar10[0xb] = fVar34 * fVar44 + fVar28 * fVar46 + fVar39 * fVar50 + fVar24;
            pfVar10 = pfVar10 + 0xc;
            pfVar11 = pfVar11 + 0xc;
          } while (uVar4 != 0);
          if (uVar7 == uVar12) goto LAB_0070a0c0;
        }
      }
      lVar9 = uVar12 - uVar7;
      pfVar5 = pfVar5 + uVar7 * 3 + 2;
      pfVar8 = pfVar8 + uVar7 * 3 + 2;
      do {
        lVar9 = lVar9 + -1;
        uVar15 = NEON_fmadd(pfVar5[-2],*(undefined4 *)(lVar6 + 4),
                            pfVar5[-1] * *(float *)(lVar6 + 0x14));
        fVar14 = (float)NEON_fmadd(*pfVar5,*(undefined4 *)(lVar6 + 0x24),uVar15);
        pfVar8[-2] = fVar14 + *(float *)(lVar6 + 0x34);
        uVar15 = NEON_fmadd(pfVar5[-2],*(undefined4 *)(lVar6 + 8),
                            pfVar5[-1] * *(float *)(lVar6 + 0x18));
        fVar14 = (float)NEON_fmadd(*pfVar5,*(undefined4 *)(lVar6 + 0x28),uVar15);
        pfVar8[-1] = fVar14 + *(float *)(lVar6 + 0x38);
        uVar15 = NEON_fmadd(pfVar5[-2],*(undefined4 *)(lVar6 + 0xc),
                            pfVar5[-1] * *(float *)(lVar6 + 0x1c));
        fVar14 = (float)NEON_fmadd(*pfVar5,*(undefined4 *)(lVar6 + 0x2c),uVar15);
        *pfVar8 = fVar14 + *(float *)(lVar6 + 0x3c);
        pfVar5 = pfVar5 + 3;
        pfVar8 = pfVar8 + 3;
      } while (lVar9 != 0);
    }
  }
LAB_0070a0c0:
  DetourNavigationMeshQuery::destroyPath
            (*(DetourNavigationMeshQuery **)(*(long *)(this + 0x3b0) + 0x50),pNVar3);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2 == 0;
}


