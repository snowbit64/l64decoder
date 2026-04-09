// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: forwardServerOverview
// Entry Point: 00b41174
// Size: 748 bytes
// Signature: undefined forwardServerOverview(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MasterServerManager::forwardServerOverview() */

void MasterServerManager::forwardServerOverview(void)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  long in_x0;
  LuauScriptSystem *pLVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined local_1aa;
  long local_1a8;
  undefined4 local_1a0;
  ushort local_19c;
  undefined local_19a;
  undefined4 local_198;
  undefined4 local_190;
  undefined2 local_18c;
  undefined local_18a;
  uint local_188;
  undefined4 local_180;
  undefined2 local_17c;
  undefined local_17a;
  uint local_178;
  undefined4 local_170;
  undefined2 local_16c;
  undefined local_16a;
  long local_168;
  undefined4 local_160;
  ushort local_15c;
  undefined local_15a;
  undefined local_158;
  undefined4 local_150;
  undefined2 local_14c;
  undefined local_14a;
  undefined local_148;
  undefined4 local_140;
  undefined2 local_13c;
  undefined local_13a;
  undefined local_138;
  undefined4 local_130;
  undefined2 local_12c;
  undefined local_12a;
  undefined local_128;
  undefined4 local_120;
  undefined2 local_11c;
  undefined local_11a;
  undefined local_118;
  undefined4 local_110;
  undefined2 local_10c;
  undefined local_10a;
  undefined4 local_108;
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
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar6 = *(uint *)(in_x0 + 0x434);
  local_1b0 = 0;
  uVar7 = *(uint *)(in_x0 + 0x430);
  local_1aa = 0;
  local_1ac = 0;
  local_1a0 = 0;
  local_19a = 0;
  uVar2 = uVar6 + 1000;
  if (uVar7 <= uVar6 + 1000) {
    uVar2 = uVar7;
  }
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
  if (uVar6 < uVar2) {
    do {
      local_1b0 = 1;
      lVar1 = *(long *)(in_x0 + 0x438) + (ulong)uVar6 * 0x80;
      local_19c = local_19c & 0xfffe;
      local_1a0 = 6;
      local_1a8 = lVar1 + 9;
      if ((*(byte *)(lVar1 + 8) & 1) != 0) {
        local_1a8 = *(long *)(lVar1 + 0x18);
      }
      local_198 = *(undefined4 *)(lVar1 + 0x20);
      local_190 = 1;
      local_180 = 1;
      local_188 = (uint)*(ushort *)(lVar1 + 0x24);
      local_170 = 1;
      local_178 = (uint)*(ushort *)(lVar1 + 0x26);
      local_160 = 6;
      local_15c = local_15c & 0xfffe;
      local_168 = lVar1 + 0x29;
      if ((*(byte *)(lVar1 + 0x28) & 1) != 0) {
        local_168 = *(long *)(lVar1 + 0x38);
      }
      local_158 = *(undefined *)(lVar1 + 0x40);
      local_150 = 3;
      local_148 = *(undefined *)(lVar1 + 0x43);
      local_140 = 3;
      local_138 = *(undefined *)(lVar1 + 0x44);
      local_130 = 3;
      local_128 = *(undefined *)(lVar1 + 0x45);
      local_120 = 3;
      local_118 = *(undefined *)(lVar1 + 0x42);
      local_110 = 3;
      local_108 = *(undefined4 *)(lVar1 + 0x48);
      local_100 = 1;
      local_1b8 = uVar6;
      ScriptSystemManager::getInstance();
      pLVar5 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
      pcVar3 = (char *)(in_x0 + 0x2b1);
      if ((*(byte *)(in_x0 + 0x2b0) & 1) != 0) {
        pcVar3 = *(char **)(in_x0 + 0x2c0);
      }
      LuauScriptSystem::invokeScriptMethod
                (pLVar5,pcVar3,(MethodInvocation *)&local_1b8,0xc,0,*(void **)(in_x0 + 0x328));
      uVar6 = *(int *)(in_x0 + 0x434) + 1;
      *(uint *)(in_x0 + 0x434) = uVar6;
    } while (uVar6 < uVar2);
    uVar7 = *(uint *)(in_x0 + 0x430);
  }
  if (uVar6 == uVar7) {
    local_1b8 = CONCAT31(local_1b8._1_3_,1);
    local_1b0 = 3;
    ScriptSystemManager::getInstance();
    pLVar5 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    pcVar3 = (char *)(in_x0 + 0x2e1);
    if ((*(byte *)(in_x0 + 0x2e0) & 1) != 0) {
      pcVar3 = *(char **)(in_x0 + 0x2f0);
    }
    LuauScriptSystem::invokeScriptMethod
              (pLVar5,pcVar3,(MethodInvocation *)&local_1b8,1,0,*(void **)(in_x0 + 0x328));
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


