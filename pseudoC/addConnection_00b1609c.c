// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addConnection
// Entry Point: 00b1609c
// Size: 544 bytes
// Signature: undefined __thiscall addConnection(VoiceChatManager * this, uint param_1, char * param_2, char * param_3, PLATFORM_ID param_4)


/* VoiceChatManager::addConnection(unsigned int, char const*, char const*, SysUtilBase::PLATFORM_ID)
    */

void __thiscall
VoiceChatManager::addConnection
          (VoiceChatManager *this,uint param_1,char *param_2,char *param_3,PLATFORM_ID param_4)

{
  VoiceChatManager *pVVar1;
  long lVar2;
  uchar uVar3;
  VoiceChatManager VVar4;
  long lVar5;
  long *plVar6;
  undefined8 *this_00;
  basic_string *pbVar7;
  basic_string *pbVar8;
  ulong local_80;
  uint local_78;
  undefined8 *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  plVar6 = *(long **)(this + 0x1480);
  lVar2 = *plVar6;
  uVar3 = *(uchar *)(plVar6 + 2);
  *(long *)(lVar2 + 8) = plVar6[1];
  *(long *)plVar6[1] = lVar2;
  *(long *)(this + 0x1488) = *(long *)(this + 0x1488) + -1;
  operator_delete(plVar6);
  createConnection(this,param_1,param_2,param_3,param_4,uVar3,false);
  pbVar8 = *(basic_string **)(this + 0x1498);
  pVVar1 = this + 0x1518;
  for (pbVar7 = *(basic_string **)(this + 0x1490); pbVar7 != pbVar8; pbVar7 = pbVar7 + 0x1c) {
    local_78 = pbVar7[0x13];
    if (local_78 != param_1) {
      local_80 = 0;
      local_70 = (undefined8 *)operator_new(0x70);
      local_70[1] = 0;
      *local_70 = 0;
      local_70[3] = 0;
      local_70[2] = 0;
      local_70[5] = 0;
      local_70[4] = 0;
      local_70[7] = 0;
      local_70[6] = 0;
      local_70[9] = 0;
      local_70[8] = 0;
      local_70[0xb] = 0;
      local_70[10] = 0;
      local_70[0xd] = 0;
      local_70[0xc] = 0;
      local_70[6] = local_70 + 7;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)local_70);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)(local_70 + 3));
      *(PLATFORM_ID *)(local_70 + 9) = param_4;
      *(uchar *)((long)local_70 + 0x6c) = uVar3;
      *(undefined *)((long)local_70 + 0x6e) = 0;
      FUN_00b165dc(pVVar1,&local_80);
      local_80 = local_80 & 0xffffffff;
      local_78 = param_1;
      local_70 = (undefined8 *)operator_new(0x70);
      local_70[1] = 0;
      *local_70 = 0;
      local_70[3] = 0;
      local_70[2] = 0;
      local_70[5] = 0;
      local_70[4] = 0;
      local_70[7] = 0;
      local_70[6] = 0;
      local_70[9] = 0;
      local_70[8] = 0;
      local_70[0xb] = 0;
      local_70[10] = 0;
      local_70[0xd] = 0;
      local_70[0xc] = 0;
      local_70[6] = local_70 + 7;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                local_70,pbVar7);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (local_70 + 3),pbVar7 + 6);
      *(basic_string *)(local_70 + 9) = pbVar7[0x12];
      *(undefined *)((long)local_70 + 0x6c) = *(undefined *)(pbVar7 + 0x1b);
      *(undefined *)((long)local_70 + 0x6e) = *(undefined *)((long)pbVar7 + 0x6e);
      FUN_00b165dc(pVVar1,&local_80);
    }
  }
  local_80 = 0;
  local_78 = param_1;
  this_00 = (undefined8 *)operator_new(0x70);
  this_00[1] = 0;
  *this_00 = 0;
  this_00[3] = 0;
  this_00[2] = 0;
  this_00[5] = 0;
  this_00[4] = 0;
  this_00[7] = 0;
  this_00[6] = 0;
  this_00[9] = 0;
  this_00[8] = 0;
  this_00[0xb] = 0;
  this_00[10] = 0;
  this_00[0xd] = 0;
  this_00[0xc] = 0;
  this_00[6] = this_00 + 7;
  local_70 = this_00;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            this_00,(basic_string *)this);
  EnvUtil::getUserId((basic_string *)(this_00 + 3));
  VVar4 = this[0x30];
  *(undefined *)((long)this_00 + 0x6c) = 0;
  *(undefined4 *)(this_00 + 9) = 5;
  *(VoiceChatManager *)((long)this_00 + 0x6e) = VVar4;
  FUN_00b165dc(pVVar1,&local_80);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


