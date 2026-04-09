// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDrawCollisionGeometry
// Entry Point: 00722aec
// Size: 548 bytes
// Signature: undefined __cdecl debugDrawCollisionGeometry(uint param_1, float * param_2, float * param_3, float param_4, float param_5, DeferredDebugRenderer * param_6, bool param_7)


/* VehicleCollisionDistanceUtil::debugDrawCollisionGeometry(unsigned int, float*, float*, float,
   float, DeferredDebugRenderer*, bool) */

void VehicleCollisionDistanceUtil::debugDrawCollisionGeometry
               (uint param_1,float *param_2,float *param_3,float param_4,float param_5,
               DeferredDebugRenderer *param_6,bool param_7)

{
  long lVar1;
  Vector3 *pVVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float local_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  uint local_f8 [12];
  undefined4 local_c8;
  float fStack_c4;
  undefined4 local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  float local_98;
  float fStack_94;
  float local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_7) {
    getCollisionGeometryStraight
              (param_1,param_2,param_3,param_4,param_5,(Matrix4x4 *)&local_a8,(Vector3 *)&local_b8,
               (Vector3 *)&local_c8,(Vector3 *)local_f8);
    fVar4 = -fStack_c4;
    uVar12 = NEON_fmadd(local_c8,(undefined4)local_a8,fStack_c4 * local_98);
    uVar13 = NEON_fmadd(local_c8,local_a8._4_4_,fStack_c4 * fStack_94);
    uVar14 = NEON_fmadd(local_c8,uStack_a0,fStack_c4 * local_90);
    uVar7 = NEON_fmsub(local_c8,(undefined4)local_a8,fStack_c4 * local_98);
    uVar8 = NEON_fmsub(local_c8,local_a8._4_4_,fStack_c4 * fStack_94);
    uVar11 = NEON_fmsub(local_c8,uStack_a0,fStack_c4 * local_90);
    uVar15 = NEON_fmadd(local_c8,(undefined4)local_a8,local_98 * fVar4);
    uVar5 = NEON_fmsub(local_c8,(undefined4)local_a8,local_98 * fVar4);
    fStack_14c = (float)NEON_fmsub(local_c0,local_88,uVar7);
    local_148 = (float)NEON_fmsub(local_c0,uStack_84,uVar8);
    fStack_144 = (float)NEON_fmsub(local_c0,local_80,uVar11);
    uVar9 = NEON_fmadd(local_c8,local_a8._4_4_,fStack_94 * fVar4);
    uVar10 = NEON_fmadd(local_c8,uStack_a0,local_90 * fVar4);
    uVar6 = NEON_fmsub(local_c8,local_a8._4_4_,fStack_94 * fVar4);
    fStack_11c = (float)NEON_fmsub(local_c0,local_88,uVar5);
    uVar3 = NEON_fmsub(local_c8,uStack_a0,local_90 * fVar4);
    local_110 = (float)NEON_fmadd(local_c0,local_88,uVar5);
    local_158 = (float)NEON_fmsub(local_c0,local_88,uVar12);
    fStack_154 = (float)NEON_fmsub(local_c0,uStack_84,uVar13);
    local_140 = (float)NEON_fmadd(local_c0,local_88,uVar7);
    fStack_134 = (float)NEON_fmadd(local_c0,local_88,uVar12);
    local_130 = (float)NEON_fmadd(local_c0,uStack_84,uVar13);
    local_128 = (float)NEON_fmsub(local_c0,local_88,uVar15);
    fStack_104 = (float)NEON_fmadd(local_c0,local_88,uVar15);
    local_150 = (float)NEON_fmsub(local_c0,local_80,uVar14);
    fStack_13c = (float)NEON_fmadd(local_c0,uStack_84,uVar8);
    local_138 = (float)NEON_fmadd(local_c0,local_80,uVar11);
    fStack_12c = (float)NEON_fmadd(local_c0,local_80,uVar14);
    fStack_124 = (float)NEON_fmsub(local_c0,uStack_84,uVar9);
    local_120 = (float)NEON_fmsub(local_c0,local_80,uVar10);
    local_118 = (float)NEON_fmsub(local_c0,uStack_84,uVar6);
    fStack_10c = (float)NEON_fmadd(local_c0,uStack_84,uVar6);
    local_100 = (float)NEON_fmadd(local_c0,uStack_84,uVar9);
    fStack_114 = (float)NEON_fmsub(local_c0,local_80,uVar3);
    local_108 = (float)NEON_fmadd(local_c0,local_80,uVar3);
    fStack_fc = (float)NEON_fmadd(local_c0,local_80,uVar10);
    fStack_14c = local_b8 + fStack_14c;
    local_148 = fStack_b4 + local_148;
    fStack_144 = local_b0 + fStack_144;
    local_140 = local_b8 + local_140;
    fStack_13c = fStack_b4 + fStack_13c;
    local_138 = local_b0 + local_138;
    local_110 = local_b8 + local_110;
    fStack_10c = fStack_b4 + fStack_10c;
    local_158 = local_b8 + local_158;
    fStack_134 = local_b8 + fStack_134;
    local_130 = fStack_b4 + local_130;
    fStack_12c = local_b0 + fStack_12c;
    local_128 = local_b8 + local_128;
    fStack_154 = fStack_b4 + fStack_154;
    local_150 = local_b0 + local_150;
    fStack_124 = fStack_b4 + fStack_124;
    local_120 = local_b0 + local_120;
    local_108 = local_b0 + local_108;
    local_118 = fStack_b4 + local_118;
    fStack_11c = local_b8 + fStack_11c;
    fStack_104 = local_b8 + fStack_104;
    fStack_114 = local_b0 + fStack_114;
    fStack_fc = local_b0 + fStack_fc;
    local_100 = fStack_b4 + local_100;
    debugDrawPoints(8,(Vector3 *)&local_158,param_6);
  }
  else {
    getCollisionGeometryNonStraight
              (param_1,param_2,param_3,param_4,param_5,local_f8,(Vector3 **)&local_a8,
               (Vector3 *)&local_158);
    pVVar2 = (Vector3 *)CONCAT44(local_a8._4_4_,(undefined4)local_a8);
    debugDrawPoints(local_f8[0],pVVar2,param_6);
    if (pVVar2 != (Vector3 *)0x0) {
      operator_delete__(pVVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


