// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a8fe8
// Entry Point: 007a8fe8
// Size: 208 bytes
// Signature: undefined FUN_007a8fe8(void)


void FUN_007a8fe8(LightSource *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = LightSource::getScatteringDirection(param_1,(Vector3 *)&local_48);
  if ((uVar2 & 1) == 0) {
    RawTransformGroup::updateWorldTransformation();
    local_48 = *(float *)(param_1 + 0xd8);
    fStack_44 = *(float *)(param_1 + 0xdc);
    local_40 = *(float *)(param_1 + 0xe0);
    uVar3 = NEON_fmadd(local_48,local_48,fStack_44 * fStack_44);
    fVar4 = (float)NEON_fmadd(local_40,local_40,uVar3);
    fVar5 = 1.0;
    if (1e-06 < fVar4) {
      fVar5 = 1.0 / SQRT(fVar4);
    }
    local_48 = local_48 * fVar5;
    fStack_44 = fStack_44 * fVar5;
    local_40 = local_40 * fVar5;
  }
  *(float *)(param_2 + 0x100) = local_48;
  *(float *)(param_2 + 0x110) = fStack_44;
  *(float *)(param_2 + 0x120) = local_40;
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(undefined4 *)(param_2 + 0x118) = 4;
  *(undefined4 *)(param_2 + 0x128) = 4;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


