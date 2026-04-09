// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00793f84
// Entry Point: 00793f84
// Size: 300 bytes
// Signature: undefined FUN_00793f84(void)


void FUN_00793f84(uint *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  EntityRegistryManager *this;
  long lVar4;
  Spline *this_00;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_58;
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
      (this_00 = (Spline *)SplineGeometry::getSpline(), this_00 != (Spline *)0x0)))) {
    uVar1 = param_1[4];
    uVar3 = Spline::getNumOfCV();
    if (uVar1 < uVar3) {
      Spline::getCV(this_00,uVar1,&local_58);
      RawTransformGroup::updateWorldTransformation();
      uVar5 = NEON_fmadd(local_58,*(undefined4 *)(lVar4 + 0xc0),fStack_54 * *(float *)(lVar4 + 0xd0)
                        );
      uVar7 = NEON_fmadd(local_58,*(undefined4 *)(lVar4 + 0xb8),fStack_54 * *(float *)(lVar4 + 200))
      ;
      uVar9 = NEON_fmadd(local_58,*(undefined4 *)(lVar4 + 0xbc),fStack_54 * *(float *)(lVar4 + 0xcc)
                        );
      fVar8 = (float)NEON_fmadd(local_50,*(undefined4 *)(lVar4 + 0xd8),uVar7);
      fVar10 = (float)NEON_fmadd(local_50,*(undefined4 *)(lVar4 + 0xdc),uVar9);
      fVar11 = *(float *)(lVar4 + 0xe8);
      fVar12 = *(float *)(lVar4 + 0xec);
      fVar6 = (float)NEON_fmadd(local_50,*(undefined4 *)(lVar4 + 0xe0),uVar5);
      fVar13 = *(float *)(lVar4 + 0xf0);
      param_1[0x42] = 4;
      param_1[0x46] = 4;
      param_1[0x4a] = 4;
      param_1[0x40] = (uint)(fVar8 + fVar11);
      param_1[0x44] = (uint)(fVar12 + fVar10);
      param_1[0x48] = (uint)(fVar13 + fVar6);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


