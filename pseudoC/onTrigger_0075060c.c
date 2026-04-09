// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onTrigger
// Entry Point: 0075060c
// Size: 860 bytes
// Signature: undefined __thiscall onTrigger(EngineManager * this, TransformGroup * param_1, TransformGroup * param_2, TransformGroup * param_3, uint param_4, int param_5)


/* EngineManager::onTrigger(TransformGroup*, TransformGroup*, TransformGroup*, unsigned int, int) */

bool __thiscall
EngineManager::onTrigger
          (EngineManager *this,TransformGroup *param_1,TransformGroup *param_2,
          TransformGroup *param_3,uint param_4,int param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  LuauScriptSystem *this_00;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long **pplVar9;
  long **pplVar10;
  long *plVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  uint local_1d0 [2];
  undefined4 local_1c8;
  undefined2 local_1c4;
  undefined local_1c2;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined local_1b2;
  byte local_1b0;
  undefined4 local_1a8;
  undefined2 local_1a4;
  undefined local_1a2;
  byte local_1a0;
  undefined4 local_198;
  undefined2 local_194;
  undefined local_192;
  byte local_190;
  undefined4 local_188;
  undefined2 local_184;
  undefined local_182;
  undefined4 local_180;
  undefined4 local_178;
  undefined2 local_174;
  undefined local_172;
  int local_170;
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
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  plVar5 = *(long **)(this + 0x50);
  if (plVar5 != (long *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    plVar11 = (long *)(ulong)uVar1;
    uVar13 = NEON_cnt(plVar5,1);
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar6 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar6 < 2) {
      plVar7 = (long *)(ulong)((int)plVar5 - 1U & uVar1);
    }
    else {
      plVar7 = plVar11;
      if (plVar5 <= plVar11) {
        uVar2 = 0;
        if (plVar5 != (long *)0x0) {
          uVar2 = (ulong)plVar11 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar11 - uVar2 * (long)plVar5);
      }
    }
    plVar8 = *(long **)(*(long *)(this + 0x48) + (long)plVar7 * 8);
    if ((plVar8 != (long *)0x0) && (pplVar9 = (long **)*plVar8, pplVar9 != (long **)0x0)) {
      do {
        plVar8 = pplVar9[1];
        if (plVar8 == plVar11) {
          pplVar10 = pplVar9;
          if (*(uint *)(pplVar9 + 2) == uVar1) goto LAB_007506fc;
        }
        else {
          if (uVar6 < 2) {
            plVar8 = (long *)((ulong)plVar8 & (long)plVar5 - 1U);
          }
          else if (plVar5 <= plVar8) {
            uVar2 = 0;
            if (plVar5 != (long *)0x0) {
              uVar2 = (ulong)plVar8 / (ulong)plVar5;
            }
            plVar8 = (long *)((long)plVar8 - uVar2 * (long)plVar5);
          }
          if (plVar8 != plVar7) break;
        }
        pplVar9 = (long **)*pplVar9;
      } while (pplVar9 != (long **)0x0);
    }
  }
  goto LAB_00750848;
  while (*(uint *)(pplVar10 + 2) == uVar1) {
LAB_007506fc:
    pplVar10 = (long **)*pplVar10;
    if (pplVar10 == (long **)0x0) break;
  }
  bVar4 = pplVar10 != pplVar9;
  if (bVar4) {
    ScriptSystemManager::getInstance();
    this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    local_1c2 = 0;
    local_1c4 = 0;
    local_1b2 = 0;
    local_1b4 = 0;
    local_1a2 = 0;
    local_1a4 = 0;
    local_192 = 0;
    local_194 = 0;
    local_182 = 0;
    local_184 = 0;
    local_172 = 0;
    local_174 = 0;
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
    local_72 = 0;
    local_74 = 0;
    local_78 = 0;
    local_1c8 = 1;
    if (param_2 == (TransformGroup *)0x0) {
      local_1c0 = 0;
    }
    else {
      local_1c0 = *(undefined4 *)(param_2 + 0x18);
    }
    local_1b0 = (byte)param_4 & 1;
    local_1b8 = 1;
    local_1a0 = (byte)(param_4 >> 1) & 1;
    local_190 = (byte)(param_4 >> 2) & 1;
    local_1a8 = 3;
    local_198 = 3;
    local_188 = 3;
    if (param_3 == (TransformGroup *)0x0) {
      local_180 = 0;
    }
    else {
      local_180 = *(undefined4 *)(param_3 + 0x18);
    }
    local_178 = 1;
    local_168 = 1;
    local_1d0[0] = uVar1;
    local_170 = param_5;
    do {
      if (((param_4 & 4) == 0) || (*(char *)((long)pplVar9 + 0x1c) != '\0')) {
        if (pplVar9[7] == (long *)0x0) {
          plVar5 = (long *)((long)pplVar9 + 0x21);
          if ((*(byte *)(pplVar9 + 4) & 1) != 0) {
            plVar5 = pplVar9[6];
          }
          LuauScriptSystem::invokeScriptMethod
                    (this_00,(char *)plVar5,(MethodInvocation *)local_1d0,7,0,pplVar9[8]);
        }
        else {
          plVar5 = (long *)((long)pplVar9 + 0x21);
          if ((*(byte *)(pplVar9 + 4) & 1) != 0) {
            plVar5 = pplVar9[6];
          }
          LuauScriptSystem::invokeObjectScriptMethod
                    (this_00,pplVar9[7],(MethodInvocation *)local_1d0,7,0,pplVar9[8],(char *)plVar5)
          ;
        }
      }
      pplVar9 = (long **)*pplVar9;
    } while (pplVar9 != pplVar10);
    goto LAB_0075084c;
  }
LAB_00750848:
  bVar4 = false;
LAB_0075084c:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}


