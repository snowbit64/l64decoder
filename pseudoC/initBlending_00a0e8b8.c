// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initBlending
// Entry Point: 00a0e8b8
// Size: 528 bytes
// Signature: undefined initBlending(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EnvMapBlender::initBlending() */

void EnvMapBlender::initBlending(void)

{
  long lVar1;
  EnvMapBlender *in_x0;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined local_e8;
  undefined8 local_e0;
  undefined local_d8 [4];
  undefined4 local_d4;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined local_9c;
  undefined4 local_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined8 local_68;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(in_x0 + 0x550) == 0) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_9c = 0;
    local_a0 = 0x101;
    local_98 = 0;
    local_b8 = 0x200000001;
    uVar2 = (**(code **)(**(long **)(in_x0 + 0x548) + 0xe8))(*(long **)(in_x0 + 0x548),&local_b8);
    local_d8[0] = 0;
    *(undefined8 *)(in_x0 + 0x550) = uVar2;
    local_d4 = 1;
    uVar2 = (**(code **)(**(long **)(in_x0 + 0x548) + 0xe0))(*(long **)(in_x0 + 0x548),local_d8);
    *(undefined8 *)(in_x0 + 0x558) = uVar2;
    local_90 = 0;
    local_88 = 0;
    uStack_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_80 = 0x100000001;
    uStack_78 = 1;
    local_74 = 1;
    local_60 = 1;
    uStack_5c = 1;
    uStack_58 = 1;
    local_54 = 1;
    uStack_48 = 0x1010101;
    local_44 = 0x1010101;
    uStack_50 = 0x1010101;
    uStack_4c = 0x1010101;
    uVar2 = (**(code **)(**(long **)(in_x0 + 0x548) + 0xf0))(*(long **)(in_x0 + 0x548),&local_90);
    *(undefined8 *)(in_x0 + 0x560) = uVar2;
    local_e8 = 0;
    local_f0 = 2;
    local_e0 = 0;
    uStack_f8 = 0x200000002;
    local_100 = 0x200000002;
    uVar2 = (**(code **)(**(long **)(in_x0 + 0x548) + 0xf8))(*(long **)(in_x0 + 0x548),&local_100);
    plVar4 = *(long **)(in_x0 + 0x548);
    local_c8 = 0;
    *(undefined8 *)(in_x0 + 0x570) = uVar2;
    local_d0[0] = 0x14;
    local_c0 = 4;
    uVar2 = (**(code **)(*plVar4 + 0x138))(plVar4);
    uVar2 = (**(code **)(*plVar4 + 0x118))(plVar4,uVar2,local_d0);
    *(undefined8 *)(in_x0 + 0x568) = uVar2;
    compileShaders(in_x0,*(IRenderDevice **)(in_x0 + 0x548));
    lVar3 = *(long *)(in_x0 + 0x4f8);
  }
  else {
    lVar3 = *(long *)(in_x0 + 0x4f8);
  }
  if (lVar3 == 0) {
    uStack_78 = *(undefined4 *)(in_x0 + 0x538);
    plVar4 = *(long **)(in_x0 + 0x548);
    local_6c = 0;
    local_74 = 1;
    uStack_70 = 1;
    local_44 = 0;
    uStack_4c = 0;
    uStack_48 = 0x3f800000;
    local_54 = 0;
    uStack_50 = 0;
    local_88 = CONCAT44(*(undefined4 *)(in_x0 + 0x53c),(int)local_88) & 0xffffffffffff0000;
    local_80 = CONCAT44(uStack_78,0xffffffff);
    local_60 = local_60 & 0xffffff00;
    local_90 = 0;
    uStack_5c = 0x610;
    uStack_58 = 1;
    local_68 = 0x1600000002;
    local_40 = "EnvMap render target";
    uVar2 = (**(code **)(*plVar4 + 0x138))(plVar4);
    uVar2 = (**(code **)(*plVar4 + 0x100))(plVar4,uVar2,&local_90);
    *(undefined8 *)(in_x0 + 0x4f8) = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


