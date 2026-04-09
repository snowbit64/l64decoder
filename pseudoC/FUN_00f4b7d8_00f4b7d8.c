// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f4b7d8
// Entry Point: 00f4b7d8
// Size: 188 bytes
// Signature: undefined FUN_00f4b7d8(void)


void FUN_00f4b7d8(undefined4 param_1,long param_2,float *param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  long local_28;
  
  local_48 = &local_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar3 = *param_3;
  fVar7 = param_3[1];
  local_34 = 0;
  fVar6 = param_3[2];
  uVar2 = NEON_fmadd(fVar7,*(undefined4 *)(param_2 + 0x4c),fVar3 * *(float *)(param_2 + 0x48));
  uVar5 = NEON_fmadd(*(undefined4 *)(param_2 + 0x5c),fVar7,*(float *)(param_2 + 0x58) * fVar3);
  uVar4 = NEON_fmadd(*(undefined4 *)(param_2 + 0x6c),fVar7,*(float *)(param_2 + 0x68) * fVar3);
  local_40 = NEON_fmadd(fVar6,*(undefined4 *)(param_2 + 0x50),uVar2);
  uStack_50 = *(undefined8 *)(param_2 + 0x38);
  uStack_3c = NEON_fmadd(*(undefined4 *)(param_2 + 0x60),fVar6,uVar5);
  local_38 = NEON_fmadd(*(undefined4 *)(param_2 + 0x70),fVar6,uVar4);
  local_60 = param_4;
  uStack_5c = param_5;
  local_58 = param_6;
  local_30 = param_1;
  (**(code **)(**(long **)(param_2 + 0x30) + 0x18))(*(long **)(param_2 + 0x30),&uStack_50,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


