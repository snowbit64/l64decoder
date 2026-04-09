// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateTimeOfImpact
// Entry Point: 00f939fc
// Size: 780 bytes
// Signature: undefined __cdecl calculateTimeOfImpact(btCollisionObject * param_1, btCollisionObject * param_2, btDispatcherInfo * param_3, btManifoldResult * param_4)


/* btConvexConcaveCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject*, btCollisionObject*,
   btDispatcherInfo const&, btManifoldResult*) */

void btConvexConcaveCollisionAlgorithm::calculateTimeOfImpact
               (btCollisionObject *param_1,btCollisionObject *param_2,btDispatcherInfo *param_3,
               btManifoldResult *param_4)

{
  btCollisionObject *pbVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  undefined **local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  float local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  float local_c8;
  undefined4 local_c4;
  float local_80;
  float local_7c;
  undefined8 local_78;
  float local_70;
  undefined4 local_6c;
  undefined8 local_68;
  float local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pbVar1 = (btCollisionObject *)param_3;
  if (param_1[0x10] != (btCollisionObject)0x0) {
    pbVar1 = param_2;
    param_2 = (btCollisionObject *)param_3;
  }
  fVar4 = (float)*(undefined8 *)(param_2 + 0x7c) - (float)*(undefined8 *)(param_2 + 0x3c);
  fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x7c) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_2 + 0x3c) >> 0x20);
  fVar6 = (float)NEON_fmadd(*(float *)(param_2 + 0x78) - *(float *)(param_2 + 0x38),
                            *(float *)(param_2 + 0x78) - *(float *)(param_2 + 0x38),fVar4 * fVar4);
  fVar4 = 1.0;
  if ((*(float *)(param_2 + 0x11c) * *(float *)(param_2 + 0x11c) <= fVar6 + fVar5 * fVar5) &&
     (plVar3 = *(long **)(pbVar1 + 200), *(int *)(plVar3 + 1) - 0x15U < 9)) {
    fVar15 = *(float *)(pbVar1 + 0x3c);
    fVar10 = *(float *)(pbVar1 + 0x40);
    local_5c = 0;
    local_6c = 0;
    fVar6 = *(float *)(pbVar1 + 0x30);
    local_134 = 0;
    fVar4 = (float)*(undefined8 *)(pbVar1 + 0x28);
    fVar5 = (float)((ulong)*(undefined8 *)(pbVar1 + 0x28) >> 0x20);
    fVar13 = *(float *)(pbVar1 + 0x38);
    fVar9 = *(float *)(pbVar1 + 0x10);
    fVar7 = (float)*(undefined8 *)(pbVar1 + 0x18);
    fVar11 = *(float *)(pbVar1 + 0x20);
    fVar8 = (float)((ulong)*(undefined8 *)(pbVar1 + 0x18) >> 0x20);
    fVar30 = (float)*(undefined8 *)(param_2 + 0x48);
    fVar31 = (float)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x20);
    fVar16 = (float)NEON_fmadd(fVar15,fVar11,fVar10 * fVar6);
    fVar24 = (float)((ulong)*(undefined8 *)(pbVar1 + 8) >> 0x20);
    fVar23 = (float)*(undefined8 *)(pbVar1 + 8);
    fVar33 = (float)*(undefined8 *)(param_2 + 8);
    fVar34 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
    fVar17 = *(float *)(param_2 + 0x40);
    fVar25 = (float)*(undefined8 *)(param_2 + 0x58);
    fVar29 = (float)((ulong)*(undefined8 *)(param_2 + 0x58) >> 0x20);
    fVar21 = -(fVar4 * fVar10 + fVar7 * fVar15) - fVar23 * fVar13;
    fVar22 = -(fVar5 * fVar10 + fVar8 * fVar15) - fVar24 * fVar13;
    uVar14 = NEON_fnmadd(fVar13,fVar9,-fVar16);
    fVar40 = *(float *)(param_2 + 0x38);
    fVar10 = *(float *)(param_2 + 0x3c);
    fVar37 = *(float *)(param_2 + 0x10);
    fVar26 = *(float *)(param_2 + 0x78);
    fVar15 = *(float *)(param_2 + 0x7c);
    fVar13 = *(float *)(param_2 + 0x50);
    uVar20 = NEON_fmadd(fVar40,fVar9,uVar14);
    uVar38 = *(undefined4 *)(param_2 + 0x20);
    fVar35 = (float)*(undefined8 *)(param_2 + 0x18);
    fVar36 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    uVar32 = *(undefined4 *)(param_2 + 0x60);
    uVar14 = NEON_fmadd(fVar26,fVar9,uVar14);
    uVar20 = NEON_fmadd(fVar10,fVar11,uVar20);
    fVar27 = *(float *)(param_2 + 0x80);
    uVar39 = *(undefined4 *)(param_2 + 0x30);
    uVar14 = NEON_fmadd(fVar15,fVar11,uVar14);
    local_108 = (float)NEON_fmadd(fVar17,fVar6,uVar20);
    local_80 = *(float *)(param_2 + 0x118);
    fVar16 = fVar21 + fVar23 * fVar26 + fVar7 * fVar15 + fVar4 * fVar27;
    fVar15 = fVar22 + fVar24 * fVar26 + fVar8 * fVar15 + fVar5 * fVar27;
    local_c8 = (float)NEON_fmadd(fVar27,fVar6,uVar14);
    local_110 = CONCAT44(fVar22 + fVar24 * fVar40 + fVar8 * fVar10 + fVar5 * fVar17,
                         fVar21 + fVar23 * fVar40 + fVar7 * fVar10 + fVar4 * fVar17);
    uVar19 = NEON_fminnm(CONCAT44(fVar15,fVar16),local_110,4);
    local_60 = (float)NEON_fminnm(local_c8,local_108);
    uVar18 = NEON_fmadd(uVar32,fVar11,fVar13 * fVar9);
    uVar20 = NEON_fmadd(uVar38,fVar11,fVar37 * fVar9);
    uVar12 = NEON_fmaxnm(local_110,CONCAT44(fVar15,fVar16),4);
    uVar28 = NEON_fmadd(uVar32,fVar7,fVar13 * fVar23);
    uVar14 = NEON_fmadd(uVar38,fVar7,fVar37 * fVar23);
    local_68 = CONCAT44((float)((ulong)uVar19 >> 0x20) - local_80,(float)uVar19 - local_80);
    local_70 = local_108;
    if (local_108 <= local_c8) {
      local_70 = local_c8;
    }
    local_60 = local_60 - local_80;
    uVar38 = NEON_fmadd(uVar38,fVar8,fVar37 * fVar24);
    local_78 = CONCAT44((float)((ulong)uVar12 >> 0x20) + local_80,(float)uVar12 + local_80);
    local_70 = local_70 + local_80;
    local_138 = NEON_fmadd(uVar39,fVar4,uVar14);
    local_128 = NEON_fmadd(uVar39,fVar5,uVar38);
    uVar14 = *(undefined4 *)(param_2 + 0x70);
    fVar17 = (float)*(undefined8 *)(param_2 + 0x28);
    fVar21 = (float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
    local_140 = CONCAT44(fVar34 * fVar23 + fVar7 * fVar36 + fVar4 * fVar21,
                         fVar33 * fVar23 + fVar7 * fVar35 + fVar4 * fVar17);
    local_118 = NEON_fmadd(uVar39,fVar6,uVar20);
    uVar20 = NEON_fmadd(uVar32,fVar8,fVar13 * fVar24);
    local_f8 = NEON_fmadd(uVar14,fVar4,uVar28);
    local_d8 = NEON_fmadd(uVar14,fVar6,uVar18);
    fVar10 = (float)*(undefined8 *)(param_2 + 0x68);
    fVar13 = (float)((ulong)*(undefined8 *)(param_2 + 0x68) >> 0x20);
    local_100 = CONCAT44(fVar31 * fVar23 + fVar7 * fVar29 + fVar4 * fVar13,
                         fVar30 * fVar23 + fVar7 * fVar25 + fVar4 * fVar10);
    local_e8 = NEON_fmadd(uVar14,fVar5,uVar20);
    local_7c = *(float *)(param_2 + 0x114);
    local_130 = CONCAT44(fVar34 * fVar24 + fVar8 * fVar36 + fVar5 * fVar21,
                         fVar33 * fVar24 + fVar8 * fVar35 + fVar5 * fVar17);
    local_120 = CONCAT44(fVar34 * fVar9 + fVar11 * fVar36 + fVar6 * fVar21,
                         fVar33 * fVar9 + fVar11 * fVar35 + fVar6 * fVar17);
    local_f0 = CONCAT44(fVar31 * fVar24 + fVar8 * fVar29 + fVar5 * fVar13,
                        fVar30 * fVar24 + fVar8 * fVar25 + fVar5 * fVar10);
    local_e0 = CONCAT44(fVar31 * fVar9 + fVar11 * fVar29 + fVar6 * fVar13,
                        fVar30 * fVar9 + fVar11 * fVar25 + fVar6 * fVar10);
    local_d0 = CONCAT44(fVar15,fVar16);
    local_148 = &PTR__btTriangleCallback_0101c188;
    local_124 = 0;
    local_114 = 0;
    local_104 = 0;
    local_f4 = 0;
    local_e4 = 0;
    local_d4 = 0;
    local_c4 = 0;
    (**(code **)(*plVar3 + 0x80))(plVar3,&local_148,&local_68,&local_78);
    if (*(float *)(param_2 + 0x114) <= local_7c) {
      fVar4 = 1.0;
    }
    else {
      *(float *)(param_2 + 0x114) = local_7c;
      fVar4 = local_7c;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar4);
  }
  return;
}


