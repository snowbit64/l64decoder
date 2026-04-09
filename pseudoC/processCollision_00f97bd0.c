// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processCollision
// Entry Point: 00f97bd0
// Size: 1404 bytes
// Signature: undefined __thiscall processCollision(btConvexPlaneCollisionAlgorithm * this, btCollisionObjectWrapper * param_1, btCollisionObjectWrapper * param_2, btDispatcherInfo * param_3, btManifoldResult * param_4)


/* btConvexPlaneCollisionAlgorithm::processCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btDispatcherInfo const&, btManifoldResult*) */

void __thiscall
btConvexPlaneCollisionAlgorithm::processCollision
          (btConvexPlaneCollisionAlgorithm *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  btCollisionObjectWrapper *pbVar1;
  long lVar2;
  btCollisionObjectWrapper *pbVar3;
  long lVar4;
  btPersistentManifold *this_00;
  btManifoldResult *pbVar5;
  int iVar6;
  float *pfVar7;
  undefined8 *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  float fVar53;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  undefined8 local_c8;
  float local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  long local_a8;
  
  lVar2 = tpidr_el0;
  local_a8 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x18) != 0) {
    pbVar1 = param_1;
    pbVar3 = param_2;
    if (this[0x20] != (btConvexPlaneCollisionAlgorithm)0x0) {
      pbVar1 = param_2;
      pbVar3 = param_1;
    }
    pfVar7 = *(float **)(pbVar3 + 0x18);
    puVar8 = *(undefined8 **)(pbVar1 + 0x18);
    lVar11 = *(long *)(pbVar3 + 8);
    uVar42 = *(undefined8 *)(pfVar7 + 1);
    uVar20 = *(undefined8 *)(pfVar7 + 5);
    uVar18 = NEON_rev64(uVar42,4);
    fVar21 = *(float *)(puVar8 + 1);
    fVar22 = (float)*puVar8;
    fVar39 = (float)uVar42;
    fVar13 = (float)((ulong)*puVar8 >> 0x20);
    fVar43 = (float)((ulong)uVar42 >> 0x20);
    uVar42 = NEON_rev64(uVar20,4);
    uVar30 = *(undefined8 *)(pfVar7 + 9);
    fVar16 = *(float *)(puVar8 + 3);
    uVar38 = NEON_rev64(uVar30,4);
    uVar26 = *(undefined8 *)(lVar11 + 0x44);
    fVar48 = *pfVar7;
    fVar25 = (float)uVar20;
    fVar41 = (float)((ulong)uVar20 >> 0x20);
    fVar14 = (float)puVar8[2];
    fVar15 = (float)((ulong)puVar8[2] >> 0x20);
    fVar23 = *(float *)(puVar8 + 5);
    uVar20 = NEON_rev64(uVar26,4);
    plVar10 = *(long **)(pbVar1 + 8);
    fVar29 = (float)uVar30;
    fVar31 = (float)((ulong)uVar30 >> 0x20);
    fVar32 = fVar39 * fVar21 + fVar25 * fVar16 + fVar29 * fVar23;
    fVar33 = fVar43 * fVar21 + fVar41 * fVar16 + fVar31 * fVar23;
    fVar36 = (float)puVar8[4];
    fVar17 = (float)((ulong)puVar8[4] >> 0x20);
    fVar34 = fVar39 * fVar22 + fVar14 * fVar25 + fVar36 * fVar29;
    fVar35 = fVar43 * fVar13 + fVar15 * fVar41 + fVar17 * fVar31;
    fVar27 = (float)uVar18 * fVar22 + fVar14 * (float)uVar42 + fVar36 * (float)uVar38;
    fVar28 = (float)((ulong)uVar18 >> 0x20) * fVar13 + fVar15 * (float)((ulong)uVar42 >> 0x20) +
             fVar17 * (float)((ulong)uVar38 >> 0x20);
    fVar37 = pfVar7[4];
    local_ac = 0;
    uVar12 = NEON_fmadd(fVar37,fVar16,fVar48 * fVar21);
    fVar19 = (float)((ulong)uVar26 >> 0x20);
    fVar40 = pfVar7[8];
    fVar16 = *(float *)(lVar11 + 0x40);
    uVar24 = NEON_fmadd(fVar40,fVar23,uVar12);
    fVar44 = fVar22 * fVar48 + fVar14 * fVar37 + fVar36 * fVar40;
    fVar47 = fVar13 * fVar48 + fVar15 * fVar37 + fVar17 * fVar40;
    fVar21 = *(float *)(puVar8 + 6);
    fVar17 = *(float *)((long)puVar8 + 0x34);
    local_b0 = NEON_fnmadd(uVar24,fVar16,-((float)uVar26 * fVar32 + fVar19 * fVar33));
    uVar18 = CONCAT44(-((float)((ulong)uVar20 >> 0x20) * fVar28 + fVar35 * fVar19) - fVar47 * fVar16
                      ,-((float)uVar20 * fVar27 + fVar34 * (float)uVar26) - fVar44 * fVar16);
    fVar16 = *(float *)(puVar8 + 7);
    fVar36 = pfVar7[0xc];
    fVar13 = pfVar7[0xd];
    fVar15 = pfVar7[0xe];
    pbVar5 = param_4;
    local_b8 = uVar18;
    fVar22 = fVar13 * fVar37;
    fVar14 = (float)(**(code **)(*plVar10 + 0x80))(plVar10,&local_b8);
    fVar21 = fVar21 - fVar36;
    uVar12 = NEON_fmadd(fVar40,fVar16,fVar37 * fVar17);
    fVar37 = (float)NEON_fmadd(fVar15,fVar40,fVar13 * fVar37);
    pfVar7 = *(float **)(pbVar3 + 0x18);
    fVar23 = (float)NEON_fmadd(fVar21,fVar48,uVar12);
    fVar48 = pfVar7[6];
    fVar53 = pfVar7[4];
    fVar49 = pfVar7[5];
    fVar51 = pfVar7[8];
    fVar50 = pfVar7[9];
    fVar40 = pfVar7[10];
    fVar45 = *pfVar7;
    fVar19 = pfVar7[1];
    fVar36 = (float)uVar18;
    fVar25 = ((fVar25 * fVar17 + fVar29 * fVar16 + fVar39 * fVar21) -
             (fVar25 * fVar13 + fVar29 * fVar15)) + fVar34 * fVar14 + fVar28 * fVar22 +
             fVar32 * fVar36;
    fVar17 = ((fVar41 * fVar17 + fVar31 * fVar16 + fVar43 * fVar21) -
             (fVar41 * fVar13 + fVar31 * fVar15)) + fVar27 * fVar14 + fVar35 * fVar22 +
             fVar33 * fVar36;
    uVar12 = NEON_fmadd(fVar36,uVar24,(fVar23 - fVar37) + fVar14 * fVar44 + fVar22 * fVar47);
    fVar16 = *(float *)(lVar11 + 0x40);
    fVar13 = (float)*(undefined8 *)(lVar11 + 0x44);
    fVar14 = (float)((ulong)*(undefined8 *)(lVar11 + 0x44) >> 0x20);
    fVar15 = pfVar7[2];
    fVar22 = (float)NEON_fmadd(fVar16,uVar12,fVar13 * fVar25);
    uVar18 = *(undefined8 *)(pfVar7 + 0xc);
    fVar22 = (fVar22 + fVar14 * fVar17) - *(float *)(lVar11 + 0x50);
    fVar36 = *(float *)(*(long *)(this + 0x18) + 0x31c);
    fVar21 = pfVar7[0xe];
    *(long *)(param_4 + 8) = *(long *)(this + 0x18);
    if (fVar22 < fVar36) {
      fVar36 = (float)NEON_fmsub(fVar22,fVar16,uVar12);
      fVar25 = fVar25 - fVar22 * fVar13;
      fVar17 = fVar17 - fVar22 * fVar14;
      uVar24 = NEON_fmadd(fVar19,fVar13,fVar16 * fVar45);
      uVar46 = NEON_fmadd(fVar49,fVar13,fVar53 * fVar16);
      uVar12 = NEON_fmadd(fVar50,fVar13,fVar51 * fVar16);
      uVar52 = NEON_fmadd(fVar50,fVar25,fVar51 * fVar36);
      uVar24 = NEON_fmadd(fVar14,fVar15,uVar24);
      uVar46 = NEON_fmadd(fVar48,fVar14,uVar46);
      local_b0 = NEON_fmadd(fVar40,fVar14,uVar12);
      local_ac = 0;
      local_c0 = (float)NEON_fmadd(fVar40,fVar17,uVar52);
      local_b8 = CONCAT44(uVar46,uVar24);
      local_bc = 0;
      local_c0 = local_c0 + fVar21;
      local_c8 = CONCAT44(fVar53 * fVar36 + fVar49 * fVar25 + fVar48 * fVar17 +
                          (float)((ulong)uVar18 >> 0x20),
                          fVar45 * fVar36 + fVar19 * fVar25 + fVar15 * fVar17 + (float)uVar18);
      (**(code **)(*(long *)param_4 + 0x20))(param_4,&local_b8,&local_c8);
    }
    if ((*(int *)(plVar10 + 1) < 7) &&
       (*(int *)(*(long *)(param_4 + 8) + 0x318) < *(int *)(this + 0x28))) {
      fVar22 = *(float *)(lVar11 + 0x48);
      if (ABS(fVar22) <= 0.7071068) {
        fVar22 = *(float *)(lVar11 + 0x40);
        fVar13 = *(float *)(lVar11 + 0x44);
        fVar14 = 0.0;
        fVar16 = (float)NEON_fmadd(fVar13,fVar13,fVar22 * fVar22);
        fVar13 = (1.0 / SQRT(fVar16)) * -fVar13;
        fVar22 = (1.0 / SQRT(fVar16)) * fVar22;
      }
      else {
        fVar14 = *(float *)(lVar11 + 0x44);
        fVar13 = 0.0;
        fVar16 = (float)NEON_fmadd(fVar14,fVar14,fVar22 * fVar22);
        fVar22 = (1.0 / SQRT(fVar16)) * -fVar22;
        fVar14 = (1.0 / SQRT(fVar16)) * fVar14;
      }
      fVar16 = (float)(**(code **)(*plVar10 + 0x20))(plVar10);
      fVar16 = (float)NEON_fminnm(gContactBreakingThreshold / fVar16,0x3ec90fdb);
      sincosf(fVar16 * 0.5,&fStack_cc,&local_d0);
      iVar6 = *(int *)(this + 0x24);
      if (0 < iVar6) {
        iVar9 = 0;
        uVar12 = NEON_fmadd(fVar22,fVar22,fVar13 * fVar13);
        fVar16 = (float)NEON_fmadd(fVar14,fVar14,uVar12);
        fStack_cc = fStack_cc / SQRT(fVar16);
        fVar13 = fStack_cc * fVar13;
        fVar22 = fStack_cc * fVar22;
        fVar14 = fStack_cc * fVar14;
        do {
          fVar15 = *(float *)(lVar11 + 0x40);
          fVar36 = *(float *)(lVar11 + 0x44);
          fVar17 = *(float *)(lVar11 + 0x48);
          uVar12 = NEON_fmadd(fVar36,fVar36,fVar15 * fVar15);
          fVar16 = (float)NEON_fmadd(fVar17,fVar17,uVar12);
          sincosf(((float)iVar9 * 3.141593) / (float)iVar6,&fStack_d4,&local_d8);
          fVar16 = fStack_d4 / SQRT(fVar16);
          fVar36 = fVar16 * fVar36;
          fVar17 = fVar16 * fVar17;
          fVar16 = fVar16 * fVar15;
          uVar12 = NEON_fmadd(fVar36,fVar22,local_d8 * local_d0);
          fVar21 = (float)NEON_fmadd(fVar16,fVar14,local_d8 * fVar22);
          fVar25 = (float)NEON_fmadd(fVar36,fVar13,local_d8 * fVar14);
          fVar19 = (float)NEON_fmadd(fVar17,fVar22,local_d8 * fVar13);
          uVar12 = NEON_fmadd(fVar17,fVar14,uVar12);
          fVar23 = (float)NEON_fmadd(fVar36,local_d0,fVar17 * fVar13);
          fVar41 = (float)NEON_fmadd(fVar17,local_d0,fVar16 * fVar22);
          fVar37 = (float)NEON_fmadd(fVar16,local_d0,fVar36 * fVar14);
          fVar15 = (float)NEON_fmadd(fVar16,fVar13,uVar12);
          fVar21 = fVar21 - fVar23;
          fVar25 = fVar25 - fVar41;
          fVar19 = fVar19 - fVar37;
          uVar12 = NEON_fmadd(fVar19,local_d8,fVar15 * fVar16);
          uVar24 = NEON_fmadd(fVar25,fVar16,fVar21 * local_d8);
          uVar46 = NEON_fmadd(fVar25,local_d8,fVar15 * fVar17);
          uVar52 = NEON_fmadd(fVar21,fVar36,fVar25 * fVar17);
          uVar12 = NEON_fmadd(fVar21,fVar17,uVar12);
          uVar24 = NEON_fmadd(fVar15,fVar36,uVar24);
          uVar46 = NEON_fmadd(fVar19,fVar36,uVar46);
          uVar52 = NEON_fmadd(fVar19,fVar16,uVar52);
          uVar12 = NEON_fmsub(fVar25,fVar36,uVar12);
          uVar24 = NEON_fmsub(fVar19,fVar17,uVar24);
          local_b0 = NEON_fmsub(fVar21,fVar16,uVar46);
          local_ac = NEON_fnmsub(fVar15,local_d8,uVar52);
          local_b8 = CONCAT44(uVar24,uVar12);
          collideSingleContact
                    (this,(btQuaternion *)&local_b8,param_1,param_2,(btDispatcherInfo *)pbVar5,
                     param_4);
          iVar6 = *(int *)(this + 0x24);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar6);
      }
    }
    if (((this[0x10] != (btConvexPlaneCollisionAlgorithm)0x0) &&
        (*(int *)(*(long *)(this + 0x18) + 0x318) != 0)) &&
       (this_00 = *(btPersistentManifold **)(param_4 + 8), *(int *)(this_00 + 0x318) != 0)) {
      lVar11 = *(long *)(this_00 + 0x308);
      lVar4 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
      if (*(long *)(this_00 + 0x308) != *(long *)(*(long *)(param_4 + 0x10) + 0x10)) {
        lVar11 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
        lVar4 = *(long *)(*(long *)(param_4 + 0x10) + 0x10);
      }
      btPersistentManifold::refreshContactPoints
                (this_00,(btTransform *)(lVar11 + 8),(btTransform *)(lVar4 + 8));
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


