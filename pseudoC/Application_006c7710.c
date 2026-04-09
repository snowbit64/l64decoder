// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Application
// Entry Point: 006c7710
// Size: 3780 bytes
// Signature: undefined __thiscall Application(Application * this, ApplicationDesc * param_1)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Application::Application(ApplicationDesc&) */

void __thiscall Application::Application(Application *this,ApplicationDesc *param_1)

{
  ApplicationDesc *pAVar1;
  ApplicationDesc *pAVar2;
  ApplicationDesc *pAVar3;
  long lVar4;
  bool bVar5;
  Application AVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  LANGUAGE_TYPE LVar12;
  undefined4 uVar13;
  ArchiveFileLoader *this_00;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  EngineManager *pEVar17;
  NetworkAvailability *this_01;
  AdsProviderManager *this_02;
  size_t __n;
  long lVar18;
  HeadTrackingDevice *this_03;
  GiantsNotificationManager *this_04;
  Application *pAVar19;
  undefined8 extraout_x1;
  basic_string *pbVar20;
  basic_string *__s;
  RENDERDEVICE_TYPE RVar21;
  ApplicationDesc *pAVar22;
  int iVar23;
  void *pvVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  float fVar33;
  undefined auVar34 [16];
  ulong local_200;
  undefined8 uStack_1f8;
  char *local_1f0;
  ulong local_1e8;
  undefined8 local_1e0;
  void *local_1d8;
  ulong local_1d0;
  undefined8 uStack_1c8;
  void *local_1c0;
  uint local_1b8 [4];
  char *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  size_t local_190;
  void *local_188;
  ApplicationDesc *local_158;
  ApplicationDesc *pAStack_150;
  ApplicationDesc *local_148;
  undefined8 uStack_140;
  ApplicationDesc *local_138;
  ApplicationDesc *pAStack_130;
  ApplicationDesc *local_128;
  char *pcStack_120;
  undefined local_118;
  undefined2 local_117;
  undefined4 local_114;
  char *local_110;
  undefined2 local_108;
  undefined8 local_100;
  ApplicationDesc local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  *(undefined ***)this = &PTR__Application_00fd8df8;
  *(undefined **)(this + 8) = &DAT_00fd8e58;
  Console::Console((Console *)(this + 0x10));
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  this[0x1ce] = (Application)0x0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = *(undefined8 *)param_1;
                    /* try { // try from 006c778c to 006c77bb has its CatchHandler @ 006c86e8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x1a8),(basic_string *)(param_1 + 8));
  uVar27 = NEON_fmov(0x3f800000,4);
  this[0x1c0] = *(Application *)(param_1 + 0xa8);
  *(undefined8 *)(this + 0x198) = uVar27;
  Network::init();
  initConsole();
  this_00 = (ArchiveFileLoader *)operator_new(0x80);
  pAVar22 = param_1 + 0x21;
  pAVar1 = param_1 + 0x39;
  pAVar2 = pAVar22;
  if (((byte)param_1[0x20] & 1) != 0) {
    pAVar2 = *(ApplicationDesc **)(param_1 + 0x30);
  }
  pAVar3 = pAVar1;
  if (((byte)param_1[0x38] & 1) != 0) {
    pAVar3 = *(ApplicationDesc **)(param_1 + 0x48);
  }
                    /* try { // try from 006c77e8 to 006c77ef has its CatchHandler @ 006c861c */
  ArchiveFileLoader::ArchiveFileLoader(this_00,(char *)pAVar2,(char *)pAVar3,5);
                    /* try { // try from 006c77f0 to 006c77ff has its CatchHandler @ 006c86e8 */
  FileManager::addFileLoader
            ((FileManager *)FileManager::s_singletonFileManager,(IFileLoader *)this_00);
  *(undefined8 *)(this + 0x1d8) = 0x101010101010101;
  *(undefined8 *)(this + 0x1e0) = 0x101010101010101;
  *(undefined8 *)(this + 0x1d0) = 0x101010101010101;
  *(undefined2 *)(this + 0x1c1) = 0x100;
                    /* try { // try from 006c7818 to 006c781f has its CatchHandler @ 006c8614 */
  DomXMLFile::DomXMLFile((DomXMLFile *)&local_158);
                    /* try { // try from 006c7820 to 006c7833 has its CatchHandler @ 006c8654 */
  uVar14 = DomXMLFile::loadFromFile((DomXMLFile *)&local_158,"dataS/settings.xml",true);
  if ((uVar14 & 1) == 0) {
    pAVar22 = *(ApplicationDesc **)(param_1 + 0x18);
    if (((byte)param_1[8] & 1) == 0) {
      pAVar22 = param_1 + 9;
    }
                    /* try { // try from 006c847c to 006c8493 has its CatchHandler @ 006c8654 */
    SystemDialogUtil::showMessageBoxOk
              ((char *)pAVar22,"Error: Settings initialization failed.\n",true);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
                    /* try { // try from 006c7844 to 006c7853 has its CatchHandler @ 006c8658 */
  iVar11 = DomXMLFile::getNumElements((DomXMLFile *)&local_158,"settings.languages.language");
  if (iVar11 == 0) {
LAB_006c8444:
    pAVar22 = *(ApplicationDesc **)(param_1 + 0x18);
    if (((byte)param_1[8] & 1) == 0) {
      pAVar22 = param_1 + 9;
    }
                    /* try { // try from 006c8454 to 006c846b has its CatchHandler @ 006c8658 */
    SystemDialogUtil::showMessageBoxOk
              ((char *)pAVar22,"Error: Languages initialization failed.\n",true);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  bVar5 = false;
  iVar23 = 0;
  uVar27 = extraout_x1;
LAB_006c786c:
  iVar23 = iVar23 + 1;
  do {
                    /* try { // try from 006c7888 to 006c7893 has its CatchHandler @ 006c8754 */
    FUN_006c93f0(&local_198,uVar27,"settings.languages.language(%u)#code",iVar23 + -1);
                    /* try { // try from 006c7894 to 006c78a3 has its CatchHandler @ 006c8750 */
    auVar34 = DomXMLFile::getValue((DomXMLFile *)&local_158,(char *)&local_198,false);
    uVar27 = auVar34._8_8_;
    if (auVar34._0_8_ != (char *)0x0) {
                    /* try { // try from 006c78a8 to 006c78af has its CatchHandler @ 006c874c */
      auVar34 = LanguageUtil::getLanguageFromCode(auVar34._0_8_,local_1b8);
      uVar27 = auVar34._8_8_;
      if ((auVar34 & (undefined  [16])0x1) != (undefined  [16])0x0) break;
    }
    iVar23 = iVar23 + 1;
    if (iVar23 - iVar11 == 1) {
      if (!bVar5) goto LAB_006c8444;
      goto LAB_006c78d4;
    }
  } while( true );
  bVar5 = true;
  this[(ulong)local_1b8[0] + 0x1d0] = (Application)0x1;
  if (iVar23 == iVar11) goto LAB_006c78d4;
  goto LAB_006c786c;
LAB_006c78d4:
                    /* try { // try from 006c78d4 to 006c78e7 has its CatchHandler @ 006c8610 */
  pcVar15 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_158,"settings#developmentLevel",false)
  ;
  if (pcVar15 == (char *)0x0) {
    AVar6 = (Application)0x0;
  }
  else {
    iVar11 = strcasecmp(pcVar15,"development");
    AVar6 = (Application)(iVar11 == 0);
  }
  this[0x1c1] = AVar6;
                    /* try { // try from 006c790c to 006c791f has its CatchHandler @ 006c860c */
  pcVar15 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_158,"settings#buildTypeParam",false);
  if (pcVar15 == (char *)0x0) {
    AVar6 = (Application)0x1;
  }
  else {
    iVar11 = strcasecmp(pcVar15,"CHINA_GAPP");
    AVar6 = (Application)(iVar11 != 0);
  }
  this[0x1c2] = AVar6;
  DomXMLFile::~DomXMLFile((DomXMLFile *)&local_158);
  if (this[0x1c1] != (Application)0x0) {
                    /* try { // try from 006c7954 to 006c796b has its CatchHandler @ 006c86e8 */
    lVar16 = EngineManager::getInstance();
    *(undefined *)(lVar16 + 0x338) = 1;
  }
  initLogging(this,param_1);
  local_158 = *(ApplicationDesc **)(param_1 + 0x18);
  local_148 = pAVar1;
  if (((byte)param_1[0x38] & 1) != 0) {
    local_148 = *(ApplicationDesc **)(param_1 + 0x48);
  }
  local_110 = "shared/font/defaultFont";
  if (((byte)param_1[8] & 1) == 0) {
    local_158 = param_1 + 9;
  }
  local_114 = 4;
  pAStack_150 = pAVar22;
  if (((byte)param_1[0x20] & 1) != 0) {
    pAStack_150 = *(ApplicationDesc **)(param_1 + 0x30);
  }
  uStack_140 = 0;
  local_138 = param_1 + 0x51;
  if (((byte)param_1[0x50] & 1) != 0) {
    local_138 = *(ApplicationDesc **)(param_1 + 0x60);
  }
  pAStack_130 = param_1 + 0x69;
  if (((byte)param_1[0x68] & 1) != 0) {
    pAStack_130 = *(ApplicationDesc **)(param_1 + 0x78);
  }
  local_108 = *(undefined2 *)(param_1 + 0x80);
  local_100 = *(undefined8 *)(param_1 + 0x88);
  local_117 = 0;
  local_118 = 0;
  local_f8 = param_1[0x90];
  local_f4 = *(undefined4 *)(param_1 + 0x94);
  pcStack_120 = "38871";
  local_f0 = *(undefined4 *)(param_1 + 0xac);
  if (param_1[0xa8] != (ApplicationDesc)0x0) {
    local_114 = 0;
  }
  local_128 = local_158;
                    /* try { // try from 006c7a2c to 006c7a37 has its CatchHandler @ 006c8680 */
  pEVar17 = (EngineManager *)EngineManager::getInstance();
  uVar14 = EngineManager::init1(pEVar17,(EngineManagerDesc *)&local_158);
  pAVar2 = param_1 + 9;
  if ((uVar14 & 1) == 0) {
    if (((byte)param_1[8] & 1) != 0) {
      pAVar2 = *(ApplicationDesc **)(param_1 + 0x18);
    }
                    /* try { // try from 006c84a4 to 006c84bb has its CatchHandler @ 006c8680 */
    SystemDialogUtil::showMessageBoxOk((char *)pAVar2,"Error: Engine initialization failed.\n",true)
    ;
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
                    /* try { // try from 006c7a44 to 006c7a6f has its CatchHandler @ 006c8688 */
  LVar12 = Properties::getInt(*(Properties **)(this + 0x188),"game.language",0x18);
  LVar12 = getBestLanguage(this,LVar12);
  LanguageUtil::setLanguage(LVar12);
  CopyProtection::fullCheck();
                    /* try { // try from 006c7a74 to 006c7d03 has its CatchHandler @ 006c86f0 */
  uVar13 = CopyProtection::getLanguagesMask();
  bVar7 = (byte)uVar13;
  auVar34[0] = bVar7 & SUB161(_DAT_004c4480,0);
  bVar8 = (byte)((uint)uVar13 >> 8);
  auVar34[1] = bVar8 & SUB161(_DAT_004c4480,1);
  bVar9 = (byte)((uint)uVar13 >> 0x10);
  auVar34[2] = bVar9 & SUB161(_DAT_004c4480,2);
  bVar10 = (byte)((uint)uVar13 >> 0x18);
  auVar34[3] = bVar10 & SUB161(_DAT_004c4480,3);
  auVar34[4] = bVar7 & SUB161(_DAT_004c4480,4);
  auVar34[5] = bVar8 & SUB161(_DAT_004c4480,5);
  auVar34[6] = bVar9 & SUB161(_DAT_004c4480,6);
  auVar34[7] = bVar10 & SUB161(_DAT_004c4480,7);
  auVar34[8] = bVar7 & SUB161(_DAT_004c4480,8);
  auVar34[9] = bVar8 & SUB161(_DAT_004c4480,9);
  auVar34[10] = bVar9 & SUB161(_DAT_004c4480,10);
  auVar34[11] = bVar10 & SUB161(_DAT_004c4480,0xb);
  auVar34[12] = bVar7 & SUB161(_DAT_004c4480,0xc);
  auVar34[13] = bVar8 & SUB161(_DAT_004c4480,0xd);
  auVar34[14] = bVar9 & SUB161(_DAT_004c4480,0xe);
  auVar34[15] = bVar10 & SUB161(_DAT_004c4480,0xf);
  auVar34 = NEON_cmeq(auVar34,0,2);
  if ((auVar34 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    this[0x1d0] = (Application)0x0;
  }
  if ((auVar34 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
    this[0x1d1] = (Application)0x0;
  }
  if ((auVar34 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    this[0x1d2] = (Application)0x0;
  }
  if ((auVar34 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
    this[0x1d3] = (Application)0x0;
  }
  auVar29[0] = bVar7 & SUB161(_DAT_004c32b0,0);
  auVar29[1] = bVar8 & SUB161(_DAT_004c32b0,1);
  auVar29[2] = bVar9 & SUB161(_DAT_004c32b0,2);
  auVar29[3] = bVar10 & SUB161(_DAT_004c32b0,3);
  auVar29[4] = bVar7 & SUB161(_DAT_004c32b0,4);
  auVar29[5] = bVar8 & SUB161(_DAT_004c32b0,5);
  auVar29[6] = bVar9 & SUB161(_DAT_004c32b0,6);
  auVar29[7] = bVar10 & SUB161(_DAT_004c32b0,7);
  auVar29[8] = bVar7 & SUB161(_DAT_004c32b0,8);
  auVar29[9] = bVar8 & SUB161(_DAT_004c32b0,9);
  auVar29[10] = bVar9 & SUB161(_DAT_004c32b0,10);
  auVar29[11] = bVar10 & SUB161(_DAT_004c32b0,0xb);
  auVar29[12] = bVar7 & SUB161(_DAT_004c32b0,0xc);
  auVar29[13] = bVar8 & SUB161(_DAT_004c32b0,0xd);
  auVar29[14] = bVar9 & SUB161(_DAT_004c32b0,0xe);
  auVar29[15] = bVar10 & SUB161(_DAT_004c32b0,0xf);
  auVar34 = NEON_cmeq(auVar29,0,2);
  if ((auVar34 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    this[0x1d4] = (Application)0x0;
  }
  if ((auVar34 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
    this[0x1d5] = (Application)0x0;
  }
  if ((auVar34 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    this[0x1d6] = (Application)0x0;
  }
  if ((auVar34 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
    this[0x1d7] = (Application)0x0;
  }
  auVar30[0] = bVar7 & SUB161(_DAT_004c3490,0);
  auVar30[1] = bVar8 & SUB161(_DAT_004c3490,1);
  auVar30[2] = bVar9 & SUB161(_DAT_004c3490,2);
  auVar30[3] = bVar10 & SUB161(_DAT_004c3490,3);
  auVar30[4] = bVar7 & SUB161(_DAT_004c3490,4);
  auVar30[5] = bVar8 & SUB161(_DAT_004c3490,5);
  auVar30[6] = bVar9 & SUB161(_DAT_004c3490,6);
  auVar30[7] = bVar10 & SUB161(_DAT_004c3490,7);
  auVar30[8] = bVar7 & SUB161(_DAT_004c3490,8);
  auVar30[9] = bVar8 & SUB161(_DAT_004c3490,9);
  auVar30[10] = bVar9 & SUB161(_DAT_004c3490,10);
  auVar30[11] = bVar10 & SUB161(_DAT_004c3490,0xb);
  auVar30[12] = bVar7 & SUB161(_DAT_004c3490,0xc);
  auVar30[13] = bVar8 & SUB161(_DAT_004c3490,0xd);
  auVar30[14] = bVar9 & SUB161(_DAT_004c3490,0xe);
  auVar30[15] = bVar10 & SUB161(_DAT_004c3490,0xf);
  auVar34 = NEON_cmeq(auVar30,0,2);
  if ((auVar34 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    this[0x1d8] = (Application)0x0;
  }
  if ((auVar34 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
    this[0x1d9] = (Application)0x0;
  }
  if ((auVar34 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    this[0x1da] = (Application)0x0;
  }
  if ((auVar34 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
    this[0x1db] = (Application)0x0;
  }
  auVar31[0] = bVar7 & SUB161(_DAT_004c57e0,0);
  auVar31[1] = bVar8 & SUB161(_DAT_004c57e0,1);
  auVar31[2] = bVar9 & SUB161(_DAT_004c57e0,2);
  auVar31[3] = bVar10 & SUB161(_DAT_004c57e0,3);
  auVar31[4] = bVar7 & SUB161(_DAT_004c57e0,4);
  auVar31[5] = bVar8 & SUB161(_DAT_004c57e0,5);
  auVar31[6] = bVar9 & SUB161(_DAT_004c57e0,6);
  auVar31[7] = bVar10 & SUB161(_DAT_004c57e0,7);
  auVar31[8] = bVar7 & SUB161(_DAT_004c57e0,8);
  auVar31[9] = bVar8 & SUB161(_DAT_004c57e0,9);
  auVar31[10] = bVar9 & SUB161(_DAT_004c57e0,10);
  auVar31[11] = bVar10 & SUB161(_DAT_004c57e0,0xb);
  auVar31[12] = bVar7 & SUB161(_DAT_004c57e0,0xc);
  auVar31[13] = bVar8 & SUB161(_DAT_004c57e0,0xd);
  auVar31[14] = bVar9 & SUB161(_DAT_004c57e0,0xe);
  auVar31[15] = bVar10 & SUB161(_DAT_004c57e0,0xf);
  auVar34 = NEON_cmeq(auVar31,0,2);
  if ((auVar34 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    this[0x1dc] = (Application)0x0;
  }
  if ((auVar34 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
    this[0x1dd] = (Application)0x0;
  }
  if ((auVar34 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    this[0x1de] = (Application)0x0;
  }
  if ((auVar34 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
    this[0x1df] = (Application)0x0;
  }
  auVar32[0] = bVar7 & SUB161(_DAT_004c5500,0);
  auVar32[1] = bVar8 & SUB161(_DAT_004c5500,1);
  auVar32[2] = bVar9 & SUB161(_DAT_004c5500,2);
  auVar32[3] = bVar10 & SUB161(_DAT_004c5500,3);
  auVar32[4] = bVar7 & SUB161(_DAT_004c5500,4);
  auVar32[5] = bVar8 & SUB161(_DAT_004c5500,5);
  auVar32[6] = bVar9 & SUB161(_DAT_004c5500,6);
  auVar32[7] = bVar10 & SUB161(_DAT_004c5500,7);
  auVar32[8] = bVar7 & SUB161(_DAT_004c5500,8);
  auVar32[9] = bVar8 & SUB161(_DAT_004c5500,9);
  auVar32[10] = bVar9 & SUB161(_DAT_004c5500,10);
  auVar32[11] = bVar10 & SUB161(_DAT_004c5500,0xb);
  auVar32[12] = bVar7 & SUB161(_DAT_004c5500,0xc);
  auVar32[13] = bVar8 & SUB161(_DAT_004c5500,0xd);
  auVar32[14] = bVar9 & SUB161(_DAT_004c5500,0xe);
  auVar32[15] = bVar10 & SUB161(_DAT_004c5500,0xf);
  auVar34 = NEON_cmeq(auVar32,0,2);
  if ((auVar34 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    this[0x1e0] = (Application)0x0;
  }
  if ((auVar34 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
    this[0x1e1] = (Application)0x0;
  }
  if ((auVar34 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    this[0x1e2] = (Application)0x0;
  }
  if ((auVar34 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
    this[0x1e3] = (Application)0x0;
  }
  auVar28[0] = bVar7 & SUB161(_DAT_004c3b90,0);
  auVar28[1] = bVar8 & SUB161(_DAT_004c3b90,1);
  auVar28[2] = bVar9 & SUB161(_DAT_004c3b90,2);
  auVar28[3] = bVar10 & SUB161(_DAT_004c3b90,3);
  auVar28[4] = bVar7 & SUB161(_DAT_004c3b90,4);
  auVar28[5] = bVar8 & SUB161(_DAT_004c3b90,5);
  auVar28[6] = bVar9 & SUB161(_DAT_004c3b90,6);
  auVar28[7] = bVar10 & SUB161(_DAT_004c3b90,7);
  auVar28[8] = bVar7 & SUB161(_DAT_004c3b90,8);
  auVar28[9] = bVar8 & SUB161(_DAT_004c3b90,9);
  auVar28[10] = bVar9 & SUB161(_DAT_004c3b90,10);
  auVar28[11] = bVar10 & SUB161(_DAT_004c3b90,0xb);
  auVar28[12] = bVar7 & SUB161(_DAT_004c3b90,0xc);
  auVar28[13] = bVar8 & SUB161(_DAT_004c3b90,0xd);
  auVar28[14] = bVar9 & SUB161(_DAT_004c3b90,0xe);
  auVar28[15] = bVar10 & SUB161(_DAT_004c3b90,0xf);
  auVar34 = NEON_cmeq(auVar28,0,2);
  if ((auVar34 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    this[0x1e4] = (Application)0x0;
  }
  if ((auVar34 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
    this[0x1e5] = (Application)0x0;
  }
  if ((auVar34 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    this[0x1e6] = (Application)0x0;
  }
  if ((auVar34 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
    this[0x1e7] = (Application)0x0;
  }
  LVar12 = getBestLanguage(this,LVar12);
  LanguageUtil::setLanguage(LVar12);
  this[0x1e8] = (Application)0x0;
  this[0x1cf] = (Application)0x0;
  *(undefined2 *)(this + 0x1cc) = 0;
  *(undefined8 *)(this + 0x1c4) = 0x4180000042700000;
  pEVar17 = (EngineManager *)EngineManager::getInstance();
  EngineManager::setFrameLimiter(pEVar17,(bool)param_1[0xa1],*(float *)(param_1 + 0xa4));
  pEVar17 = (EngineManager *)EngineManager::getInstance();
  EngineManager::setCopyProtection(pEVar17,*(CopyProtection **)(param_1 + 0x98));
  local_1a0 = 0x43c8000043160000;
                    /* try { // try from 006c7d10 to 006c7d8b has its CatchHandler @ 006c8744 */
  CullingManager::init
            ((CullingManager *)CullingManager::s_cullingManagerInstance,-1025.0,-100.0,-1025.0,
             1025.0,400.0,1025.0,0x10,0x10,0x40,2,(float *)&local_1a0,0x80);
  NullGameStats::init();
  if (((NgGameStats::getInstance()::obj & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(&NgGameStats::getInstance()::obj), iVar11 != 0)) {
    DAT_01048e80 = 0;
    DAT_01048e78 = 0;
    NgGameStats::getInstance()::obj = &DAT_01048e78;
    __cxa_atexit(NgGameStats::~NgGameStats,&NgGameStats::getInstance()::obj,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&NgGameStats::getInstance()::obj);
  }
  NgGameStats::init();
  this_01 = (NetworkAvailability *)operator_new(0x68);
                    /* try { // try from 006c7d90 to 006c7d93 has its CatchHandler @ 006c8600 */
  NetworkAvailability::NetworkAvailability(this_01);
  *(NetworkAvailability **)(this + 400) = this_01;
                    /* try { // try from 006c7d98 to 006c7e1f has its CatchHandler @ 006c8744 */
  pEVar17 = (EngineManager *)EngineManager::getInstance();
  EngineManager::setNetworkAvailability(pEVar17,*(NetworkAvailability **)(this + 400));
  if (((HeadMountedDisplayManager::getInstance()::self & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(&HeadMountedDisplayManager::getInstance()::self), iVar11 != 0)) {
                    /* try { // try from 006c8518 to 006c8523 has its CatchHandler @ 006c85d4 */
    HeadMountedDisplayManager::HeadMountedDisplayManager
              ((HeadMountedDisplayManager *)HeadMountedDisplayManager::getInstance()::self);
    __cxa_atexit(HeadMountedDisplayManager::~HeadMountedDisplayManager,
                 HeadMountedDisplayManager::getInstance()::self,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&HeadMountedDisplayManager::getInstance()::self);
  }
  HeadMountedDisplayManager::init();
  initAudio(this,param_1[0xa8] == (ApplicationDesc)0x0);
  if (param_1[0xa8] == (ApplicationDesc)0x0) {
    pAVar3 = pAVar2;
    if (((byte)param_1[8] & 1) != 0) {
      pAVar3 = *(ApplicationDesc **)(param_1 + 0x18);
    }
    CloudDeviceManager::createCloudDevice(1,(char *)pAVar3,*(NetworkAvailability **)(this + 400));
  }
  this_02 = (AdsProviderManager *)AdsProviderManager::getInstance();
  if (((byte)param_1[0x38] & 1) != 0) {
    pAVar1 = *(ApplicationDesc **)(param_1 + 0x48);
  }
  AdsProviderManager::createAdsProvider(this_02,0x3cf02b77,(char *)pAVar1);
  CopyProtection::displayErrorMsgAndQuitIfNeeded();
                    /* try { // try from 006c7e20 to 006c7e23 has its CatchHandler @ 006c864c */
  uVar14 = VulkanLoaderUtil::initialize();
  if ((uVar14 & 1) == 0) {
    if (((byte)param_1[8] & 1) != 0) {
      pAVar2 = *(ApplicationDesc **)(param_1 + 0x18);
    }
                    /* try { // try from 006c8560 to 006c8577 has its CatchHandler @ 006c864c */
    SystemDialogUtil::showMessageBoxOk
              ((char *)pAVar2,
               "Error: Engine initialization failed. Vulkan renderer not supported.\n",true);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
                    /* try { // try from 006c7e34 to 006c7e73 has its CatchHandler @ 006c86d4 */
  (**(code **)(**(long **)(this + 0x188) + 0x10))
            (*(long **)(this + 0x188),"game.graphic.renderer",0);
  RVar21 = 5;
  if (param_1[0xa8] != (ApplicationDesc)0x0) {
    RVar21 = 6;
  }
  initRenderDevice(this,RVar21);
  pEVar17 = (EngineManager *)EngineManager::getInstance();
  auVar34 = EngineManager::init2
                      (pEVar17,*(Properties **)(this + 0x188),"game",
                       *(IRenderDevice **)(this + 0x170));
  pbVar20 = auVar34._8_8_;
  if ((auVar34 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    if (((byte)param_1[8] & 1) != 0) {
      pAVar2 = *(ApplicationDesc **)(param_1 + 0x18);
    }
                    /* try { // try from 006c8588 to 006c859f has its CatchHandler @ 006c86d4 */
    SystemDialogUtil::showMessageBoxOk((char *)pAVar2,"Error: Engine initialization failed.\n",true)
    ;
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  __s = (basic_string *)&DAT_0050a39f;
  if (*(basic_string **)(param_1 + 0xb8) != (basic_string *)0x0) {
    __s = *(basic_string **)(param_1 + 0xb8);
  }
  __n = strlen((char *)__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 006c85a0 to 006c85a7 has its CatchHandler @ 006c8634 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pvVar24 = (void *)((ulong)&local_198 | 1);
    local_198 = CONCAT71(local_198._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_006c7ef0;
  }
  else {
    uVar14 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 006c7ec8 to 006c7ecf has its CatchHandler @ 006c8634 */
    pvVar24 = operator_new(uVar14);
    local_198 = uVar14 | 1;
    local_190 = __n;
    local_188 = pvVar24;
  }
  memcpy(pvVar24,__s,__n);
  pbVar20 = __s;
LAB_006c7ef0:
  *(undefined *)((long)pvVar24 + __n) = 0;
                    /* try { // try from 006c7ef4 to 006c7eff has its CatchHandler @ 006c85f0 */
  PathUtil::makeUnifiedPath((PathUtil *)&local_198,pbVar20);
                    /* try { // try from 006c7f00 to 006c7f47 has its CatchHandler @ 006c8648 */
  PathUtil::removeBackReferencesInPlace(local_1b8);
  if (((byte)param_1[0x20] & 1) != 0) {
    pAVar22 = *(ApplicationDesc **)(param_1 + 0x30);
  }
  pcVar15 = (char *)((ulong)local_1b8 | 1);
  if ((local_1b8[0] & 1) != 0) {
    pcVar15 = local_1a8;
  }
  initGraphics(this,(bool)param_1[0xb0],(char *)pAVar22,pcVar15,*(int *)(param_1 + 0xc0),
               *(int *)(param_1 + 0xc4),(bool)param_1[200],*(FULLSCREEN_MODE *)(param_1 + 0xcc));
                    /* try { // try from 006c7f4c to 006c803f has its CatchHandler @ 006c8734 */
  fVar25 = (float)Properties::getFloat
                            (*(Properties **)(this + 0x188),"game.graphic.display.scaling",1.0);
  fVar26 = (float)Properties::getFloat
                            (*(Properties **)(this + 0x188),"game.graphic.display.uiScaling",1.0);
  *(float *)(this + 0x198) = fVar25 * fVar26;
  fVar26 = (float)Properties::getFloat
                            (*(Properties **)(this + 0x188),"game.graphic.display.rtScaling",1.0);
  *(float *)(this + 0x19c) = fVar25 * fVar26;
  lVar16 = EngineManager::getInstance();
  *(float *)(this + 0x198) = *(float *)(lVar16 + 0x1b8) * *(float *)(this + 0x198);
  lVar16 = EngineManager::getInstance();
  fVar33 = *(float *)(this + 0x198);
  fVar26 = *(float *)(lVar16 + 0x1bc) * *(float *)(this + 0x19c);
  *(float *)(this + 0x19c) = fVar26;
  fVar25 = 0.1;
  if ((0.1 <= fVar33) && (fVar25 = 2.0, fVar33 <= 2.0)) {
    fVar25 = fVar33;
  }
  *(float *)(this + 0x198) = fVar25;
  fVar25 = 0.1;
  if ((0.1 <= fVar26) && (fVar25 = 2.0, fVar26 <= 2.0)) {
    fVar25 = fVar26;
  }
  *(float *)(this + 0x19c) = fVar25;
  pEVar17 = (EngineManager *)EngineManager::getInstance();
  uVar14 = EngineManager::init3
                     (pEVar17,*(IRenderWindow **)(this + 0x178),*(float *)(this + 0x198),
                      *(float *)(this + 0x19c));
  if ((uVar14 & 1) == 0) {
    if (((byte)param_1[8] & 1) != 0) {
      pAVar2 = *(ApplicationDesc **)(param_1 + 0x18);
    }
                    /* try { // try from 006c85b8 to 006c85cf has its CatchHandler @ 006c8734 */
    SystemDialogUtil::showMessageBoxOk((char *)pAVar2,"Error: Engine initialization failed.\n",true)
    ;
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  initInput(this,param_1[0xa8] == (ApplicationDesc)0x0);
                    /* try { // try from 006c8040 to 006c8097 has its CatchHandler @ 006c8730 */
  EngineManager::getInstance();
  lVar16 = Renderer::getPostFxParams();
  lVar18 = EngineManager::getInstance();
  auVar34 = _DAT_004c3910;
  *(undefined *)(*(long *)(lVar18 + 0xb8) + 0xf06) = 1;
  *(long *)(lVar16 + 0x2ec) = auVar34._8_8_;
  *(long *)(lVar16 + 0x2e4) = auVar34._0_8_;
  *(undefined8 *)(lVar16 + 0x2f4) = 0x460ca000461c4000;
  *(undefined4 *)(lVar16 + 0x2fc) = 0x43960000;
  *(undefined4 *)(lVar16 + 0x300) = 0x43960000;
  this_03 = (HeadTrackingDevice *)operator_new(0x10);
                    /* try { // try from 006c80a0 to 006c8127 has its CatchHandler @ 006c86dc */
  bVar7 = Properties::getBoolDefault
                    (*(Properties **)(this + 0x188),"game.input.headTracking#active",false);
  bVar8 = Properties::getBoolDefault
                    (*(Properties **)(this + 0x188),"game.input.headTracking#trackir",false);
  bVar9 = Properties::getBoolDefault
                    (*(Properties **)(this + 0x188),"game.input.headTracking#tobiieyex",false);
  bVar10 = Properties::getBoolDefault
                     (*(Properties **)(this + 0x188),"game.input.headTracking#vr",false);
  fVar25 = (float)Properties::getFloat
                            (*(Properties **)(this + 0x188),"game.input.headTracking#sensitivity",
                             0.5);
  HeadTrackingDevice::HeadTrackingDevice
            (this_03,(bool)(bVar7 & 1),(bool)(bVar8 & 1),(bool)(bVar9 & 1),(bool)(bVar10 & 1),fVar25
            );
  *(HeadTrackingDevice **)(this + 0x1a0) = this_03;
                    /* try { // try from 006c812c to 006c8143 has its CatchHandler @ 006c8730 */
  pEVar17 = (EngineManager *)EngineManager::getInstance();
  EngineManager::setHeadTrackingDevice(pEVar17,*(HeadTrackingDevice **)(this + 0x1a0));
  this_04 = (GiantsNotificationManager *)GiantsNotificationManager::getInstance();
  GiantsNotificationManager::setIsEnabled(this_04,(bool)param_1[0xa0]);
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = (void *)0x0;
                    /* try { // try from 006c814c to 006c81af has its CatchHandler @ 006c86f8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_1d0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_1d0);
  LVar12 = LanguageUtil::getLanguage();
  LanguageUtil::getCodeStr(LVar12);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_1d0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_1d0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_1d0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_1d0);
                    /* try { // try from 006c81b4 to 006c81b7 has its CatchHandler @ 006c85ec */
  auVar34 = CopyProtection::getNetworkKey();
                    /* try { // try from 006c81c0 to 006c81eb has its CatchHandler @ 006c867c */
  FUN_006c93f0(&local_158,auVar34._8_8_,"%08x%08x",auVar34._0_8_ >> 0x20,auVar34._0_8_);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_1d0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_1d0);
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = (void *)0x0;
                    /* try { // try from 006c8200 to 006c8203 has its CatchHandler @ 006c85e8 */
  pAVar19 = (Application *)(**(code **)(**(long **)(this + 0x170) + 0x28))();
  if (*(char **)(pAVar19 + 0x28) != (char *)0x0) {
                    /* try { // try from 006c820c to 006c821f has its CatchHandler @ 006c8630 */
    pvVar24 = (void *)getEncryptedCGI(pAVar19,*(char **)(pAVar19 + 0x28));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_1e8);
    if (pvVar24 != (void *)0x0) {
      operator_delete__(pvVar24);
    }
  }
                    /* try { // try from 006c8238 to 006c824f has its CatchHandler @ 006c8644 */
  lVar16 = (**(code **)(**(long **)(this + 0x170) + 0x28))();
  pcVar15 = *(char **)(lVar16 + 0x40);
  pAVar19 = (Application *)
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)&local_1e8);
  if (pcVar15 != (char *)0x0) {
                    /* try { // try from 006c8254 to 006c826b has its CatchHandler @ 006c862c */
    pvVar24 = (void *)getEncryptedCGI(pAVar19,pcVar15);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_1e8);
    if (pvVar24 != (void *)0x0) {
      operator_delete__(pvVar24);
    }
  }
                    /* try { // try from 006c8284 to 006c829b has its CatchHandler @ 006c865c */
  lVar16 = (**(code **)(**(long **)(this + 0x170) + 0x28))();
  pcVar15 = *(char **)(lVar16 + 0x18);
  pAVar19 = (Application *)
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)&local_1e8);
  if (pcVar15 != (char *)0x0) {
                    /* try { // try from 006c82a0 to 006c82b7 has its CatchHandler @ 006c8628 */
    pvVar24 = (void *)getEncryptedCGI(pAVar19,pcVar15);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_1e8);
    if (pvVar24 != (void *)0x0) {
      operator_delete__(pvVar24);
    }
  }
                    /* try { // try from 006c82c4 to 006c82d3 has its CatchHandler @ 006c865c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_1e8);
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = (char *)0x0;
                    /* try { // try from 006c82dc to 006c82e7 has its CatchHandler @ 006c863c */
  pAVar19 = (Application *)EnvUtil::getOSVersionName((basic_string *)&local_200);
  pcVar15 = (char *)((ulong)&local_200 | 1);
  if ((local_200 & 1) != 0) {
    pcVar15 = local_1f0;
  }
                    /* try { // try from 006c82fc to 006c830f has its CatchHandler @ 006c8640 */
  pvVar24 = (void *)getEncryptedCGI(pAVar19,pcVar15);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_1e8);
  if (pvVar24 != (void *)0x0) {
    operator_delete__(pvVar24);
  }
                    /* try { // try from 006c831c to 006c832b has its CatchHandler @ 006c863c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_1e8);
                    /* try { // try from 006c8338 to 006c8393 has its CatchHandler @ 006c8690 */
  lVar16 = (**(code **)(**(long **)(this + 0x170) + 0x28))();
  if (*(long *)(lVar16 + 8) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_1e8);
  }
  pvVar24 = (void *)((ulong)&local_1e8 | 1);
  if ((local_1e8 & 1) != 0) {
    pvVar24 = local_1d8;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_1d0,(ulong)pvVar24);
  pcVar15 = (char *)GiantsNotificationManager::getInstance();
  GiantsNotificationManager::startLoading(pcVar15);
  this[0x1ce] = (Application)0x1;
  if ((local_200 & 1) != 0) {
    operator_delete(local_1f0);
  }
  if ((local_1e8 & 1) != 0) {
    operator_delete(local_1d8);
  }
  if ((local_1d0 & 1) != 0) {
    operator_delete(local_1c0);
  }
  if (((byte)local_1b8[0] & 1) != 0) {
    operator_delete(local_1a8);
  }
  if ((local_198 & 1) != 0) {
    operator_delete(local_188);
  }
  if (*(long *)(lVar4 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


