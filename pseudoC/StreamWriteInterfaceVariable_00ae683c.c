// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StreamWriteInterfaceVariable
// Entry Point: 00ae683c
// Size: 1064 bytes
// Signature: undefined __cdecl StreamWriteInterfaceVariable(basic_ostream * param_1, SpvReflectInterfaceVariable * param_2, char * param_3)


/* StreamWriteInterfaceVariable(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   SpvReflectInterfaceVariable const&, char const*) */

void StreamWriteInterfaceVariable
               (basic_ostream *param_1,SpvReflectInterfaceVariable *param_2,char *param_3)

{
  uint uVar1;
  long lVar2;
  size_t sVar3;
  basic_ostream *pbVar4;
  char *pcVar5;
  ulong uVar6;
  byte local_70 [8];
  ulong local_68;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  sVar3 = strlen(param_3);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,param_3,sVar3);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,"spirv id  : ",0xc);
  pbVar4 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,*(uint *)param_2)
  ;
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"\n",1);
  sVar3 = strlen(param_3);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,param_3,sVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (pbVar4,"location  : ",0xc);
  if (((byte)param_2[0x20] >> 4 & 1) == 0) {
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
               *(uint *)(param_2 + 0x10));
  }
  else {
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"(built-in)",10);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4," ",1);
    ToStringSpvBuiltIn(*(SpvBuiltIn_ *)(param_2 + 0x24));
    uVar6 = (ulong)(local_70[0] >> 1);
    pcVar5 = (char *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      uVar6 = local_68;
      pcVar5 = local_60;
    }
                    /* try { // try from 00ae6940 to 00ae6947 has its CatchHandler @ 00ae6c64 */
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar5,uVar6)
    ;
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  sVar3 = strlen(param_3);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,param_3,sVar3);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,"type      : ",0xc);
  ToStringComponentType(*(SpvReflectTypeDescription **)(param_2 + 0x160),0);
  uVar6 = (ulong)(local_70[0] >> 1);
  pcVar5 = (char *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    uVar6 = local_68;
    pcVar5 = local_60;
  }
                    /* try { // try from 00ae69c8 to 00ae69df has its CatchHandler @ 00ae6c68 */
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,pcVar5,uVar6);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"\n",1);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    sVar3 = strlen(param_3);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,param_3,sVar3);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar4,"array     : ",0xc);
    if (*(int *)(param_2 + 0x40) != 0) {
      uVar6 = 0;
      do {
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"[",1);
        pbVar4 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                            *(uint *)(param_2 + uVar6 * 4 + 0x44));
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"]",1);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_2 + 0x40));
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  }
  sVar3 = strlen(param_3);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,param_3,sVar3);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,"semantic  : ",0xc);
  pcVar5 = "";
  if (*(char **)(param_2 + 0x18) != (char *)0x0) {
    pcVar5 = *(char **)(param_2 + 0x18);
  }
  sVar3 = strlen(pcVar5);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,pcVar5,sVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"\n",1);
  sVar3 = strlen(param_3);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,param_3,sVar3);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,"name      : ",0xc);
  pcVar5 = "";
  if (*(char **)(param_2 + 8) != (char *)0x0) {
    pcVar5 = *(char **)(param_2 + 8);
  }
  sVar3 = strlen(pcVar5);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,pcVar5,sVar3);
  if ((*(char **)(*(long *)(param_2 + 0x160) + 8) != (char *)0x0) &&
     (**(char **)(*(long *)(param_2 + 0x160) + 8) != '\0')) {
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1," ",1);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,"(",1);
    pcVar5 = *(char **)(*(long *)(param_2 + 0x160) + 8);
    sVar3 = strlen(pcVar5);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,pcVar5,sVar3);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,")",1);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  sVar3 = strlen(param_3);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,param_3,sVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (pbVar4,"qualifier : ",0xc);
  uVar1 = *(uint *)(param_2 + 0x20);
  if ((uVar1 >> 6 & 1) == 0) {
    if ((uVar1 >> 5 & 1) == 0) {
      if ((uVar1 >> 9 & 1) == 0) goto LAB_00ae6c34;
      pcVar5 = "invariant";
      uVar6 = 9;
    }
    else {
      pcVar5 = "noperspective";
      uVar6 = 0xd;
    }
  }
  else {
    pcVar5 = "flat";
    uVar6 = 4;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar5,uVar6);
LAB_00ae6c34:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


