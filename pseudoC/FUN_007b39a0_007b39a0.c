// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b39a0
// Entry Point: 007b39a0
// Size: 220 bytes
// Signature: undefined FUN_007b39a0(void)


void FUN_007b39a0(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
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
  uVar2 = BaseTerrain::getInterpolatedHeightAtPoint
                    ((BaseTerrain *)(param_1 + 0x170),
                     (local_48 + fVar5) / *(float *)(param_1 + 0x218) + *(float *)(param_1 + 0x204),
                     *(float *)(param_1 + 0x204) + (local_40 + fVar3) / *(float *)(param_1 + 0x218))
  ;
  param_2[0x40] = uVar2;
  param_2[0x42] = 4;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


