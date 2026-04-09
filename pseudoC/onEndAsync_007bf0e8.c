// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onEndAsync
// Entry Point: 007bf0e8
// Size: 620 bytes
// Signature: undefined onEndAsync(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ScriptingPhysicsReport::onEndAsync() */

void ScriptingPhysicsReport::onEndAsync(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  long lVar3;
  bool bVar4;
  long *in_x0;
  LuauScriptSystem *this;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined2 local_1c4;
  undefined local_1c2;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined local_1b2;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined2 local_1a4;
  undefined local_1a2;
  undefined local_1a0;
  undefined4 local_198;
  undefined2 local_194;
  undefined local_192;
  long local_190;
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
  char local_d0;
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
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar5 = (int)((ulong)(in_x0[0x23] - in_x0[0x22]) >> 2) * -0x55555555;
  if (uVar5 == 0) {
    local_1cc = 0;
    local_1c8 = 0;
    local_1d0 = 0x7f7fffff;
    FUN_007bf5c4(in_x0 + 0x22,&local_1d0);
    uVar5 = 1;
  }
  lVar6 = 0;
  uVar7 = 1;
  do {
    local_190 = in_x0[0x21];
    local_1c2 = 0;
    local_1c4 = 0;
    local_1a0 = (ulong)(uVar5 - 1) * 0xc - lVar6 == 0;
    local_1b2 = 0;
    local_1b4 = 0;
    puVar1 = (undefined4 *)(in_x0[0x22] + lVar6);
    local_1a2 = 0;
    local_1a4 = 0;
    local_192 = 0;
    local_194 = 0;
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
    local_1d0 = *puVar1;
    local_1c8 = 4;
    local_1c0 = puVar1[1];
    local_1b8 = 1;
    local_1b0 = puVar1[2];
    local_1a8 = 1;
    local_198 = 3;
    local_188 = 8;
    local_182 = 0;
    local_184 = 0;
    ScriptSystemManager::getInstance();
    this = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    pcVar2 = (char *)((long)in_x0 + 0xe9);
    if ((*(byte *)(in_x0 + 0x1d) & 1) != 0) {
      pcVar2 = (char *)in_x0[0x1f];
    }
    LuauScriptSystem::invokeScriptMethod
              (this,pcVar2,(MethodInvocation *)&local_1d0,5,1,(void *)in_x0[0x20]);
    if (local_d0 == '\0') break;
    bVar4 = uVar7 < uVar5;
    lVar6 = lVar6 + 0xc;
    uVar7 = uVar7 + 1;
  } while (bVar4);
  (**(code **)(*in_x0 + 8))();
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


