// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: collideSingleContact
// Entry Point: 00f98274
// Size: 1124 bytes
// Signature: undefined __thiscall collideSingleContact(btConvexPlaneCollisionAlgorithm * this, btQuaternion * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3, btDispatcherInfo * param_4, btManifoldResult * param_5)


/* btConvexPlaneCollisionAlgorithm::collideSingleContact(btQuaternion const&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*, btDispatcherInfo const&,
   btManifoldResult*) */

void __thiscall
btConvexPlaneCollisionAlgorithm::collideSingleContact
          (btConvexPlaneCollisionAlgorithm *this,btQuaternion *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3,
          btDispatcherInfo *param_4,btManifoldResult *param_5)

{
  btCollisionObjectWrapper *pbVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar38;
  undefined8 uVar37;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar52;
  undefined8 uVar51;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined8 local_a8;
  float local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  uVar6 = *(undefined8 *)param_1;
  fVar16 = *(float *)(param_1 + 8);
  fVar10 = *(float *)(param_1 + 0xc);
  fVar29 = (float)uVar6;
  fVar36 = (float)((ulong)uVar6 >> 0x20);
  uVar6 = NEON_rev64(uVar6,4);
  pbVar1 = param_3;
  if (this[0x20] != (btConvexPlaneCollisionAlgorithm)0x0) {
    pbVar1 = param_2;
    param_2 = param_3;
  }
  pfVar4 = *(float **)(param_2 + 0x18);
  pfVar3 = *(float **)(pbVar1 + 0x18);
  uVar7 = NEON_fmadd(fVar16,fVar16,fVar29 * fVar29 + fVar36 * fVar36);
  lVar5 = *(long *)(pbVar1 + 8);
  uVar26 = *(undefined8 *)(pfVar3 + 1);
  fVar27 = pfVar3[8];
  fVar8 = (float)NEON_fmadd(fVar10,fVar10,uVar7);
  fVar8 = 2.0 / fVar8;
  fVar19 = fVar16 * fVar8;
  fVar20 = fVar36 * fVar8;
  fVar35 = fVar19 * (float)uVar6;
  fVar38 = fVar20 * (float)((ulong)uVar6 >> 0x20);
  fVar46 = 1.0 - fVar16 * fVar19;
  fVar16 = pfVar4[4];
  fVar30 = fVar8 * fVar29 * fVar10;
  uVar12 = *(undefined8 *)(pfVar4 + 1);
  fVar9 = *pfVar4;
  uVar50 = NEON_ext(CONCAT44(fVar38,fVar35),CONCAT44(fVar20 * fVar36,fVar19 * fVar29),4,1);
  uVar6 = *(undefined8 *)(pfVar4 + 9);
  fVar17 = (float)uVar6;
  fVar18 = (float)((ulong)uVar6 >> 0x20);
  fVar11 = pfVar4[8];
  fVar8 = fVar8 * fVar29 * -fVar29;
  fVar43 = fVar35 - fVar30;
  uVar15 = *(undefined8 *)(pfVar4 + 5);
  fVar29 = fVar19 * fVar29 + fVar10 * fVar20;
  fVar54 = (float)((ulong)uVar12 >> 0x20);
  uVar22 = NEON_rev64(uVar12,4);
  fVar32 = (float)uVar12;
  fVar40 = (float)uVar50 - fVar19 * fVar10;
  fVar42 = (float)((ulong)uVar50 >> 0x20) - fVar10 * fVar20;
  fVar35 = fVar35 + fVar30;
  fVar38 = fVar38 + fVar19 * fVar10;
  uVar12 = NEON_rev64(uVar15,4);
  uVar50 = *(undefined8 *)(pfVar3 + 5);
  fVar10 = fVar20 * -fVar36 + fVar8 + 1.0;
  fVar47 = (float)NEON_fmadd(fVar29,fVar9,fVar43 * fVar32);
  fVar52 = (float)((ulong)uVar15 >> 0x20);
  fVar47 = fVar47 + fVar10 * fVar54;
  fVar23 = (float)((ulong)uVar22 >> 0x20);
  fVar8 = fVar46 + fVar8;
  fVar46 = fVar46 + fVar20 * -fVar36;
  fVar13 = (float)uVar15;
  uVar15 = NEON_rev64(uVar6,4);
  uVar51 = NEON_rev64(uVar26,4);
  fVar53 = fVar40 * fVar9 + (float)uVar22 * fVar35 + fVar32 * fVar8;
  fVar55 = fVar42 * fVar54 + fVar23 * fVar38 + fVar9 * fVar46;
  fVar21 = (float)((ulong)uVar12 >> 0x20);
  fVar48 = (float)NEON_fmadd(fVar29,fVar16,fVar43 * fVar13);
  fVar28 = (float)((ulong)uVar15 >> 0x20);
  uVar37 = NEON_rev64(uVar50,4);
  uVar6 = *(undefined8 *)(pfVar3 + 9);
  fVar24 = (float)uVar6;
  fVar25 = (float)((ulong)uVar6 >> 0x20);
  fVar20 = fVar40 * fVar16 + (float)uVar12 * fVar35 + fVar13 * fVar8;
  fVar30 = fVar42 * fVar52 + fVar21 * fVar38 + fVar16 * fVar46;
  fVar29 = (float)NEON_fmadd(fVar29,fVar11,fVar43 * fVar17);
  fVar48 = fVar48 + fVar10 * fVar52;
  fVar43 = (float)((ulong)uVar26 >> 0x20);
  uVar45 = NEON_rev64(uVar6,4);
  fVar56 = *pfVar3;
  fVar8 = fVar40 * fVar11 + (float)uVar15 * fVar35 + fVar17 * fVar8;
  fVar19 = fVar42 * fVar18 + fVar28 * fVar38 + fVar11 * fVar46;
  uVar6 = *(undefined8 *)(lVar5 + 0x44);
  fVar42 = (float)uVar26;
  fVar29 = fVar29 + fVar10 * fVar18;
  fVar34 = (float)((ulong)uVar50 >> 0x20);
  uVar26 = NEON_rev64(uVar6,4);
  fVar31 = (float)uVar50;
  local_8c = 0;
  fVar49 = pfVar3[4];
  fVar10 = (float)((ulong)uVar6 >> 0x20);
  uVar7 = NEON_fmadd(fVar48,fVar49,fVar47 * fVar56);
  uVar7 = NEON_fmadd(fVar29,fVar27,uVar7);
  fVar36 = *(float *)(lVar5 + 0x40);
  local_90 = NEON_fnmadd(uVar7,fVar36,
                         -((fVar47 * fVar43 + fVar48 * fVar34 + fVar29 * fVar25) * fVar10 +
                          (fVar47 * fVar42 + fVar48 * fVar31 + fVar29 * fVar24) * (float)uVar6));
  uVar7 = NEON_fmadd(fVar49,fVar16,fVar56 * fVar9);
  local_98 = NEON_rev64(CONCAT44(-((fVar55 * (float)((ulong)uVar51 >> 0x20) +
                                    (float)((ulong)uVar37 >> 0x20) * fVar30 +
                                   (float)((ulong)uVar45 >> 0x20) * fVar19) *
                                   (float)((ulong)uVar26 >> 0x20) +
                                  fVar10 * (fVar55 * fVar43 + fVar34 * fVar30 + fVar25 * fVar19)) -
                                 (fVar55 * fVar56 + fVar30 * fVar49 + fVar19 * fVar27) * fVar36,
                                 -((fVar53 * (float)uVar51 + (float)uVar37 * fVar20 +
                                   (float)uVar45 * fVar8) * (float)uVar26 +
                                  (float)uVar6 *
                                  (fVar53 * fVar42 + fVar31 * fVar20 + fVar24 * fVar8)) -
                                 (fVar53 * fVar56 + fVar20 * fVar49 + fVar8 * fVar27) * fVar36),4);
  fVar36 = fVar24 * fVar11;
  fVar10 = fVar25 * fVar11;
  fVar30 = pfVar3[0xc];
  fVar46 = pfVar3[0xd];
  fVar38 = pfVar4[0xc];
  fVar8 = pfVar4[0xd];
  fVar35 = pfVar4[0xe];
  uVar7 = NEON_fmadd(fVar27,fVar11,uVar7);
  fVar19 = pfVar3[0xe];
  fVar29 = fVar49 * fVar8;
  fVar20 = (float)(**(code **)(**(long **)(param_2 + 8) + 0x80))(*(long **)(param_2 + 8),&local_98);
  fVar38 = fVar38 - fVar30;
  pfVar3 = *(float **)(pbVar1 + 0x18);
  fVar41 = pfVar3[4];
  fVar53 = pfVar3[5];
  uVar14 = NEON_fmadd(fVar27,fVar35,fVar49 * fVar8);
  fVar40 = (float)NEON_fmadd(fVar19,fVar27,fVar46 * fVar49);
  fVar39 = pfVar3[8];
  fVar55 = pfVar3[9];
  fVar48 = pfVar3[6];
  fVar30 = (float)NEON_fmadd(fVar38,fVar56,uVar14);
  fVar47 = pfVar3[10];
  fVar30 = (float)NEON_fmadd(fVar20,uVar7,fVar30 - fVar40);
  fVar40 = ((fVar31 * fVar8 + fVar24 * fVar35 + fVar42 * fVar38) -
           (fVar31 * fVar46 + fVar24 * fVar19)) +
           (fVar42 * fVar9 + fVar31 * fVar16 + fVar36) * fVar20 +
           (fVar42 * fVar32 + fVar31 * fVar13 + fVar24 * fVar17) * fVar29 +
           (fVar42 * fVar54 + fVar31 * fVar52 + fVar24 * fVar18) * fVar11;
  fVar20 = ((fVar34 * fVar8 + fVar25 * fVar35 + fVar43 * fVar38) -
           (fVar34 * fVar46 + fVar25 * fVar19)) +
           (fVar43 * fVar9 + fVar34 * fVar16 + fVar10) * fVar20 +
           (fVar43 * fVar32 + fVar34 * fVar13 + fVar25 * fVar17) * fVar29 +
           (fVar43 * fVar54 + fVar34 * fVar52 + fVar25 * fVar18) * fVar11;
  fVar32 = *pfVar3;
  fVar19 = pfVar3[1];
  fVar36 = (float)*(undefined8 *)(lVar5 + 0x44);
  fVar10 = (float)((ulong)*(undefined8 *)(lVar5 + 0x44) >> 0x20);
  fVar11 = fVar29 * (fVar23 * fVar56 + fVar21 * fVar49 + fVar28 * fVar27) +
           fVar30 + fVar11 * ((float)uVar22 * fVar56 + (float)uVar12 * fVar49 +
                             (float)uVar15 * fVar27);
  fVar16 = *(float *)(lVar5 + 0x40);
  fVar29 = (float)NEON_fmadd(fVar16,fVar11,fVar36 * fVar40);
  fVar8 = pfVar3[2];
  uVar6 = *(undefined8 *)(pfVar3 + 0xc);
  fVar29 = (fVar29 + fVar10 * fVar20) - *(float *)(lVar5 + 0x50);
  fVar30 = *(float *)(*(long *)(this + 0x18) + 0x31c);
  fVar9 = pfVar3[0xe];
  *(long *)(param_5 + 8) = *(long *)(this + 0x18);
  if (fVar29 < fVar30) {
    fVar30 = (float)NEON_fmsub(fVar29,fVar16,fVar11);
    fVar40 = fVar40 - fVar29 * fVar36;
    fVar20 = fVar20 - fVar29 * fVar10;
    uVar14 = NEON_fmadd(fVar19,fVar36,fVar16 * fVar32);
    uVar33 = NEON_fmadd(fVar53,fVar36,fVar41 * fVar16);
    uVar7 = NEON_fmadd(fVar55,fVar36,fVar39 * fVar16);
    uVar44 = NEON_fmadd(fVar55,fVar40,fVar39 * fVar30);
    uVar14 = NEON_fmadd(fVar10,fVar8,uVar14);
    uVar33 = NEON_fmadd(fVar48,fVar10,uVar33);
    local_90 = NEON_fmadd(fVar47,fVar10,uVar7);
    local_8c = 0;
    local_a0 = (float)NEON_fmadd(fVar47,fVar20,uVar44);
    local_98 = CONCAT44(uVar33,uVar14);
    local_9c = 0;
    local_a0 = local_a0 + fVar9;
    local_a8 = CONCAT44(fVar41 * fVar30 + fVar53 * fVar40 + fVar48 * fVar20 +
                        (float)((ulong)uVar6 >> 0x20),
                        fVar32 * fVar30 + fVar19 * fVar40 + fVar8 * fVar20 + (float)uVar6);
    (**(code **)(*(long *)param_5 + 0x20))(param_5,&local_98,&local_a8);
  }
  if (*(long *)(lVar2 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


