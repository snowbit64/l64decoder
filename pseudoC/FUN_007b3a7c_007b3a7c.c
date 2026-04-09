// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b3a7c
// Entry Point: 007b3a7c
// Size: 380 bytes
// Signature: undefined FUN_007b3a7c(void)


void FUN_007b3a7c(long param_1,undefined4 *param_2)

{
  long *this;
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 local_c8 [2];
  undefined4 local_c0;
  float local_b8;
  float local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  float local_98;
  float local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  if (BaseTerrain::s_allowTerrainHeightEditing != '\0') {
    RawTransformGroup::updateWorldTransformation();
    Matrix4x4::invert3x4((Matrix4x4 *)local_c8,(Matrix4x4 *)(param_1 + 0xb8));
    fVar7 = (float)param_2[4];
    uVar9 = *param_2;
    uVar8 = param_2[8];
    fVar10 = *(float *)(param_1 + 0x218);
    fVar11 = *(float *)(param_1 + 0x204);
    uVar5 = NEON_fmadd(uVar9,local_c8[0],fVar7 * local_b8);
    fVar6 = (float)NEON_fmadd(uVar8,local_a8,uVar5);
    uVar3 = (uint)((local_98 + fVar6) / fVar10 + fVar11 + 0.5);
    if (-1 < (int)uVar3) {
      this = (long *)(param_1 + 0x170);
      iVar2 = BaseTerrain::getHeightMapSize();
      if ((int)uVar3 < iVar2) {
        uVar5 = NEON_fmadd(uVar9,local_c0,fVar7 * local_b0);
        fVar6 = (float)NEON_fmadd(uVar8,local_a0,uVar5);
        uVar4 = (uint)(fVar11 + (local_90 + fVar6) / fVar10 + 0.5);
        if ((-1 < (int)uVar4) && (iVar2 = BaseTerrain::getHeightMapSize(), (int)uVar4 < iVar2)) {
          BaseTerrain::setScaledHeightAtPoint((BaseTerrain *)this,uVar3,uVar4,(float)param_2[0xc]);
          (**(code **)(*this + 0x10))(this,uVar3,uVar4,1,1);
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


