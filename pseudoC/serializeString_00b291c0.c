// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeString
// Entry Point: 00b291c0
// Size: 428 bytes
// Signature: undefined __cdecl serializeString(char * param_1, basic_ostream * param_2)


/* JSONUtil::serializeString(char const*, std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void JSONUtil::serializeString(char *param_1,basic_ostream *param_2)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  size_t sVar4;
  byte local_70 [8];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_70[0] = 0x22;
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_2,(char *)local_70,1);
  do {
    bVar1 = *param_1;
    switch(bVar1) {
    case 0:
      local_70[0] = 0x22;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_2,(char *)local_70,1);
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xb:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
      goto switchD_00b29280_caseD_1;
    case 8:
      pbVar3 = &DAT_004e8e3f;
      break;
    case 9:
      pbVar3 = &DAT_004f7f91;
      break;
    case 10:
      pbVar3 = &DAT_00515bea;
      break;
    case 0xc:
      pbVar3 = &DAT_004e63c1;
      break;
    case 0xd:
      pbVar3 = &DAT_004eb759;
      break;
    case 0x22:
      pbVar3 = &DAT_004d260b;
      break;
    default:
      pbVar3 = &DAT_004e8e3c;
      if (bVar1 == 0x5c) break;
      goto switchD_00b29280_caseD_1;
    }
    sVar4 = 2;
LAB_00b29260:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_2,(char *)pbVar3,sVar4);
    param_1 = (char *)((byte *)param_1 + 1);
  } while( true );
switchD_00b29280_caseD_1:
  if (bVar1 < 0x20) {
    FUN_00b2936c(local_70,7,"\\u%4.4x");
    sVar4 = strlen((char *)local_70);
    pbVar3 = local_70;
  }
  else {
    pbVar3 = local_70;
    sVar4 = 1;
    local_70[0] = bVar1;
  }
  goto LAB_00b29260;
}


