// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: invokeConnectionRequestSucceededCallback
// Entry Point: 00b404e4
// Size: 524 bytes
// Signature: undefined invokeConnectionRequestSucceededCallback(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MasterServerManager::invokeConnectionRequestSucceededCallback() */

void MasterServerManager::invokeConnectionRequestSucceededCallback(void)

{
  char *pcVar1;
  long lVar2;
  long in_x0;
  LuauScriptSystem *this;
  int iVar3;
  char *local_1b8;
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined local_1aa;
  uint local_1a8;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined local_19a;
  long local_198;
  undefined4 local_190;
  undefined2 local_18c;
  undefined local_18a;
  long local_188;
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
  char acStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  Network::getAddressString(*(uint *)(in_x0 + 0x394),acStack_58,0x20);
  local_1a8 = (uint)*(ushort *)(in_x0 + 0x398);
  local_198 = in_x0 + 0x3b9;
  if ((*(byte *)(in_x0 + 0x3b8) & 1) != 0) {
    local_198 = *(long *)(in_x0 + 0x3c8);
  }
  local_1ac = 0;
  local_1aa = 0;
  local_19a = 0;
  local_1a0 = 1;
  local_19c = 0;
  local_18a = 0;
  local_180 = 0;
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
  local_1b0 = 6;
  local_190 = 6;
  local_18c = 0;
  if (*(char *)(in_x0 + 0x390) == '\0') {
    iVar3 = 3;
  }
  else {
    local_188 = in_x0 + 0x3d0;
    iVar3 = 4;
    local_180 = 10;
    local_17c = 0x60;
  }
  local_17a = 0;
  local_1b8 = acStack_58;
  ScriptSystemManager::getInstance();
  this = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
  pcVar1 = (char *)(in_x0 + 0x359);
  if ((*(byte *)(in_x0 + 0x358) & 1) != 0) {
    pcVar1 = *(char **)(in_x0 + 0x368);
  }
  LuauScriptSystem::invokeScriptMethod
            (this,pcVar1,(MethodInvocation *)&local_1b8,iVar3,0,*(void **)(in_x0 + 0x388));
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


