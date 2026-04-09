// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeClassMethod
// Entry Point: 00bb5694
// Size: 476 bytes
// Signature: undefined __cdecl executeClassMethod(void * param_1, MethodDeclaration * param_2, char * param_3, _func_void_void_ptr_MethodInvocation_ptr * param_4)


/* ReflectionUtil::executeClassMethod(void*, MethodDeclaration const&, char const*, void (*)(void*,
   MethodInvocation*)) */

void ReflectionUtil::executeClassMethod
               (void *param_1,MethodDeclaration *param_2,char *param_3,
               _func_void_void_ptr_MethodInvocation_ptr *param_4)

{
  long lVar1;
  LuauScriptSystem *this;
  ulong uVar2;
  uint uVar3;
  Value *pVVar4;
  void *local_1c0;
  Value aVStack_1b8 [8];
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined local_1aa;
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
  Value aVStack_b8 [8];
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
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  ScriptSystemManager::getInstance();
  this = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
  local_1b0 = 0;
  local_1aa = 0;
  local_1ac = 0;
  local_1a0 = 0;
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
  uVar2 = LuauScriptSystem::getClassMethodArgumentValues
                    (this,param_1,param_3,&local_1c0,*(uint *)(param_2 + 0x60),(Type *)(param_2 + 8)
                     ,aVStack_1b8);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    pVVar4 = (Value *)0x0;
  }
  else {
    (*param_4)(local_1c0,(MethodInvocation *)aVStack_1b8);
    uVar3 = *(uint *)(param_2 + 100);
    pVVar4 = aVStack_b8;
  }
  LuauScriptSystem::pushReturnValues(this,param_1,param_3,uVar3,pVVar4);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


