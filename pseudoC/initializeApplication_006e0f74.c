// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initializeApplication
// Entry Point: 006e0f74
// Size: 5496 bytes
// Signature: undefined __cdecl initializeApplication(int param_1, char * * param_2, EngineApplicationDesc * param_3, ApplicationMutex * * param_4, int * param_5)


/* WARNING: Type propagation algorithm not settling */
/* initializeApplication(int, char**, EngineApplicationDesc&, ApplicationMutex*&, int&) */

EngineApplication *
initializeApplication
          (int param_1,char **param_2,EngineApplicationDesc *param_3,ApplicationMutex **param_4,
          int *param_5)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  basic_string *this_00;
  char *pcVar1;
  long lVar2;
  vector vVar3;
  undefined7 uVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  char *pcVar11;
  size_t __n;
  ulong uVar12;
  ApplicationMutex *pAVar13;
  NativeFileLoader *pNVar14;
  long lVar15;
  CopyProtection *this_01;
  ulong uVar16;
  long *this_02;
  undefined8 *******pppppppuVar17;
  ulong *puVar18;
  undefined8 *****pppppuVar19;
  undefined8 *****__dest;
  undefined8 uVar20;
  byte *pbVar21;
  EngineApplication *this_03;
  undefined8 ******ppppppuVar22;
  undefined8 *******pppppppuVar23;
  EngineApplicationDesc *pEVar24;
  EngineApplicationDesc *pEVar25;
  byte *pbVar26;
  EngineApplicationDesc *pEVar27;
  ulong uVar28;
  uint uVar29;
  byte *pbVar30;
  LANGUAGE_TYPE LVar31;
  undefined8 *****pppppuVar32;
  undefined8 *******pppppppuVar33;
  char *pcVar34;
  char *pcVar35;
  undefined8 ******ppppppuVar36;
  ulong uVar37;
  undefined8 local_2c0;
  undefined8 *****pppppuStack_2b8;
  undefined8 *****local_2b0;
  byte local_2a8 [16];
  char *local_298;
  ulong local_290;
  ulong uStack_288;
  char *local_280;
  ulong local_270;
  ulong uStack_268;
  char *local_260;
  undefined8 local_250;
  undefined8 *******local_248;
  void *local_240;
  vector local_238;
  undefined7 uStack_237;
  vector vStack_230;
  undefined6 uStack_22f;
  undefined uStack_229;
  undefined uStack_228;
  undefined6 uStack_227;
  undefined uStack_221;
  basic_string local_220 [4];
  char *local_210;
  byte local_208 [16];
  char *local_1f8;
  ulong local_1f0;
  undefined8 local_1e8;
  char *local_1e0;
  ulong local_1d8;
  undefined8 uStack_1d0;
  void *local_1c8;
  ulong local_1c0;
  undefined8 uStack_1b8;
  void *local_1b0;
  ulong local_1a8;
  undefined8 uStack_1a0;
  void *local_198;
  ulong local_190;
  ulong local_188;
  void *local_180;
  ulong local_178;
  undefined8 uStack_170;
  void *local_168;
  CommandLineArgumentParser aCStack_160 [16];
  undefined8 local_150;
  ulong local_148;
  char *local_140;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (param_1 < 0) {
    local_150 = 0;
    local_148 = 0;
    local_140 = (char *)0x0;
                    /* try { // try from 006e107c to 006e11b3 has its CatchHandler @ 006e2864 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_150);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_150);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_150);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_150);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_150);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_150);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_150);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_150);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_150);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_150);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_150);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_150);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_150);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_150);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_150);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_150);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_150);
    pcVar11 = (char *)((ulong)&local_150 | 1);
    if ((local_150 & 1) != 0) {
      pcVar11 = local_140;
    }
    SystemDialogUtil::showMessageBoxOk("GIANTS Engine 9.5.0",pcVar11,true);
    if ((local_150 & 1) != 0) {
      operator_delete(local_140);
    }
    this_03 = (EngineApplication *)0x0;
    goto LAB_006e2284;
  }
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (param_3 + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)this);
  CommandLineArgumentParser::CommandLineArgumentParser(aCStack_160,param_1,param_2);
  bVar6 = CommandLineArgumentParser::is(aCStack_160,"-server");
  param_3[0xa8] = (EngineApplicationDesc)(bVar6 & 1);
  SystemDialogUtil::setInteractiveMode((bool)(~bVar6 & 1));
  bVar6 = CommandLineArgumentParser::is(aCStack_160,"-disableShaderCompiler");
  local_178 = 0;
  uStack_170 = 0;
  local_168 = (void *)0x0;
  param_3[0xb0] = (EngineApplicationDesc)(bVar6 & 1);
                    /* try { // try from 006e1024 to 006e1037 has its CatchHandler @ 006e2804 */
  pcVar11 = (char *)CommandLineArgumentParser::getStr(aCStack_160,"-profile",(char *)0x0);
  if (pcVar11 == (char *)0x0) {
                    /* try { // try from 006e11cc to 006e11ef has its CatchHandler @ 006e264c */
    lVar15 = CommandLineArgumentParser::getStr(aCStack_160,"-name",(char *)0x0);
    if (lVar15 != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)this);
    }
  }
  else {
    __n = strlen(pcVar11);
    if (0xffffffffffffffef < __n) {
                    /* try { // try from 006e24d8 to 006e24df has its CatchHandler @ 006e2694 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      pcVar35 = (char *)((ulong)&local_150 | 1);
      local_150 = CONCAT71(local_150._1_7_,(char)((int)__n << 1));
      if (__n != 0) goto LAB_006e123c;
    }
    else {
      uVar12 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 006e1210 to 006e1217 has its CatchHandler @ 006e2694 */
      pcVar35 = (char *)operator_new(uVar12);
      local_150 = uVar12 | 1;
      local_148 = __n;
      local_140 = pcVar35;
LAB_006e123c:
      memcpy(pcVar35,pcVar11,__n);
    }
    pcVar35[__n] = '\0';
    pcVar11 = (char *)((ulong)&local_150 | 1);
    uVar12 = local_150 >> 1 & 0x7f;
    if ((local_150 & 1) != 0) {
      pcVar11 = local_140;
      uVar12 = local_148;
    }
    if (uVar12 != 0) {
      pcVar35 = pcVar11;
      if (7 < uVar12) {
        uVar28 = uVar12 & 0xfffffffffffffff8;
        pcVar35 = pcVar11 + uVar28;
        pcVar34 = pcVar11 + 3;
        uVar16 = uVar28;
        do {
          uVar37 = NEON_cmeq(*(undefined8 *)(pcVar34 + -3),0x5c5c5c5c5c5c5c5c,1);
          if ((uVar37 & 1) != 0) {
            pcVar34[-3] = '/';
          }
          if ((uVar37 & 0x100) != 0) {
            pcVar34[-2] = '/';
          }
          if ((uVar37 & 0x10000) != 0) {
            pcVar34[-1] = '/';
          }
          if ((uVar37 & 0x1000000) != 0) {
            *pcVar34 = '/';
          }
          if ((uVar37 & 0x100000000) != 0) {
            pcVar34[1] = '/';
          }
          if ((uVar37 & 0x10000000000) != 0) {
            pcVar34[2] = '/';
          }
          if ((uVar37 & 0x1000000000000) != 0) {
            pcVar34[3] = '/';
          }
          if ((uVar37 & 0x100000000000000) != 0) {
            pcVar34[4] = '/';
          }
          uVar16 = uVar16 - 8;
          pcVar34 = pcVar34 + 8;
        } while (uVar16 != 0);
        if (uVar12 == uVar28) goto LAB_006e136c;
      }
      do {
        if (*pcVar35 == '\\') {
          *pcVar35 = '/';
        }
        pcVar35 = pcVar35 + 1;
      } while (pcVar35 != pcVar11 + uVar12);
    }
LAB_006e136c:
    local_190 = 0;
    local_188 = 0;
    local_180 = (void *)0x0;
                    /* try { // try from 006e1374 to 006e13bf has its CatchHandler @ 006e27d8 */
    PathUtil::getBasePath((basic_string *)&local_150,(basic_string *)&local_190,true);
    uVar12 = (ulong)((byte)local_190 >> 1);
    if ((local_190 & 1) != 0) {
      uVar12 = local_188;
    }
    if (uVar12 != 0) {
      PathUtil::overrideUserProfilePath((basic_string *)&local_190);
      PathUtil::getFilename((basic_string *)&local_150,(basic_string *)&local_178,true);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=(this,(basic_string *)&local_178);
    }
    if (((byte)local_190 & 1) != 0) {
      operator_delete(local_180);
    }
    if ((local_150 & 1) != 0) {
      operator_delete(local_140);
    }
  }
                    /* try { // try from 006e13e4 to 006e1417 has its CatchHandler @ 006e2804 */
  uVar7 = CommandLineArgumentParser::is(aCStack_160,"-scriptDebug");
  *(uint *)(param_3 + 0xac) = *(uint *)(param_3 + 0xac) | uVar7 & 1;
  uVar12 = CommandLineArgumentParser::is(aCStack_160,"-scriptProfile");
  uVar7 = 6;
  if ((uVar12 & 1) == 0) {
    uVar7 = 4;
  }
  local_190 = 0;
  local_188 = 0;
  local_180 = (void *)0x0;
  *(uint *)(param_3 + 0xac) = uVar7 | *(uint *)(param_3 + 0xac);
                    /* try { // try from 006e1440 to 006e1447 has its CatchHandler @ 006e269c */
  PathUtil::getAppBasePath((basic_string *)&local_190);
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = (void *)0x0;
  pEVar24 = *(EngineApplicationDesc **)(param_3 + 0x18);
  if (((byte)param_3[8] & 1) == 0) {
    pEVar24 = param_3 + 9;
  }
                    /* try { // try from 006e1464 to 006e1473 has its CatchHandler @ 006e27fc */
  uVar12 = PathUtil::getUserProfileAppPath((char *)pEVar24,(basic_string *)&local_1a8,false,true);
  pEVar24 = param_3 + 9;
  if ((uVar12 & 1) == 0) {
    if (((byte)param_3[8] & 1) != 0) {
      pEVar24 = *(EngineApplicationDesc **)(param_3 + 0x18);
    }
                    /* try { // try from 006e1634 to 006e1647 has its CatchHandler @ 006e27fc */
    SystemDialogUtil::showMessageBoxOk((char *)pEVar24,"Error: Can\'t read profile path",true);
    this_03 = (EngineApplication *)0x0;
    *param_5 = 1;
  }
  else {
    if (param_3[0xa8] != (EngineApplicationDesc)0x0) {
                    /* try { // try from 006e1488 to 006e149b has its CatchHandler @ 006e25d8 */
      FUN_006cadd8(&local_150,&local_1a8,"ServerMutex");
                    /* try { // try from 006e149c to 006e14a3 has its CatchHandler @ 006e2654 */
      pAVar13 = (ApplicationMutex *)operator_new(1);
      pcVar11 = (char *)((ulong)&local_150 | 1);
      if ((local_150 & 1) != 0) {
        pcVar11 = local_140;
      }
                    /* try { // try from 006e14c0 to 006e14c7 has its CatchHandler @ 006e25c8 */
      ApplicationMutex::ApplicationMutex(pAVar13,pcVar11,true);
      *param_4 = pAVar13;
                    /* try { // try from 006e14cc to 006e14d3 has its CatchHandler @ 006e2654 */
      uVar12 = ApplicationMutex::isInit();
      if ((uVar12 & 1) == 0) {
        pAVar13 = *param_4;
        if (pAVar13 != (ApplicationMutex *)0x0) {
          ApplicationMutex::~ApplicationMutex(pAVar13);
          operator_delete(pAVar13);
        }
        *param_5 = 1;
        if ((local_150 & 1) != 0) {
          operator_delete(local_140);
        }
        this_03 = (EngineApplication *)0x0;
        goto joined_r0x006e1654;
      }
      if ((local_150 & 1) != 0) {
        operator_delete(local_140);
      }
    }
                    /* try { // try from 006e14f0 to 006e14fb has its CatchHandler @ 006e27fc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (param_3 + 0x38),(basic_string *)&local_1a8);
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1b0 = (void *)0x0;
    if (0 < param_1) {
                    /* try { // try from 006e1510 to 006e1527 has its CatchHandler @ 006e2640 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_1c0);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (param_3 + 0x50),(basic_string *)&local_1c0);
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = (void *)0x0;
                    /* try { // try from 006e1530 to 006e1587 has its CatchHandler @ 006e280c */
    CommandLineArgumentParser::getArgs(aCStack_160,(basic_string *)&local_1d8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (param_3 + 0x68),(basic_string *)&local_1d8);
    this_00 = (basic_string *)(param_3 + 0x20);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              this_00,(basic_string *)&local_190);
    pEVar25 = *(EngineApplicationDesc **)(param_3 + 0x30);
    if (((byte)param_3[0x20] & 1) == 0) {
      pEVar25 = param_3 + 0x21;
    }
    FileManager::setAppBasePath((FileManager *)FileManager::s_singletonFileManager,(char *)pEVar25);
    pNVar14 = (NativeFileLoader *)operator_new(0x58);
    pEVar25 = param_3 + 0x21;
    if (((byte)param_3[0x20] & 1) != 0) {
      pEVar25 = *(EngineApplicationDesc **)(param_3 + 0x30);
    }
                    /* try { // try from 006e15a4 to 006e15b7 has its CatchHandler @ 006e25fc */
    NativeFileLoader::NativeFileLoader(pNVar14,(char *)pEVar25,"","",10);
                    /* try { // try from 006e15b8 to 006e15d7 has its CatchHandler @ 006e280c */
    FileManager::addFileLoader
              ((FileManager *)FileManager::s_singletonFileManager,(IFileLoader *)pNVar14);
    uVar12 = CommandLineArgumentParser::is(aCStack_160,"-externalScripts");
    if ((uVar12 & 1) != 0) {
                    /* try { // try from 006e15dc to 006e15ef has its CatchHandler @ 006e257c */
      FUN_006cadd8(&local_150,this_00,"dataS/scripts/");
      local_1f0 = 0;
      local_1e8 = 0;
      local_1e0 = (char *)0x0;
                    /* try { // try from 006e15f8 to 006e161b has its CatchHandler @ 006e2668 */
      lVar15 = CommandLineArgumentParser::getStr(aCStack_160,"-externalScriptsDir",(char *)0x0);
      if (lVar15 == 0) {
                    /* try { // try from 006e16e4 to 006e16ff has its CatchHandler @ 006e2668 */
        PathUtil::buildAbsolutePath(this_00,"../bin/dataS/scripts/",(basic_string *)&local_1f0);
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)&local_1f0);
      }
      pNVar14 = (NativeFileLoader *)operator_new(0x58);
      pcVar11 = (char *)((ulong)&local_150 | 1);
      if ((local_150 & 1) != 0) {
        pcVar11 = local_140;
      }
      pcVar35 = (char *)((ulong)&local_1f0 | 1);
      if ((local_1f0 & 1) != 0) {
        pcVar35 = local_1e0;
      }
                    /* try { // try from 006e1734 to 006e1743 has its CatchHandler @ 006e256c */
      NativeFileLoader::NativeFileLoader(pNVar14,pcVar11,pcVar35,"dataS/scripts/",9);
                    /* try { // try from 006e1744 to 006e1753 has its CatchHandler @ 006e2668 */
      FileManager::addFileLoader
                ((FileManager *)FileManager::s_singletonFileManager,(IFileLoader *)pNVar14);
      if ((local_1f0 & 1) != 0) {
        operator_delete(local_1e0);
      }
      if ((local_150 & 1) != 0) {
        operator_delete(local_140);
      }
    }
                    /* try { // try from 006e1774 to 006e177f has its CatchHandler @ 006e280c */
    AndroidSysUtil::addSystemFileLoaders();
    this_01 = (CopyProtection *)operator_new(0x48);
    pEVar27 = *(EngineApplicationDesc **)(param_3 + 0x48);
    pEVar25 = param_3 + 0x21;
    if (((byte)param_3[0x20] & 1) != 0) {
      pEVar25 = *(EngineApplicationDesc **)(param_3 + 0x30);
    }
    if (((byte)param_3[0x38] & 1) == 0) {
      pEVar27 = param_3 + 0x39;
    }
                    /* try { // try from 006e17a8 to 006e17b3 has its CatchHandler @ 006e25f8 */
    CopyProtection::CopyProtection(this_01,0x3cf02b77,(char *)pEVar25,(char *)pEVar27);
    *(CopyProtection **)(param_3 + 0x98) = this_01;
                    /* try { // try from 006e17bc to 006e17cf has its CatchHandler @ 006e25f4 */
    pcVar11 = (char *)CommandLineArgumentParser::getStr(aCStack_160,"-forceLanguage",(char *)0x0);
    if (pcVar11 != (char *)0x0) {
      LVar31 = 0;
      do {
                    /* try { // try from 006e17dc to 006e17e7 has its CatchHandler @ 006e2810 */
        pcVar35 = (char *)LanguageUtil::getCodeStr(LVar31);
        iVar8 = strcasecmp(pcVar11,pcVar35);
        if (iVar8 == 0) {
                    /* try { // try from 006e1804 to 006e180b has its CatchHandler @ 006e2534 */
          LanguageUtil::setLanguage(LVar31);
          break;
        }
        LVar31 = LVar31 + 1;
      } while (LVar31 != 0x18);
    }
                    /* try { // try from 006e180c to 006e181f has its CatchHandler @ 006e25f0 */
    FUN_006cadd8(&local_1f0,&local_1a8,"game.xml");
                    /* try { // try from 006e1820 to 006e1833 has its CatchHandler @ 006e25e0 */
    FUN_006cadd8(local_208,&local_190,"game.xml");
    pcVar35 = (char *)((ulong)&local_1f0 | 1);
    pcVar11 = pcVar35;
    if ((local_1f0 & 1) != 0) {
      pcVar11 = local_1e0;
    }
                    /* try { // try from 006e184c to 006e191f has its CatchHandler @ 006e26a4 */
    iVar8 = NativeFileUtil::getFileType(pcVar11,true);
    if (iVar8 == 1) {
LAB_006e1898:
      pcVar34 = (char *)((ulong)local_208 | 1);
      pcVar11 = pcVar34;
      if ((local_208[0] & 1) != 0) {
        pcVar11 = local_1f8;
      }
      uVar12 = NativeFileUtil::getModifiedTimestamp(pcVar11);
      pcVar11 = pcVar35;
      if ((local_1f0 & 1) != 0) {
        pcVar11 = local_1e0;
      }
      uVar16 = NativeFileUtil::getModifiedTimestamp(pcVar11);
      if ((uVar16 < uVar12) &&
         (uVar12 = SystemDialogUtil::showMessageBoxYesNo
                             ("Replace profile game.xml",
                              "The file game.xml in the program path is newer than the version in the profile path.\n\nDo you want to replace the profile file game.xml with the one in the program directory?"
                              ,false), (uVar12 & 1) != 0)) {
        pcVar11 = pcVar34;
        if ((local_208[0] & 1) != 0) {
          pcVar11 = local_1f8;
        }
        pcVar1 = pcVar35;
        if ((local_1f0 & 1) != 0) {
          pcVar1 = local_1e0;
        }
        FileManager::copyFile
                  ((FileManager *)FileManager::s_singletonFileManager,pcVar11,pcVar1,true);
      }
                    /* try { // try from 006e1920 to 006e1927 has its CatchHandler @ 006e268c */
      this_02 = (long *)operator_new(0xd8);
                    /* try { // try from 006e192c to 006e192f has its CatchHandler @ 006e25b8 */
      DomXMLFile::DomXMLFile((DomXMLFile *)this_02);
      pcVar11 = pcVar35;
      if ((local_1f0 & 1) != 0) {
        pcVar11 = local_1e0;
      }
                    /* try { // try from 006e1940 to 006e194b has its CatchHandler @ 006e268c */
      uVar12 = DomXMLFile::loadFromFile((DomXMLFile *)this_02,pcVar11,true);
      if ((uVar12 & 1) == 0) {
        (**(code **)(*this_02 + 8))(this_02);
                    /* try { // try from 006e1dac to 006e1e03 has its CatchHandler @ 006e268c */
        uVar12 = SystemDialogUtil::showMessageBoxYesNo
                           ("Replace profile game.xml",
                            "The file game.xml in the profile path is corrupted.\n\nDo you want to replace the profile file game.xml with the one in the program directory?"
                            ,true);
        if ((uVar12 & 1) != 0) {
          if ((local_208[0] & 1) != 0) {
            pcVar34 = local_1f8;
          }
          pcVar11 = pcVar35;
          if ((local_1f0 & 1) != 0) {
            pcVar11 = local_1e0;
          }
          uVar12 = FileManager::copyFile
                             ((FileManager *)FileManager::s_singletonFileManager,pcVar34,pcVar11,
                              true);
          if ((uVar12 & 1) == 0) {
            local_150 = 0;
            local_148 = 0;
            local_140 = (char *)0x0;
                    /* try { // try from 006e21a4 to 006e2223 has its CatchHandler @ 006e2580 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)&local_150);
            FUN_006e28d0(&local_150,local_208);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)&local_150);
            FUN_006e28d0(&local_150,&local_1f0);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)&local_150);
            if (((byte)param_3[8] & 1) != 0) {
              pEVar24 = *(EngineApplicationDesc **)(param_3 + 0x18);
            }
            pcVar11 = (char *)((ulong)&local_150 | 1);
            if ((local_150 & 1) != 0) {
              pcVar11 = local_140;
            }
            SystemDialogUtil::showMessageBoxOk((char *)pEVar24,pcVar11,true);
            goto LAB_006e2224;
          }
          this_02 = (long *)operator_new(0xd8);
                    /* try { // try from 006e1e08 to 006e1e0b has its CatchHandler @ 006e24ec */
          DomXMLFile::DomXMLFile((DomXMLFile *)this_02);
          pcVar11 = pcVar35;
          if ((local_1f0 & 1) != 0) {
            pcVar11 = local_1e0;
          }
                    /* try { // try from 006e1e1c to 006e1e2f has its CatchHandler @ 006e268c */
          DomXMLFile::loadFromFile((DomXMLFile *)this_02,pcVar11,true);
          uVar12 = DomXMLFile::isLoaded();
          if ((uVar12 & 1) != 0) goto LAB_006e1950;
          (**(code **)(*this_02 + 8))(this_02);
        }
        local_150 = 0;
        local_148 = 0;
        local_140 = (char *)0x0;
                    /* try { // try from 006e1e4c to 006e1ec3 has its CatchHandler @ 006e25dc */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_150);
        if ((local_1f0 & 1) != 0) {
          pcVar35 = local_1e0;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_150,(ulong)pcVar35);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_150);
        if (((byte)param_3[8] & 1) != 0) {
          pEVar24 = *(EngineApplicationDesc **)(param_3 + 0x18);
        }
        pcVar11 = (char *)((ulong)&local_150 | 1);
        if ((local_150 & 1) != 0) {
          pcVar11 = local_140;
        }
        SystemDialogUtil::showMessageBoxOk((char *)pEVar24,pcVar11,true);
        goto LAB_006e2224;
      }
