// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794198
// Entry Point: 00794198
// Size: 468 bytes
// Signature: undefined FUN_00794198(void)


void FUN_00794198(uint *param_1)

{
  long lVar1;
  EntityRegistryManager *this;
  long lVar2;
  long *plVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_a8;
  float fStack_a4;
  undefined4 local_a0;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar6 = *param_1;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar2 = EntityRegistryManager::getEntityById(this,uVar6);
  if ((((lVar2 == 0) || ((*(byte *)(lVar2 + 0x11) >> 3 & 1) == 0)) ||
      (*(long *)(lVar2 + 0x170) == 0)) ||
     (((*(byte *)(*(long *)(lVar2 + 0x170) + 0x22) >> 6 & 1) == 0 ||
      (plVar3 = (long *)SplineGeometry::getSpline(), plVar3 == (long *)0x0)))) {
    param_1[0x40] = 0;
    param_1[0x44] = 0;
    param_1[0x42] = 4;
    param_1[0x46] = 4;
    param_1[0x48] = 0;
    param_1[0x4a] = 4;
    param_1[0x4c] = param_1[4];
  }
  else {
    RawTransformGroup::updateWorldTransformation();
    Matrix4x4::invert3x4((Matrix4x4 *)&local_88,(Matrix4x4 *)(lVar2 + 0xb8));
    fVar4 = (float)param_1[8];
    fVar9 = (float)param_1[4];
    fVar11 = (float)param_1[0xc];
    uVar5 = NEON_fmadd(fVar9,local_80,fVar4 * local_70);
    local_90 = (float)NEON_fmadd(fVar11,local_60,uVar5);
    local_98 = CONCAT44((float)((ulong)local_58 >> 0x20) +
                        (float)((ulong)local_78 >> 0x20) * fVar4 +
                        (float)((ulong)local_88 >> 0x20) * fVar9 +
                        (float)((ulong)local_68 >> 0x20) * fVar11,
                        (float)local_58 +
                        (float)local_78 * fVar4 + (float)local_88 * fVar9 + (float)local_68 * fVar11
                       );
    local_90 = local_50 + local_90;
    fVar4 = (float)param_1[0x10];
    if ((float)param_1[0x10] <= 0.001) {
      fVar4 = 0.001;
    }
    uVar6 = (**(code **)(*plVar3 + 0x20))(fVar4,plVar3,&local_98,&local_a8);
    RawTransformGroup::updateWorldTransformation();
    uVar5 = NEON_fmadd(local_a8,*(undefined4 *)(lVar2 + 0xc0),fStack_a4 * *(float *)(lVar2 + 0xd0));
    uVar7 = NEON_fmadd(local_a8,*(undefined4 *)(lVar2 + 0xb8),fStack_a4 * *(float *)(lVar2 + 200));
    uVar8 = NEON_fmadd(local_a8,*(undefined4 *)(lVar2 + 0xbc),fStack_a4 * *(float *)(lVar2 + 0xcc));
    fVar9 = (float)NEON_fmadd(local_a0,*(undefined4 *)(lVar2 + 0xd8),uVar7);
    fVar11 = (float)NEON_fmadd(local_a0,*(undefined4 *)(lVar2 + 0xdc),uVar8);
    fVar10 = *(float *)(lVar2 + 0xe8);
    fVar12 = *(float *)(lVar2 + 0xec);
    fVar4 = (float)NEON_fmadd(local_a0,*(undefined4 *)(lVar2 + 0xe0),uVar5);
    fVar13 = *(float *)(lVar2 + 0xf0);
    param_1[0x4c] = uVar6;
    param_1[0x42] = 4;
    param_1[0x46] = 4;
    param_1[0x4a] = 4;
    param_1[0x40] = (uint)(fVar9 + fVar10);
    param_1[0x44] = (uint)(fVar12 + fVar11);
    param_1[0x48] = (uint)(fVar13 + fVar4);
  }
  param_1[0x4e] = 4;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


