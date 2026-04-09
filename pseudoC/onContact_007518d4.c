// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onContact
// Entry Point: 007518d4
// Size: 624 bytes
// Signature: undefined __thiscall onContact(EngineManager * this, TransformGroup * param_1, TransformGroup * param_2, uint param_3, Vector3 * param_4, Vector3 * param_5, Vector3 * param_6)


/* EngineManager::onContact(TransformGroup*, TransformGroup*, unsigned int, Vector3&, Vector3&,
   Vector3&) */

void __thiscall
EngineManager::onContact
          (EngineManager *this,TransformGroup *param_1,TransformGroup *param_2,uint param_3,
          Vector3 *param_4,Vector3 *param_5,Vector3 *param_6)

{
  EngineManager **ppEVar1;
  EngineManager *pEVar2;
  uint uVar3;
  long lVar4;
  LuauScriptSystem *this_00;
  EngineManager **ppEVar5;
  long lVar6;
  EngineManager **ppEVar7;
  undefined4 uVar8;
  uint local_1e0 [2];
  undefined4 local_1d8;
  undefined2 local_1d4;
  undefined local_1d2;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined2 local_1c4;
  undefined local_1c2;
  byte local_1c0;
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined local_1b2;
  float local_1b0;
  undefined4 local_1a8;
  undefined2 local_1a4;
  undefined local_1a2;
  float local_1a0;
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
  TransformGroup *local_80 [2];
  long local_70;
  
  lVar4 = tpidr_el0;
  lVar6 = 0;
  local_70 = *(long *)(lVar4 + 0x28);
  ppEVar1 = (EngineManager **)(this + 0x90);
  local_80[0] = param_1;
  local_80[1] = param_2;
  do {
    ppEVar5 = (EngineManager **)*ppEVar1;
    if (ppEVar5 != (EngineManager **)0x0) {
      uVar3 = *(uint *)(local_80[lVar6] + 0x18);
      ppEVar7 = ppEVar1;
      do {
        if (*(uint *)(ppEVar5 + 4) >= uVar3) {
          ppEVar7 = ppEVar5;
        }
        ppEVar5 = (EngineManager **)ppEVar5[*(uint *)(ppEVar5 + 4) < uVar3];
      } while (ppEVar5 != (EngineManager **)0x0);
      if ((ppEVar7 != ppEVar1) && (*(uint *)(ppEVar7 + 4) <= uVar3)) {
        local_1c2 = 0;
        local_1c4 = 0;
        local_1b2 = 0;
        local_1b4 = 0;
        local_1a2 = 0;
        local_1a4 = 0;
        uVar8 = NEON_fmadd(*(undefined4 *)param_5,*(undefined4 *)param_5,
                           *(float *)(param_5 + 4) * *(float *)(param_5 + 4));
        local_192 = 0;
        local_194 = 0;
        local_188 = 0;
        local_1b0 = (float)NEON_fmadd(*(undefined4 *)(param_5 + 8),*(undefined4 *)(param_5 + 8),
                                      uVar8);
        local_182 = 0;
        local_184 = 0;
        local_178 = 0;
        local_1b0 = SQRT(local_1b0);
        local_172 = 0;
        local_174 = 0;
        local_168 = 0;
        local_162 = 0;
        local_164 = 0;
        uVar8 = NEON_fmadd(*(undefined4 *)param_6,*(undefined4 *)param_6,
                           *(float *)(param_6 + 4) * *(float *)(param_6 + 4));
        local_158 = 0;
        local_152 = 0;
        local_154 = 0;
        local_1a0 = (float)NEON_fmadd(*(undefined4 *)(param_6 + 8),*(undefined4 *)(param_6 + 8),
                                      uVar8);
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
        local_1a0 = SQRT(local_1a0);
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
        local_1d0 = *(undefined4 *)(local_80[1 - lVar6] + 0x18);
        local_1d2 = 0;
        local_1d4 = 0;
        local_1d8 = 1;
        local_1c8 = 1;
        local_1b8 = 3;
        local_1a8 = 4;
        local_198 = 4;
        local_1e0[0] = uVar3;
        local_1c0 = (byte)param_3 & 1;
        ScriptSystemManager::getInstance();
        this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
        pEVar2 = (EngineManager *)((long)ppEVar7 + 0x29);
        if (((byte)*(EngineManager *)(ppEVar7 + 5) & 1) != 0) {
          pEVar2 = ppEVar7[7];
        }
        LuauScriptSystem::invokeScriptMethod
                  (this_00,(char *)pEVar2,(MethodInvocation *)local_1e0,5,0,ppEVar7[8]);
      }
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 2);
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


