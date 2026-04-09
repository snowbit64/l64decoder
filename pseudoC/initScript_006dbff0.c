// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initScript
// Entry Point: 006dbff0
// Size: 632 bytes
// Signature: undefined __thiscall initScript(EngineApplication * this, bool param_1)


/* EngineApplication::initScript(bool) */

bool __thiscall EngineApplication::initScript(EngineApplication *this,bool param_1)

{
  long lVar1;
  EngineApplication *pEVar2;
  int iVar3;
  char *pcVar4;
  LuauScriptSystem *this_00;
  basic_string local_1c0 [4];
  void *local_1b0;
  void *local_1a8;
  undefined4 local_1a0;
  ushort local_19c;
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
  undefined4 local_b0;
  undefined2 local_ac;
  undefined local_aa;
  char local_a8;
  int local_a0;
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
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this[0x298] = (EngineApplication)0x0;
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
  local_50 = 0;
  local_4a = 0;
  local_4c = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_1c0);
                    /* try { // try from 006dc134 to 006dc17f has its CatchHandler @ 006dc26c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)local_1c0);
  pEVar2 = this + 0x309;
  if (((byte)this[0x308] & 1) != 0) {
    pEVar2 = *(EngineApplication **)(this + 0x318);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)local_1c0,(ulong)pEVar2);
  if (param_1) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)local_1c0);
                    /* try { // try from 006dc180 to 006dc1af has its CatchHandler @ 006dc268 */
    EngineManager::getInstance();
    pcVar4 = (char *)EngineManager::exitRequestedRestartArgs();
    if (*pcVar4 != '\0') {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)local_1c0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)local_1c0);
    }
  }
  local_1a8 = (void *)((ulong)local_1c0 | 1);
  if (((byte)local_1c0[0] & 1) != 0) {
    local_1a8 = local_1b0;
  }
  local_19c = local_19c & 0xfffe;
  local_1a0 = 6;
                    /* try { // try from 006dc1e0 to 006dc207 has its CatchHandler @ 006dc26c */
  ScriptSystemManager::getInstance();
  this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
  LuauScriptSystem::invokeScriptMethod
            (this_00,"init",(MethodInvocation *)&local_1a8,1,1,(void *)0x0);
  EngineScriptBinding::cleanupTempResources();
  iVar3 = local_a0;
  this[0x298] = (EngineApplication)0x1;
  if (((byte)local_1c0[0] & 1) != 0) {
    operator_delete(local_1b0);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3 != 3 || local_a8 != '\0';
}


