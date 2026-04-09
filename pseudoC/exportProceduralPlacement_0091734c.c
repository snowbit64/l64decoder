// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exportProceduralPlacement
// Entry Point: 0091734c
// Size: 2688 bytes
// Signature: undefined __cdecl exportProceduralPlacement(map * param_1, basic_ostream * param_2)


/* I3DSave::exportProceduralPlacement(std::__ndk1::map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, SceneSave::SerializeFile,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, SceneSave::SerializeFile> >
   >&, std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&) */

void I3DSave::exportProceduralPlacement(map *param_1,basic_ostream *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  long lVar3;
  bool bVar4;
  __tree_iterator _Var5;
  int iVar6;
  ProceduralPlacementManager *this;
  long lVar7;
  DistanceMatrixType *this_00;
  basic_ostream *pbVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  long *plVar18;
  int local_84;
  ulong local_80;
  ulong local_78;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this = (ProceduralPlacementManager *)ProceduralPlacementManager::getInstance();
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_2,"    <Types>\n",0xc);
  lVar7 = ProceduralPlacementCacheManager::getInstance();
  if (*(int *)(lVar7 + 0x30) != 0) {
    uVar14 = 0;
    do {
      this_00 = (DistanceMatrixType *)ProceduralPlacementManager::getDistanceMatrixType(this,uVar14)
      ;
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_2,"      <Type name=\"",0x12);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_80);
      uVar16 = local_80 >> 1 & 0x7f;
      pcVar1 = (char *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        uVar16 = local_78;
        pcVar1 = local_70;
      }
                    /* try { // try from 0091745c to 0091746f has its CatchHandler @ 00917dcc */
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,pcVar1,uVar16);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\">\n",3);
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if (*(int *)(this_00 + 0x28) != 0) {
        uVar12 = 0;
        do {
          local_80 = 0;
          local_78 = 0;
          local_70 = (char *)0x0;
                    /* try { // try from 009174a8 to 00917507 has its CatchHandler @ 00917dd4 */
          ProceduralPlacementDistanceMatrix::DistanceMatrixType::getDistance
                    (this_00,uVar12,(basic_string *)&local_80,&local_84);
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_2,"        <Distance to=\"",0x16);
          uVar16 = local_80 >> 1 & 0x7f;
          pcVar1 = (char *)((ulong)&local_80 | 1);
          if ((local_80 & 1) != 0) {
            uVar16 = local_78;
            pcVar1 = local_70;
          }
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar8,pcVar1,uVar16);
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar8,"\" min=\"",7);
          pbVar8 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,local_84)
          ;
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (pbVar8,"\" />\n",5);
          if ((local_80 & 1) != 0) {
            operator_delete(local_70);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(uint *)(this_00 + 0x28));
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_2,"      </Type>\n",0xe);
      uVar14 = uVar14 + 1;
      lVar7 = ProceduralPlacementCacheManager::getInstance();
    } while (uVar14 < *(uint *)(lVar7 + 0x30));
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_2,"    </Types>\n",0xd);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_2,"    <Objects>\n",0xe);
  lVar7 = *(long *)(this + 8);
  if ((int)((ulong)(*(long *)(this + 0x10) - lVar7) >> 3) != 0) {
    uVar16 = 0;
    do {
      pbVar17 = *(byte **)(lVar7 + uVar16 * 8);
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_2,"      <Object type=\"terrainTexture\" name=\"",0x2a);
      uVar11 = *(ulong *)(pbVar17 + 8);
      pbVar2 = *(byte **)(pbVar17 + 0x10);
      if ((*pbVar17 & 1) == 0) {
        pbVar2 = pbVar17 + 1;
        uVar11 = (ulong)(*pbVar17 >> 1);
      }
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,(char *)pbVar2,uVar11);
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,"\" ppType=\"",10);
      uVar11 = (ulong)(pbVar17[0x18] >> 1);
      pbVar2 = pbVar17 + 0x19;
      if ((pbVar17[0x18] & 1) != 0) {
        uVar11 = *(ulong *)(pbVar17 + 0x20);
        pbVar2 = *(byte **)(pbVar17 + 0x28);
      }
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,(char *)pbVar2,uVar11);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\" />\n",5)
      ;
      lVar7 = *(long *)(this + 8);
      uVar16 = uVar16 + 1;
    } while (uVar16 < ((ulong)(*(long *)(this + 0x10) - lVar7) >> 3 & 0xffffffff));
  }
  lVar7 = *(long *)(this + 0x20);
  if ((int)((ulong)(*(long *)(this + 0x28) - lVar7) >> 3) != 0) {
    uVar16 = 0;
    do {
      pbVar17 = *(byte **)(lVar7 + uVar16 * 8);
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_2,"      <Object type=\"terrainFoliage\" name=\"",0x2a);
      uVar11 = *(ulong *)(pbVar17 + 8);
      pbVar2 = *(byte **)(pbVar17 + 0x10);
      if ((*pbVar17 & 1) == 0) {
        pbVar2 = pbVar17 + 1;
        uVar11 = (ulong)(*pbVar17 >> 1);
      }
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,(char *)pbVar2,uVar11);
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,"\" foliageTypeName=\"",0x13);
      uVar11 = (ulong)(pbVar17[0x18] >> 1);
      pbVar2 = pbVar17 + 0x19;
      if ((pbVar17[0x18] & 1) != 0) {
        uVar11 = *(ulong *)(pbVar17 + 0x20);
        pbVar2 = *(byte **)(pbVar17 + 0x28);
      }
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,(char *)pbVar2,uVar11);
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,"\" channels=\"",0xc);
      pbVar8 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                          *(uint *)(pbVar17 + 0x30));
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,"\" ppType=\"",10);
      uVar11 = (ulong)(pbVar17[0x38] >> 1);
      pbVar2 = pbVar17 + 0x39;
      if ((pbVar17[0x38] & 1) != 0) {
        uVar11 = *(ulong *)(pbVar17 + 0x40);
        pbVar2 = *(byte **)(pbVar17 + 0x48);
      }
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,(char *)pbVar2,uVar11);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\" />\n",5)
      ;
      lVar7 = *(long *)(this + 0x20);
      uVar16 = uVar16 + 1;
    } while (uVar16 < ((ulong)(*(long *)(this + 0x28) - lVar7) >> 3 & 0xffffffff));
  }
  lVar7 = *(long *)(this + 0x38);
  if ((int)((ulong)(*(long *)(this + 0x40) - lVar7) >> 3) != 0) {
    uVar16 = 0;
    do {
      pbVar17 = *(byte **)(lVar7 + uVar16 * 8);
      _Var5 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                          *)param_1,(basic_string *)(pbVar17 + 0x18));
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_2,"      <Object type=\"reference\" name=\"",0x25);
      uVar11 = *(ulong *)(pbVar17 + 8);
      pbVar2 = *(byte **)(pbVar17 + 0x10);
      if ((*pbVar17 & 1) == 0) {
        pbVar2 = pbVar17 + 1;
        uVar11 = (ulong)(*pbVar17 >> 1);
      }
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,(char *)pbVar2,uVar11);
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,"\" fileId=\"",10);
      pbVar8 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                          *(uint *)((ulong)_Var5 + 0x38));
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,"\" ppType=\"",10);
      uVar11 = (ulong)(pbVar17[0x30] >> 1);
      pbVar2 = pbVar17 + 0x31;
      if ((pbVar17[0x30] & 1) != 0) {
        uVar11 = *(ulong *)(pbVar17 + 0x38);
        pbVar2 = *(byte **)(pbVar17 + 0x40);
      }
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,(char *)pbVar2,uVar11);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\" />\n",5)
      ;
      lVar7 = *(long *)(this + 0x38);
      uVar16 = uVar16 + 1;
    } while (uVar16 < ((ulong)(*(long *)(this + 0x40) - lVar7) >> 3 & 0xffffffff));
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_2,"    </Objects>\n",0xf);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_2,"    <Rules>\n",0xc);
  lVar7 = *(long *)(this + 0xb8);
  if ((int)((ulong)(*(long *)(this + 0xc0) - lVar7) >> 3) != 0) {
    uVar16 = 0;
    do {
      lVar7 = *(long *)(lVar7 + uVar16 * 8);
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_2,"      <Rule name=\"",0x12);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_80);
      uVar11 = local_80 >> 1 & 0x7f;
      pcVar1 = (char *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        uVar11 = local_78;
        pcVar1 = local_70;
      }
                    /* try { // try from 009178a4 to 0091793b has its CatchHandler @ 00917dd0 */
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,pcVar1,uVar11);
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,"\" isMainRule=\"",0xe);
      bVar4 = *(char *)(lVar7 + 0x40) != '\0';
      pcVar1 = "false";
      if (bVar4) {
        pcVar1 = "true";
      }
      uVar11 = 4;
      if (!bVar4) {
        uVar11 = 5;
      }
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,pcVar1,uVar11);
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,"\" objectMinDistance=\"",0x15);
      pbVar8 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                          *(uint *)(lVar7 + 0x44));
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,"\" slopeStart=\"",0xe);
      pbVar8 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                          *(uint *)(lVar7 + 0x48));
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,"\" slopeEnd=\"",0xc);
      pbVar8 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                          *(uint *)(lVar7 + 0x4c));
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\" >\n",4);
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      lVar9 = *(long *)(lVar7 + 0x50);
      if (*(long *)(lVar7 + 0x58) != lVar9) {
        uVar11 = 0;
        do {
          pbVar17 = (byte *)(lVar9 + uVar11 * 0x30);
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_2,"        <Script name=\"",0x16);
          uVar13 = *(ulong *)(pbVar17 + 8);
          pbVar2 = *(byte **)(pbVar17 + 0x10);
          if ((*pbVar17 & 1) == 0) {
            pbVar2 = pbVar17 + 1;
            uVar13 = (ulong)(*pbVar17 >> 1);
          }
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar8,(char *)pbVar2,uVar13);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (pbVar8,"\" >\n",4);
          lVar9 = *(long *)(pbVar17 + 0x18);
          if (*(long *)(pbVar17 + 0x20) != lVar9) {
            uVar13 = 0;
            do {
              pbVar15 = (byte *)(lVar9 + uVar13 * 0x48);
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (param_2,"          <Arg name=\"",0x15);
              uVar10 = *(ulong *)(pbVar15 + 8);
              pbVar2 = *(byte **)(pbVar15 + 0x10);
              if ((*pbVar15 & 1) == 0) {
                pbVar2 = pbVar15 + 1;
                uVar10 = (ulong)(*pbVar15 >> 1);
              }
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (pbVar8,(char *)pbVar2,uVar10);
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (pbVar8,"\" type=\"",8);
              uVar10 = (ulong)(pbVar15[0x18] >> 1);
              pbVar2 = pbVar15 + 0x19;
              if ((pbVar15[0x18] & 1) != 0) {
                uVar10 = *(ulong *)(pbVar15 + 0x20);
                pbVar2 = *(byte **)(pbVar15 + 0x28);
              }
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (pbVar8,(char *)pbVar2,uVar10);
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (pbVar8,"\" value=\"",9);
              uVar10 = (ulong)(pbVar15[0x30] >> 1);
              pbVar2 = pbVar15 + 0x31;
              if ((pbVar15[0x30] & 1) != 0) {
                uVar10 = *(ulong *)(pbVar15 + 0x38);
                pbVar2 = *(byte **)(pbVar15 + 0x40);
              }
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (pbVar8,(char *)pbVar2,uVar10);
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar8,"\" />\n",5);
              uVar13 = (ulong)((int)uVar13 + 1);
              lVar9 = *(long *)(pbVar17 + 0x18);
              uVar10 = (*(long *)(pbVar17 + 0x20) - lVar9 >> 3) * -0x71c71c71c71c71c7;
            } while (uVar13 <= uVar10 && uVar10 - uVar13 != 0);
          }
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_2,"        </Script>\n",0x12);
          lVar9 = *(long *)(lVar7 + 0x50);
          uVar13 = (*(long *)(lVar7 + 0x58) - lVar9 >> 4) * -0x5555555555555555;
          uVar11 = (ulong)((int)uVar11 + 1);
        } while (uVar11 <= uVar13 && uVar13 - uVar11 != 0);
      }
      lVar9 = *(long *)(lVar7 + 0x68);
      if (*(long *)(lVar7 + 0x70) != lVar9) {
        uVar11 = 0;
        do {
          plVar18 = *(long **)(lVar9 + uVar11 * 8);
          iVar6 = (**(code **)(*plVar18 + 0x10))(plVar18);
          if ((iVar6 == 0) || (iVar6 = (**(code **)(*plVar18 + 0x10))(plVar18), iVar6 == 1)) {
            pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (param_2,"        <Object id=\"",0x14);
            pbVar8 = (basic_ostream *)
                     std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                               ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                                *(int *)(plVar18 + 5));
            pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar8,"\" childRule=\"",0xd);
            uVar13 = (ulong)(*(byte *)(plVar18 + 6) >> 1);
            pcVar1 = (char *)((long)plVar18 + 0x31);
            if ((*(byte *)(plVar18 + 6) & 1) != 0) {
              uVar13 = plVar18[7];
              pcVar1 = (char *)plVar18[8];
            }
            pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar8,pcVar1,uVar13);
            pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar8,"\" objectName=\"",0xe);
            uVar13 = (ulong)(*(byte *)(plVar18 + 9) >> 1);
            pcVar1 = (char *)((long)plVar18 + 0x49);
            if ((*(byte *)(plVar18 + 9) & 1) != 0) {
              uVar13 = plVar18[10];
              pcVar1 = (char *)plVar18[0xb];
            }
            pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar8,pcVar1,uVar13);
            pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar8,"\" childMinCount=\"",0x11);
            pbVar8 = (basic_ostream *)
                     std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                               ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                                *(uint *)(plVar18 + 0xc));
            pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar8,"\" childMaxCount=\"",0x11);
            pbVar8 = (basic_ostream *)
                     std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                               ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                                *(uint *)((long)plVar18 + 100));
            pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar8,"\" childMinRadius=\"",0x12);
            pbVar8 = (basic_ostream *)
                     std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                               ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                                *(uint *)(plVar18 + 0xd));
            pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar8,"\" childMaxRadius=\"",0x12);
            pbVar8 = (basic_ostream *)
                     std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                               ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                                *(uint *)((long)plVar18 + 0x6c));
