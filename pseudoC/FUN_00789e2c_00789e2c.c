// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00789e2c
// Entry Point: 00789e2c
// Size: 408 bytes
// Signature: undefined FUN_00789e2c(void)


void FUN_00789e2c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined4 local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  AudioDeviceManager::getInstance();
  plVar4 = (long *)AudioDeviceManager::getCurrentAudioDevice();
  if (plVar4 != (long *)0x0) {
    uStack_bc = 0x3f6429073ea1e8a3;
    local_c4 = 0x3f8000003f800000;
    uStack_128 = 0x3f6429073ea1e8a3;
    local_130 = 0x3f8000003f800000;
    uStack_118 = 0x3f8000003f547ae1;
    uStack_120 = 0x3fbeb8523f800000;
    uStack_108 = 0;
    local_110 = 0x3be560423d4cd078;
    uStack_f8 = 0x3c343958;
    uStack_100 = 0x3fa1249e00000000;
    uVar1 = *param_1;
    uStack_e8 = 0x3e800000;
    local_f0 = 0;
    uStack_d8 = 0x459c40003f7e87d3;
    uStack_e0 = 0x3e800000;
    uVar2 = param_1[8];
    local_d0 = 0x437a0000;
    uVar6 = param_1[0xc];
    local_c8 = 1;
    uStack_ac = 0x3f8000003f547ae1;
    local_b4 = 0x3fbeb8523f800000;
    uStack_9c = 0;
    local_a4 = 0x3be560423d4cd078;
    uStack_8c = 0x3c343958;
    local_94 = 0x3fa1249e00000000;
    uStack_7c = 0x3e800000;
    local_84 = 0;
    uStack_6c = 0x459c40003f7e87d3;
    local_74 = 0x3e800000;
    local_64 = 0x437a0000;
    local_5c = 1;
    (**(code **)(*plVar4 + 0x68))(plVar4,param_1[4],&local_130);
    (**(code **)(*plVar4 + 0x68))(plVar4,uVar2,&local_c4);
    fVar5 = 1.0;
    switch(param_1[0x12]) {
    case 1:
      fVar5 = (float)param_1[0x10];
      break;
    case 2:
      fVar5 = (float)NEON_ucvtf(param_1[0x10]);
      break;
    case 4:
      fVar5 = (float)param_1[0x10];
      break;
    case 5:
      fVar5 = (float)*(double *)(param_1 + 0x10);
    }
    (**(code **)(*plVar4 + 0x70))(uVar6,fVar5,plVar4,uVar1,&local_130,&local_c4);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


