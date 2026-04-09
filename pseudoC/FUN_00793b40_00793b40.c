// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00793b40
// Entry Point: 00793b40
// Size: 440 bytes
// Signature: undefined FUN_00793b40(void)


void FUN_00793b40(uint *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  EntityRegistryManager *this;
  long lVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 local_98;
  float local_90;
  uint local_88;
  uint uStack_84;
  uint local_80;
  float local_78;
  float fStack_74;
  float local_70;
  undefined auStack_68 [16];
  float local_58;
  float fStack_54;
  float local_50;
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
    local_88 = param_1[8];
    uStack_84 = param_1[0xc];
    local_80 = param_1[0x10];
    (**(code **)(*plVar5 + 0x10))(param_1[4],plVar5,auStack_68,&local_58);
    RawTransformGroup::updateWorldTransformation();
    fVar6 = (float)*(undefined8 *)(lVar4 + 200) * fStack_54 +
            (float)*(undefined8 *)(lVar4 + 0xb8) * local_58 +
            (float)*(undefined8 *)(lVar4 + 0xd8) * local_50;
    fVar7 = (float)((ulong)*(undefined8 *)(lVar4 + 200) >> 0x20) * fStack_54 +
            (float)((ulong)*(undefined8 *)(lVar4 + 0xb8) >> 0x20) * local_58 +
            (float)((ulong)*(undefined8 *)(lVar4 + 0xd8) >> 0x20) * local_50;
    uVar8 = NEON_fmadd(local_58,*(undefined4 *)(lVar4 + 0xc0),fStack_54 * *(float *)(lVar4 + 0xd0));
    local_90 = (float)NEON_fmadd(local_50,*(undefined4 *)(lVar4 + 0xe0),uVar8);
    fVar10 = (float)NEON_fmadd(local_90,local_90,fVar7 * fVar7 + fVar6 * fVar6);
    fVar9 = 1.0;
    if (1e-06 < fVar10) {
      fVar9 = 1.0 / SQRT(fVar10);
    }
    local_98 = CONCAT44(fVar7 * fVar9,fVar6 * fVar9);
    local_90 = local_90 * fVar9;
    Spline::getOrientation((Vector3 *)&local_88,(Vector3 *)&local_98,(Vector3 *)&local_78);
    param_1[0x40] = (uint)local_78;
    param_1[0x42] = 4;
    param_1[0x44] = (uint)fStack_74;
    param_1[0x46] = 4;
    param_1[0x48] = (uint)local_70;
    param_1[0x4a] = 4;
    iVar3 = finite((double)local_78);
    if (((iVar3 == 0) || (iVar3 = finite((double)fStack_74), iVar3 == 0)) ||
       (iVar3 = finite((double)local_70), iVar3 == 0)) {
      param_1[0x40] = 0;
      param_1[0x44] = 0;
      param_1[0x48] = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


