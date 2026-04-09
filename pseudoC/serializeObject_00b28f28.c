// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeObject
// Entry Point: 00b28f28
// Size: 664 bytes
// Signature: undefined __cdecl serializeObject(Object * param_1, basic_ostream * param_2, SerializationFlags param_3, uint param_4)


/* JSONUtil::serializeObject(JSONUtil::Object const&, std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, JSONUtil::SerializationFlags, unsigned int) */

void JSONUtil::serializeObject
               (Object *param_1,basic_ostream *param_2,SerializationFlags param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  basic_ostream *pbVar3;
  char *pcVar4;
  ulong uVar5;
  long *plVar6;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    pcVar4 = "{}";
    uVar5 = 2;
  }
  else {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"{",1);
    if ((param_3 & 1) == 0) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
    }
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      bVar2 = false;
      uVar1 = param_4 + 1;
      do {
        if (((param_3 >> 2 & 1) == 0) || ((*(byte *)plVar6[5] & 0xfe) != 4)) {
          if ((bVar2) &&
             (std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_2,",",1), (param_3 & 1) == 0)) {
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_2,"\n",1);
          }
          indent(param_2,param_3,uVar1);
          bVar2 = true;
          pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_2,"\"",1);
          uVar5 = (ulong)(*(byte *)(plVar6 + 2) >> 1);
          pcVar4 = (char *)((long)plVar6 + 0x11);
          if ((*(byte *)(plVar6 + 2) & 1) != 0) {
            uVar5 = plVar6[3];
            pcVar4 = (char *)plVar6[4];
          }
          pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar3,pcVar4,uVar5);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\":",2)
          ;
          serialize((Atom *)plVar6[5],param_2,param_3,uVar1);
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
      if ((param_3 >> 2 & 1) != 0) {
        for (plVar6 = *(long **)(param_1 + 0x10); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          if ((*(byte *)plVar6[5] & 0xfe) == 4) {
            if ((bVar2) &&
               (std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (param_2,",",1), (param_3 & 1) == 0)) {
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_2,"\n",1);
            }
            indent(param_2,param_3,uVar1);
            bVar2 = true;
            pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (param_2,"\"",1);
            uVar5 = plVar6[3];
            pcVar4 = (char *)plVar6[4];
            if ((*(byte *)(plVar6 + 2) & 1) == 0) {
              pcVar4 = (char *)((long)plVar6 + 0x11);
              uVar5 = (ulong)(*(byte *)(plVar6 + 2) >> 1);
            }
            pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar3,pcVar4,uVar5);
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (pbVar3,"\":",2);
            serialize((Atom *)plVar6[5],param_2,param_3,uVar1);
          }
        }
      }
    }
    if ((param_3 & 1) == 0) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
    }
    indent(param_2,param_3,param_4);
    pcVar4 = "}";
    uVar5 = 1;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,pcVar4,uVar5);
  return;
}


