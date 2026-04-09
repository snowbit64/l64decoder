// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: execute
// Entry Point: 006e9634
// Size: 584 bytes
// Signature: undefined __cdecl execute(vector * param_1)


/* ScriptingConsoleCommand::execute(std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > >&) */

void ScriptingConsoleCommand::execute(vector *param_1)

{
  vector *pvVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  LuauScriptSystem *this;
  long *in_x1;
  undefined2 *in_x8;
  long *plVar5;
  ushort *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long local_1a8;
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
  void *local_a8;
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
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar8 = *in_x1;
  lVar7 = in_x1[1];
  *in_x8 = 0;
  local_1a0 = 0;
  local_19a = 0;
  local_19c = 0;
  uVar10 = lVar7 - lVar8;
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
  if (uVar10 == 0) {
    uVar9 = 0;
  }
  else {
    iVar3 = (int)(uVar10 >> 3) * -0x55555555;
    uVar9 = 0x10;
    if (0xffffffef < iVar3 - 0x11U) {
      uVar9 = iVar3 - 1;
    }
    uVar10 = (ulong)uVar9;
    if (uVar9 != 0) {
      plVar5 = (long *)(lVar8 + 0x28);
      puVar6 = &local_19c;
      do {
        bVar2 = *(byte *)(plVar5 + -2);
        lVar8 = (long)plVar5 + -0xf;
        lVar7 = *plVar5;
        *(undefined4 *)(puVar6 + -2) = 6;
        plVar5 = plVar5 + 3;
        if ((bVar2 & 1) != 0) {
          lVar8 = lVar7;
        }
        uVar10 = uVar10 - 1;
        *puVar6 = *puVar6 & 0xfffe;
        *(long *)(puVar6 + -6) = lVar8;
        puVar6 = puVar6 + 8;
      } while (uVar10 != 0);
    }
  }
  local_a8 = (void *)0x0;
  local_a0 = 0;
                    /* try { // try from 006e97fc to 006e9843 has its CatchHandler @ 006e987c */
  ScriptSystemManager::getInstance();
  this = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
  pvVar1 = param_1 + 0x39;
  if (((byte)param_1[0x38] & 1) != 0) {
    pvVar1 = *(vector **)(param_1 + 0x48);
  }
  LuauScriptSystem::invokeScriptMethod
            (this,(char *)pvVar1,(MethodInvocation *)&local_1a8,uVar9,1,*(void **)(param_1 + 0x50));
  if (((local_a0 == 6) && (local_a8 != (void *)0x0)) &&
     (std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)in_x8), local_a8 != (void *)0x0)) {
    operator_delete__(local_a8);
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


