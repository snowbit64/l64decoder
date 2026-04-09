// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkForDynamicObjects
// Entry Point: 008a1d2c
// Size: 564 bytes
// Signature: undefined checkForDynamicObjects(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainDeformation::checkForDynamicObjects() */

void TerrainDeformation::checkForDynamicObjects(void)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long in_x0;
  ulong uVar4;
  Bt2ScenegraphPhysicsContext *this;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  int iVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined **local_d0 [2];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  float local_78;
  undefined4 local_74;
  float local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(in_x0 + 0x38);
  uVar10 = *(undefined8 *)(in_x0 + 0xf0);
  iVar9 = *(int *)(lVar5 + 0x90);
  uVar16 = NEON_ucvtf(uVar10,4);
  uVar18 = NEON_ucvtf(CONCAT44((int)((ulong)*(undefined8 *)(in_x0 + 0x108) >> 0x20) +
                               (int)((ulong)uVar10 >> 0x20),
                               (int)*(undefined8 *)(in_x0 + 0x108) + (int)uVar10),4);
  uVar4 = BaseTerrain::getLodTextureSize();
  fVar8 = (float)(ulong)(iVar9 - 1) / (float)(uVar4 & 0xffffffff);
  lVar6 = *(long *)(in_x0 + 0x38);
  fVar15 = (-*(float *)(lVar5 + 0x94) + ((float)uVar16 + 0.5) * fVar8) * *(float *)(lVar5 + 0xa8);
  fVar17 = (-*(float *)(lVar5 + 0x94) + ((float)((ulong)uVar16 >> 0x20) + 0.5) * fVar8) *
           *(float *)(lVar5 + 0xa8);
  iVar9 = *(int *)(lVar6 + 0x90);
  uVar2 = BaseTerrain::getLodTextureSize();
  lVar7 = *(long *)(in_x0 + 0x38);
  fVar11 = *(float *)(lVar6 + 0x94);
  uVar16 = NEON_ucvtf(CONCAT44(*(int *)(lVar7 + 0x90) + -1,iVar9 + -1),4);
  fVar8 = *(float *)(lVar6 + 0xa8);
  uVar3 = BaseTerrain::getLodTextureSize();
  lVar5 = *(long *)(in_x0 + 0x30);
  uVar10 = NEON_ucvtf(CONCAT44(uVar3,uVar2),4);
  fVar8 = fVar8 * (-fVar11 + ((float)uVar16 / (float)uVar10) * ((float)uVar18 + 0.5));
  fVar11 = *(float *)(lVar7 + 0xa8) *
           (-*(float *)(lVar7 + 0x94) +
           ((float)((ulong)uVar16 >> 0x20) / (float)((ulong)uVar10 >> 0x20)) *
           ((float)((ulong)uVar18 >> 0x20) + 0.5));
  RawTransformGroup::updateWorldTransformation();
  local_a8 = *(undefined8 *)(lVar5 + 0xd0);
  local_b0 = *(undefined8 *)(lVar5 + 200);
  uStack_b8 = *(undefined8 *)(lVar5 + 0xc0);
  local_c0 = *(undefined8 *)(lVar5 + 0xb8);
  fVar12 = *(float *)(in_x0 + 0x148);
  uStack_98 = *(undefined8 *)(lVar5 + 0xe0);
  local_a0 = *(undefined8 *)(lVar5 + 0xd8);
  local_74 = 0x42200000;
  fVar14 = (fVar15 + fVar8) * 0.5;
  fVar8 = fVar8 - fVar15;
  fVar13 = fVar11 - fVar17;
  uVar10 = NEON_ucvtf(*(undefined8 *)(in_x0 + 0x108),4);
  fVar11 = (fVar17 + fVar11) * 0.5;
  uVar2 = NEON_fmadd(fVar14,(undefined4)uStack_b8,fVar12 * (float)local_a8);
  uVar18 = *(undefined8 *)(lVar5 + 0xf0);
  uVar16 = *(undefined8 *)(lVar5 + 0xe8);
  *(ulong *)(in_x0 + 0x14c) = CONCAT44(fVar17,fVar15);
  local_88._0_4_ = (float)uVar18;
  fVar15 = (float)NEON_fmadd(fVar11,(undefined4)uStack_98,uVar2);
  local_78 = fVar8 * 0.5;
  local_70 = fVar13 * 0.5;
  local_90 = CONCAT44((float)((ulong)local_b0 >> 0x20) * fVar12 +
                      (float)((ulong)local_c0 >> 0x20) * fVar14 +
                      (float)((ulong)local_a0 >> 0x20) * fVar11 + (float)((ulong)uVar16 >> 0x20),
                      (float)local_b0 * fVar12 + (float)local_c0 * fVar14 + (float)local_a0 * fVar11
                      + (float)uVar16);
  *(ulong *)(in_x0 + 0x154) =
       CONCAT44(fVar13 / (float)((ulong)uVar10 >> 0x20),fVar8 / (float)uVar10);
  local_88 = CONCAT44((int)((ulong)uVar18 >> 0x20),fVar15 + (float)local_88);
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  local_d0[0] = &PTR__IPhysicsEntityReport_00fdd3c8;
  Bt2ScenegraphPhysicsContext::overlapBoxShapes
            (this,(Matrix4x4 *)&local_c0,(Vector3 *)&local_78,(IPhysicsEntityReport *)local_d0,
             *(uint *)(in_x0 + 0x54),true,false,true,0,(TransformGroup **)0x0,0);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


