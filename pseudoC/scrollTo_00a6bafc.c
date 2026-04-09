// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: scrollTo
// Entry Point: 00a6bafc
// Size: 360 bytes
// Signature: undefined __thiscall scrollTo(DensityAnimationMap * this, Vector3 * param_1)


/* DensityAnimationMap::scrollTo(Vector3 const&) */

void __thiscall DensityAnimationMap::scrollTo(DensityAnimationMap *this,Vector3 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  undefined4 uVar12;
  float fVar13;
  ulong uVar14;
  float fVar15;
  undefined4 local_78 [2];
  undefined4 local_70;
  float local_68;
  float local_60;
  undefined4 local_58;
  undefined4 local_50;
  float local_48;
  float local_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  lVar6 = *(long *)(this + 0x10);
  RawTransformGroup::updateWorldTransformation();
  Matrix4x4::invert3x4((Matrix4x4 *)local_78,(Matrix4x4 *)(lVar6 + 0xb8));
  uVar2 = *(uint *)(this + 0x1c);
  uVar3 = *(uint *)(this + 0x44);
  uVar12 = NEON_fmadd(*(undefined4 *)param_1,local_78[0],*(float *)(param_1 + 4) * local_68);
  uVar7 = NEON_fmadd(*(undefined4 *)param_1,local_70,*(float *)(param_1 + 4) * local_60);
  fVar15 = *(float *)(this + 0x18);
  fVar13 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),local_58,uVar12);
  fVar8 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),local_50,uVar7);
  iVar4 = *(int *)(this + 0x70);
  uVar10 = NEON_smax(CONCAT44((int)(float)(int)((((fVar13 + local_48 + fVar15 * 0.5) *
                                                 (float)(ulong)uVar2) / fVar15 -
                                                *(float *)(this + 0x34)) / (float)(ulong)uVar3),
                              (int)(float)(int)((((local_40 + fVar8 + fVar15 * 0.5) *
                                                 (float)(ulong)uVar2) / fVar15 -
                                                *(float *)(this + 0x34)) / (float)(ulong)uVar3)),0,4
                    );
  iVar9 = (int)uVar10 * uVar3;
  iVar11 = (int)((ulong)uVar10 >> 0x20) * uVar3;
  uVar14 = NEON_cmhi(CONCAT44(iVar11 + iVar4,iVar9 + iVar4),CONCAT44(uVar2,uVar2),4);
  iVar1 = uVar2 - iVar4;
  if ((uVar14 & 0x100000000) == 0) {
    iVar1 = iVar11;
  }
  iVar4 = uVar2 - iVar4;
  if ((uVar14 & 1) == 0) {
    iVar4 = iVar9;
  }
  if (iVar1 - *(int *)(this + 0x3c) != 0 || iVar4 != *(int *)(this + 0x40)) {
    shiftGridCells(this,iVar1 - *(int *)(this + 0x3c),iVar4 - *(int *)(this + 0x40),false);
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