LAB_006e1950:
      *(long **)param_3 = this_02;
                    /* try { // try from 006e1958 to 006e195f has its CatchHandler @ 006e2568 */
      DomXMLFile::DomXMLFile((DomXMLFile *)&local_150);
                    /* try { // try from 006e1960 to 006e196b has its CatchHandler @ 006e2560 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_220);
                    /* try { // try from 006e196c to 006e19a7 has its CatchHandler @ 006e27c8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)local_220);
      pcVar11 = (char *)((ulong)local_220 | 1);
      if (((byte)local_220[0] & 1) != 0) {
        pcVar11 = local_210;
      }
      DomXMLFile::loadFromFile((DomXMLFile *)&local_150,pcVar11,true);
      uVar12 = DomXMLFile::isLoaded();
      if ((uVar12 & 1) != 0) {
        uStack_221 = 0;
        local_238 = (vector)0x2c;
        uStack_22f = 0x75612e737075;
        uStack_237 = 0x72476f69647561;
        vStack_230 = (vector)0x6f;
        uStack_229 = 100;
        uStack_228 = 0x69;
        uStack_227 = 0x70756f72476f;
                    /* try { // try from 006e19dc to 006e19e3 has its CatchHandler @ 006e24f8 */
        uVar7 = DomXMLFile::getNumElements((DomXMLFile *)&local_150,(char *)((ulong)&local_238 | 1))
        ;
        local_248 = (undefined8 *******)0x0;
        local_240 = (void *)0x0;
        local_250 = &local_248;
                    /* try { // try from 006e1a04 to 006e1a4f has its CatchHandler @ 006e252c */
        pppppppuVar17 = (undefined8 *******)operator_new(0x40);
        *(undefined4 *)(pppppppuVar17 + 4) = 0;
        pppppppuVar17[6] = (undefined8 ******)0x0;
        pppppppuVar17[7] = (undefined8 ******)0x0;
        pppppppuVar17[5] = (undefined8 ******)0x0;
        *pppppppuVar17 = (undefined8 ******)0x0;
        pppppppuVar17[1] = (undefined8 ******)0x0;
        pppppppuVar17[2] = &local_248;
        local_250 = pppppppuVar17;
        local_248 = pppppppuVar17;
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)pppppppuVar17,(__tree_node_base *)pppppppuVar17);
        local_240 = (void *)((long)local_240 + 1);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)(pppppppuVar17 + 5));
        if (uVar7 != 0xffffffff) {
          pppppuVar32 = (undefined8 *****)((ulong)&local_2c0 | 1);
          uVar29 = 0;
          do {
                    /* try { // try from 006e1aa8 to 006e1ab7 has its CatchHandler @ 006e26b4 */
            FUN_006cadd8(local_2a8,&local_238,&DAT_0050332d);
                    /* try { // try from 006e1ab8 to 006e1ac3 has its CatchHandler @ 006e26bc */
            std::__ndk1::to_string(uVar29);
            pppppuVar19 = pppppuVar32;
            if (((ulong)local_2c0 & 1) != 0) {
              pppppuVar19 = local_2b0;
            }
                    /* try { // try from 006e1adc to 006e1ae3 has its CatchHandler @ 006e26cc */
            puVar18 = (ulong *)std::__ndk1::
                               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               ::append((char *)local_2a8,(ulong)pppppuVar19);
            local_280 = (char *)puVar18[2];
            uStack_288 = puVar18[1];
            local_290 = *puVar18;
            puVar18[1] = 0;
            puVar18[2] = 0;
            *puVar18 = 0;
                    /* try { // try from 006e1afc to 006e1b07 has its CatchHandler @ 006e26ec */
            puVar18 = (ulong *)std::__ndk1::
                               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               ::append((char *)&local_290);
            local_260 = (char *)puVar18[2];
            uStack_268 = puVar18[1];
            local_270 = *puVar18;
            puVar18[1] = 0;
            puVar18[2] = 0;
            *puVar18 = 0;
            if ((local_290 & 1) != 0) {
              operator_delete(local_280);
            }
            if (((ulong)local_2c0 & 1) != 0) {
              operator_delete(local_2b0);
            }
            if ((local_2a8[0] & 1) != 0) {
              operator_delete(local_298);
            }
                    /* try { // try from 006e1b40 to 006e1b4f has its CatchHandler @ 006e2724 */
            FUN_006cadd8(&local_290,&local_270,&DAT_004ee90a);
                    /* try { // try from 006e1b50 to 006e1b63 has its CatchHandler @ 006e272c */
            FUN_006cadd8(local_2a8,&local_270,"#name");
            pcVar11 = (char *)((ulong)&local_290 | 1);
            if ((local_290 & 1) != 0) {
              pcVar11 = local_280;
            }
                    /* try { // try from 006e1b74 to 006e1b7f has its CatchHandler @ 006e273c */
            uVar9 = Properties::getUInt((Properties *)&local_150,pcVar11,0);
            if (0 < (int)uVar9) {
              pcVar11 = (char *)((ulong)local_2a8 | 1);
              if ((local_2a8[0] & 1) != 0) {
                pcVar11 = local_298;
              }
                    /* try { // try from 006e1ba0 to 006e1bab has its CatchHandler @ 006e2690 */
              pcVar11 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_150,pcVar11,false);
              if (pcVar11 != (char *)0x0) {
                pppppuVar19 = (undefined8 *****)strlen(pcVar11);
                if ((undefined8 *****)0xffffffffffffffef < pppppuVar19) {
                    /* try { // try from 006e24e0 to 006e24e7 has its CatchHandler @ 006e2648 */
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                if (pppppuVar19 < (undefined8 *****)0x17) {
                  local_2c0 = (undefined8 *****)
                              CONCAT71(local_2c0._1_7_,(char)((int)pppppuVar19 << 1));
                  __dest = pppppuVar32;
                  if (pppppuVar19 != (undefined8 *****)0x0) goto LAB_006e1c38;
                }
                else {
                    /* try { // try from 006e1c20 to 006e1c27 has its CatchHandler @ 006e25c4 */
                  __dest = (undefined8 *****)
                           operator_new((ulong)(pppppuVar19 + 2) & 0xfffffffffffffff0);
                  local_2c0 = (undefined8 *****)((ulong)(pppppuVar19 + 2) & 0xfffffffffffffff0 | 1);
                  pppppuStack_2b8 = pppppuVar19;
                  local_2b0 = __dest;
LAB_006e1c38:
                  memcpy(__dest,pcVar11,(size_t)pppppuVar19);
                }
                *(undefined *)((long)__dest + (long)pppppuVar19) = 0;
                pppppppuVar17 = &local_248;
                pppppppuVar33 = &local_248;
                pppppppuVar23 = local_248;
                while (pppppppuVar23 != (undefined8 *******)0x0) {
                  while (pppppppuVar33 = pppppppuVar23, uVar9 < *(uint *)(pppppppuVar33 + 4)) {
                    pppppppuVar17 = pppppppuVar33;
                    pppppppuVar23 = (undefined8 *******)*pppppppuVar33;
                    if ((undefined8 *******)*pppppppuVar33 == (undefined8 *******)0x0) {
                      ppppppuVar36 = *pppppppuVar33;
                      goto joined_r0x006e1cf0;
                    }
                  }
                  if (uVar9 <= *(uint *)(pppppppuVar33 + 4)) break;
                  pppppppuVar17 = pppppppuVar33 + 1;
                  pppppppuVar23 = (undefined8 *******)*pppppppuVar17;
                }
                ppppppuVar36 = *pppppppuVar17;
joined_r0x006e1cf0:
                if (ppppppuVar36 == (undefined8 ******)0x0) {
                    /* try { // try from 006e1cac to 006e1cb3 has its CatchHandler @ 006e2584 */
                  ppppppuVar36 = (undefined8 ******)operator_new(0x40);
                  *(uint *)(ppppppuVar36 + 4) = uVar9;
                  ppppppuVar36[6] = (undefined8 *****)0x0;
                  ppppppuVar36[7] = (undefined8 *****)0x0;
                  ppppppuVar36[5] = (undefined8 *****)0x0;
                  *ppppppuVar36 = (undefined8 *****)0x0;
                  ppppppuVar36[1] = (undefined8 *****)0x0;
                  ppppppuVar36[2] = pppppppuVar33;
                  *pppppppuVar17 = ppppppuVar36;
                  ppppppuVar22 = ppppppuVar36;
                  if ((undefined8 *******)*local_250 != (undefined8 *******)0x0) {
                    ppppppuVar22 = *pppppppuVar17;
                    local_250 = (undefined8 *******)*local_250;
                  }
                  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                            ((__tree_node_base *)local_248,(__tree_node_base *)ppppppuVar22);
                  local_240 = (void *)((long)local_240 + 1);
                }
                if ((*(byte *)(ppppppuVar36 + 5) & 1) != 0) {
                  operator_delete(ppppppuVar36[7]);
                }
                ppppppuVar36[6] = pppppuStack_2b8;
                ppppppuVar36[5] = local_2c0;
                ppppppuVar36[7] = local_2b0;
              }
            }
            if ((local_2a8[0] & 1) != 0) {
              operator_delete(local_298);
            }
            if ((local_290 & 1) != 0) {
              operator_delete(local_280);
            }
            if ((local_270 & 1) != 0) {
              operator_delete(local_260);
            }
            bVar5 = uVar29 != uVar7;
            uVar29 = uVar29 + 1;
          } while (bVar5);
        }
                    /* try { // try from 006e1f7c to 006e1f93 has its CatchHandler @ 006e24f0 */
        FUN_006cadd8(&local_270,&local_238,"#default");
        pcVar11 = (char *)((ulong)&local_270 | 1);
        if ((local_270 & 1) != 0) {
          pcVar11 = local_260;
        }
                    /* try { // try from 006e1fa8 to 006e1fbf has its CatchHandler @ 006e2538 */
        uVar7 = Properties::getUInt((Properties *)&local_150,pcVar11,0);
        AudioSource::setGroups((map *)&local_250,uVar7);
        if ((local_270 & 1) != 0) {
          operator_delete(local_260);
        }
        std::__ndk1::
        __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
        ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                   *)&local_250,(__tree_node *)local_248);
        if (((byte)local_238 & 1) != 0) {
          operator_delete((void *)CONCAT17(uStack_221,CONCAT61(uStack_227,uStack_228)));
        }
      }
                    /* try { // try from 006e1fec to 006e20b7 has its CatchHandler @ 006e27c8 */
      bVar6 = CommandLineArgumentParser::is(aCStack_160,"-restart");
      param_3[0x80] = (EngineApplicationDesc)(bVar6 & 1);
      bVar6 = CommandLineArgumentParser::is(aCStack_160,"-autoConnectDebugger");
      param_3[0x81] = (EngineApplicationDesc)(bVar6 & 1);
      uVar20 = CommandLineArgumentParser::getStr(aCStack_160,"-debuggerAddress","");
      *(undefined8 *)(param_3 + 0x88) = uVar20;
      bVar6 = CommandLineArgumentParser::is(aCStack_160,"-mpDebuggable");
      param_3[0x90] = (EngineApplicationDesc)(bVar6 & 1);
      bVar6 = CommandLineArgumentParser::is(aCStack_160,"-disableNotification");
      param_3[0xa0] = (EngineApplicationDesc)(~bVar6 & 1);
      CommandLineArgumentParser::is(aCStack_160,"-disableFramerateLimiter");
      *(undefined4 *)(param_3 + 0xa4) = 0x41f00000;
      param_3[0xa1] = (EngineApplicationDesc)0x1;
      uVar10 = CommandLineArgumentParser::getInt(aCStack_160,"-threadAffinityMask",-1);
      *(undefined4 *)(param_3 + 0x94) = uVar10;
                    /* try { // try from 006e20c0 to 006e20d7 has its CatchHandler @ 006e255c */
      pcVar11 = (char *)CommandLineArgumentParser::getStr(aCStack_160,"-windowPosition","");
      if (pcVar11 != (char *)0x0) {
        local_238 = (vector)0x0;
        uStack_237 = 0;
        vStack_230 = (vector)0x0;
        uStack_22f = 0;
        uStack_229 = 0;
        uStack_228 = 0;
        uStack_227 = 0;
        uStack_221 = 0;
        local_250._2_6_ = (uint6)((ulong)local_250 >> 0x10) & 0xffffffffff00;
        local_250 = (undefined8 *******)CONCAT62(local_250._2_6_,0x2002);
                    /* try { // try from 006e20f0 to 006e2103 has its CatchHandler @ 006e2504 */
        StringUtil::split(pcVar11,(basic_string *)&local_250,'\"',true,&local_238);
        if (((ulong)local_250 & 1) != 0) {
          operator_delete(local_240);
        }
        uVar4 = uStack_237;
        vVar3 = local_238;
        pbVar21 = (byte *)CONCAT71(uStack_237,local_238);
        pbVar30 = (byte *)CONCAT17(uStack_229,CONCAT61(uStack_22f,vStack_230));
        if ((long)pbVar30 - (long)pbVar21 == 0x30) {
          pbVar26 = *(byte **)(pbVar21 + 0x10);
          if ((*pbVar21 & 1) == 0) {
            pbVar26 = pbVar21 + 1;
          }
          iVar8 = atoi((char *)pbVar26);
          *(int *)(param_3 + 0xd8) = iVar8;
          pbVar26 = pbVar21 + 0x19;
          if ((pbVar21[0x18] & 1) != 0) {
            pbVar26 = *(byte **)(pbVar21 + 0x28);
          }
          iVar8 = atoi((char *)pbVar26);
          *(int *)(param_3 + 0xdc) = iVar8;
        }
        else if (pbVar21 == (byte *)0x0) goto LAB_006e22f8;
        if (pbVar30 != pbVar21) {
          do {
            pbVar26 = pbVar30 + -0x18;
            if ((*pbVar26 & 1) != 0) {
              operator_delete(*(void **)(pbVar30 + -8));
            }
            pbVar30 = pbVar26;
          } while (pbVar26 != pbVar21);
          pbVar21 = (byte *)CONCAT71(uStack_237,local_238);
        }
        vStack_230 = vVar3;
        uStack_22f = (undefined6)uVar4;
        uStack_229 = (undefined)((uint7)uVar4 >> 0x30);
        operator_delete(pbVar21);
      }
