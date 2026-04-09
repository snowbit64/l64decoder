// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b34fc
// Entry Point: 007b34fc
// Size: 520 bytes
// Signature: undefined FUN_007b34fc(void)


void FUN_007b34fc(long param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_ac;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  float local_98;
  float local_90;
  undefined4 local_88;
  undefined4 local_80;
  float local_78;
  float local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar4 = *param_2;
  RawTransformGroup::updateWorldTransformation();
  Matrix4x4::invert3x4((Matrix4x4 *)local_a8,(Matrix4x4 *)(param_1 + 0xb8));
  uVar9 = NEON_fmadd(param_2[4],local_a8[0],(float)param_2[8] * local_98);
  uVar7 = NEON_fmadd(param_2[4],local_a0,(float)param_2[8] * local_90);
  fVar10 = (float)NEON_fmadd(param_2[0xc],local_88,uVar9);
  fVar8 = (float)NEON_fmadd(param_2[0xc],local_80,uVar7);
  uVar5 = BaseTerrain::getLodTextureSize();
  fVar11 = (float)(uVar5 & 0xffffffff) /
           (*(float *)(param_1 + 0x218) * (float)(ulong)(*(int *)(param_1 + 0x200) - 1));
  uVar5 = BaseTerrain::getLodTextureSize();
  fVar10 = (float)NEON_fmadd(local_78 + fVar10,fVar11,(float)(uVar5 & 0xffffffff) * 0.5);
  uVar5 = BaseTerrain::getLodTextureSize();
  fVar8 = (float)NEON_fmadd(local_70 + fVar8,fVar11,(float)(uVar5 & 0xffffffff) * 0.5);
  iVar3 = (int)((ulong)(*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178)) >> 4);
  uVar6 = iVar3 * -0x45d1745d;
  if ((uVar6 <= uVar4) &&
     (uVar4 < (int)((ulong)(*(long *)(param_1 + 0x1b0) - *(long *)(param_1 + 0x1a8)) >> 6) + uVar6))
  {
    lVar1 = *(long *)(param_1 + 0x1a8) + (ulong)(uVar4 + iVar3 * 0x45d1745d) * 0x40;
    fVar12 = *(float *)(lVar1 + 0x34);
    fVar11 = (float)BaseTerrain::getUnitsPerPixel();
    iVar3 = BaseTerrain::getHeightMapSize();
    uVar5 = BaseTerrain::getLodTextureSize();
    uVar4 = TerrainUtil::getRandomLayer
                      (*(uint *)(lVar1 + 0x20),(uint *)(lVar1 + 0x24),(int)(fVar10 + -0.5),
                       (int)(fVar8 + -0.5),
                       (fVar12 * fVar11 * (float)(ulong)(iVar3 - 1)) / (float)(uVar5 & 0xffffffff),
                       0x762bf67);
    uVar6 = (int)((ulong)(*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178)) >> 4) *
            -0x45d1745d;
  }
  if (uVar4 < uVar6) {
    local_ac = (float)param_2[0x10];
    BaseTerrain::updateLayerRegion
              ((BaseTerrain *)(param_1 + 0x170),uVar4,(int)(fVar10 + -0.5),(int)(fVar8 + -0.5),1,1,
               &local_ac);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


