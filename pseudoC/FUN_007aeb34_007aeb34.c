// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aeb34
// Entry Point: 007aeb34
// Size: 256 bytes
// Signature: undefined FUN_007aeb34(void)


void FUN_007aeb34(TerrainFillDataPlane *param_1,float *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_68;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x40);
  fVar5 = *param_2;
  fVar6 = param_2[4];
  fVar7 = param_2[8];
  RawTransformGroup::updateWorldTransformation();
  fVar6 = fVar6 - *(float *)(lVar2 + 0xec);
  fVar5 = fVar5 - *(float *)(lVar2 + 0xe8);
  fVar7 = fVar7 - *(float *)(lVar2 + 0xf0);
  local_68 = 0x3f80000000000000;
  local_60 = 0.0;
  uVar4 = NEON_fmadd(fVar5,*(undefined4 *)(lVar2 + 0xb8),fVar6 * *(float *)(lVar2 + 0xbc));
  uVar3 = NEON_fmadd(fVar5,*(undefined4 *)(lVar2 + 0xd8),fVar6 * *(float *)(lVar2 + 0xdc));
  fVar6 = (float)NEON_fmadd(fVar7,*(undefined4 *)(lVar2 + 0xc0),uVar4);
  fVar5 = (float)NEON_fmadd(fVar7,*(undefined4 *)(lVar2 + 0xe0),uVar3);
  TerrainFillDataPlane::getInterpolatedNormalAtPoint(param_1,fVar6,fVar5,(float *)&local_68);
  param_2[0x40] = (float)local_68;
  param_2[0x42] = 5.605194e-45;
  param_2[0x44] = local_68._4_4_;
  param_2[0x46] = 5.605194e-45;
  param_2[0x48] = local_60;
  param_2[0x4a] = 5.605194e-45;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


