// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00793cf8
// Entry Point: 00793cf8
// Size: 404 bytes
// Signature: undefined FUN_00793cf8(void)


void FUN_00793cf8(uint *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  EntityRegistryManager *this;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined auStack_68 [16];
  undefined4 local_58;
  float fStack_54;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar1 = *param_1;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar4 = EntityRegistryManager::getEntityById(this,uVar1);
  if ((((lVar4 != 0) && ((*(byte *)(lVar4 + 0x11) >> 3 & 1) != 0)) &&
      (*(long *)(lVar4 + 0x170) != 0)) &&
     (((*(byte *)(*(long *)(lVar4 + 0x170) + 0x22) >> 6 & 1) != 0 &&
      (plVar5 = (long *)SplineGeometry::getSpline(), plVar5 != (long *)0x0)))) {
    (**(code **)(*plVar5 + 0x10))(param_1[4],plVar5,auStack_68,&local_58);
    RawTransformGroup::updateWorldTransformation();
    uVar6 = NEON_fmadd(local_58,*(undefined4 *)(lVar4 + 0xbc),fStack_54 * *(float *)(lVar4 + 0xcc));
    uVar9 = NEON_fmadd(local_58,*(undefined4 *)(lVar4 + 0xb8),fStack_54 * *(float *)(lVar4 + 200));
    fVar7 = (float)NEON_fmadd(local_50,*(undefined4 *)(lVar4 + 0xdc),uVar6);
    fVar10 = (float)NEON_fmadd(local_50,*(undefined4 *)(lVar4 + 0xd8),uVar9);
    uVar6 = NEON_fmadd(local_58,*(undefined4 *)(lVar4 + 0xc0),fStack_54 * *(float *)(lVar4 + 0xd0));
    fVar8 = (float)NEON_fmadd(local_50,*(undefined4 *)(lVar4 + 0xe0),uVar6);
    uVar6 = NEON_fmadd(fVar10,fVar10,fVar7 * fVar7);
    fVar12 = (float)NEON_fmadd(fVar8,fVar8,uVar6);
    fVar11 = 1.0;
    if (1e-06 < fVar12) {
      fVar11 = 1.0 / SQRT(fVar12);
    }
    param_1[0x42] = 4;
    param_1[0x40] = (uint)(fVar10 * fVar11);
    param_1[0x44] = (uint)(fVar7 * fVar11);
    param_1[0x46] = 4;
    param_1[0x48] = (uint)(fVar8 * fVar11);
    param_1[0x4a] = 4;
    iVar3 = finite((double)(fVar10 * fVar11));
    if (((iVar3 == 0) || (iVar3 = finite((double)(fVar7 * fVar11)), iVar3 == 0)) ||
       (iVar3 = finite((double)(fVar8 * fVar11)), iVar3 == 0)) {
      param_1[0x40] = 0;
      param_1[0x44] = 0;
      param_1[0x48] = 0x3f800000;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