LAB_006e22f8:
                    /* try { // try from 006e22f8 to 006e230f has its CatchHandler @ 006e2558 */
      pcVar11 = (char *)CommandLineArgumentParser::getStr(aCStack_160,"-windowResolution","");
      if (pcVar11 != (char *)0x0) {
        local_238 = (vector)0x0;
        uStack_237 = 0;
        vStack_230 = (vector)0x0;
        uStack_22f = 0;
        uStack_229 = 0;
        uStack_228 = 0;
        uStack_227 = 0;
        uStack_221 = 0;
        local_250._2_6_ = (uint6)((ulong)local_250 >> 0x10) & 0xffffffffff00;
        local_250 = (undefined8 *******)CONCAT62(local_250._2_6_,0x2002);
                    /* try { // try from 006e2328 to 006e233b has its CatchHandler @ 006e2500 */
        StringUtil::split(pcVar11,(basic_string *)&local_250,'\"',true,&local_238);
        if (((ulong)local_250 & 1) != 0) {
          operator_delete(local_240);
        }
        uVar4 = uStack_237;
        vVar3 = local_238;
        pbVar21 = (byte *)CONCAT71(uStack_237,local_238);
        pbVar30 = (byte *)CONCAT17(uStack_229,CONCAT61(uStack_22f,vStack_230));
        if ((long)pbVar30 - (long)pbVar21 == 0x30) {
          pbVar26 = *(byte **)(pbVar21 + 0x10);
          if ((*pbVar21 & 1) == 0) {
            pbVar26 = pbVar21 + 1;
          }
          iVar8 = atoi((char *)pbVar26);
          *(int *)(param_3 + 0xc0) = iVar8;
          pbVar26 = pbVar21 + 0x19;
          if ((pbVar21[0x18] & 1) != 0) {
            pbVar26 = *(byte **)(pbVar21 + 0x28);
          }
          iVar8 = atoi((char *)pbVar26);
          *(int *)(param_3 + 0xc4) = iVar8;
        }
        else if (pbVar21 == (byte *)0x0) goto LAB_006e23e0;
        if (pbVar30 != pbVar21) {
          do {
            pbVar26 = pbVar30 + -0x18;
            if ((*pbVar26 & 1) != 0) {
              operator_delete(*(void **)(pbVar30 + -8));
            }
            pbVar30 = pbVar26;
          } while (pbVar26 != pbVar21);
          pbVar21 = (byte *)CONCAT71(uStack_237,local_238);
        }
        vStack_230 = vVar3;
        uStack_22f = (undefined6)uVar4;
        uStack_229 = (undefined)((uint7)uVar4 >> 0x30);
        operator_delete(pbVar21);
      }
