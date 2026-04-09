// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StreamWritePushConstantsBlock
// Entry Point: 00ae5f74
// Size: 528 bytes
// Signature: undefined __cdecl StreamWritePushConstantsBlock(basic_ostream * param_1, SpvReflectBlockVariable * param_2, bool param_3, char * param_4)


/* StreamWritePushConstantsBlock(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   SpvReflectBlockVariable const&, bool, char const*) */

void StreamWritePushConstantsBlock
               (basic_ostream *param_1,SpvReflectBlockVariable *param_2,bool param_3,char *param_4)

{
  long lVar1;
  TextLine *pTVar2;
  TextLine *pTVar3;
  size_t sVar4;
  basic_ostream *pbVar5;
  char *pcVar6;
  TextLine *local_70;
  TextLine *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  sVar4 = strlen(param_4);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,param_4,sVar4);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"spirv id : ",0xb);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,*(uint *)param_2)
  ;
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"\n",1);
  sVar4 = strlen(param_4);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,param_4,sVar4);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"name     : ",0xb);
  pcVar6 = "<unnamed>";
  if (*(char **)(param_2 + 8) != (char *)0x0) {
    pcVar6 = *(char **)(param_2 + 8);
  }
  sVar4 = strlen(pcVar6);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,pcVar6,sVar4);
  if ((*(char **)(*(long *)(param_2 + 0x158) + 8) != (char *)0x0) &&
     (**(char **)(*(long *)(param_2 + 0x158) + 8) != '\0')) {
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1," ",1);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,"(",1);
    pcVar6 = *(char **)(*(long *)(param_2 + 0x158) + 8);
    sVar4 = strlen(pcVar6);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,pcVar6,sVar4);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,")",1);
  }
  local_70 = (TextLine *)0x0;
  local_68 = (TextLine *)0x0;
  local_60 = 0;
                    /* try { // try from 00ae60b8 to 00ae6117 has its CatchHandler @ 00ae6184 */
  ParseBlockVariableToTextLines("    ",param_3,param_2,(vector *)&local_70);
  if (local_70 != local_68) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
    StreamWriteTextLines(param_1,param_4,param_3,(vector *)&local_70);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  }
  pTVar3 = local_70;
  pTVar2 = local_68;
  if (local_70 != (TextLine *)0x0) {
    while (pTVar2 != pTVar3) {
      TextLine::~TextLine(pTVar2 + -0x158);
      pTVar2 = pTVar2 + -0x158;
    }
    local_68 = pTVar3;
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


