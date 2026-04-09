// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00789fc4
// Entry Point: 00789fc4
// Size: 236 bytes
// Signature: undefined FUN_00789fc4(void)


void FUN_00789fc4(undefined4 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  AudioDeviceManager::getInstance();
  plVar2 = (long *)AudioDeviceManager::getCurrentAudioDevice();
  if (plVar2 != (long *)0x0) {
    local_90 = param_1[4];
    uStack_8c = param_1[8];
    local_88 = param_1[0xc];
    local_70 = 0;
    uStack_84 = param_1[0x10];
    local_68 = 0;
    local_80 = param_1[0x14];
    local_78 = param_1[0x18];
    local_7c = 0x3f800000;
    uStack_74 = param_1[0x1c];
    local_64 = param_1[0x20];
    local_3c = param_1[0x28];
    uStack_60 = param_1[0x24];
    local_98 = NEON_fmov(0x3f800000,4);
    uStack_38 = param_1[0x2c];
    uStack_54 = 0x3e80000000000000;
    local_5c = 0;
    uStack_44 = 0x3f7e87d300000000;
    local_4c = 0x3e80000000000000;
    local_34 = 0x100000000;
    (**(code **)(*plVar2 + 0x70))(0,0x3f800000,plVar2,*param_1,&local_98,&local_98);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


