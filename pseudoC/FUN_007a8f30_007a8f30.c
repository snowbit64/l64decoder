// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a8f30
// Entry Point: 007a8f30
// Size: 184 bytes
// Signature: undefined FUN_007a8f30(void)


void FUN_007a8f30(LightSource *param_1,float *param_2)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float local_38;
  float fStack_34;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *param_2;
  fStack_34 = param_2[4];
  local_30 = param_2[8];
  if (((local_38 != 0.0) || (fStack_34 != 0.0)) || (local_30 != 0.0)) {
    uVar2 = NEON_fmadd(local_38,local_38,fStack_34 * fStack_34);
    fVar4 = (float)NEON_fmadd(local_30,local_30,uVar2);
    fVar3 = 1.0;
    if (1e-06 < fVar4) {
      fVar3 = 1.0 / SQRT(fVar4);
    }
    local_38 = local_38 * fVar3;
    fStack_34 = fStack_34 * fVar3;
    local_30 = local_30 * fVar3;
  }
  LightSource::setScatteringDirection(param_1,(Vector3 *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


