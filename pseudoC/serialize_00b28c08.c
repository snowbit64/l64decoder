// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 00b28c08
// Size: 800 bytes
// Signature: undefined __cdecl serialize(Atom * param_1, basic_ostream * param_2, SerializationFlags param_3, uint param_4)


/* JSONUtil::serialize(JSONUtil::Atom const&, std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, JSONUtil::SerializationFlags, unsigned int) */

void JSONUtil::serialize(Atom *param_1,basic_ostream *param_2,SerializationFlags param_3,
                        uint param_4)

{
  long lVar1;
  size_t sVar2;
  char *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  Atom **ppAVar6;
  Atom **ppAVar7;
  double dVar8;
  char acStack_e8 [128];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  switch(*param_1) {
  case (Atom)0x0:
    pcVar3 = "null";
    uVar4 = 4;
    break;
  case (Atom)0x1:
    pcVar3 = "false";
    if (param_1[8] != (Atom)0x0) {
      pcVar3 = "true";
    }
    uVar4 = 4;
    if (param_1[8] == (Atom)0x0) {
      uVar4 = 5;
    }
    break;
  case (Atom)0x2:
    if (((param_3 >> 1 & 1) != 0) && ((ulong)(byte)param_1[1] != 0)) {
      FUN_00b2936c(acStack_e8,0x80,&DAT_004cd8cf,
                   *(undefined8 *)(s_extTypeNames + (ulong)(byte)param_1[1] * 8));
      sVar2 = strlen(acStack_e8);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_2,acStack_e8,sVar2);
    }
    switch(param_1[1]) {
    case (Atom)0x0:
    case (Atom)0x9:
    case (Atom)0xa:
      FUN_00b2936c(*(undefined8 *)(param_1 + 8),acStack_e8,0x80,&DAT_0050bc8c);
      break;
    case (Atom)0x1:
    case (Atom)0x3:
    case (Atom)0x5:
      dVar8 = *(double *)(param_1 + 8);
      puVar5 = &DAT_004c7f7a;
      goto LAB_00b28e9c;
    case (Atom)0x2:
    case (Atom)0x4:
    case (Atom)0x6:
      dVar8 = *(double *)(param_1 + 8);
      puVar5 = &DAT_004cf2ba;
LAB_00b28e9c:
      FUN_00b2936c(acStack_e8,0x80,puVar5,(int)dVar8);
      break;
    case (Atom)0x7:
      dVar8 = *(double *)(param_1 + 8);
      puVar5 = &DAT_004dc518;
      goto LAB_00b28ed0;
    case (Atom)0x8:
      dVar8 = *(double *)(param_1 + 8);
      puVar5 = &DAT_004fd003;
LAB_00b28ed0:
      FUN_00b2936c(acStack_e8,0x80,puVar5,(long)dVar8);
    }
    uVar4 = strlen(acStack_e8);
    pcVar3 = acStack_e8;
    break;
  case (Atom)0x3:
    serializeString(*(char **)(param_1 + 8),param_2);
    goto switchD_00b28c64_caseD_6;
  case (Atom)0x4:
    serializeObject(*(Object **)(param_1 + 8),param_2,param_3,param_4);
    goto switchD_00b28c64_caseD_6;
  case (Atom)0x5:
    if ((*(long **)(param_1 + 8))[1] == **(long **)(param_1 + 8)) {
      pcVar3 = "[]";
      uVar4 = 2;
    }
    else {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1);
      if ((param_3 & 1) == 0) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
      }
      ppAVar6 = (Atom **)**(long **)(param_1 + 8);
      if (ppAVar6 != (Atom **)(*(long **)(param_1 + 8))[1]) {
        while( true ) {
          indent(param_2,param_3,param_4 + 1);
          ppAVar7 = ppAVar6 + 1;
          serialize(*ppAVar6,param_2,param_3,param_4 + 1);
          if (ppAVar7 == (Atom **)(*(undefined8 **)(param_1 + 8))[1]) break;
          ppAVar6 = ppAVar7;
          if ((ppAVar7 != (Atom **)**(undefined8 **)(param_1 + 8)) &&
             (std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_2,",",1), (param_3 & 1) == 0)) {
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_2,"\n",1);
          }
        }
      }
      if ((param_3 & 1) == 0) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
      }
      indent(param_2,param_3,param_4);
      pcVar3 = "]";
      uVar4 = 1;
    }
    break;
  default:
    goto switchD_00b28c64_caseD_6;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,pcVar3,uVar4);
switchD_00b28c64_caseD_6:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


