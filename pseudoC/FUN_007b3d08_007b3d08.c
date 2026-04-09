// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b3d08
// Entry Point: 007b3d08
// Size: 424 bytes
// Signature: undefined FUN_007b3d08(void)


void FUN_007b3d08(long param_1,undefined4 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  bool local_b8;
  undefined local_b7;
  undefined local_b6;
  undefined local_b5;
  undefined local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98 [2];
  undefined4 local_90;
  float local_88;
  float local_80;
  undefined4 local_78;
  undefined4 local_70;
  float local_68;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  RawTransformGroup::updateWorldTransformation();
  Matrix4x4::invert3x4((Matrix4x4 *)local_98,(Matrix4x4 *)(param_1 + 0xb8));
  uVar5 = NEON_fmadd(*param_2,local_98[0],(float)param_2[4] * local_88);
  uVar3 = NEON_fmadd(*param_2,local_90,(float)param_2[4] * local_80);
  fVar6 = (float)NEON_fmadd(param_2[8],local_78,uVar5);
  fVar4 = (float)NEON_fmadd(param_2[8],local_70,uVar3);
  uVar2 = BaseTerrain::getLodTextureSize();
  fVar7 = (float)(uVar2 & 0xffffffff) /
          (*(float *)(param_1 + 0x218) * (float)(ulong)(*(int *)(param_1 + 0x200) - 1));
  uVar2 = BaseTerrain::getLodTextureSize();
  fVar6 = (float)NEON_fmadd(local_68 + fVar6,fVar7,(float)(uVar2 & 0xffffffff) * 0.5);
  uVar2 = BaseTerrain::getLodTextureSize();
  local_b8 = *(bool *)(param_2 + 0xc);
  local_b7 = *(undefined *)(param_2 + 0x10);
  local_b4 = *(undefined *)(param_2 + 0x1c);
  local_b6 = *(undefined *)(param_2 + 0x14);
  local_b5 = *(undefined *)(param_2 + 0x18);
  fVar4 = (float)NEON_fmadd(local_60 + fVar4,fVar7,(float)(uVar2 & 0xffffffff) * 0.5);
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  BaseTerrain::getAttributes
            ((BaseTerrain *)(param_1 + 0x170),(int)(fVar6 + -0.5 + 0.5),(int)(fVar4 + -0.5 + 0.5),
             (float *)&local_b0,&local_b8,5);
  param_2[0x40] = (undefined4)local_b0;
  param_2[0x44] = local_b0._4_4_;
  param_2[0x42] = 4;
  param_2[0x46] = 4;
  param_2[0x4c] = local_a8._4_4_;
  param_2[0x48] = (undefined4)local_a8;
  param_2[0x4a] = 4;
  param_2[0x4e] = 4;
  param_2[0x50] = local_a0;
  param_2[0x52] = 4;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