LAB_006e23e0:
                    /* try { // try from 006e23e0 to 006e248f has its CatchHandler @ 006e2608 */
      pcVar11 = (char *)CommandLineArgumentParser::getStr(aCStack_160,"-fullscreenMode","");
      if (pcVar11 != (char *)0x0) {
        iVar8 = strcasecmp(pcVar11,"exclusive_fullscreen");
        if ((iVar8 == 0) || (iVar8 = strcasecmp(pcVar11,"fullscreen"), iVar8 == 0)) {
          uVar10 = 2;
        }
        else {
          iVar8 = strcasecmp(pcVar11,"windowed_fullscreen");
          if (iVar8 == 0) {
            uVar10 = 1;
          }
          else {
            iVar8 = strcasecmp(pcVar11,"windowed");
            if (iVar8 != 0) goto LAB_006e246c;
            uVar10 = 0;
          }
        }
        param_3[200] = (EngineApplicationDesc)0x1;
        *(undefined4 *)(param_3 + 0xcc) = uVar10;
      }
LAB_006e246c:
      FUN_006c76e4(GenericSaveGameUtil::term);
      uVar20 = CommandLineArgumentParser::getStr(aCStack_160,"-baseShaderPath","");
      *(undefined8 *)(param_3 + 0xb8) = uVar20;
                    /* try { // try from 006e2498 to 006e249f has its CatchHandler @ 006e2554 */
      this_03 = (EngineApplication *)operator_new(0x380);
                    /* try { // try from 006e24a4 to 006e24ab has its CatchHandler @ 006e2548 */
      EngineApplication::EngineApplication(this_03,param_3);
      if (((byte)local_220[0] & 1) != 0) {
        operator_delete(local_210);
      }
      DomXMLFile::~DomXMLFile((DomXMLFile *)&local_150);
    }
    else {
      pcVar11 = (char *)((ulong)local_208 | 1);
      if ((local_208[0] & 1) != 0) {
        pcVar11 = local_1f8;
      }
      pcVar34 = pcVar35;
      if ((local_1f0 & 1) != 0) {
        pcVar34 = local_1e0;
      }
      uVar12 = FileManager::copyFile
                         ((FileManager *)FileManager::s_singletonFileManager,pcVar11,pcVar34,true);
      if ((uVar12 & 1) != 0) goto LAB_006e1898;
      local_150 = 0;
      local_148 = 0;
      local_140 = (char *)0x0;
                    /* try { // try from 006e1ed0 to 006e1f77 has its CatchHandler @ 006e260c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_150);
      pcVar11 = (char *)((ulong)local_208 | 1);
      if ((local_208[0] & 1) != 0) {
        pcVar11 = local_1f8;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_150,(ulong)pcVar11);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_150);
      if ((local_1f0 & 1) != 0) {
        pcVar35 = local_1e0;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_150,(ulong)pcVar35);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_150);
      if (((byte)param_3[8] & 1) != 0) {
        pEVar24 = *(EngineApplicationDesc **)(param_3 + 0x18);
      }
      pcVar11 = (char *)((ulong)&local_150 | 1);
      if ((local_150 & 1) != 0) {
        pcVar11 = local_140;
      }
      SystemDialogUtil::showMessageBoxOk((char *)pEVar24,pcVar11,true);
LAB_006e2224:
      *param_5 = 1;
      if ((local_150 & 1) != 0) {
        operator_delete(local_140);
      }
      this_03 = (EngineApplication *)0x0;
    }
    if ((local_208[0] & 1) != 0) {
      operator_delete(local_1f8);
    }
    if ((local_1f0 & 1) != 0) {
      operator_delete(local_1e0);
    }
    if ((local_1d8 & 1) != 0) {
      operator_delete(local_1c8);
    }
    if ((local_1c0 & 1) != 0) {
      operator_delete(local_1b0);
    }
  }
joined_r0x006e1654:
  if ((local_1a8 & 1) != 0) {
    operator_delete(local_198);
  }
  if ((local_190 & 1) != 0) {
    operator_delete(local_180);
  }
  if ((local_178 & 1) != 0) {
    operator_delete(local_168);
  }
LAB_006e2284:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return this_03;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


