// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StreamWriteDescriptorBinding
// Entry Point: 00ae6198
// Size: 1644 bytes
// Signature: undefined __cdecl StreamWriteDescriptorBinding(basic_ostream * param_1, SpvReflectDescriptorBinding * param_2, bool param_3, bool param_4, char * param_5)


/* StreamWriteDescriptorBinding(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   SpvReflectDescriptorBinding const&, bool, bool, char const*) */

void StreamWriteDescriptorBinding
               (basic_ostream *param_1,SpvReflectDescriptorBinding *param_2,bool param_3,
               bool param_4,char *param_5)

{
  long lVar1;
  size_t sVar2;
  basic_ostream *pbVar3;
  TextLine *pTVar4;
  ulong uVar5;
  uint3 uVar6;
  TextLine *this;
  TextLine *pTVar7;
  char *pcVar8;
  uint local_80;
  uint uStack_7c;
  undefined local_78;
  undefined2 uStack_77;
  undefined5 uStack_75;
  char *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_5);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,param_5,sVar2);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,"spirv id : ",0xb);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,*(uint *)param_2)
  ;
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\n",1);
  if (param_3) {
    sVar2 = strlen(param_5);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,param_5,sVar2);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,"set      : ",0xb);
    pbVar3 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                        *(uint *)(param_2 + 0x18));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\n",1);
  }
  sVar2 = strlen(param_5);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,param_5,sVar2);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,"binding  : ",0xb);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                      *(uint *)(param_2 + 0x10));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\n",1);
  sVar2 = strlen(param_5);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,param_5,sVar2);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,"type     : ",0xb);
  ToStringDescriptorType(*(SpvReflectDescriptorType *)(param_2 + 0x1c));
  uVar5 = (ulong)((byte)local_80 >> 1);
  pcVar8 = (char *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    uVar5 = CONCAT53(uStack_75,CONCAT21(uStack_77,local_78));
    pcVar8 = local_70;
  }
                    /* try { // try from 00ae62f4 to 00ae62fb has its CatchHandler @ 00ae6804 */
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,pcVar8,uVar5);
  if (((byte)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," ",1)
  ;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"(",1);
  switch(*(undefined4 *)(param_2 + 0x20)) {
  case 0:
    uVar5 = 9;
    uStack_77 = 0x44;
    local_80 = 0x444e5512;
    uStack_7c = 0x4e494645;
    local_78 = 0x45;
    goto LAB_00ae63e0;
  case 1:
    uVar5 = 7;
    local_78 = 0;
    local_80 = 0x4d41530e;
    uStack_7c = 0x52454c50;
    goto LAB_00ae63e0;
  case 2:
    uVar6 = 0x4243;
    break;
  default:
    uVar6 = 0x3f3f3f;
    goto LAB_00ae63d4;
  case 4:
    uVar6 = 0x5253;
    break;
  case 8:
    uVar6 = 0x4155;
  }
  uVar6 = uVar6 | 0x560000;
LAB_00ae63d4:
  uVar5 = 3;
  local_80 = CONCAT31(uVar6,6);
  uStack_7c = uStack_7c & 0xffffff00;
LAB_00ae63e0:
                    /* try { // try from 00ae63e8 to 00ae640b has its CatchHandler @ 00ae6818 */
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,(char *)((ulong)&local_80 | 1),uVar5);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,")",1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\n",1);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  sVar2 = strlen(param_5);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,param_5,sVar2);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,"count    : ",0xb);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                      *(uint *)(param_2 + 0x224));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\n",1);
  if (*(int *)(param_2 + 0x1a0) != 0) {
    sVar2 = strlen(param_5);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,param_5,sVar2);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar3,"array    : ",0xb);
    if (*(int *)(param_2 + 0x1a0) != 0) {
      uVar5 = 0;
      do {
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"[",1);
        pbVar3 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                            *(uint *)(param_2 + uVar5 * 4 + 0x1a4));
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"]",1);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_2 + 0x1a0));
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  }
  if (*(long *)(param_2 + 0x230) != 0) {
    sVar2 = strlen(param_5);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,param_5,sVar2);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar3,"counter  : ",0xb);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"(",1);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"set=",4);
    pbVar3 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                        *(uint *)(*(long *)(param_2 + 0x230) + 0x18));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,", ",2);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"binding=",8);
    pbVar3 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                        *(uint *)(*(long *)(param_2 + 0x230) + 0x10));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,", ",2);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"name=",5);
    pcVar8 = *(char **)(*(long *)(param_2 + 0x230) + 8);
    sVar2 = strlen(pcVar8);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,pcVar8,sVar2);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,");",2);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  }
  sVar2 = strlen(param_5);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,param_5,sVar2);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,"accessed : ",0xb);
  pcVar8 = "false";
  if (*(int *)(param_2 + 0x228) != 0) {
    pcVar8 = "true";
  }
  uVar5 = 4;
  if (*(int *)(param_2 + 0x228) == 0) {
    uVar5 = 5;
  }
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,pcVar8,uVar5);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\n",1);
  sVar2 = strlen(param_5);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,param_5,sVar2);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,"name     : ",0xb);
  pcVar8 = "<unnamed>";
  if (*(char **)(param_2 + 8) != (char *)0x0) {
    pcVar8 = *(char **)(param_2 + 8);
  }
  sVar2 = strlen(pcVar8);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,pcVar8,sVar2);
  if ((*(char **)(*(long *)(param_2 + 0x238) + 8) != (char *)0x0) &&
     (**(char **)(*(long *)(param_2 + 0x238) + 8) != '\0')) {
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1," ",1);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,"(",1);
    pcVar8 = *(char **)(*(long *)(param_2 + 0x238) + 8);
    sVar2 = strlen(pcVar8);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,pcVar8,sVar2);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,")",1);
  }
  if ((*(uint *)(param_2 + 0x1c) & 0xfffffffe) == 6) {
    local_80 = 0;
    uStack_7c = 0;
    local_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    local_70 = (char *)0x0;
                    /* try { // try from 00ae6738 to 00ae6793 has its CatchHandler @ 00ae6808 */
    ParseBlockVariableToTextLines
              ("    ",param_4,(SpvReflectBlockVariable *)(param_2 + 0x40),(vector *)&local_80);
    pTVar7 = (TextLine *)CONCAT44(uStack_7c,local_80);
    if (pTVar7 != (TextLine *)CONCAT53(uStack_75,CONCAT21(uStack_77,local_78))) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
      StreamWriteTextLines(param_1,param_5,param_4,(vector *)&local_80);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
      pTVar7 = (TextLine *)CONCAT44(uStack_7c,local_80);
    }
    if (pTVar7 != (TextLine *)0x0) {
      this = (TextLine *)CONCAT53(uStack_75,CONCAT21(uStack_77,local_78));
      pTVar4 = pTVar7;
      if (this != pTVar7) {
        do {
          this = this + -0x158;
          TextLine::~TextLine(this);
        } while (this != pTVar7);
        pTVar4 = (TextLine *)CONCAT44(uStack_7c,local_80);
      }
      local_78 = SUB81(pTVar7,0);
      uStack_77 = (undefined2)((ulong)pTVar7 >> 8);
      uStack_75 = (undefined5)((ulong)pTVar7 >> 0x18);
      operator_delete(pTVar4);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


