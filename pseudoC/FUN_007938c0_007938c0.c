// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007938c0
// Entry Point: 007938c0
// Size: 280 bytes
// Signature: undefined FUN_007938c0(void)


void FUN_007938c0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  EntityRegistryManager *this;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined auStack_58 [16];
  undefined4 local_48;
  float fStack_44;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *param_1;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar3 = EntityRegistryManager::getEntityById(this,uVar1);
  if ((((lVar3 != 0) && ((*(byte *)(lVar3 + 0x11) >> 3 & 1) != 0)) &&
      (*(long *)(lVar3 + 0x170) != 0)) &&
     (((*(byte *)(*(long *)(lVar3 + 0x170) + 0x22) >> 6 & 1) != 0 &&
      (plVar4 = (long *)SplineGeometry::getSpline(), plVar4 != (long *)0x0)))) {
    (**(code **)(*plVar4 + 0x10))(param_1[4],plVar4,&local_48,auStack_58);
    RawTransformGroup::updateWorldTransformation();
    uVar5 = NEON_fmadd(local_48,*(undefined4 *)(lVar3 + 0xc0),fStack_44 * *(float *)(lVar3 + 0xd0));
    uVar7 = NEON_fmadd(local_48,*(undefined4 *)(lVar3 + 0xb8),fStack_44 * *(float *)(lVar3 + 200));
    uVar9 = NEON_fmadd(local_48,*(undefined4 *)(lVar3 + 0xbc),fStack_44 * *(float *)(lVar3 + 0xcc));
    fVar8 = (float)NEON_fmadd(local_40,*(undefined4 *)(lVar3 + 0xd8),uVar7);
    fVar10 = (float)NEON_fmadd(local_40,*(undefined4 *)(lVar3 + 0xdc),uVar9);
    fVar11 = *(float *)(lVar3 + 0xe8);
    fVar12 = *(float *)(lVar3 + 0xec);
    fVar6 = (float)NEON_fmadd(local_40,*(undefined4 *)(lVar3 + 0xe0),uVar5);
    fVar13 = *(float *)(lVar3 + 0xf0);
    param_1[0x42] = 4;
    param_1[0x46] = 4;
    param_1[0x4a] = 4;
    param_1[0x40] = (uint)(fVar8 + fVar11);
    param_1[0x44] = (uint)(fVar12 + fVar10);
    param_1[0x48] = (uint)(fVar13 + fVar6);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


