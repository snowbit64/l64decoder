// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadFruitTypeFromXml
// Entry Point: 00a65d14
// Size: 3652 bytes
// Signature: undefined __thiscall loadFruitTypeFromXml(FoliageSystemDesc * this, uint param_1, char * param_2, char * param_3)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* FoliageSystemDesc::loadFruitTypeFromXml(unsigned int, char const*, char const*) */

uint __thiscall
FoliageSystemDesc::loadFruitTypeFromXml
          (FoliageSystemDesc *this,uint param_1,char *param_2,char *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long **this_00;
  ulong uVar11;
  size_t sVar12;
  char *pcVar13;
  char *pcVar14;
  char *__dest;
  byte *pbVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 ******ppppppuVar18;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  basic_string_conflict *pbVar19;
  undefined8 *******pppppppuVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *puVar22;
  undefined8 *******pppppppuVar23;
  byte *pbVar24;
  void *pvVar25;
  undefined8 ******ppppppuVar26;
  uint uVar27;
  uint uVar28;
  undefined8 *******pppppppuVar29;
  undefined8 *puVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined auVar38 [16];
  undefined4 local_8a0 [2];
  undefined8 *local_898;
  undefined8 *local_890;
  undefined8 *puStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  ulong local_868;
  ulong uStack_860;
  void *pvStack_858;
  undefined8 local_850;
  undefined4 local_848;
  undefined4 local_844;
  undefined4 uStack_840;
  undefined8 uStack_83c;
  undefined8 local_830;
  undefined4 *local_828;
  undefined4 *puStack_820;
  undefined8 *******local_818;
  undefined8 *******local_810;
  long local_808;
  undefined8 local_800;
  size_t local_7f8;
  char *local_7f0;
  ulong local_7e8;
  ulong local_7e0;
  void *local_7d8;
  ulong local_7d0;
  undefined8 uStack_7c8;
  void *local_7c0;
  uint local_7b4;
  undefined8 local_7b0;
  ulong local_7a8;
  ulong local_7a0;
  void *local_798;
  undefined4 local_790;
  ulong uStack_78c;
  undefined8 uStack_784;
  undefined8 local_77c;
  byte local_774;
  char acStack_770 [256];
  ulong local_670;
  ulong uStack_668;
  void *local_660;
  char acStack_570 [256];
  char acStack_470 [256];
  basic_string_conflict abStack_370 [256];
  undefined8 local_270;
  size_t local_268;
  void *local_260;
  DomXMLFile aDStack_170 [216];
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  this_00 = (long **)getMultiLayer(this,param_1,true);
  if ((this_00 == (long **)0x0) ||
     (uVar11 = MultiLayer::allocateTypeIndex((MultiLayer *)this_00,&local_7b4,true),
     (uVar11 & 1) == 0)) {
    uVar6 = 0;
    goto LAB_00a66af8;
  }
  DomXMLFile::DomXMLFile(aDStack_170);
                    /* try { // try from 00a65d84 to 00a65d93 has its CatchHandler @ 00a66b88 */
  uVar6 = DomXMLFile::loadFromFile(aDStack_170,param_3,true);
  if ((uVar6 & 1) != 0) {
    local_7d0 = 0;
    uStack_7c8 = 0;
    local_7c0 = (void *)0x0;
    sVar12 = strlen(param_3);
    if (0xffffffffffffffef < sVar12) {
                    /* try { // try from 00a66b4c to 00a66b53 has its CatchHandler @ 00a66b80 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar12 < 0x17) {
      pvVar25 = (void *)((ulong)&local_270 | 1);
      local_270 = CONCAT71(local_270._1_7_,(char)((int)sVar12 << 1));
      if (sVar12 != 0) goto LAB_00a65e04;
    }
    else {
      uVar11 = sVar12 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00a65de8 to 00a65def has its CatchHandler @ 00a66b80 */
      pvVar25 = operator_new(uVar11);
      local_270 = uVar11 | 1;
      local_268 = sVar12;
      local_260 = pvVar25;
LAB_00a65e04:
      memcpy(pvVar25,param_3,sVar12);
    }
    *(undefined *)((long)pvVar25 + sVar12) = 0;
                    /* try { // try from 00a65e18 to 00a65e27 has its CatchHandler @ 00a66b6c */
    PathUtil::getBasePath((basic_string *)&local_270,(basic_string *)&local_7d0,true);
    if ((local_270 & 1) != 0) {
      operator_delete(local_260);
    }
    local_7e8 = 0;
    local_7e0 = 0;
    local_7d8 = (void *)0x0;
                    /* try { // try from 00a65e4c to 00a65ec3 has its CatchHandler @ 00a66ba4 */
    pcVar13 = (char *)Properties::getString
                                ((Properties *)aDStack_170,"foliageType#distanceTexturePath","");
    PathUtil::buildAbsolutePath((basic_string *)&local_7d0,pcVar13,(basic_string *)&local_7e8);
    uVar11 = local_7e8 >> 1 & 0x7f;
    if ((local_7e8 & 1) != 0) {
      uVar11 = local_7e0;
    }
    if (uVar11 != 0) {
      pvVar25 = (void *)((ulong)&local_7e8 | 1);
      if ((local_7e8 & 1) != 0) {
        pvVar25 = local_7d8;
      }
      if (*(char *)((long)pvVar25 + (uVar11 - 1)) != '/') {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_7e8);
      }
    }
    pcVar13 = (char *)((ulong)&local_800 | 1);
    uVar37 = NEON_fmov(0x3f800000,4);
    do {
                    /* try { // try from 00a65f38 to 00a65f5b has its CatchHandler @ 00a66be4 */
      FUN_00a66d2c(&local_270);
      uVar11 = DomXMLFile::hasProperty(aDStack_170,(char *)&local_270,(bool *)0x0);
      if ((uVar11 & 1) == 0) break;
                    /* try { // try from 00a65f60 to 00a65f7b has its CatchHandler @ 00a66bd8 */
      pcVar14 = (char *)AttributedProperties::getStringAttribute
                                  ((AttributedProperties *)aDStack_170,(char *)&local_270,
                                   (char *)0x0,"name","");
      sVar12 = strlen(param_2);
      if (0xffffffffffffffef < sVar12) {
                    /* try { // try from 00a66b44 to 00a66b4b has its CatchHandler @ 00a66bcc */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar12 < 0x17) {
        local_800 = CONCAT71(local_800._1_7_,(char)((int)sVar12 << 1));
        __dest = pcVar13;
        if (sVar12 != 0) goto LAB_00a65fd8;
        *pcVar13 = '\0';
      }
      else {
        uVar11 = sVar12 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00a65fc0 to 00a65fc7 has its CatchHandler @ 00a66bc0 */
        __dest = (char *)operator_new(uVar11);
        local_800 = uVar11 | 1;
        local_7f8 = sVar12;
        local_7f0 = __dest;
LAB_00a65fd8:
        memcpy(__dest,param_2,sVar12);
        __dest[sVar12] = '\0';
      }
      if ((pcVar14 != (char *)0x0) && (*pcVar14 != '\0')) {
                    /* try { // try from 00a65ff8 to 00a66013 has its CatchHandler @ 00a66bc4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_800);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_800);
      }
      pcVar14 = pcVar13;
      if ((local_800 & 1) != 0) {
        pcVar14 = local_7f0;
      }
                    /* try { // try from 00a6602c to 00a66033 has its CatchHandler @ 00a66bd0 */
      uVar7 = MultiLayer::createLayer((MultiLayer *)this_00,local_7b4,pcVar14,true);
      if (uVar7 == 0xffffffff) {
        uVar27 = 2;
        uVar7 = 2;
      }
      else {
                    /* try { // try from 00a66040 to 00a6606b has its CatchHandler @ 00a66bdc */
        pbVar15 = (byte *)getLayer(this,param_1,uVar7,true);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)(pbVar15 + 0x18));
                    /* try { // try from 00a6606c to 00a660f7 has its CatchHandler @ 00a66bec */
        pcVar14 = (char *)AttributedProperties::getStringAttribute
                                    ((AttributedProperties *)aDStack_170,(char *)&local_270,
                                     (char *)0x0,"shapeSource",(char *)0x0);
        if (pcVar14 == (char *)0x0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar8 != 0)) {
                    /* try { // try from 00a66a88 to 00a66a93 has its CatchHandler @ 00a66b58 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          pbVar24 = *(byte **)(pbVar15 + 0x10);
          if ((*pbVar15 & 1) == 0) {
            pbVar24 = pbVar15 + 1;
          }
                    /* try { // try from 00a66a54 to 00a66a67 has its CatchHandler @ 00a66bec */
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Error: FoliageTransformGroup: layer %s has no shape source specified.\n"
                             ,pbVar24);
          uVar27 = 4;
          uVar7 = 4;
        }
        else {
          PathUtil::buildAbsolutePath
                    ((basic_string *)&local_7d0,pcVar14,(basic_string *)(pbVar15 + 0x30));
          iVar8 = AttributedProperties::getIntAttribute
                            ((AttributedProperties *)aDStack_170,(char *)&local_270,(char *)0x0,
                             "densityMapChannelOffset",0);
          iVar9 = (**(code **)(**this_00 + 0x60))();
          *(int *)(pbVar15 + 0x4c) = iVar9 + iVar8;
          uVar10 = AttributedProperties::getIntAttribute
                             ((AttributedProperties *)aDStack_170,(char *)&local_270,(char *)0x0,
                              "numDensityMapChannels",0);
          *(undefined4 *)(pbVar15 + 0x50) = uVar10;
                    /* try { // try from 00a660fc to 00a66117 has its CatchHandler @ 00a66bb8 */
          fVar31 = (float)AttributedProperties::getFloatAttribute
                                    ((AttributedProperties *)aDStack_170,(char *)&local_270,
                                     (char *)0x0,"numBlocksPerUnit",1.0);
                    /* try { // try from 00a6611c to 00a6613b has its CatchHandler @ 00a66bb0 */
          bVar4 = AttributedProperties::getBoolAttributeDefault
                            ((AttributedProperties *)aDStack_170,(char *)&local_270,(char *)0x0,
                             "debugMesh",false);
                    /* try { // try from 00a6613c to 00a6614f has its CatchHandler @ 00a66ba8 */
          FUN_00a66d2c(abStack_370,extraout_x1,"%s.foliageStateDefaults",&local_270);
          iVar8 = 0;
          local_810 = (undefined8 *******)0x0;
          local_808 = 0;
          uVar34 = extraout_x1_00;
          local_818 = &local_810;
          while( true ) {
                    /* try { // try from 00a6615c to 00a66183 has its CatchHandler @ 00a66c0c */
            FUN_00a66d2c(acStack_470,uVar34,"%s.foliageLodDefaults(%u)",&local_270,iVar8);
            auVar38 = DomXMLFile::hasProperty(aDStack_170,acStack_470,(bool *)0x0);
            uVar34 = auVar38._8_8_;
            if ((auVar38 & (undefined  [16])0x1) == (undefined  [16])0x0) break;
                    /* try { // try from 00a66188 to 00a6626f has its CatchHandler @ 00a66c10 */
            iVar9 = AttributedProperties::getIntAttribute
                              ((AttributedProperties *)aDStack_170,acStack_470,(char *)0x0,"lod",0);
            pppppppuVar23 = &local_810;
            pppppppuVar29 = &local_810;
            pppppppuVar20 = local_810;
            while (pppppppuVar20 != (undefined8 *******)0x0) {
              while (pppppppuVar29 = pppppppuVar20, iVar9 < *(int *)(pppppppuVar29 + 4)) {
                pppppppuVar23 = pppppppuVar29;
                pppppppuVar20 = (undefined8 *******)*pppppppuVar29;
                if ((undefined8 *******)*pppppppuVar29 == (undefined8 *******)0x0) {
                  ppppppuVar26 = *pppppppuVar29;
                  goto joined_r0x00a66244;
                }
              }
              if (iVar9 <= *(int *)(pppppppuVar29 + 4)) break;
              pppppppuVar23 = pppppppuVar29 + 1;
              pppppppuVar20 = (undefined8 *******)*pppppppuVar23;
            }
            ppppppuVar26 = *pppppppuVar23;
joined_r0x00a66244:
            if (ppppppuVar26 == (undefined8 ******)0x0) {
              ppppppuVar26 = (undefined8 ******)operator_new(0x40);
              *(int *)(ppppppuVar26 + 4) = iVar9;
              ppppppuVar26[6] = (undefined8 *****)0x0;
              ppppppuVar26[7] = (undefined8 *****)0x0;
              ppppppuVar26[5] = (undefined8 *****)0x0;
              *ppppppuVar26 = (undefined8 *****)0x0;
              ppppppuVar26[1] = (undefined8 *****)0x0;
              ppppppuVar26[2] = pppppppuVar29;
              *pppppppuVar23 = ppppppuVar26;
              ppppppuVar18 = ppppppuVar26;
              if ((undefined8 *******)*local_818 != (undefined8 *******)0x0) {
                ppppppuVar18 = *pppppppuVar23;
                local_818 = (undefined8 *******)*local_818;
              }
              std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                        ((__tree_node_base *)local_810,(__tree_node_base *)ppppppuVar18);
              local_808 = local_808 + 1;
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((char *)(ppppppuVar26 + 5));
            iVar8 = iVar8 + 1;
            uVar34 = extraout_x1_01;
          }
          uVar7 = 0;
          while( true ) {
                    /* try { // try from 00a662a8 to 00a662cf has its CatchHandler @ 00a66c08 */
            FUN_00a66d2c(acStack_570,uVar34,"%s.foliageState(%u)",&local_270,uVar7);
            uVar11 = DomXMLFile::hasProperty(aDStack_170,acStack_570,(bool *)0x0);
            if ((uVar11 & 1) == 0) break;
            uStack_83c = 0;
            uStack_840 = 0;
            pvStack_858 = (void *)0x0;
            uStack_860 = 0;
            local_848 = 0;
            local_844 = 0;
            local_850 = 0;
            uStack_878 = 0;
            local_880 = 0;
            local_868 = 0;
            uStack_870 = 0;
            local_828 = (undefined4 *)0x0;
            puStack_820 = (undefined4 *)0x0;
            local_830 = 0;
                    /* try { // try from 00a662f4 to 00a66313 has its CatchHandler @ 00a66c04 */
            FUN_00a66dd0(acStack_470,0x100,0x100,"%s.foliageState(%u)#name",&local_270,uVar7);
                    /* try { // try from 00a66314 to 00a66333 has its CatchHandler @ 00a66c18 */
            lVar16 = DomXMLFile::getValue(aDStack_170,acStack_470,false);
            if (lVar16 == 0) {
                    /* try { // try from 00a6633c to 00a6635f has its CatchHandler @ 00a66bf8 */
              FUN_00a66dd0(&local_670,0x40,0x40,"State %u",uVar7 + 1);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((char *)&local_880);
            }
            else {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((char *)&local_880);
            }
                    /* try { // try from 00a66360 to 00a66387 has its CatchHandler @ 00a66c18 */
            pbVar19 = abStack_370;
            AttributedProperties::getStringAttribute
                      ((AttributedProperties *)aDStack_170,acStack_570,(char *)pbVar19,"distanceMap"
                       ,"");
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((char *)&local_868);
            uVar11 = local_868 >> 1 & 0x7f;
            if ((local_868 & 1) != 0) {
              uVar11 = uStack_860;
            }
            if (uVar11 != 0) {
                    /* try { // try from 00a663a0 to 00a663af has its CatchHandler @ 00a66bf4 */
              std::__ndk1::operator+
                        ((__ndk1 *)&local_7e8,(basic_string_conflict *)&local_868,pbVar19);
              if ((local_868 & 1) != 0) {
                operator_delete(pvStack_858);
              }
              uStack_860 = uStack_668;
              local_868 = local_670;
              pvStack_858 = local_660;
            }
                    /* try { // try from 00a663d4 to 00a664af has its CatchHandler @ 00a66c18 */
            uVar10 = AttributedProperties::getIntAttribute
                               ((AttributedProperties *)aDStack_170,acStack_570,(char *)abStack_370,
                                "distanceMapLayer",0);
            local_850 = CONCAT44(local_850._4_4_,uVar10);
            uVar10 = AttributedProperties::getFloatAttribute
                               ((AttributedProperties *)aDStack_170,acStack_570,(char *)abStack_370,
                                "numBlocksPerUnit",fVar31);
            local_850 = CONCAT44(uVar10,(undefined4)local_850);
            local_848 = AttributedProperties::getFloatAttribute
                                  ((AttributedProperties *)aDStack_170,acStack_570,
                                   (char *)abStack_370,"width",0.0);
            local_844 = AttributedProperties::getFloatAttribute
                                  ((AttributedProperties *)aDStack_170,acStack_570,
                                   (char *)abStack_370,"widthVariance",0.0);
            uStack_840 = AttributedProperties::getFloatAttribute
                                   ((AttributedProperties *)aDStack_170,acStack_570,
                                    (char *)abStack_370,"height",0.0);
            uVar10 = AttributedProperties::getFloatAttribute
                               ((AttributedProperties *)aDStack_170,acStack_570,(char *)abStack_370,
                                "heightVariance",0.0);
            uStack_83c = CONCAT44(uStack_83c._4_4_,uVar10);
            uVar10 = AttributedProperties::getFloatAttribute
                               ((AttributedProperties *)aDStack_170,acStack_570,(char *)abStack_370,
                                "horizontalPositionVariance",0.0);
            uStack_83c = CONCAT44(uVar10,(undefined4)uStack_83c);
                    /* try { // try from 00a664b4 to 00a664d3 has its CatchHandler @ 00a66c00 */
            bVar5 = AttributedProperties::getBoolAttributeDefault
                              ((AttributedProperties *)aDStack_170,acStack_570,(char *)abStack_370,
                               "debugMesh",(bool)(bVar4 & 1));
            uVar27 = 0;
            while( true ) {
                    /* try { // try from 00a664f8 to 00a6651f has its CatchHandler @ 00a66c38 */
              FUN_00a66d2c(&local_670);
              uVar11 = DomXMLFile::hasProperty(aDStack_170,(char *)&local_670,(bool *)0x0);
              if ((uVar11 & 1) == 0) break;
              local_8a0[0] = 0;
              local_890 = (undefined8 *)0x0;
              puStack_888 = (undefined8 *)0x0;
              local_898 = (undefined8 *)0x0;
                    /* try { // try from 00a66534 to 00a6654f has its CatchHandler @ 00a66c34 */
              local_8a0[0] = AttributedProperties::getFloatAttribute
                                       ((AttributedProperties *)aDStack_170,(char *)&local_670,
                                        (char *)0x0,"probability",0.0);
              uVar28 = 0;
              while( true ) {
                    /* try { // try from 00a66560 to 00a66587 has its CatchHandler @ 00a66c70 */
                FUN_00a66d2c(acStack_770);
                uVar11 = DomXMLFile::hasProperty(aDStack_170,acStack_770,(bool *)0x0);
                puVar3 = local_828;
                if ((uVar11 & 1) == 0) break;
                pppppppuVar23 = &local_810;
                pppppppuVar29 = local_810;
                if (local_810 == (undefined8 *******)0x0) {
LAB_00a665d8:
                  ppppppuVar26 = (undefined8 ******)0x0;
                }
                else {
                  do {
                    pppppppuVar21 = pppppppuVar29;
                    pppppppuVar20 = pppppppuVar23;
                    iVar8 = *(int *)(pppppppuVar21 + 4);
                    pppppppuVar23 = pppppppuVar20;
                    if ((int)uVar28 <= iVar8) {
                      pppppppuVar23 = pppppppuVar21;
                    }
                    pppppppuVar29 = (undefined8 *******)pppppppuVar21[iVar8 < (int)uVar28];
                  } while ((undefined8 *******)pppppppuVar21[iVar8 < (int)uVar28] !=
                           (undefined8 *******)0x0);
                  if ((undefined8 ********)pppppppuVar23 == &local_810) goto LAB_00a665d8;
                  if ((int)uVar28 <= iVar8) {
                    pppppppuVar20 = pppppppuVar21;
                  }
                  pppppppuVar29 = local_810;
                  pppppppuVar23 = &local_810;
                  if ((int)uVar28 < *(int *)(pppppppuVar20 + 4)) goto LAB_00a665d8;
                  do {
                    pppppppuVar20 = pppppppuVar23;
                    pppppppuVar21 = pppppppuVar29;
                    iVar8 = *(int *)(pppppppuVar21 + 4);
                    pppppppuVar23 = pppppppuVar20;
                    if ((int)uVar28 <= iVar8) {
                      pppppppuVar23 = pppppppuVar21;
                    }
                    pppppppuVar29 = (undefined8 *******)pppppppuVar21[iVar8 < (int)uVar28];
                  } while ((undefined8 *******)pppppppuVar21[iVar8 < (int)uVar28] !=
                           (undefined8 *******)0x0);
                  if ((undefined8 ********)pppppppuVar23 == &local_810) {
LAB_00a66864:
                    pppppppuVar23 = &local_810;
                  }
                  else {
                    if ((int)uVar28 <= iVar8) {
                      pppppppuVar20 = pppppppuVar21;
                    }
                    if ((int)uVar28 < *(int *)(pppppppuVar20 + 4)) goto LAB_00a66864;
                  }
                  ppppppuVar26 = (undefined8 ******)((long)pppppppuVar23 + 0x29);
                  if ((*(byte *)(pppppppuVar23 + 5) & 1) != 0) {
                    ppppppuVar26 = pppppppuVar23[7];
                  }
                }
                local_7a8 = 0;
                local_7a0 = 0;
                local_798 = (void *)0x0;
                local_7b0 = 0x40a0000042a00000;
                local_790 = 1;
                uStack_784 = 0;
                uStack_78c = 0x3f800000;
                local_77c._4_4_ = (undefined4)((ulong)uVar37 >> 0x20);
                uVar10 = local_77c._4_4_;
                    /* try { // try from 00a665fc to 00a6669b has its CatchHandler @ 00a66c78 */
                local_77c = uVar37;
                uVar32 = AttributedProperties::getFloatAttribute
                                   ((AttributedProperties *)aDStack_170,acStack_770,
                                    (char *)ppppppuVar26,"viewDistance",80.0);
                local_7b0 = CONCAT44(local_7b0._4_4_,uVar32);
                uVar32 = AttributedProperties::getFloatAttribute
                                   ((AttributedProperties *)aDStack_170,acStack_770,
                                    (char *)ppppppuVar26,"blendOutDistance",5.0);
                local_7b0 = CONCAT44(uVar32,(undefined4)local_7b0);
                AttributedProperties::getStringAttribute
                          ((AttributedProperties *)aDStack_170,acStack_770,(char *)ppppppuVar26,
                           "blockShape","");
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((char *)&local_7a8);
                uVar11 = local_7a8 >> 1 & 0x7f;
                if ((local_7a8 & 1) != 0) {
                  uVar11 = local_7a0;
                }
                if (uVar11 == 0) {
                  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                     iVar8 != 0)) {
                    /* try { // try from 00a66890 to 00a6689f has its CatchHandler @ 00a66b90 */
                    LogManager::LogManager
                              ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                    __cxa_atexit(LogManager::~LogManager,
                                 &LogManager::getInstance()::singletonLogManager,&PTR_LOOP_00fd8de0)
                    ;
                    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                  }
                  pbVar24 = pbVar15 + 1;
                  if ((*pbVar15 & 1) != 0) {
                    pbVar24 = *(byte **)(pbVar15 + 0x10);
                  }
                    /* try { // try from 00a66704 to 00a66723 has its CatchHandler @ 00a66c78 */
                  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                     "Error: FoliageTransformGroup: Lod %s[%u][%u][%u] has no block shape specified.\n"
                                     ,pbVar24,(ulong)uVar7,(ulong)uVar27,(ulong)uVar28);
                }
                else {
                  local_790 = AttributedProperties::getIntAttribute
                                        ((AttributedProperties *)aDStack_170,acStack_770,
                                         (char *)ppppppuVar26,"atlasSize",1);
                    /* try { // try from 00a666a0 to 00a666cf has its CatchHandler @ 00a66c68 */
                  pcVar14 = (char *)AttributedProperties::getStringAttribute
                                              ((AttributedProperties *)aDStack_170,acStack_770,
                                               (char *)ppppppuVar26,"atlasOffset",(char *)0x0);
                  if (pcVar14 == (char *)0x0) {
                    fVar33 = (float)NEON_ucvtf(local_790);
                    fVar33 = 1.0 / fVar33;
LAB_00a66734:
                    uStack_78c = (ulong)(uint)fVar33;
                  }
                  else {
                    iVar8 = StringUtil::splitIntoFloats(pcVar14,(float *)&uStack_78c,2,' ');
                    fVar33 = 0.0;
                    if (iVar8 != 2) goto LAB_00a66734;
                  }
                    /* try { // try from 00a6673c to 00a667bb has its CatchHandler @ 00a66c6c */
                  pcVar14 = (char *)AttributedProperties::getStringAttribute
                                              ((AttributedProperties *)aDStack_170,acStack_770,
                                               (char *)ppppppuVar26,"texCoords",(char *)0x0);
                  if (pcVar14 == (char *)0x0) {
                    uStack_784 = 0;
                    fVar33 = (float)NEON_ucvtf(local_790);
                    local_77c._4_4_ = 0x3f800000;
                    uVar34 = CONCAT44(0x3f800000,1.0 / fVar33);
                  }
                  else {
                    iVar8 = StringUtil::splitIntoFloats(pcVar14,(float *)&uStack_784,4,' ');
                    uVar34 = local_77c;
                    local_77c._4_4_ = uVar10;
                    if (iVar8 != 4) {
                      local_77c._4_4_ = 0;
                    }
                  }
                  local_77c = uVar34;
                  uVar10 = local_77c._4_4_;
                  local_774 = AttributedProperties::getBoolAttributeDefault
                                        ((AttributedProperties *)aDStack_170,acStack_770,
                                         (char *)ppppppuVar26,"debugMesh",(bool)(bVar5 & 1));
                  puVar30 = local_890;
                  local_774 = local_774 & 1;
                  if (local_890 == puStack_888) {
                    /* try { // try from 00a66804 to 00a6680f has its CatchHandler @ 00a66c6c */
                    std::__ndk1::
                    vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>>::
                    __push_back_slow_path<FoliageSystemDesc::Lod_const&>
                              ((vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>>
                                *)&local_898,(Lod *)&local_7b0);
                  }
                  else {
                    *local_890 = local_7b0;
                    /* try { // try from 00a667dc to 00a667e3 has its CatchHandler @ 00a66c5c */
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    basic_string((basic_string *)(local_890 + 1));
                    local_890 = puVar30 + 8;
                    *(ulong *)((long)puVar30 + 0x35) =
                         CONCAT17(local_774,CONCAT43(uVar10,local_77c._1_3_));
                    *(ulong *)((long)puVar30 + 0x2d) =
                         CONCAT17((undefined)local_77c,(uint7)uStack_784._1_3_);
                    puVar30[5] = (ulong)uStack_784 << 0x20;
                    puVar30[4] = CONCAT84(uStack_78c,local_790);
                  }
                }
                if ((local_7a8 & 1) != 0) {
                  operator_delete(local_798);
                }
                uVar28 = uVar28 + 1;
              }
              if (local_828 == puStack_820) {
                    /* try { // try from 00a66984 to 00a6698f has its CatchHandler @ 00a66c1c */
                std::__ndk1::
                vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>::
                __push_back_slow_path<FoliageSystemDesc::Shape_const&>
                          ((vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>
                            *)&local_830,(Shape *)local_8a0);
              }
              else {
                *(undefined8 *)(local_828 + 4) = 0;
                *(undefined8 *)(local_828 + 6) = 0;
                *local_828 = local_8a0[0];
                *(undefined8 *)(local_828 + 2) = 0;
                uVar11 = (long)local_890 - (long)local_898;
                if (uVar11 != 0) {
                  if ((long)uVar11 < 0) {
                    /* try { // try from 00a66b38 to 00a66b43 has its CatchHandler @ 00a66c2c */
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__vector_base_common<true>::__throw_length_error();
                  }
                    /* try { // try from 00a668fc to 00a66903 has its CatchHandler @ 00a66c20 */
                  puVar17 = (undefined8 *)operator_new(uVar11);
                  puVar2 = local_890;
                  *(undefined8 **)(puVar3 + 2) = puVar17;
                  *(undefined8 **)(puVar3 + 4) = puVar17;
                  *(undefined8 **)(puVar3 + 6) = puVar17 + ((long)uVar11 >> 6) * 8;
                  puVar30 = local_898;
                  if (local_898 != local_890) {
                    do {
                      puVar22 = puVar17;
                      *puVar22 = *puVar30;
                    /* try { // try from 00a66934 to 00a6693f has its CatchHandler @ 00a66c40 */
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string((basic_string *)(puVar22 + 1));
                      puVar17 = (undefined8 *)((long)puVar30 + 0x35);
                      uVar34 = *(undefined8 *)((long)puVar30 + 0x2d);
                      uVar36 = puVar30[5];
                      uVar35 = puVar30[4];
                      puVar30 = puVar30 + 8;
                      *(undefined8 *)((long)puVar22 + 0x35) = *puVar17;
                      *(undefined8 *)((long)puVar22 + 0x2d) = uVar34;
                      puVar22[5] = uVar36;
                      puVar22[4] = uVar35;
                      puVar17 = puVar22 + 8;
                    } while (puVar30 != puVar2);
                    puVar17 = puVar22 + 8;
                  }
                  *(undefined8 **)(puVar3 + 4) = puVar17;
                }
                local_828 = puVar3 + 8;
              }
              puVar30 = local_898;
              puVar17 = local_890;
              if (local_898 != (undefined8 *)0x0) {
                while (puVar2 = puVar17, puVar2 != puVar30) {
                  puVar17 = puVar2 + -8;
                  if ((*(byte *)(puVar2 + -7) & 1) != 0) {
                    operator_delete((void *)puVar2[-5]);
                  }
                }
                local_890 = puVar30;
                operator_delete(local_898);
              }
              uVar27 = uVar27 + 1;
            }
            if (*(long *)(pbVar15 + 0x60) == *(long *)(pbVar15 + 0x68)) {
                    /* try { // try from 00a66290 to 00a6629b has its CatchHandler @ 00a66bfc */
              std::__ndk1::
              vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>>::
              __push_back_slow_path<FoliageSystemDesc::State_const&>
                        ((vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>>
                          *)(pbVar15 + 0x58),(State *)&local_880);
            }
            else {
                    /* try { // try from 00a669dc to 00a669e7 has its CatchHandler @ 00a66bfc */
              std::__ndk1::
              vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>>::
              __construct_one_at_end<FoliageSystemDesc::State_const&>
                        ((vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>>
                          *)(pbVar15 + 0x58),(State *)&local_880);
            }
            State::~State((State *)&local_880);
            uVar7 = uVar7 + 1;
            uVar34 = extraout_x1_02;
          }
          std::__ndk1::
          __tree<std::__ndk1::__value_type<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::destroy((__tree<std::__ndk1::__value_type<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                     *)&local_818,(__tree_node *)local_810);
          uVar27 = 0;
          uVar7 = 0;
        }
      }
      if ((local_800 & 1) != 0) {
        operator_delete(local_7f0);
        uVar7 = uVar27;
      }
    } while ((uVar7 | 4) == 4);
    if ((local_7e8 & 1) != 0) {
      operator_delete(local_7d8);
    }
    if ((local_7d0 & 1) != 0) {
      operator_delete(local_7c0);
    }
  }
  DomXMLFile::~DomXMLFile(aDStack_170);
LAB_00a66af8:
  if (*(long *)(lVar1 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6 & 1;
}


