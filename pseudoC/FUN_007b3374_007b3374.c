// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b3374
// Entry Point: 007b3374
// Size: 392 bytes
// Signature: undefined FUN_007b3374(void)


void FUN_007b3374(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
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
  local_ac = 0.0;
  uVar1 = *param_2;
  if (uVar1 < (uint)((int)((ulong)(*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178)) >> 4) *
                    -0x45d1745d)) {
    RawTransformGroup::updateWorldTransformation();
    Matrix4x4::invert3x4((Matrix4x4 *)local_a8,(Matrix4x4 *)(param_1 + 0xb8));
    uVar6 = NEON_fmadd(param_2[4],local_a8[0],(float)param_2[8] * local_98);
    uVar4 = NEON_fmadd(param_2[4],local_a0,(float)param_2[8] * local_90);
    fVar7 = (float)NEON_fmadd(param_2[0xc],local_88,uVar6);
    fVar5 = (float)NEON_fmadd(param_2[0xc],local_80,uVar4);
    uVar3 = BaseTerrain::getLodTextureSize();
    fVar8 = (float)(uVar3 & 0xffffffff) /
            (*(float *)(param_1 + 0x218) * (float)(ulong)(*(int *)(param_1 + 0x200) - 1));
    uVar3 = BaseTerrain::getLodTextureSize();
    fVar7 = (float)NEON_fmadd(local_78 + fVar7,fVar8,(float)(uVar3 & 0xffffffff) * 0.5);
    uVar3 = BaseTerrain::getLodTextureSize();
    fVar5 = (float)NEON_fmadd(local_70 + fVar5,fVar8,(float)(uVar3 & 0xffffffff) * 0.5);
    BaseTerrain::getLayerRegion
              ((BaseTerrain *)(param_1 + 0x170),uVar1,(int)(fVar7 + -0.5),(int)(fVar5 + -0.5),1,1,
               &local_ac);
  }
  param_2[0x40] = (uint)local_ac;
  param_2[0x42] = 4;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


