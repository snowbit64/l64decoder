// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onHit
// Entry Point: 00790608
// Size: 604 bytes
// Signature: undefined __thiscall onHit(ScriptingRaycastReport * this, TransformGroup * param_1, Vector3 * param_2, float param_3, Vector3 * param_4, int param_5, TransformGroup * param_6, bool param_7)


/* ScriptingRaycastReport::onHit(TransformGroup*, Vector3 const&, float, Vector3 const&, int,
   TransformGroup*, bool) */

byte __thiscall
ScriptingRaycastReport::onHit
          (ScriptingRaycastReport *this,TransformGroup *param_1,Vector3 *param_2,float param_3,
          Vector3 *param_4,int param_5,TransformGroup *param_6,bool param_7)

{
  ScriptingRaycastReport *pSVar1;
  long lVar2;
  byte bVar3;
  LuauScriptSystem *this_00;
  undefined4 local_1a8 [2];
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined local_19a;
  undefined4 local_198;
  undefined4 local_190;
  undefined2 local_18c;
  undefined local_18a;
  undefined4 local_188;
  undefined4 local_180;
  undefined2 local_17c;
  undefined local_17a;
  undefined4 local_178;
  undefined4 local_170;
  undefined2 local_16c;
  undefined local_16a;
  float local_168;
  undefined4 local_160;
  undefined2 local_15c;
  undefined local_15a;
  undefined4 local_158;
  undefined4 local_150;
  undefined2 local_14c;
  undefined local_14a;
  undefined4 local_148;
  undefined4 local_140;
  undefined2 local_13c;
  undefined local_13a;
  undefined4 local_138;
  undefined4 local_130;
  undefined2 local_12c;
  undefined local_12a;
  int local_128;
  undefined4 local_120;
  undefined2 local_11c;
  undefined local_11a;
  undefined4 local_118;
  undefined4 local_110;
  undefined2 local_10c;
  undefined local_10a;
  undefined local_108;
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
  char local_a8;
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
  local_19a = 0;
  local_19c = 0;
  local_18a = 0;
  local_18c = 0;
  local_17a = 0;
  local_17c = 0;
  local_16a = 0;
  local_16c = 0;
  local_15a = 0;
  local_15c = 0;
  local_14a = 0;
  local_14c = 0;
  local_13a = 0;
  local_13c = 0;
  local_12a = 0;
  local_12c = 0;
  local_11a = 0;
  local_11c = 0;
  local_10a = 0;
  local_10c = 0;
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
  local_50 = 0;
  local_4a = 0;
  local_4c = 0;
  if (param_1 == (TransformGroup *)0x0) {
    local_1a8[0] = 0;
  }
  else {
    local_1a8[0] = *(undefined4 *)(param_1 + 0x18);
  }
  local_198 = *(undefined4 *)param_2;
  local_188 = *(undefined4 *)(param_2 + 4);
  local_178 = *(undefined4 *)(param_2 + 8);
  local_1a0 = 1;
  local_158 = *(undefined4 *)param_4;
  local_148 = *(undefined4 *)(param_4 + 4);
  local_190 = 4;
  local_180 = 4;
  local_170 = 4;
  local_138 = *(undefined4 *)(param_4 + 8);
  local_160 = 4;
  local_150 = 4;
  local_140 = 4;
  local_130 = 4;
  local_120 = 1;
  if (param_6 == (TransformGroup *)0x0) {
    local_118 = 0;
  }
  else {
    local_118 = *(undefined4 *)(param_6 + 0x18);
  }
  local_110 = 1;
  local_100 = 3;
  local_168 = param_3;
  local_128 = param_5;
  local_108 = param_7;
  ScriptSystemManager::getInstance();
  this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
  pSVar1 = this + 9;
  if (((byte)this[8] & 1) != 0) {
    pSVar1 = *(ScriptingRaycastReport **)(this + 0x18);
  }
  bVar3 = LuauScriptSystem::invokeScriptMethod
                    (this_00,(char *)pSVar1,(MethodInvocation *)local_1a8,0xb,1,
                     *(void **)(this + 0x20));
  bVar3 = bVar3 & local_a8 != '\0';
  if ((this[0x28] != (ScriptingRaycastReport)0x0) && ((byte)(bVar3 ^ 1 | param_7) != 0)) {
    (**(code **)(*(long *)this + 8))(this);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