LAB_00917bf8:
            pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar8,"\" probability=\"",0xf);
            pbVar8 = (basic_ostream *)
                     std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                               ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                                *(int *)(plVar18 + 1));
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (pbVar8,"\" />\n",5);
          }
          else {
            iVar6 = (**(code **)(*plVar18 + 0x10))(plVar18);
            if (iVar6 == 2) {
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (param_2,"        <Object id=\"",0x14);
              pbVar8 = (basic_ostream *)
                       std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                 ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                                  *(int *)(plVar18 + 5));
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (pbVar8,"\" childRule=\"",0xd);
              uVar13 = (ulong)(*(byte *)(plVar18 + 6) >> 1);
              pcVar1 = (char *)((long)plVar18 + 0x31);
              if ((*(byte *)(plVar18 + 6) & 1) != 0) {
                uVar13 = plVar18[7];
                pcVar1 = (char *)plVar18[8];
              }
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (pbVar8,pcVar1,uVar13);
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (pbVar8,"\" objectName=\"",0xe);
              uVar13 = (ulong)(*(byte *)(plVar18 + 9) >> 1);
              pcVar1 = (char *)((long)plVar18 + 0x49);
              if ((*(byte *)(plVar18 + 9) & 1) != 0) {
                uVar13 = plVar18[10];
                pcVar1 = (char *)plVar18[0xb];
              }
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (pbVar8,pcVar1,uVar13);
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (pbVar8,"\" childMinCount=\"",0x11);
              pbVar8 = (basic_ostream *)
                       std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                 ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                                  *(uint *)(plVar18 + 0xc));
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (pbVar8,"\" childMaxCount=\"",0x11);
              pbVar8 = (basic_ostream *)
                       std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                 ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                                  *(uint *)((long)plVar18 + 100));
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (pbVar8,"\" childMinRadius=\"",0x12);
              pbVar8 = (basic_ostream *)
                       std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                 ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                                  *(uint *)(plVar18 + 0xd));
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (pbVar8,"\" childMaxRadius=\"",0x12);
              pbVar8 = (basic_ostream *)
                       std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                 ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                                  *(uint *)((long)plVar18 + 0x6c));
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (pbVar8,"\" scaleMin=\"",0xc);
              pbVar8 = (basic_ostream *)
                       std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                 ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                                  *(float *)(plVar18 + 0xe));
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (pbVar8,"\" scaleMax=\"",0xc);
              pbVar8 = (basic_ostream *)
                       std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                 ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                                  *(float *)((long)plVar18 + 0x74));
              goto LAB_00917bf8;
            }
          }
          lVar9 = *(long *)(lVar7 + 0x68);
          uVar11 = (ulong)((int)uVar11 + 1);
        } while (uVar11 < (ulong)(*(long *)(lVar7 + 0x70) - lVar9 >> 3));
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_2,"      </Rule>\n",0xe);
      uVar16 = uVar16 + 1;
      lVar7 = *(long *)(this + 0xb8);
    } while (uVar16 < ((ulong)(*(long *)(this + 0xc0) - lVar7) >> 3 & 0xffffffff));
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_2,"    </Rules>\n",0xd);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


