// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addWorldspaceArea
// Entry Point: 0089eb54
// Size: 616 bytes
// Signature: undefined __cdecl addWorldspaceArea(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, TerrainBrush * param_10, bool param_11)


/* TerrainDeformation::addWorldspaceArea(float, float, float, float, float, float, float, float,
   float, TerrainBrush*, bool) */

void TerrainDeformation::addWorldspaceArea
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,float param_9,TerrainBrush *param_10,bool param_11)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float fStack_10c;
  float local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  float local_f0;
  float fStack_ec;
  float local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  ulong local_98;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_10 + 0x30);
  RawTransformGroup::updateWorldTransformation();
  Matrix4x4::invert3x4((Matrix4x4 *)&local_150,(Matrix4x4 *)(lVar2 + 0xb8));
  fVar11 = param_2 + param_5;
  fVar17 = param_2 + param_8;
  fVar12 = param_1 + param_4;
  fVar15 = param_3 + param_6;
  fVar19 = param_3 + param_9;
  fVar18 = param_1 + param_7;
  uVar6 = NEON_fmadd(param_1,local_150,local_140 * param_2);
  uVar13 = NEON_fmadd(fVar12,local_150,fVar11 * local_140);
  uVar3 = NEON_fmadd(fVar18,local_150,fVar17 * local_140);
  fVar7 = (float)NEON_fmadd(param_3,local_130,uVar6);
  fVar14 = (float)NEON_fmadd(fVar15,local_130,uVar13);
  fVar4 = (float)NEON_fmadd(fVar19,local_130,uVar3);
  uVar6 = NEON_fmadd(param_1,uStack_148,local_138 * param_2);
  uVar13 = NEON_fmadd(fVar12,uStack_148,fVar11 * local_138);
  uVar3 = NEON_fmadd(fVar18,uStack_148,fVar17 * local_138);
  fVar8 = (float)NEON_fmadd(param_3,local_128,uVar6);
  fVar16 = (float)NEON_fmadd(fVar15,local_128,uVar13);
  fVar10 = *(float *)(*(long *)(param_10 + 0x38) + 0xa8);
  fVar5 = (float)NEON_fmadd(fVar19,local_128,uVar3);
  fVar9 = *(float *)(*(long *)(param_10 + 0x38) + 0x94);
  uVar6 = NEON_fmadd(param_1,local_14c,local_13c * param_2);
  uVar13 = NEON_fmadd(fVar12,local_14c,fVar11 * local_13c);
  uVar3 = NEON_fmadd(fVar18,local_14c,fVar17 * local_13c);
  fVar12 = (float)NEON_fmadd(param_3,uStack_12c,uVar6);
  fVar15 = (float)NEON_fmadd(fVar15,uStack_12c,uVar13);
  fVar11 = (float)NEON_fmadd(fVar19,uStack_12c,uVar3);
  fVar7 = (local_120 + fVar7) / fVar10 + fVar9;
  fVar12 = local_11c + fVar12;
  fVar15 = (local_11c + fVar15) - fVar12;
  fVar18 = (local_11c + fVar11) - fVar12;
  fVar11 = (local_118 + fVar8) / fVar10 + fVar9;
  fVar17 = ((local_120 + fVar4) / fVar10 + fVar9) - fVar7;
  fVar4 = ((local_118 + fVar5) / fVar10 + fVar9) - fVar11;
  fVar5 = ((local_120 + fVar14) / fVar10 + fVar9) - fVar7;
  fVar8 = ((local_118 + fVar16) / fVar10 + fVar9) - fVar11;
  Plane::Plane((Plane *)&local_ac);
  local_100 = fVar7 + fVar5;
  fStack_fc = fVar12 + fVar15;
  local_f8 = fVar11 + fVar8;
  local_110 = fVar7 + fVar17;
  fStack_10c = fVar12 + fVar18;
  local_108 = fVar11 + fVar4;
  local_f0 = fVar7;
  fStack_ec = fVar12;
  local_e8 = fVar11;
  local_d0 = fVar7;
  fStack_cc = fVar12;
  local_c8 = fVar11;
  fStack_c4 = fVar5;
  local_c0 = fVar15;
  fStack_bc = fVar8;
  local_b8 = fVar17;
  fStack_b4 = fVar18;
  local_b0 = fVar4;
  Plane::Plane((Plane *)&local_e0,(Vector3 *)&local_f0,(Vector3 *)&local_100,(Vector3 *)&local_110);
  uStack_a4 = uStack_d8;
  local_ac = local_e0;
  local_98 = (ulong)param_11;
  FUN_0089f180(param_10 + 0x60,&local_d0);
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


