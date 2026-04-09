// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onJointBreak
// Entry Point: 00751fe4
// Size: 600 bytes
// Signature: undefined __thiscall onJointBreak(EngineManager * this, uint param_1, float param_2)


/* EngineManager::onJointBreak(unsigned int, float) */

void __thiscall EngineManager::onJointBreak(EngineManager *this,uint param_1,float param_2)

{
  EngineManager *pEVar1;
  long lVar2;
  bool bVar3;
  EngineManager **ppEVar4;
  LuauScriptSystem *this_00;
  ulong uVar5;
  long lVar6;
  EngineManager **ppEVar7;
  EngineManager **ppEVar8;
  uint local_198 [2];
  undefined4 local_190;
  undefined2 local_18c;
  undefined local_18a;
  float local_188;
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
  float local_98;
  undefined4 uStack_94;
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
  undefined4 local_40;
  undefined2 local_3c;
  undefined local_3a;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  ppEVar4 = (EngineManager **)(this + 0xa8);
  ppEVar7 = (EngineManager **)*ppEVar4;
  ppEVar8 = ppEVar4;
  if (ppEVar7 == (EngineManager **)0x0) {
LAB_00752200:
    bVar3 = false;
    goto switchD_007521b4_caseD_6;
  }
  do {
    if (*(uint *)(ppEVar7 + 4) >= param_1) {
      ppEVar8 = ppEVar7;
    }
    ppEVar7 = (EngineManager **)ppEVar7[*(uint *)(ppEVar7 + 4) < param_1];
  } while (ppEVar7 != (EngineManager **)0x0);
  if ((ppEVar8 == ppEVar4) || (param_1 < *(uint *)(ppEVar8 + 4))) goto LAB_00752200;
  local_8a = 0;
  local_8c = 0;
  local_7a = 0;
  local_7c = 0;
  local_6a = 0;
  local_6c = 0;
  local_5a = 0;
  local_5c = 0;
  local_4a = 0;
  local_4c = 0;
  local_3a = 0;
  local_3c = 0;
  local_18a = 0;
  local_18c = 0;
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
  local_80 = 0;
  local_70 = 0;
  local_60 = 0;
  local_50 = 0;
  local_40 = 0;
  local_190 = 1;
  local_180 = 4;
  local_198[0] = param_1;
  local_188 = param_2;
  ScriptSystemManager::getInstance();
  this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
  pEVar1 = (EngineManager *)((long)ppEVar8 + 0x29);
  if (((byte)*(EngineManager *)(ppEVar8 + 5) & 1) != 0) {
    pEVar1 = ppEVar8[7];
  }
  uVar5 = LuauScriptSystem::invokeScriptMethod
                    (this_00,(char *)pEVar1,(MethodInvocation *)local_198,2,1,ppEVar8[8]);
  if ((uVar5 & 1) == 0) goto LAB_00752200;
  bVar3 = false;
  switch(local_90) {
  case 1:
  case 2:
    goto LAB_007521cc;
  case 3:
    local_98 = (float)((uint)local_98 & 0xff);
LAB_007521cc:
    bVar3 = local_98 != 0.0;
    break;
  case 4:
    bVar3 = local_98 != 0.0;
    break;
  case 5:
    bVar3 = (double)CONCAT44(uStack_94,local_98) != 0.0;
    break;
  case 7:
  case 8:
    lVar6 = CONCAT44(uStack_94,local_98);
    goto LAB_007521f4;
  case 0xd:
    if ((long *)CONCAT44(uStack_94,local_98) == (long *)0x0) goto LAB_00752200;
    lVar6 = *(long *)CONCAT44(uStack_94,local_98);
LAB_007521f4:
    bVar3 = lVar6 != 0;
  }
switchD_007521b4_caseD_6:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


