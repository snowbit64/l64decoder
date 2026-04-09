// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StreamWriteEntryPoint
// Entry Point: 00ae6c84
// Size: 884 bytes
// Signature: undefined __cdecl StreamWriteEntryPoint(basic_ostream * param_1, SpvReflectEntryPoint * param_2, char * param_3)


/* StreamWriteEntryPoint(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   SpvReflectEntryPoint const&, char const*) */

void StreamWriteEntryPoint(basic_ostream *param_1,SpvReflectEntryPoint *param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  basic_ostream *pbVar4;
  ulong uVar5;
  undefined4 uVar6;
  char *__s;
  byte local_60;
  undefined2 local_5f;
  undefined uStack_5d;
  undefined uStack_5c;
  undefined uStack_5b;
  undefined uStack_5a;
  undefined uStack_59;
  undefined uStack_58;
  undefined uStack_57;
  undefined2 uStack_56;
  undefined uStack_54;
  undefined local_53;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  sVar3 = strlen(param_3);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,param_3,sVar3);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,"entry point     : ",0x12);
  __s = *(char **)param_2;
  sVar3 = strlen(__s);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,__s,sVar3);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1," (stage=",8);
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 < 0x80) {
    switch(iVar1) {
    case 1:
      local_5f = 0x5356;
      break;
    case 2:
      local_5f = 0x5348;
      break;
    default:
      goto switchD_00ae6d3c_caseD_3;
    case 4:
      local_5f = 0x5344;
      break;
    case 8:
      local_5f = 0x5347;
      break;
    case 0x10:
      local_5f = 0x5350;
      break;
    case 0x20:
      local_5f = 0x5343;
      break;
    case 0x40:
      uVar6 = 0x4b534154;
LAB_00ae6e90:
      uVar5 = 4;
      local_60 = 8;
      local_5f = (undefined2)uVar6;
      uStack_5d = (undefined)((uint)uVar6 >> 0x10);
      uStack_5c = (undefined)((uint)uVar6 >> 0x18);
      uStack_5b = 0;
      goto LAB_00ae6f14;
    }
    uVar5 = 2;
    local_60 = 4;
    uStack_5d = 0;
  }
  else {
    if (iVar1 < 0x400) {
      if (iVar1 == 0x80) {
        uVar6 = 0x4853454d;
        goto LAB_00ae6e90;
      }
      if (iVar1 == 0x100) {
        uVar5 = 6;
        uStack_59 = 0;
        local_60 = 0xc;
        local_5f = 0x4152;
        uStack_5d = 0x59;
        uStack_5c = 0x47;
        uStack_5b = 0x45;
        uStack_5a = 0x4e;
        goto LAB_00ae6f14;
      }
      if (iVar1 == 0x200) {
        uVar5 = 7;
        uStack_58 = 0;
        local_60 = 0xe;
        local_5f = 0x4e41;
        uStack_5d = 0x59;
        uStack_5c = 0x5f;
        uStack_5b = 0x48;
        uStack_5a = 0x49;
        uStack_59 = 0x54;
        goto LAB_00ae6f14;
      }
    }
    else if (iVar1 < 0x1000) {
      if (iVar1 == 0x400) {
        uVar5 = 0xb;
        uStack_54 = 0;
        local_60 = 0x16;
        uStack_57 = 0x48;
        uStack_56 = 0x5449;
        local_5f = 0x4c43;
        uStack_5d = 0x4f;
        uStack_5c = 0x53;
        uStack_5b = 0x45;
        uStack_5a = 0x53;
        uStack_59 = 0x54;
        uStack_58 = 0x5f;
        goto LAB_00ae6f14;
      }
      if (iVar1 == 0x800) {
        uVar6 = 0x5353494d;
        goto LAB_00ae6e90;
      }
    }
    else {
      if (iVar1 == 0x1000) {
        uVar5 = 0xc;
        local_53 = 0;
        local_60 = 0x18;
        uStack_57 = 0x54;
        uStack_56 = 0x4f49;
        uStack_54 = 0x4e;
        local_5f = 0x4e49;
        uStack_5d = 0x54;
        uStack_5c = 0x45;
        uStack_5b = 0x52;
        uStack_5a = 0x53;
        uStack_59 = 0x45;
        uStack_58 = 0x43;
        goto LAB_00ae6f14;
      }
      if (iVar1 == 0x2000) {
        uVar5 = 8;
        uStack_57 = 0;
        local_60 = 0x10;
        local_5f = 0x4143;
        uStack_5d = 0x4c;
        uStack_5c = 0x4c;
        uStack_5b = 0x41;
        uStack_5a = 0x42;
        uStack_59 = 0x4c;
        uStack_58 = 0x45;
        goto LAB_00ae6f14;
      }
    }
switchD_00ae6d3c_caseD_3:
    uVar5 = 3;
    local_60 = 6;
    local_5f = 0x3f3f;
    uStack_5d = 0x3f;
    uStack_5c = 0;
  }
LAB_00ae6f14:
                    /* try { // try from 00ae6f1c to 00ae6f2f has its CatchHandler @ 00ae6ff8 */
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,(char *)((ulong)&local_60 | 1),uVar5);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,")",1);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(int *)(param_2 + 0x10) == 0x20) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"local size      : ",0x12);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,"(",1);
    pbVar4 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                        *(uint *)(param_2 + 0x70));
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,", ",2);
    pbVar4 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                        *(uint *)(param_2 + 0x74));
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,", ",2);
    pbVar4 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                        *(uint *)(param_2 + 0x78));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,")",1);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


