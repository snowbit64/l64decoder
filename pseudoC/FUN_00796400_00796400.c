// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00796400
// Entry Point: 00796400
// Size: 748 bytes
// Signature: undefined FUN_00796400(void)


void FUN_00796400(char **param_1)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  LuauScriptSystem *pLVar4;
  byte *pbVar5;
  ulong uVar6;
  char *pcVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *local_1e8;
  byte *local_1e0;
  undefined8 local_1d8;
  byte *local_1d0;
  undefined4 local_1c8;
  undefined2 local_1c4;
  undefined local_1c2;
  undefined local_1c0;
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined local_1b2;
  undefined4 local_1a8;
  undefined2 local_1a4;
  undefined local_1a2;
  undefined4 local_198;
  undefined2 local_194;
  undefined local_192;
  undefined4 local_188;
  undefined2 local_184;
  undefined local_182;
  undefined4 local_178;
  undefined2 local_174;
  undefined local_172;
  undefined4 local_168;
  undefined2 local_164;
  undefined local_162;
  undefined4 local_158;
  undefined2 local_154;
  undefined local_152;
  undefined4 local_148;
  undefined2 local_144;
  undefined local_142;
  undefined4 local_138;
  undefined2 local_134;
  undefined local_132;
  undefined4 local_128;
  undefined2 local_124;
  undefined local_122;
  undefined4 local_118;
  undefined2 local_114;
  undefined local_112;
  undefined4 local_108;
  undefined2 local_104;
  undefined local_102;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined local_f2;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined local_e2;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined local_d2;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined local_c2;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined local_b2;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined local_a2;
  undefined4 local_98;
  undefined2 local_94;
  undefined local_92;
  undefined4 local_88;
  undefined2 local_84;
  undefined local_82;
  undefined4 local_78;
  undefined2 local_74;
  undefined local_72;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 5) == 8) {
    pcVar7 = param_1[4];
  }
  else {
    pcVar7 = (char *)0x0;
  }
  if ((*(int *)(param_1 + 1) == 6) && (*(int *)(param_1 + 3) == 6)) {
    local_1e8 = (byte *)0x0;
    local_1e0 = (byte *)0x0;
    local_1d8 = 0;
                    /* try { // try from 0079646c to 0079647b has its CatchHandler @ 007966ec */
    FileManager::getFiles
              ((FileManager *)FileManager::s_singletonFileManager,*param_1,(vector *)&local_1e8);
    pbVar5 = local_1e0;
    if (local_1e0 == local_1e8) {
      iVar8 = 0;
      pbVar10 = local_1e0;
    }
    else {
      uVar9 = 0;
      iVar8 = 0;
      pbVar10 = local_1e8;
      do {
        if (*(int *)(pbVar10 + uVar9 * 0x30 + 0x18) != 0) {
          pbVar5 = pbVar10 + uVar9 * 0x30;
          local_1b2 = 0;
          local_1b4 = 0;
          local_1a8 = 0;
          local_1a2 = 0;
          local_1a4 = 0;
          local_198 = 0;
          local_192 = 0;
          local_194 = 0;
          local_188 = 0;
          local_182 = 0;
          local_184 = 0;
          local_178 = 0;
          local_172 = 0;
          local_174 = 0;
          local_168 = 0;
          local_162 = 0;
          local_164 = 0;
          local_158 = 0;
          local_152 = 0;
          local_154 = 0;
          local_148 = 0;
          local_142 = 0;
          local_144 = 0;
          local_138 = 0;
          local_132 = 0;
          local_134 = 0;
          local_128 = 0;
          local_122 = 0;
          local_124 = 0;
          local_118 = 0;
          local_112 = 0;
          local_114 = 0;
          local_108 = 0;
          local_102 = 0;
          local_104 = 0;
          local_f8 = 0;
          local_f2 = 0;
          local_f4 = 0;
          local_e8 = 0;
          local_e2 = 0;
          local_e4 = 0;
          local_d8 = 0;
          local_d2 = 0;
          local_d4 = 0;
          local_c8 = 0;
          local_c2 = 0;
          local_c4 = 0;
          local_b8 = 0;
          local_b2 = 0;
          local_b4 = 0;
          local_a8 = 0;
          local_a2 = 0;
          local_a4 = 0;
          local_98 = 0;
          local_92 = 0;
          local_94 = 0;
          local_88 = 0;
          local_82 = 0;
          local_84 = 0;
          local_78 = 0;
          local_72 = 0;
          local_74 = 0;
          local_1d0 = *(byte **)(pbVar5 + 0x10);
          local_1c2 = 0;
          local_1c4 = 0;
          if ((*pbVar5 & 1) == 0) {
            local_1d0 = pbVar5 + 1;
          }
          local_1c8 = 6;
          local_1b8 = 3;
          local_1c0 = *(int *)(pbVar10 + uVar9 * 0x30 + 0x18) == 2;
                    /* try { // try from 00796614 to 00796633 has its CatchHandler @ 007966f0 */
          ScriptSystemManager::getInstance();
          pLVar4 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
          LuauScriptSystem::invokeScriptMethod
                    (pLVar4,param_1[2],(MethodInvocation *)&local_1d0,2,0,pcVar7);
          iVar8 = iVar8 + 1;
          pbVar5 = local_1e0;
          pbVar10 = local_1e8;
        }
        uVar9 = (ulong)((int)uVar9 + 1);
        uVar6 = ((long)pbVar5 - (long)pbVar10 >> 4) * -0x5555555555555555;
      } while (uVar9 <= uVar6 && uVar6 - uVar9 != 0);
    }
    pbVar3 = pbVar10;
    if (pbVar10 != (byte *)0x0) {
      while (pbVar2 = pbVar5, pbVar2 != pbVar10) {
        pbVar5 = pbVar2 + -0x30;
        pbVar3 = local_1e8;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -0x20));
          pbVar3 = local_1e8;
        }
      }
      local_1e0 = pbVar10;
      operator_delete(pbVar3);
    }
  }
  else {
    iVar8 = 0;
  }
  if (pcVar7 != (char *)0x0) {
    ScriptSystemManager::getInstance();
    pLVar4 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::destroyObjectRef(pLVar4,pcVar7);
  }
  *(int *)(param_1 + 0x20) = iVar8;
  *(undefined4 *)(param_1 + 0x21) = 1;
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


