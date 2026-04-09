// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: retryConnection
// Entry Point: 00b40734
// Size: 600 bytes
// Signature: undefined retryConnection(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MasterServerManager::retryConnection() */

void MasterServerManager::retryConnection(void)

{
  char *pcVar1;
  long lVar2;
  long in_x0;
  undefined *puVar3;
  long lVar4;
  ENetNetworkManager *pEVar5;
  ulong uVar6;
  LuauScriptSystem *this;
  int iVar7;
  undefined4 local_1a8 [2];
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined local_19a;
  undefined4 local_190;
  undefined2 local_18c;
  undefined local_18a;
  undefined4 local_180;
  undefined2 local_17c;
  undefined local_17a;
  undefined4 local_170;
  undefined2 local_16c;
  undefined local_16a;
  undefined4 local_160;
  undefined2 local_15c;
  undefined local_15a;
  undefined4 local_150;
  undefined2 local_14c;
  undefined local_14a;
  undefined4 local_140;
  undefined2 local_13c;
  undefined local_13a;
  undefined4 local_130;
  undefined2 local_12c;
  undefined local_12a;
  undefined4 local_120;
  undefined2 local_11c;
  undefined local_11a;
  undefined4 local_110;
  undefined2 local_10c;
  undefined local_10a;
  undefined4 local_100;
  undefined2 local_fc;
  undefined local_fa;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined local_ea;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined local_da;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined local_ca;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined local_ba;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined local_aa;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined local_9a;
  undefined4 local_90;
  undefined2 local_8c;
  undefined local_8a;
  undefined4 local_80;
  undefined2 local_7c;
  undefined local_7a;
  undefined4 local_70;
  undefined2 local_6c;
  undefined local_6a;
  undefined4 local_60;
  undefined2 local_5c;
  undefined local_5a;
  undefined4 local_50;
  undefined2 local_4c;
  undefined local_4a;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar7 = *(int *)(in_x0 + 0x1d8);
  *(undefined *)(in_x0 + 0x17c) = 0;
  if ((iVar7 == 0) || (*(char *)(in_x0 + 0x4c0) == '\0')) {
    *(undefined *)(in_x0 + 0x4c0) = 0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(in_x0 + 0x4c8));
    if (*(void **)(in_x0 + 0x4b8) != (void *)0x0) {
      operator_delete(*(void **)(in_x0 + 0x4b8));
    }
    puVar3 = (undefined *)operator_new(1);
    iVar7 = *(int *)(in_x0 + 0x1d8);
    *(undefined **)(in_x0 + 0x4b8) = puVar3;
    *puVar3 = 1;
  }
  *(uint *)(in_x0 + 0x1d8) = iVar7 + 1U;
  if (iVar7 + 1U < 4) {
    lVar4 = ENetNetworkManager::getInstance();
    *(long *)(lVar4 + 0x1b8) = in_x0;
    pEVar5 = (ENetNetworkManager *)ENetNetworkManager::getInstance();
    uVar6 = ENetNetworkManager::connect
                      (pEVar5,*(undefined8 *)(in_x0 + 0x180),in_x0 + 0x128,0x40,0,0,0,in_x0 + 0x188)
    ;
    if ((uVar6 & 1) != 0) {
      *(undefined *)(in_x0 + 0x17c) = 1;
      *(undefined4 *)(in_x0 + 0x178) = 8;
      goto LAB_00b40960;
    }
  }
  *(undefined4 *)(in_x0 + 0x178) = 0;
  local_19a = 0;
  local_19c = 0;
  local_190 = 0;
  local_18a = 0;
  local_18c = 0;
  local_180 = 0;
  local_17a = 0;
  local_17c = 0;
  local_170 = 0;
  local_16a = 0;
  local_16c = 0;
  local_160 = 0;
  local_15a = 0;
  local_15c = 0;
  local_150 = 0;
  local_14a = 0;
  local_14c = 0;
  local_140 = 0;
  local_13a = 0;
  local_13c = 0;
  local_130 = 0;
  local_12a = 0;
  local_12c = 0;
  local_120 = 0;
  local_11a = 0;
  local_11c = 0;
  local_110 = 0;
  local_10a = 0;
  local_10c = 0;
  local_100 = 0;
  local_fa = 0;
  local_fc = 0;
  local_f0 = 0;
  local_ea = 0;
  local_ec = 0;
  local_e0 = 0;
  local_da = 0;
  local_dc = 0;
  local_d0 = 0;
  local_ca = 0;
  local_cc = 0;
  local_c0 = 0;
  local_ba = 0;
  local_bc = 0;
  local_b0 = 0;
  local_aa = 0;
  local_ac = 0;
  local_a0 = 0;
  local_9a = 0;
  local_9c = 0;
  local_90 = 0;
  local_8a = 0;
  local_8c = 0;
  local_80 = 0;
  local_7a = 0;
  local_7c = 0;
  local_70 = 0;
  local_6a = 0;
  local_6c = 0;
  local_60 = 0;
  local_5a = 0;
  local_5c = 0;
  local_4a = 0;
  local_4c = 0;
  local_50 = 0;
  local_1a8[0] = 6;
  local_1a0 = 1;
  ScriptSystemManager::getInstance();
  this = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
  pcVar1 = (char *)(in_x0 + 0x299);
  if ((*(byte *)(in_x0 + 0x298) & 1) != 0) {
    pcVar1 = *(char **)(in_x0 + 0x2a8);
  }
  LuauScriptSystem::invokeScriptMethod
            (this,pcVar1,(MethodInvocation *)local_1a8,1,0,*(void **)(in_x0 + 0x328));
  if (*(void **)(in_x0 + 0x4b8) != (void *)0x0) {
    operator_delete(*(void **)(in_x0 + 0x4b8));
  }
  *(undefined8 *)(in_x0 + 0x4b8) = 0;
  *(undefined *)(in_x0 + 0x4c0) = 0;
LAB_00b40960:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


