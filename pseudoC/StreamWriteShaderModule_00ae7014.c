// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StreamWriteShaderModule
// Entry Point: 00ae7014
// Size: 508 bytes
// Signature: undefined __cdecl StreamWriteShaderModule(basic_ostream * param_1, SpvReflectShaderModule * param_2, char * param_3)


/* StreamWriteShaderModule(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   SpvReflectShaderModule const&, char const*) */

void StreamWriteShaderModule(basic_ostream *param_1,SpvReflectShaderModule *param_2,char *param_3)

{
  uint uVar1;
  long lVar2;
  basic_ostream *pbVar3;
  char *pcVar4;
  size_t sVar5;
  long lVar6;
  ulong uVar7;
  byte local_70 [8];
  ulong local_68;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"generator       : ",0x12);
  ToStringGenerator(*(SpvReflectGenerator *)param_2);
  uVar7 = (ulong)(local_70[0] >> 1);
  pcVar4 = (char *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    uVar7 = local_68;
    pcVar4 = local_60;
  }
                    /* try { // try from 00ae7084 to 00ae709b has its CatchHandler @ 00ae7210 */
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,pcVar4,uVar7);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\n",1);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"source lang     : ",0x12);
  pcVar4 = (char *)spvReflectSourceLanguage(*(undefined4 *)(param_2 + 0x20));
  sVar5 = strlen(pcVar4);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,pcVar4,sVar5);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\n",1);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"source lang ver : ",0x12);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                      *(uint *)(param_2 + 0x24));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\n",1);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"source file     : ",0x12);
  pcVar4 = "";
  if (*(char **)(param_2 + 0x28) != (char *)0x0) {
    pcVar4 = *(char **)(param_2 + 0x28);
  }
  sVar5 = strlen(pcVar4);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,pcVar4,sVar5);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\n",1);
  if (*(int *)(param_2 + 0x14) != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      StreamWriteEntryPoint(param_1,(SpvReflectEntryPoint *)(*(long *)(param_2 + 0x18) + lVar6),"");
      uVar1 = *(uint *)(param_2 + 0x14);
      if (uVar7 < uVar1 - 1) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
        uVar1 = *(uint *)(param_2 + 0x14);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x88;
    } while (uVar7 < uVar1);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


