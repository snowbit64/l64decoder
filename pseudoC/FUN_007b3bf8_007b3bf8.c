// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b3bf8
// Entry Point: 007b3bf8
// Size: 272 bytes
// Signature: undefined FUN_007b3bf8(void)


void FUN_007b3bf8(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78 [2];
  undefined4 local_70;
  float local_68;
  float local_60;
  undefined4 local_58;
  undefined4 local_50;
  float local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  RawTransformGroup::updateWorldTransformation();
  Matrix4x4::invert3x4((Matrix4x4 *)local_78,(Matrix4x4 *)(param_1 + 0xb8));
  uVar4 = NEON_fmadd(*param_2,local_78[0],(float)param_2[4] * local_68);
  uVar2 = NEON_fmadd(*param_2,local_70,(float)param_2[4] * local_60);
  fVar5 = (float)NEON_fmadd(param_2[8],local_58,uVar4);
  fVar3 = (float)NEON_fmadd(param_2[8],local_50,uVar2);
  local_88 = 0x3f80000000000000;
  local_80 = 0;
  BaseTerrain::getInterpolatedNormalAtPoint
            ((BaseTerrain *)(param_1 + 0x170),
             (local_48 + fVar5) / *(float *)(param_1 + 0x218) + *(float *)(param_1 + 0x204),
             *(float *)(param_1 + 0x204) + (local_40 + fVar3) / *(float *)(param_1 + 0x218),
             (float *)&local_88);
  param_2[0x40] = (undefined4)local_88;
  param_2[0x42] = 4;
  param_2[0x44] = local_88._4_4_;
  param_2[0x46] = 4;
  param_2[0x48] = local_80;
  param_2[0x4a] = 4;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


