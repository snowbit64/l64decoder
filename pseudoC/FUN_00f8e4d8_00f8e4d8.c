// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f8e4d8
// Entry Point: 00f8e4d8
// Size: 784 bytes
// Signature: undefined FUN_00f8e4d8(void)


void FUN_00f8e4d8(long *param_1,undefined8 *param_2,int param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,int param_7)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_e8;
  float local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  float local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  float local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  float local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  float local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  float local_90;
  undefined4 local_8c;
  undefined8 local_88;
  float local_80;
  undefined4 local_7c;
  undefined8 local_78;
  float local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_2 != (undefined8 *)0x0) {
    if ((param_2[6] != 0) && ((param_3 < param_7 || (param_7 < 0)))) {
      FUN_00f8e4d8(param_1,param_2[5],param_3 + 1,param_4,param_5,param_6,param_7);
      FUN_00f8e4d8(param_1,param_2[6],param_3 + 1,param_4,param_5,param_6,param_7);
    }
    if (param_6 <= param_3) {
      local_bc = 0;
      local_ac = 0;
      fVar2 = (float)*param_2;
      fVar4 = (float)param_2[2];
      fVar3 = (float)((ulong)*param_2 >> 0x20);
      fVar5 = (float)((ulong)param_2[2] >> 0x20);
      local_9c = 0;
      fVar7 = (fVar4 + fVar2) * 0.5;
      fVar8 = (fVar5 + fVar3) * 0.5;
      fVar2 = (fVar4 - fVar2) * 0.5;
      fVar3 = (fVar5 - fVar3) * 0.5;
      local_8c = 0;
      fVar4 = (*(float *)(param_2 + 3) + *(float *)(param_2 + 1)) * 0.5;
      local_a0 = (*(float *)(param_2 + 3) - *(float *)(param_2 + 1)) * 0.5;
      local_7c = 0;
      fVar5 = fVar7 - fVar2;
      fVar6 = fVar8 - fVar3;
      fVar2 = fVar2 + fVar7;
      fVar3 = fVar3 + fVar8;
      local_c8 = CONCAT44(fVar3,fVar2);
      if (param_2[6] != 0) {
        param_5 = param_4;
      }
      local_6c = 0;
      local_e0 = fVar4 - local_a0;
      local_a0 = local_a0 + fVar4;
      local_b8 = CONCAT44(fVar3,fVar5);
      local_a8 = CONCAT44(fVar6,fVar5);
      local_d8 = CONCAT44(fVar6,fVar2);
      local_dc = 0;
      local_e8 = CONCAT44(fVar6,fVar5);
      local_cc = 0;
      local_d0 = local_e0;
      local_c0 = local_e0;
      local_b0 = local_e0;
      local_98 = local_d8;
      local_90 = local_a0;
      local_88 = local_c8;
      local_80 = local_a0;
      local_78 = local_b8;
      local_70 = local_a0;
      (**(code **)(*param_1 + 0x20))(param_1,&local_e8,&local_d8,param_5);
      (**(code **)(*param_1 + 0x20))(param_1,&local_d8,&local_c8,param_5);
      (**(code **)(*param_1 + 0x20))(param_1,&local_c8,&local_b8,param_5);
      (**(code **)(*param_1 + 0x20))(param_1,&local_b8,&local_e8,param_5);
      (**(code **)(*param_1 + 0x20))(param_1,&local_a8,&local_98,param_5);
      (**(code **)(*param_1 + 0x20))(param_1,&local_98,&local_88,param_5);
      (**(code **)(*param_1 + 0x20))(param_1,&local_88,&local_78,param_5);
      (**(code **)(*param_1 + 0x20))(param_1,&local_78,&local_a8,param_5);
      (**(code **)(*param_1 + 0x20))(param_1,&local_e8,&local_a8,param_5);
      (**(code **)(*param_1 + 0x20))(param_1,&local_d8,&local_98,param_5);
      (**(code **)(*param_1 + 0x20))(param_1,&local_c8,&local_88,param_5);
      (**(code **)(*param_1 + 0x20))(param_1,&local_b8,&local_78,param_5);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


