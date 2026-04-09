// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bbbe0
// Entry Point: 007bbbe0
// Size: 196 bytes
// Signature: undefined FUN_007bbbe0(void)


void FUN_007bbbe0(AnimalCompanionManager *param_1,float *param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = *param_2;
  fStack_44 = param_2[4];
  local_40 = param_2[8];
  lVar2 = AnimalCompanionManager::getNearestAgent(param_1,(Vector3 *)&local_48);
  if (lVar2 == 0) {
    fVar3 = 0.0;
    param_2[0x40] = 0.0;
  }
  else {
    RawTransformGroup::updateWorldTransformation();
    fVar3 = *(float *)(lVar2 + 0xe8) - local_48;
    fVar6 = *(float *)(lVar2 + 0xec) - fStack_44;
    fVar5 = *(float *)(lVar2 + 0xf0) - local_40;
    uVar4 = NEON_fmadd(fVar6,fVar6,fVar3 * fVar3);
    fVar3 = (float)NEON_fmadd(fVar5,fVar5,uVar4);
    param_2[0x40] = SQRT(fVar3);
    fVar3 = *(float *)(lVar2 + 0x118);
  }
  param_2[0x44] = fVar3;
  param_2[0x42] = 5.605194e-45;
  param_2[0x46] = 5.605194e-45;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


