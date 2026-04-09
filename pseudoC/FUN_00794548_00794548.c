// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794548
// Entry Point: 00794548
// Size: 364 bytes
// Signature: undefined FUN_00794548(void)


void FUN_00794548(uint *param_1)

{
  long lVar1;
  EntityRegistryManager *this;
  long lVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_48;
  float fStack_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = *param_1;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar2 = EntityRegistryManager::getEntityById(this,uVar4);
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
    fVar6 = (float)param_1[0x10];
    if ((float)param_1[0x10] <= 0.001) {
      fVar6 = 0.001;
    }
    uVar4 = (**(code **)(*plVar3 + 0x30))
                      (param_1[4],param_1[8],fVar6,plVar3,*(undefined *)(param_1 + 0xc),&local_48);
    RawTransformGroup::updateWorldTransformation();
    uVar5 = NEON_fmadd(local_48,*(undefined4 *)(lVar2 + 0xc0),fStack_44 * *(float *)(lVar2 + 0xd0));
    uVar7 = NEON_fmadd(local_48,*(undefined4 *)(lVar2 + 0xb8),fStack_44 * *(float *)(lVar2 + 200));
    uVar9 = NEON_fmadd(local_48,*(undefined4 *)(lVar2 + 0xbc),fStack_44 * *(float *)(lVar2 + 0xcc));
    fVar8 = (float)NEON_fmadd(local_40,*(undefined4 *)(lVar2 + 0xd8),uVar7);
    fVar10 = (float)NEON_fmadd(local_40,*(undefined4 *)(lVar2 + 0xdc),uVar9);
    fVar11 = *(float *)(lVar2 + 0xe8);
    fVar12 = *(float *)(lVar2 + 0xec);
    fVar6 = (float)NEON_fmadd(local_40,*(undefined4 *)(lVar2 + 0xe0),uVar5);
    fVar13 = *(float *)(lVar2 + 0xf0);
    param_1[0x4c] = uVar4;
    param_1[0x42] = 4;
    param_1[0x46] = 4;
    param_1[0x4a] = 4;
    param_1[0x40] = (uint)(fVar8 + fVar11);
    param_1[0x44] = (uint)(fVar12 + fVar10);
    param_1[0x48] = (uint)(fVar13 + fVar6);
  }
  param_1[0x4e] = 4;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


