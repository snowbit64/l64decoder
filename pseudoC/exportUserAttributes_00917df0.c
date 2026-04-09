// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exportUserAttributes
// Entry Point: 00917df0
// Size: 664 bytes
// Signature: undefined __cdecl exportUserAttributes(vector * param_1, basic_ostream * param_2)


/* I3DSave::exportUserAttributes(std::__ndk1::vector<TransformGroup*,
   std::__ndk1::allocator<TransformGroup*> > const&, std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void I3DSave::exportUserAttributes(vector *param_1,basic_ostream *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  basic_ostream *pbVar5;
  size_t sVar6;
  ulong uVar7;
  long **pplVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  long **pplVar14;
  float fVar15;
  
  lVar11 = *(long *)param_1;
  uVar9 = *(long *)(param_1 + 8) - lVar11;
  if ((int)(uVar9 >> 3) == 0) {
    return;
  }
  uVar13 = 0;
  do {
    lVar11 = *(long *)(lVar11 + uVar13 * 8);
    puVar4 = (undefined8 *)UserAttributes::getAttributeMap();
    if (puVar4[2] != 0) {
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_2,"    <UserAttribute nodeId=\"",0x1b);
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                          *(uint *)(lVar11 + 0x18));
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"\">\n",3);
      pplVar14 = (long **)*puVar4;
      while (pplVar14 != (long **)(puVar4 + 1)) {
        uVar2 = UserAttribute::getType();
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_2,"      <Attribute name=\"",0x17);
        plVar10 = (long *)((long)pplVar14 + 0x21);
        if ((*(byte *)(pplVar14 + 4) & 1) != 0) {
          plVar10 = pplVar14[6];
        }
        sVar6 = strlen((char *)plVar10);
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar5,(char *)plVar10,sVar6);
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar5,"\" type=\"",8);
        pcVar12 = (&PTR_s_boolean_00fdfbb0)[uVar2];
        sVar6 = strlen(pcVar12);
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar5,pcVar12,sVar6);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar5,"\" value=\"",9);
        switch((ulong)uVar2) {
        case 0:
          uVar7 = UserAttribute::getBool();
          bVar1 = (uVar7 & 1) == 0;
          pcVar12 = "true";
          if (bVar1) {
            pcVar12 = "false";
          }
          uVar7 = 4;
          if (bVar1) {
            uVar7 = 5;
          }
          goto LAB_00917fdc;
        case 1:
        case 5:
          iVar3 = UserAttribute::getInt();
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_2,iVar3);
          break;
        case 2:
          fVar15 = (float)UserAttribute::getFloat();
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_2,fVar15);
          break;
        case 3:
          pcVar12 = (char *)UserAttribute::getString();
          goto LAB_00917fc8;
        case 4:
          pcVar12 = (char *)UserAttribute::getScriptCallbackFunction();
LAB_00917fc8:
          uVar7 = strlen(pcVar12);
LAB_00917fdc:
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_2,pcVar12,uVar7);
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_2,"\"/>\n",4);
        pplVar8 = (long **)pplVar14[1];
        if ((long **)pplVar14[1] == (long **)0x0) {
          pplVar8 = pplVar14 + 2;
          bVar1 = (long **)**pplVar8 != pplVar14;
          pplVar14 = (long **)*pplVar8;
          if (bVar1) {
            do {
              plVar10 = *pplVar8;
              pplVar8 = (long **)(plVar10 + 2);
              pplVar14 = (long **)*pplVar8;
            } while (*pplVar14 != plVar10);
          }
        }
        else {
          do {
            pplVar14 = pplVar8;
            pplVar8 = (long **)*pplVar14;
          } while (*pplVar14 != (long *)0x0);
        }
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_2,"    </UserAttribute>\n",0x15);
    }
    uVar13 = uVar13 + 1;
    if (uVar13 == (uVar9 >> 3 & 0xffffffff)) {
      return;
    }
    lVar11 = *(long *)param_1;
  } while( true );
}


