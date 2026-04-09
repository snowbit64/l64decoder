// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: propagateEvent
// Entry Point: 006dd234
// Size: 432 bytes
// Signature: undefined __thiscall propagateEvent(EngineApplication * this, float param_1, float param_2, bool param_3, bool param_4, uint param_5, char * param_6)


/* EngineApplication::propagateEvent(float, float, bool, bool, unsigned int, char const*) */

undefined8 __thiscall
EngineApplication::propagateEvent
          (EngineApplication *this,float param_1,float param_2,bool param_3,bool param_4,
          uint param_5,char *param_6)

{
  long lVar1;
  LuauScriptSystem *this_00;
  float local_198 [2];
  undefined4 local_190;
  undefined2 local_18c;
  undefined local_18a;
  float local_188;
  undefined4 local_180;
  undefined2 local_17c;
  undefined local_17a;
  undefined local_178;
  undefined4 local_170;
  undefined2 local_16c;
  undefined local_16a;
  undefined local_168;
  undefined4 local_160;
  undefined2 local_15c;
  undefined local_15a;
  uint local_158;
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
  undefined4 local_40;
  undefined2 local_3c;
  undefined local_3a;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x298] != (EngineApplication)0x0) {
    local_18a = 0;
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
    local_18c = 0;
    local_17a = 0;
    local_190 = 4;
    local_180 = 4;
    local_17c = 0;
    local_16a = 0;
    local_16c = 0;
    local_15a = 0;
    local_15c = 0;
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
    local_170 = 3;
    local_160 = 3;
    local_150 = 1;
    local_198[0] = param_1;
    local_188 = param_2;
    local_178 = param_3;
    local_168 = param_4;
    local_158 = param_5;
    ScriptSystemManager::getInstance();
    this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::invokeScriptMethod
              (this_00,param_6,(MethodInvocation *)local_198,5,0,(void *)0x0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


