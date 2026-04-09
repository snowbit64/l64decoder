// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveI3DFile
// Entry Point: 0091843c
// Size: 23588 bytes
// Signature: undefined __cdecl saveI3DFile(vector * param_1, char * param_2, char * param_3, char * param_4, char * param_5, vector * param_6, char * param_7, bool param_8, bool param_9, bool param_10, ISaveCallback * param_11)


/* WARNING: Type propagation algorithm not settling */
/* I3DSave::saveI3DFile(std::__ndk1::vector<ScenegraphNode*, std::__ndk1::allocator<ScenegraphNode*>
   > const&, char const*, char const*, char const*, char const*,
   std::__ndk1::vector<SceneSave::SerializeFile, std::__ndk1::allocator<SceneSave::SerializeFile>
   >*, char const*, bool, bool, bool, I3DSave::ISaveCallback*) */

undefined4
I3DSave::saveI3DFile
          (vector *param_1,char *param_2,char *param_3,char *param_4,char *param_5,vector *param_6,
          char *param_7,bool param_8,bool param_9,bool param_10,ISaveCallback *param_11)

{
  ACCESS_MODE AVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  undefined ***pppuVar6;
  undefined8 *******pppppppuVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  __tree_iterator _Var12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  size_t sVar16;
  basic_ostream *pbVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined **ppuVar21;
  byte *pbVar22;
  Spline *this;
  long *this_00;
  uint *puVar23;
  uint *puVar24;
  IndexedTriangleSet *pIVar25;
  DestructionChunk *pDVar26;
  NavigationMesh *pNVar27;
  long ******pppppplVar28;
  long *plVar29;
  tm *__tp;
  basic_string *extraout_x1;
  basic_string *extraout_x1_00;
  basic_string *pbVar30;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  undefined8 extraout_x1_32;
  undefined8 extraout_x1_33;
  undefined8 extraout_x1_34;
  undefined8 extraout_x1_35;
  undefined8 extraout_x1_36;
  undefined8 extraout_x1_37;
  undefined8 extraout_x1_38;
  undefined8 extraout_x1_39;
  undefined8 extraout_x1_40;
  undefined8 extraout_x1_41;
  undefined8 extraout_x1_42;
  undefined8 extraout_x1_43;
  undefined8 extraout_x1_44;
  undefined8 extraout_x1_45;
  undefined8 extraout_x1_46;
  undefined8 extraout_x1_47;
  undefined8 extraout_x1_48;
  undefined8 extraout_x1_49;
  undefined8 extraout_x1_50;
  undefined8 extraout_x1_51;
  undefined8 extraout_x1_52;
  undefined8 extraout_x1_53;
  undefined8 extraout_x1_54;
  undefined8 extraout_x1_55;
  undefined8 extraout_x1_56;
  undefined8 extraout_x1_57;
  undefined8 extraout_x1_58;
  undefined8 extraout_x1_59;
  undefined8 extraout_x1_60;
  undefined8 extraout_x1_61;
  undefined8 extraout_x1_62;
  undefined8 extraout_x1_63;
  undefined8 extraout_x1_64;
  undefined8 extraout_x1_65;
  undefined8 extraout_x1_66;
  long extraout_x1_67;
  long extraout_x1_68;
  undefined8 *******pppppppuVar31;
  long ******pppppplVar32;
  undefined8 *******pppppppuVar33;
  long *******ppppppplVar34;
  long ********pppppppplVar35;
  undefined8 *puVar36;
  long ********pppppppplVar37;
  long **pplVar38;
  long **pplVar39;
  long *plVar40;
  long ******pppppplVar41;
  byte *pbVar42;
  long lVar43;
  long lVar44;
  long *******ppppppplVar45;
  undefined8 *******pppppppuVar46;
  long ********pppppppplVar47;
  void *pvVar48;
  undefined8 *puVar49;
  ulong uVar50;
  void *pvVar51;
  char *pcVar52;
  long ********pppppppplVar53;
  long **pplVar54;
  uint uVar55;
  undefined8 *puVar56;
  long *plVar57;
  float *pfVar58;
  undefined8 *puVar59;
  long *this_01;
  long ******pppppplVar60;
  undefined8 *puVar61;
  float fVar62;
  undefined auVar63 [16];
  float *local_738;
  uint local_6ec;
  uchar *local_6e8;
  undefined4 local_6dc;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  void *local_6c8;
  undefined8 local_6c0;
  size_t local_6b8;
  void *local_6b0;
  long ********local_6a8;
  long ********local_6a0;
  long local_698;
  long ******local_690;
  long ******local_688;
  char *local_680;
  undefined8 *local_678;
  undefined8 *local_670;
  undefined8 *local_668;
  ulong local_660;
  undefined8 uStack_658;
  void *local_650;
  byte local_648;
  void *local_638;
  ulong local_630;
  undefined8 uStack_628;
  void *local_620;
  ulong local_618;
  undefined8 local_610;
  void *local_608;
  uint local_600;
  uint local_5fc;
  void *local_5f8;
  void *local_5f0;
  undefined8 local_5e8;
  undefined8 *******pppppppuStack_5e0;
  undefined8 *******local_5d8;
  undefined8 uStack_5d0;
  long **local_5c8;
  long *local_5c0;
  long local_5b8;
  long **local_5b0;
  long *local_5a8;
  ulong local_5a0;
  long **local_598;
  long *local_590;
  undefined8 local_588;
  undefined8 *******local_580;
  undefined8 *******local_578;
  undefined8 uStack_570;
  __tree_node **local_568;
  __tree_node *local_560;
  undefined8 local_558;
  __tree_node **pp_Stack_550;
  __tree_node *local_548;
  undefined8 uStack_540;
  __tree_node **local_538;
  __tree_node *p_Stack_530;
  undefined8 local_528;
  __tree_node **pp_Stack_520;
  __tree_node *local_518;
  undefined8 uStack_510;
  long **local_508;
  long *local_500;
  undefined8 local_4f8;
  long **local_4f0;
  long *local_4e8;
  undefined8 local_4e0;
  long ********local_4d8;
  long ********local_4d0;
  undefined8 local_4c8;
  long **local_4c0;
  long *local_4b8;
  undefined8 local_4b0;
  NativeFile local_4a8 [40];
  long ******local_480;
  long ******pppppplStack_478;
  long ******local_470;
  StopWatch aSStack_460 [24];
  undefined **local_448;
  undefined ***local_440;
  char local_438;
  undefined **local_430;
  NativeFile *pNStack_428;
  undefined local_420;
  undefined8 local_41c;
  void *local_410;
  undefined4 local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  long ******local_3f0;
  long ******local_3e8;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  long *aplStack_3d8 [4];
  ulong local_3b8;
  undefined8 uStack_3b0;
  void *local_3a8;
  undefined8 uStack_3a0;
  undefined4 local_398;
  undefined **local_390 [2];
  byte local_380;
  void *local_370;
  long *******local_360;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2f0;
  long ********local_2e8;
  void *local_2e0;
  undefined8 local_2d8;
  undefined **local_2d0;
  void *local_2c8;
  undefined8 uStack_2bc;
  undefined8 uStack_2b4;
  undefined8 uStack_2ac;
  undefined8 local_2a4;
  undefined8 local_29c;
  undefined4 uStack_294;
  uint local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  uint uStack_284;
  void *local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined **local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  long *local_90;
  long local_88;
  
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  StopWatch::StopWatch(aSStack_460);
  StopWatch::start();
  pppppplVar32 = (long ******)((ulong)&local_480 | 1);
  local_480 = (long ******)0x0;
  pppppplStack_478 = (long ******)0x0;
  uVar10 = 0;
  local_470 = (long ******)0x0;
  do {
    local_2d8 = (undefined **)0xfd8f40;
    local_268 = (undefined **)0xfd8f68;
                    /* try { // try from 00918520 to 0091852b has its CatchHandler @ 0091e450 */
    std::__ndk1::ios_base::init(&local_268);
    local_1e0 = 0;
    local_1d8 = CONCAT44(local_1d8._4_4_,0xffffffff);
    local_2d8 = &PTR__basic_ostringstream_00fd8ed0;
    local_268 = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 0091854c to 00918553 has its CatchHandler @ 0091e458 */
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
    local_270 = 0x10;
    uStack_288 = 0;
    uStack_284 = 0;
    local_290 = 0;
    uStack_28c = 0;
    uStack_278 = 0;
    local_280 = (void *)0x0;
    local_2d0 = &PTR__basic_stringbuf_00fd8fa0;
    sVar16 = strlen(param_5);
                    /* try { // try from 00918574 to 00918593 has its CatchHandler @ 0091e4d0 */
    pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_2d8,param_5,sVar16);
    pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar17,"_temp",5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,uVar10);
                    /* try { // try from 00918594 to 0091859f has its CatchHandler @ 0091e47c */
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    if (((ulong)local_480 & 1) != 0) {
      operator_delete(local_470);
    }
    pppppplStack_478 = (long ******)uStack_3f8;
    local_480 = (long ******)local_400;
    local_470 = local_3f0;
    local_2d8 = &PTR__basic_ostringstream_00fd8ed0;
    local_268 = &PTR__basic_ostringstream_00fd8ef8;
    local_2d0 = &PTR__basic_stringbuf_00fd8fa0;
    if ((local_290 & 1) != 0) {
      operator_delete(local_280);
    }
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
              ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)&local_2d0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_2d8);
    std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
              ((basic_ios<char,std::__ndk1::char_traits<char>> *)&local_268);
    pppppplVar60 = pppppplVar32;
    if (((ulong)local_480 & 1) != 0) {
      pppppplVar60 = local_470;
    }
                    /* try { // try from 0091862c to 00918633 has its CatchHandler @ 0091e480 */
    iVar9 = NativeFileUtil::getFileType((char *)pppppplVar60,true);
    uVar10 = uVar10 + 1;
  } while (iVar9 != 0);
                    /* try { // try from 0091863c to 00918643 has its CatchHandler @ 0091e25c */
  NativeFile::NativeFile(local_4a8);
  AVar1 = (ACCESS_MODE)pppppplVar32;
  if (((ulong)local_480 & 1) != 0) {
    AVar1 = (ACCESS_MODE)local_470;
  }
                    /* try { // try from 0091865c to 0091866b has its CatchHandler @ 0091e2b4 */
  uVar18 = NativeFile::open((char *)local_4a8,AVar1,true);
  if ((uVar18 & 1) != 0) {
                    /* try { // try from 00918670 to 00918677 has its CatchHandler @ 0091e200 */
    File::File((File *)&local_430);
    pNStack_428 = local_4a8;
    local_420 = 0;
    local_430 = &PTR__BufferedFileWriter_00fdfc30;
    local_41c = 0x100000;
                    /* try { // try from 009186a0 to 009186a7 has its CatchHandler @ 0091e1f0 */
    local_410 = operator_new__(0x100000);
    local_440 = &local_430;
    local_408 = 0;
    local_438 = '\0';
    local_448 = &PTR__FileOutputStream_00fdfcc8;
                    /* try { // try from 009186c8 to 00918a43 has its CatchHandler @ 0091e418 */
    uVar19 = __strlen_chk("<?xml version=\"1.0\" encoding=\"iso-8859-1\"?>\n",0x2d);
    (*(code *)local_430[6])(&local_430,"<?xml version=\"1.0\" encoding=\"iso-8859-1\"?>\n",uVar19);
    cVar4 = local_438;
    pppuVar6 = local_440;
    uVar10 = __strlen_chk(&DAT_004fddf9,2);
    if (cVar4 == '\0') {
      (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004fddf9);
    }
    else {
      File::writeDosEOLExpand((File *)pppuVar6,&DAT_004fddf9,uVar10);
    }
    cVar4 = local_438;
    pppuVar6 = local_440;
    uVar10 = __strlen_chk("<i3D name=\"",0xc);
    if (cVar4 == '\0') {
      (*(code *)(*pppuVar6)[6])(pppuVar6,"<i3D name=\"");
    }
    else {
      File::writeDosEOLExpand((File *)pppuVar6,"<i3D name=\"",uVar10);
    }
    cVar4 = local_438;
    pppuVar6 = local_440;
    uVar10 = __strlen_chk(param_2,0xffffffffffffffff);
    if (cVar4 == '\0') {
      (*(code *)(*pppuVar6)[6])(pppuVar6,param_2);
    }
    else {
      File::writeDosEOLExpand((File *)pppuVar6,param_2,uVar10);
    }
    cVar4 = local_438;
    pppuVar6 = local_440;
    uVar10 = __strlen_chk("\" version=\"1.6\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:noNamespaceSchemaLocation=\"http://i3d.giants.ch/schema/i3d-1.6.xsd\">\n"
                          ,0x90);
    if (cVar4 == '\0') {
      (*(code *)(*pppuVar6)[6])
                (pppuVar6,
                 "\" version=\"1.6\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:noNamespaceSchemaLocation=\"http://i3d.giants.ch/schema/i3d-1.6.xsd\">\n"
                );
    }
    else {
      File::writeDosEOLExpand
                ((File *)pppuVar6,
                 "\" version=\"1.6\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:noNamespaceSchemaLocation=\"http://i3d.giants.ch/schema/i3d-1.6.xsd\">\n"
                 ,uVar10);
    }
    cVar4 = local_438;
    pppuVar6 = local_440;
    uVar10 = __strlen_chk("  <Asset>\n",0xb);
    if (cVar4 == '\0') {
      (*(code *)(*pppuVar6)[6])(pppuVar6,"  <Asset>\n");
    }
    else {
      File::writeDosEOLExpand((File *)pppuVar6,"  <Asset>\n",uVar10);
    }
    cVar4 = local_438;
    pppuVar6 = local_440;
    uVar10 = __strlen_chk("    <Export program=\"",0x16);
    if (cVar4 == '\0') {
      (*(code *)(*pppuVar6)[6])(pppuVar6,"    <Export program=\"");
    }
    else {
      File::writeDosEOLExpand((File *)pppuVar6,"    <Export program=\"",uVar10);
    }
    cVar4 = local_438;
    pppuVar6 = local_440;
    uVar10 = __strlen_chk(param_3,0xffffffffffffffff);
    if (cVar4 == '\0') {
      (*(code *)(*pppuVar6)[6])(pppuVar6,param_3);
    }
    else {
      File::writeDosEOLExpand((File *)pppuVar6,param_3,uVar10);
    }
    cVar4 = local_438;
    pppuVar6 = local_440;
    uVar10 = __strlen_chk("\" version=\"",0xc);
    if (cVar4 == '\0') {
      (*(code *)(*pppuVar6)[6])(pppuVar6,"\" version=\"");
    }
    else {
      File::writeDosEOLExpand((File *)pppuVar6,"\" version=\"",uVar10);
    }
    cVar4 = local_438;
    pppuVar6 = local_440;
    uVar10 = __strlen_chk(param_4,0xffffffffffffffff);
    if (cVar4 == '\0') {
      (*(code *)(*pppuVar6)[6])(pppuVar6,param_4);
    }
    else {
      File::writeDosEOLExpand((File *)pppuVar6,param_4,uVar10);
    }
    cVar4 = local_438;
    pppuVar6 = local_440;
    uVar10 = __strlen_chk(&DAT_004ddf8b,5);
    if (cVar4 == '\0') {
      (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004ddf8b);
    }
    else {
      File::writeDosEOLExpand((File *)pppuVar6,&DAT_004ddf8b,uVar10);
    }
    cVar4 = local_438;
    pppuVar6 = local_440;
    uVar10 = __strlen_chk("  </Asset>\n",0xc);
    if (cVar4 == '\0') {
      (*(code *)(*pppuVar6)[6])(pppuVar6,"  </Asset>\n");
    }
    else {
      File::writeDosEOLExpand((File *)pppuVar6,"  </Asset>\n",uVar10);
    }
    local_4c8 = 0;
    local_4d0 = (long ********)0x0;
    pp_Stack_520 = &local_518;
    local_4f8 = 0;
    local_500 = (long *)0x0;
    local_538 = &p_Stack_530;
    local_528 = 0;
    local_4b8 = (long *)0x0;
    local_4b0 = 0;
    pp_Stack_550 = &local_548;
    local_4e8 = (long *)0x0;
    local_4e0 = 0;
    p_Stack_530 = (__tree_node *)0x0;
    local_568 = &local_560;
    local_518 = (__tree_node *)0x0;
    uStack_510 = 0;
    local_558 = 0;
    local_548 = (__tree_node *)0x0;
    uStack_540 = 0;
    local_560 = (__tree_node *)0x0;
    local_588 = 0;
    local_590 = (long *)0x0;
    local_5c0 = (long *)0x0;
    local_5b8 = 0;
    lVar20 = *(long *)param_1;
    local_578 = (undefined8 *******)0x0;
    uStack_570 = 0;
    local_5a8 = (long *)0x0;
    local_5a0 = 0;
    local_5d8 = (undefined8 *******)0x0;
    uStack_5d0 = 0;
    local_5f8 = (void *)0x0;
    local_5f0 = (void *)0x0;
    local_5e8 = 0;
    local_5fc = 1;
    local_600 = 1;
    pppppppuStack_5e0 = &local_5d8;
    local_5c8 = &local_5c0;
    local_5b0 = &local_5a8;
    local_598 = &local_590;
    local_580 = &local_578;
    local_508 = &local_500;
    local_4f0 = &local_4e8;
    local_4d8 = (long ********)&local_4d0;
    local_4c0 = &local_4b8;
    if (*(long *)(param_1 + 8) != lVar20) {
      uVar18 = 0;
      do {
                    /* try { // try from 00918b58 to 00918b97 has its CatchHandler @ 0091e408 */
        SceneSave::collectItems
                  (*(ScenegraphNode **)(lVar20 + uVar18 * 8),(map *)&local_4c0,(map *)&local_4d8,
                   (map *)&local_4f0,(map *)&local_508,(map *)&pp_Stack_520,(map *)&local_538,
                   (map *)&pp_Stack_550,(map *)&local_568,(map *)&local_580,(set *)&local_5b0,
                   (map *)&local_598,(set *)&local_5c8,(set *)&pppppppuStack_5e0,
                   (vector *)&local_5f8,&local_5fc,&local_600,0xffffffffffffffff,false,false);
        uVar18 = (ulong)((int)uVar18 + 1);
        lVar20 = *(long *)param_1;
      } while (uVar18 < (ulong)(*(long *)(param_1 + 8) - lVar20 >> 3));
    }
                    /* try { // try from 00918bb0 to 00918bb3 has its CatchHandler @ 0091e2d4 */
    lVar20 = ProceduralPlacementManager::getInstance();
    if (*(char *)(lVar20 + 0x162) != '\0') {
                    /* try { // try from 00918bcc to 00918bcf has its CatchHandler @ 0091e400 */
      for (uVar18 = 0; lVar20 = ProceduralPlacementManager::getInstance(),
          uVar18 < ((ulong)(*(long *)(lVar20 + 0x58) - *(long *)(lVar20 + 0x50)) >> 3 & 0xffffffff);
          uVar18 = uVar18 + 1) {
                    /* try { // try from 00918be4 to 00918be7 has its CatchHandler @ 0091e3e4 */
        lVar20 = ProceduralPlacementManager::getInstance();
        if (*(long *)(*(long *)(lVar20 + 0x50) + uVar18 * 8) != 0) {
                    /* try { // try from 00918bf8 to 00918bff has its CatchHandler @ 0091e38c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)&local_2d8);
                    /* try { // try from 00918c00 to 00918c17 has its CatchHandler @ 0091e374 */
          SceneSave::addToFileMap((map *)&local_598,(basic_string *)&local_2d8,4,false,&local_600);
          if (((ulong)local_2d8 & 1) != 0) {
            operator_delete(local_2c8);
          }
        }
      }
                    /* try { // try from 00918c3c to 00918c3f has its CatchHandler @ 0091e3f8 */
      for (uVar18 = 0; lVar20 = ProceduralPlacementManager::getInstance(),
          uVar18 < ((ulong)(*(long *)(lVar20 + 0x70) - *(long *)(lVar20 + 0x68)) >> 3 & 0xffffffff);
          uVar18 = uVar18 + 1) {
                    /* try { // try from 00918c54 to 00918c57 has its CatchHandler @ 0091e3dc */
        lVar20 = ProceduralPlacementManager::getInstance();
        if (*(long *)(*(long *)(lVar20 + 0x68) + uVar18 * 8) != 0) {
                    /* try { // try from 00918c68 to 00918c6f has its CatchHandler @ 0091e36c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)&local_2d8);
                    /* try { // try from 00918c70 to 00918c87 has its CatchHandler @ 0091e368 */
          SceneSave::addToFileMap((map *)&local_598,(basic_string *)&local_2d8,4,false,&local_600);
          if (((ulong)local_2d8 & 1) != 0) {
            operator_delete(local_2c8);
          }
        }
      }
                    /* try { // try from 00918ca4 to 00918ca7 has its CatchHandler @ 0091e3f0 */
      for (uVar18 = 0; lVar20 = ProceduralPlacementManager::getInstance(),
          uVar18 < ((ulong)(*(long *)(lVar20 + 0x40) - *(long *)(lVar20 + 0x38)) >> 3 & 0xffffffff);
          uVar18 = uVar18 + 1) {
                    /* try { // try from 00918cbc to 00918cdf has its CatchHandler @ 0091e42c */
        lVar20 = ProceduralPlacementManager::getInstance();
        SceneSave::addToFileMap
                  ((map *)&local_598,
                   (basic_string *)(*(long *)(*(long *)(lVar20 + 0x38) + uVar18 * 8) + 0x18),4,false
                   ,&local_600);
      }
                    /* try { // try from 00918ce8 to 00918cef has its CatchHandler @ 0091e2d4 */
      ProceduralPlacementManager::getInstance();
      lVar20 = ProceduralPlacementManager::getBlockMask();
      if (lVar20 != 0) {
                    /* try { // try from 00918cf4 to 00918d07 has its CatchHandler @ 0091e208 */
        ProceduralPlacementManager::getInstance();
        ProceduralPlacementManager::getBlockMask();
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)&local_2d8);
                    /* try { // try from 00918d08 to 00918d1f has its CatchHandler @ 0091e0f8 */
        SceneSave::addToFileMap((map *)&local_598,(basic_string *)&local_2d8,4,false,&local_600);
        if (((ulong)local_2d8 & 1) != 0) {
          operator_delete(local_2c8);
        }
      }
    }
    cVar4 = local_438;
    pppuVar6 = local_440;
                    /* try { // try from 00918d40 to 00918d83 has its CatchHandler @ 0091e2d4 */
    uVar10 = __strlen_chk("\n  <Files>\n",0xc);
    if (cVar4 == '\0') {
      (*(code *)(*pppuVar6)[6])(pppuVar6,"\n  <Files>\n");
      pbVar30 = extraout_x1_00;
    }
    else {
      File::writeDosEOLExpand((File *)pppuVar6,"\n  <Files>\n",uVar10);
      pbVar30 = extraout_x1;
    }
    local_610 = 0;
    local_608 = (void *)0x0;
    local_630 = 0;
    uStack_628 = 0;
    local_620 = (void *)0x0;
    local_618 = 0;
    ppuVar21 = (undefined **)strlen(param_5);
    if ((undefined **)0xffffffffffffffef < ppuVar21) {
                    /* try { // try from 0091dff0 to 0091dff7 has its CatchHandler @ 0091e214 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (ppuVar21 < (undefined **)0x17) {
      pvVar48 = (void *)((ulong)&local_2d8 | 1);
      local_2d8 = (undefined **)CONCAT71(local_2d8._1_7_,(char)((int)ppuVar21 << 1));
      if (ppuVar21 != (undefined **)0x0) goto LAB_00918dec;
    }
    else {
                    /* try { // try from 00918dd0 to 00918dd7 has its CatchHandler @ 0091e214 */
      pvVar48 = operator_new((ulong)(ppuVar21 + 2) & 0xfffffffffffffff0);
      local_2d8 = (undefined **)((ulong)(ppuVar21 + 2) & 0xfffffffffffffff0 | 1);
      local_2d0 = ppuVar21;
      local_2c8 = pvVar48;
LAB_00918dec:
      pbVar30 = (basic_string *)param_5;
      memcpy(pvVar48,param_5,(size_t)ppuVar21);
    }
    *(undefined *)((long)pvVar48 + (long)ppuVar21) = 0;
                    /* try { // try from 00918e00 to 00918e0b has its CatchHandler @ 0091e1d8 */
    PathUtil::makeUnifiedPath((PathUtil *)&local_2d8,pbVar30);
    if (((ulong)local_2d8 & 1) != 0) {
      operator_delete(local_2c8);
    }
                    /* try { // try from 00918e24 to 00918e33 has its CatchHandler @ 0091e1c8 */
    PathUtil::getBasePath((basic_string *)&local_648,(basic_string *)&local_630,true);
    local_660 = 0;
    uStack_658 = 0;
    local_650 = (void *)0x0;
                    /* try { // try from 00918e40 to 00918e6f has its CatchHandler @ 0091e258 */
    PathUtil::getFilename((basic_string *)&local_648,(basic_string *)&local_660,true);
    if (param_7 == (char *)0x0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                &local_618,(basic_string *)&local_630);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_618);
    }
    pcVar52 = FileManager::s_singletonFileManager + 0x49;
    if ((FileManager::s_singletonFileManager[72] & 1) != 0) {
      pcVar52 = (char *)FileManager::s_singletonFileManager._88_8_;
    }
    if (local_598 != &local_590) {
      cVar4 = *pcVar52;
      pplVar54 = local_598;
      do {
        if ((pplVar54[0xc] == (long *)0x0) || ((*(ushort *)(pplVar54[0xc] + 9) >> 5 & 1) == 0)) {
          if (param_11 == (ISaveCallback *)0x0) {
            if (0 < *(int *)((long)pplVar54 + 0x3c)) {
              exportFile(*(uint *)(pplVar54 + 7),(basic_string *)(pplVar54 + 8),
                         (basic_string *)&local_618,cVar4 != '\0',*(COLOR_PROFILE *)(pplVar54 + 0xd)
                         ,(FileOutputStream *)&local_448);
            }
          }
          else {
                    /* try { // try from 00918ee4 to 00918f23 has its CatchHandler @ 0091e3c0 */
            (***(code ***)param_11)
                      (param_11,*(undefined4 *)(pplVar54 + 7),pplVar54 + 8,&local_618,
                       *(undefined4 *)(pplVar54 + 0xd),*(undefined *)((long)pplVar54 + 0x6d),
                       &local_448);
          }
          if (param_6 != (vector *)0x0) {
            pplVar38 = *(long ***)(param_6 + 8);
            if (pplVar38 == *(long ***)(param_6 + 0x10)) {
                    /* try { // try from 00918f68 to 00918f6f has its CatchHandler @ 0091e3c0 */
              std::__ndk1::
              vector<SceneSave::SerializeFile,std::__ndk1::allocator<SceneSave::SerializeFile>>::
              __push_back_slow_path<SceneSave::SerializeFile_const&>
                        ((vector<SceneSave::SerializeFile,std::__ndk1::allocator<SceneSave::SerializeFile>>
                          *)param_6,(SerializeFile *)(pplVar54 + 7));
            }
            else {
              *pplVar38 = pplVar54[7];
                    /* try { // try from 00918f44 to 00918f47 has its CatchHandler @ 0091e2f0 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string((basic_string *)(pplVar38 + 1));
              plVar29 = pplVar54[0xc];
              plVar40 = pplVar54[0xb];
              *(undefined8 *)((long)pplVar38 + 0x2e) = *(undefined8 *)((long)pplVar54 + 0x66);
              pplVar38[5] = plVar29;
              pplVar38[4] = plVar40;
              *(long ***)(param_6 + 8) = pplVar38 + 7;
            }
          }
        }
        pplVar38 = (long **)pplVar54[1];
        if ((long **)pplVar54[1] == (long **)0x0) {
          pplVar38 = pplVar54 + 2;
          pplVar39 = (long **)*pplVar38;
          if ((long **)*pplVar39 != pplVar54) {
            do {
              plVar40 = *pplVar38;
              pplVar38 = (long **)(plVar40 + 2);
              pplVar39 = (long **)*pplVar38;
            } while (*pplVar39 != plVar40);
          }
        }
        else {
          do {
            pplVar39 = pplVar38;
            pplVar38 = (long **)*pplVar39;
          } while ((long **)*pplVar39 != (long **)0x0);
        }
        pplVar54 = pplVar39;
      } while (pplVar39 != &local_590);
    }
    cVar4 = local_438;
    pppuVar6 = local_440;
                    /* try { // try from 00918fc4 to 00919057 has its CatchHandler @ 0091e2d0 */
    uVar10 = __strlen_chk("  </Files>\n\n",0xd);
    if (cVar4 == '\0') {
      (*(code *)(*pppuVar6)[6])(pppuVar6,"  </Files>\n\n");
    }
    else {
      File::writeDosEOLExpand((File *)pppuVar6,"  </Files>\n\n",uVar10);
    }
    cVar4 = local_438;
    pppuVar6 = local_440;
    uVar10 = __strlen_chk("\n  <Materials>\n",0x10);
    if (cVar4 == '\0') {
      (*(code *)(*pppuVar6)[6])(pppuVar6,"\n  <Materials>\n");
    }
    else {
      File::writeDosEOLExpand((File *)pppuVar6,"\n  <Materials>\n",uVar10);
    }
    uVar18 = local_5a0;
    local_678 = (undefined8 *)0x0;
    local_670 = (undefined8 *)0x0;
    local_668 = (undefined8 *)0x0;
    if (local_5a0 != 0) {
      if (0x6eb3e45306eb3e < local_5a0) {
                    /* try { // try from 0091dff8 to 0091e003 has its CatchHandler @ 0091e210 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00919090 to 00919093 has its CatchHandler @ 0091e210 */
      local_670 = (undefined8 *)operator_new(local_5a0 * 0x250);
      local_668 = local_670 + uVar18 * 0x4a;
    }
    puVar49 = local_670;
    puVar36 = local_670;
    local_678 = local_670;
    if (local_5b0 != &local_5a8) {
      pplVar54 = local_5b0;
      puVar56 = local_670;
      puVar59 = local_668;
      puVar61 = local_670;
      do {
        local_2a4 = 0;
        uStack_2bc = 0;
        uStack_2ac = 0;
        uStack_2b4 = 0;
        local_29c = 0xffffffffffffffff;
        uStack_284 = uStack_284 & 0xffffff00;
        local_280 = (void *)0x3f0000003f800000;
        uStack_28c = 0x3fc00000;
        uStack_288 = 0x3f000000;
        uStack_294 = 0x3f000000;
        local_290 = 0x3f000000;
        uStack_278 = CONCAT17(uStack_278._7_1_,0x13d0f5c29);
        local_270 = 0;
        local_268 = (undefined **)0x0;
        local_260 = 0;
        uStack_250 = 0;
        local_258 = 0;
        uStack_240 = 0;
        uStack_248 = 0;
        uStack_230 = 0;
        local_238 = 0;
        uStack_220 = 0;
        uStack_228 = 0;
        uStack_210 = 0;
        local_218 = 0;
        uStack_200 = 0;
        uStack_208 = 0;
        uStack_1f0 = 0;
        local_1f8 = 0;
        local_1e0 = 0;
        uStack_1e8 = 0;
        uStack_1d0 = 0;
        local_1d8 = 0;
        uStack_1c0 = 0;
        uStack_1c8 = 0;
        uStack_1b0 = 0;
        local_1b8 = 0;
        uStack_1a0 = 0;
        uStack_1a8 = 0;
        uStack_190 = 0;
        local_198 = 0;
        uStack_180 = 0;
        uStack_188 = 0;
        uStack_170 = 0;
        local_178 = 0;
        uStack_160 = 0;
        uStack_168 = 0;
        uStack_150 = 0;
        local_158 = 0;
        uStack_140 = 0;
        uStack_148 = 0;
        uStack_130 = 0;
        local_138 = 0;
        uStack_120 = 0;
        uStack_128 = 0;
        uStack_110 = 0;
        local_118 = 0;
        uStack_100 = 0;
        uStack_108 = 0;
        uStack_f0 = 0;
        local_f8 = 0;
        uStack_e0 = 0;
        uStack_e8 = 0;
        uStack_d0 = 0;
        local_d8 = 0;
        uStack_c0 = 0;
        uStack_c8 = 0;
        uStack_b0 = 0;
        local_b8 = 0;
        uStack_a0 = 0;
        uStack_a8 = 0;
        local_98 = 0;
        local_2d8 = &PTR__MaterialDesc_00fd99f8;
        local_90 = pplVar54[4];
        local_2c8 = (void *)CONCAT71((int7)((ulong)local_2c8 >> 8),1);
        local_2d0 = (undefined **)0x4fe011;
                    /* try { // try from 009191d0 to 009191d7 has its CatchHandler @ 0091e420 */
        GsMaterial::saveToDesc((GsMaterial *)local_90,(MaterialDesc *)&local_2d8);
        if (puVar61 == puVar59) {
          uVar50 = ((long)puVar59 - (long)puVar56) / 0x250;
          uVar18 = uVar50 + 1;
          if (0x6eb3e45306eb3e < uVar18) {
                    /* try { // try from 0091dfbc to 0091dfcf has its CatchHandler @ 0091e3bc */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar18 <= uVar50 * 2) {
            uVar18 = uVar50 * 2;
          }
          if (0x3759f22983759e < uVar50) {
            uVar18 = 0x6eb3e45306eb3e;
          }
          if (0x6eb3e45306eb3e < uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00919288 to 0091928b has its CatchHandler @ 0091e420 */
          pvVar48 = operator_new(uVar18 * 0x250);
          puVar36 = (undefined8 *)((long)pvVar48 + uVar50 * 0x250);
          *puVar36 = &PTR__MaterialDesc_00fd99f8;
          memcpy(puVar36 + 1,&local_2d0,0x23c);
          puVar36[0x49] = local_90;
          puVar49 = puVar36;
          if (puVar59 != puVar56) {
            lVar20 = 0;
            do {
              lVar43 = lVar20 + uVar50 * 0x250;
              *(undefined ***)((long)pvVar48 + lVar43 + -0x250) = &PTR__MaterialDesc_00fd99f8;
              memcpy((void *)((long)pvVar48 + lVar43 + -0x248),
                     (void *)((long)puVar59 + lVar20 + -0x248),0x23c);
              lVar44 = lVar20 + -8;
              lVar20 = lVar20 + -0x250;
              *(undefined8 *)((long)pvVar48 + lVar43 + -8) = *(undefined8 *)((long)puVar59 + lVar44)
              ;
            } while ((undefined8 *)((long)puVar59 + lVar20) != puVar56);
            puVar49 = (undefined8 *)((long)pvVar48 + lVar20 + uVar50 * 0x250);
          }
          puVar36 = puVar36 + 0x4a;
          puVar59 = (undefined8 *)((long)pvVar48 + uVar18 * 0x250);
          local_678 = puVar49;
          local_670 = puVar36;
          local_668 = puVar59;
          if (puVar56 != (undefined8 *)0x0) {
            operator_delete(puVar56);
          }
          pplVar38 = (long **)pplVar54[1];
          puVar56 = puVar49;
          if ((long **)pplVar54[1] == (long **)0x0) goto LAB_009193b8;
LAB_009193a8:
          do {
            pplVar39 = pplVar38;
            pplVar38 = (long **)*pplVar39;
          } while ((long **)*pplVar39 != (long **)0x0);
        }
        else {
          *puVar61 = &PTR__MaterialDesc_00fd99f8;
          memcpy(puVar61 + 1,&local_2d0,0x23c);
          puVar36 = puVar61 + 0x4a;
          puVar61[0x49] = local_90;
          pplVar38 = (long **)pplVar54[1];
          puVar49 = puVar56;
          local_670 = puVar36;
          if ((long **)pplVar54[1] != (long **)0x0) goto LAB_009193a8;
LAB_009193b8:
          pplVar38 = pplVar54 + 2;
          pplVar39 = (long **)*pplVar38;
          puVar49 = puVar56;
          if ((long **)*pplVar39 != pplVar54) {
            do {
              plVar40 = *pplVar38;
              pplVar38 = (long **)(plVar40 + 2);
              pplVar39 = (long **)*pplVar38;
            } while (*pplVar39 != plVar40);
          }
        }
        pplVar54 = pplVar39;
        puVar56 = puVar49;
        puVar61 = puVar36;
      } while (pplVar39 != &local_5a8);
    }
    uVar18 = ((long)puVar36 - (long)puVar49 >> 4) * 0x14c1bacf914c1bad;
    if (0 < (long)puVar36 - (long)puVar49) {
      uVar50 = uVar18;
      if (0x3759f22983759e < uVar18) {
        uVar50 = 0x3759f22983759f;
      }
      do {
        pvVar48 = operator_new(uVar50 * 0x250,(nothrow_t *)&std::nothrow);
        if (pvVar48 != (void *)0x0) goto LAB_00919464;
        bVar8 = 1 < uVar50;
        uVar50 = uVar50 >> 1;
      } while (bVar8);
    }
    pvVar48 = (void *)0x0;
    uVar50 = 0;
LAB_00919464:
                    /* try { // try from 00919464 to 0091947f has its CatchHandler @ 0091e1b4 */
    FUN_00921084(puVar49,puVar36,&local_2d8,uVar18,pvVar48,uVar50);
    if (pvVar48 != (void *)0x0) {
      operator_delete(pvVar48);
    }
    if (puVar49 != puVar36) {
      pvVar48 = (void *)((ulong)&local_2d8 | 1);
      local_738 = (float *)((long)puVar49 + 0x10c);
      do {
        cVar4 = local_438;
        pppuVar6 = local_440;
        lVar20 = puVar49[0x49];
        uVar10 = __strlen_chk("    <Material name=\"",0x15);
        if (cVar4 == '\0') {
          (*(code *)(*pppuVar6)[6])(pppuVar6,"    <Material name=\"");
        }
        else {
          File::writeDosEOLExpand((File *)pppuVar6,"    <Material name=\"",uVar10);
        }
        cVar4 = local_438;
        pppuVar6 = local_440;
        pvVar51 = (void *)puVar49[1];
        uVar10 = __strlen_chk(pvVar51,0xffffffffffffffff);
        if (cVar4 == '\0') {
          (*(code *)(*pppuVar6)[6])(pppuVar6,pvVar51);
        }
        else {
          File::writeDosEOLExpand((File *)pppuVar6,pvVar51,uVar10);
        }
        cVar4 = local_438;
        pppuVar6 = local_440;
        uVar10 = __strlen_chk("\" materialId=\"",0xf);
        if (cVar4 == '\0') {
          (*(code *)(*pppuVar6)[6])(pppuVar6,"\" materialId=\"");
          uVar19 = extraout_x1_02;
        }
        else {
          File::writeDosEOLExpand((File *)pppuVar6,"\" materialId=\"",uVar10);
          uVar19 = extraout_x1_01;
        }
        uVar11 = FUN_0091faa0(&local_2d8,uVar19,&DAT_004cf2ba,*(undefined4 *)(lVar20 + 0x18));
        (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
        cVar4 = local_438;
        pppuVar6 = local_440;
        if (*(int *)((long)puVar49 + 0x14) != 0) {
          uVar10 = __strlen_chk("\" shaderType=\"",0xf);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,"\" shaderType=\"");
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,"\" shaderType=\"",uVar10);
          }
          cVar4 = local_438;
          pppuVar6 = local_440;
          pcVar52 = "INVALID";
          if ((int)*(uint *)((long)puVar49 + 0x14) < 6) {
            pcVar52 = (&Geometry::s_shaderTypeNames)[*(uint *)((long)puVar49 + 0x14)];
          }
          uVar10 = __strlen_chk(pcVar52,0xffffffffffffffff);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,pcVar52);
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,pcVar52,uVar10);
          }
        }
        if ((puVar49[3] != 0) && ((*(ushort *)(puVar49[3] + 0x48) >> 5 & 1) != 0)) {
                    /* try { // try from 00919708 to 0091992b has its CatchHandler @ 0091e490 */
          pbVar22 = (byte *)SingleColorTexture::getColor();
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk("\" diffuseColor=\"",0x11);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,"\" diffuseColor=\"");
            uVar19 = extraout_x1_04;
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,"\" diffuseColor=\"",uVar10);
            uVar19 = extraout_x1_03;
          }
          fVar62 = (float)NEON_ucvtf((uint)*pbVar22);
          uVar11 = FUN_0091faa0((double)(fVar62 / 255.0),&local_2d8,uVar19,&DAT_0050d9a5);
          (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk(&DAT_004d3339,2);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004d3339);
            uVar19 = extraout_x1_06;
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,&DAT_004d3339,uVar10);
            uVar19 = extraout_x1_05;
          }
          fVar62 = (float)NEON_ucvtf((uint)pbVar22[1]);
          uVar11 = FUN_0091faa0((double)(fVar62 / 255.0),&local_2d8,uVar19,&DAT_0050d9a5);
          (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk(&DAT_004d3339,2);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004d3339);
            uVar19 = extraout_x1_08;
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,&DAT_004d3339,uVar10);
            uVar19 = extraout_x1_07;
          }
          fVar62 = (float)NEON_ucvtf((uint)pbVar22[2]);
          uVar11 = FUN_0091faa0((double)(fVar62 / 255.0),&local_2d8,uVar19,&DAT_0050d9a5);
          (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk(&DAT_004d3339,2);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004d3339);
            uVar19 = extraout_x1_10;
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,&DAT_004d3339,uVar10);
            uVar19 = extraout_x1_09;
          }
          fVar62 = (float)NEON_ucvtf((uint)pbVar22[3]);
          uVar11 = FUN_0091faa0((double)(fVar62 / 255.0),&local_2d8,uVar19,&DAT_0050d9a5);
          (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
        }
        if ((puVar49[6] != 0) && ((*(ushort *)(puVar49[6] + 0x48) >> 5 & 1) != 0)) {
                    /* try { // try from 0091993c to 00919b5f has its CatchHandler @ 0091e48c */
          pbVar22 = (byte *)SingleColorTexture::getColor();
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk("\" emissiveColor=\"",0x12);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,"\" emissiveColor=\"");
            uVar19 = extraout_x1_12;
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,"\" emissiveColor=\"",uVar10);
            uVar19 = extraout_x1_11;
          }
          fVar62 = (float)NEON_ucvtf((uint)*pbVar22);
          uVar11 = FUN_0091faa0((double)(fVar62 / 255.0),&local_2d8,uVar19,&DAT_0050d9a5);
          (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk(&DAT_004d3339,2);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004d3339);
            uVar19 = extraout_x1_14;
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,&DAT_004d3339,uVar10);
            uVar19 = extraout_x1_13;
          }
          fVar62 = (float)NEON_ucvtf((uint)pbVar22[1]);
          uVar11 = FUN_0091faa0((double)(fVar62 / 255.0),&local_2d8,uVar19,&DAT_0050d9a5);
          (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk(&DAT_004d3339,2);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004d3339);
            uVar19 = extraout_x1_16;
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,&DAT_004d3339,uVar10);
            uVar19 = extraout_x1_15;
          }
          fVar62 = (float)NEON_ucvtf((uint)pbVar22[2]);
          uVar11 = FUN_0091faa0((double)(fVar62 / 255.0),&local_2d8,uVar19,&DAT_0050d9a5);
          (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk(&DAT_004d3339,2);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004d3339);
            uVar19 = extraout_x1_18;
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,&DAT_004d3339,uVar10);
            uVar19 = extraout_x1_17;
          }
          fVar62 = (float)NEON_ucvtf((uint)pbVar22[3]);
          uVar11 = FUN_0091faa0((double)(fVar62 / 255.0),&local_2d8,uVar19,&DAT_0050d9a5);
          (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
        }
        if ((puVar49[5] != 0) && ((*(ushort *)(puVar49[5] + 0x48) >> 5 & 1) != 0)) {
                    /* try { // try from 00919b70 to 00919d0b has its CatchHandler @ 0091e488 */
          pbVar22 = (byte *)SingleColorTexture::getColor();
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk("\" specularColor=\"",0x12);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,"\" specularColor=\"");
            uVar19 = extraout_x1_20;
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,"\" specularColor=\"",uVar10);
            uVar19 = extraout_x1_19;
          }
          fVar62 = (float)NEON_ucvtf((uint)*pbVar22);
          uVar11 = FUN_0091faa0((double)(fVar62 / 255.0),&local_2d8,uVar19,&DAT_0050d9a5);
          (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk(&DAT_004d3339,2);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004d3339);
            uVar19 = extraout_x1_22;
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,&DAT_004d3339,uVar10);
            uVar19 = extraout_x1_21;
          }
          fVar62 = (float)NEON_ucvtf((uint)pbVar22[1]);
          uVar11 = FUN_0091faa0((double)(fVar62 / 255.0),&local_2d8,uVar19,&DAT_0050d9a5);
          (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk(&DAT_004d3339,2);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004d3339);
            uVar19 = extraout_x1_24;
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,&DAT_004d3339,uVar10);
            uVar19 = extraout_x1_23;
          }
          fVar62 = (float)NEON_ucvtf((uint)pbVar22[2]);
          uVar11 = FUN_0091faa0((double)(fVar62 / 255.0),&local_2d8,uVar19,&DAT_0050d9a5);
          (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
        }
        cVar4 = local_438;
        pppuVar6 = local_440;
        if (*(char *)((long)puVar49 + 0x66) != '\0') {
                    /* try { // try from 00919d20 to 00919e5b has its CatchHandler @ 0091e554 */
          uVar10 = __strlen_chk("\" alphaBlending=\"",0x12);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,"\" alphaBlending=\"");
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,"\" alphaBlending=\"",uVar10);
          }
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk(&DAT_004ec5fc,5);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004ec5fc);
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,&DAT_004ec5fc,uVar10);
          }
        }
        cVar4 = local_438;
        pppuVar6 = local_440;
        if (*(char *)((long)puVar49 + 100) == '\0') {
          uVar10 = __strlen_chk("\" allowFog=\"",0xd);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,"\" allowFog=\"");
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,"\" allowFog=\"",uVar10);
          }
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk("false",6);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,"false");
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,"false",uVar10);
          }
        }
        lVar20 = puVar49[0xd];
        if (lVar20 != 0) {
          pcVar52 = (char *)(lVar20 + 0x11);
          if ((*(byte *)(lVar20 + 0x10) & 1) != 0) {
            pcVar52 = *(char **)(lVar20 + 0x20);
          }
          ppuVar21 = (undefined **)strlen(pcVar52);
          if ((undefined **)0xffffffffffffffef < ppuVar21) {
                    /* try { // try from 0091dfb4 to 0091dfbb has its CatchHandler @ 0091e398 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (ppuVar21 < (undefined **)0x17) {
            local_2d8 = (undefined **)CONCAT71(local_2d8._1_7_,(char)((int)ppuVar21 << 1));
            pvVar51 = pvVar48;
            if (ppuVar21 != (undefined **)0x0) goto LAB_00919ecc;
          }
          else {
                    /* try { // try from 00919eb0 to 00919eb7 has its CatchHandler @ 0091e350 */
            pvVar51 = operator_new((ulong)(ppuVar21 + 2) & 0xfffffffffffffff0);
            local_2d8 = (undefined **)((ulong)(ppuVar21 + 2) & 0xfffffffffffffff0 | 1);
            local_2d0 = ppuVar21;
            local_2c8 = pvVar51;
LAB_00919ecc:
            memcpy(pvVar51,pcVar52,(size_t)ppuVar21);
          }
          *(undefined *)((long)pvVar51 + (long)ppuVar21) = 0;
                    /* try { // try from 00919ee0 to 00919eeb has its CatchHandler @ 0091e3a0 */
          _Var12 = std::__ndk1::
                   __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                   ::
                   find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                               *)&local_598,(basic_string *)&local_2d8);
          if (((ulong)local_2d8 & 1) != 0) {
            operator_delete(local_2c8);
          }
          cVar4 = local_438;
          pppuVar6 = local_440;
          if (&local_590 != (long **)(ulong)_Var12) {
                    /* try { // try from 00919f1c to 00919f8f has its CatchHandler @ 0091e554 */
            uVar10 = __strlen_chk("\" customShaderId=\"",0x13);
            if (cVar4 == '\0') {
              (*(code *)(*pppuVar6)[6])(pppuVar6,"\" customShaderId=\"");
              uVar19 = extraout_x1_26;
            }
            else {
              File::writeDosEOLExpand((File *)pppuVar6,"\" customShaderId=\"",uVar10);
              uVar19 = extraout_x1_25;
            }
            uVar11 = FUN_0091faa0(&local_2d8,uVar19,&DAT_004cf2ba,
                                  *(undefined4 *)((long **)(ulong)_Var12 + 7));
            (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
            cVar4 = local_438;
            pppuVar6 = local_440;
            pvVar51 = *(void **)(*(long *)(puVar49[0xd] + 0x110) +
                                (ulong)*(uint *)(puVar49 + 0xe) * 0xe0);
            if (pvVar51 != (void *)0x0) {
                    /* try { // try from 00919fb8 to 0091a03f has its CatchHandler @ 0091e3d8 */
              uVar10 = __strlen_chk("\" customShaderVariation=\"",0x1a);
              if (cVar4 == '\0') {
                (*(code *)(*pppuVar6)[6])(pppuVar6,"\" customShaderVariation=\"");
              }
              else {
                File::writeDosEOLExpand((File *)pppuVar6,"\" customShaderVariation=\"",uVar10);
              }
              cVar4 = local_438;
              pppuVar6 = local_440;
              uVar10 = __strlen_chk(pvVar51,0xffffffffffffffff);
              if (cVar4 == '\0') {
                (*(code *)(*pppuVar6)[6])(pppuVar6,pvVar51);
              }
              else {
                File::writeDosEOLExpand((File *)pppuVar6,pvVar51,uVar10);
              }
            }
          }
        }
        cVar4 = local_438;
        pppuVar6 = local_440;
        if (*(int *)(puVar49 + 0x48) != 0) {
                    /* try { // try from 0091a054 to 0091a13b has its CatchHandler @ 0091e554 */
          uVar10 = __strlen_chk("\" shadingRate=\"",0x10);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,"\" shadingRate=\"");
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,"\" shadingRate=\"",uVar10);
          }
          cVar4 = local_438;
          pppuVar6 = local_440;
          pvVar51 = *(void **)(s_shadingRateStrings + (ulong)*(uint *)(puVar49 + 0x48) * 8);
          uVar10 = __strlen_chk(pvVar51,0xffffffffffffffff);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,pvVar51);
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,pvVar51,uVar10);
          }
        }
        cVar4 = local_438;
        pppuVar6 = local_440;
        uVar10 = __strlen_chk(&DAT_004ddf6f,4);
        if (cVar4 == '\0') {
          (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004ddf6f);
        }
        else {
          File::writeDosEOLExpand((File *)pppuVar6,&DAT_004ddf6f,uVar10);
        }
        lVar20 = puVar49[3];
        if ((lVar20 != 0) && ((*(ushort *)(lVar20 + 0x48) >> 5 & 1) == 0)) {
          pcVar52 = (char *)(lVar20 + 0x31);
          if ((*(byte *)(lVar20 + 0x30) & 1) != 0) {
            pcVar52 = *(char **)(lVar20 + 0x40);
          }
          ppuVar21 = (undefined **)strlen(pcVar52);
          if ((undefined **)0xffffffffffffffef < ppuVar21) {
                    /* try { // try from 0091dfe0 to 0091dfe7 has its CatchHandler @ 0091e334 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (ppuVar21 < (undefined **)0x17) {
            local_2d8 = (undefined **)CONCAT71(local_2d8._1_7_,(char)((int)ppuVar21 << 1));
            pvVar51 = pvVar48;
            if (ppuVar21 != (undefined **)0x0) goto LAB_0091a1b4;
          }
          else {
                    /* try { // try from 0091a198 to 0091a19f has its CatchHandler @ 0091e2b0 */
            pvVar51 = operator_new((ulong)(ppuVar21 + 2) & 0xfffffffffffffff0);
            local_2d8 = (undefined **)((ulong)(ppuVar21 + 2) & 0xfffffffffffffff0 | 1);
            local_2d0 = ppuVar21;
            local_2c8 = pvVar51;
LAB_0091a1b4:
            memcpy(pvVar51,pcVar52,(size_t)ppuVar21);
          }
          *(undefined *)((long)pvVar51 + (long)ppuVar21) = 0;
                    /* try { // try from 0091a1c8 to 0091a1d3 has its CatchHandler @ 0091e33c */
          _Var12 = std::__ndk1::
                   __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                   ::
                   find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                               *)&local_598,(basic_string *)&local_2d8);
          if (((ulong)local_2d8 & 1) != 0) {
            operator_delete(local_2c8);
          }
          cVar4 = local_438;
          pppuVar6 = local_440;
          if (&local_590 != (long **)(ulong)_Var12) {
                    /* try { // try from 0091a204 to 0091a2bb has its CatchHandler @ 0091e554 */
            uVar10 = __strlen_chk("      <Texture fileId=\"",0x18);
            if (cVar4 == '\0') {
              (*(code *)(*pppuVar6)[6])(pppuVar6,"      <Texture fileId=\"");
              uVar19 = extraout_x1_28;
            }
            else {
              File::writeDosEOLExpand((File *)pppuVar6,"      <Texture fileId=\"",uVar10);
              uVar19 = extraout_x1_27;
            }
            uVar11 = FUN_0091faa0(&local_2d8,uVar19,&DAT_004cf2ba,
                                  *(undefined4 *)((long **)(ulong)_Var12 + 7));
            (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
            cVar4 = local_438;
            pppuVar6 = local_440;
            uVar10 = __strlen_chk(&DAT_004ddf8b,5);
            if (cVar4 == '\0') {
              (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004ddf8b);
            }
            else {
              File::writeDosEOLExpand((File *)pppuVar6,&DAT_004ddf8b,uVar10);
            }
          }
        }
        lVar20 = puVar49[4];
        if (lVar20 != 0) {
          pcVar52 = (char *)(lVar20 + 0x31);
          if ((*(byte *)(lVar20 + 0x30) & 1) != 0) {
            pcVar52 = *(char **)(lVar20 + 0x40);
          }
          ppuVar21 = (undefined **)strlen(pcVar52);
          if ((undefined **)0xffffffffffffffef < ppuVar21) {
                    /* try { // try from 0091dfac to 0091dfb3 has its CatchHandler @ 0091e39c */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (ppuVar21 < (undefined **)0x17) {
            local_2d8 = (undefined **)CONCAT71(local_2d8._1_7_,(char)((int)ppuVar21 << 1));
            pvVar51 = pvVar48;
            if (ppuVar21 != (undefined **)0x0) goto LAB_0091a32c;
          }
          else {
                    /* try { // try from 0091a310 to 0091a317 has its CatchHandler @ 0091e338 */
            pvVar51 = operator_new((ulong)(ppuVar21 + 2) & 0xfffffffffffffff0);
            local_2d8 = (undefined **)((ulong)(ppuVar21 + 2) & 0xfffffffffffffff0 | 1);
            local_2d0 = ppuVar21;
            local_2c8 = pvVar51;
LAB_0091a32c:
            memcpy(pvVar51,pcVar52,(size_t)ppuVar21);
          }
          *(undefined *)((long)pvVar51 + (long)ppuVar21) = 0;
                    /* try { // try from 0091a340 to 0091a34b has its CatchHandler @ 0091e394 */
          _Var12 = std::__ndk1::
                   __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                   ::
                   find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                               *)&local_598,(basic_string *)&local_2d8);
          if (((ulong)local_2d8 & 1) != 0) {
            operator_delete(local_2c8);
          }
          cVar4 = local_438;
          pppuVar6 = local_440;
          if (&local_590 != (long **)(ulong)_Var12) {
                    /* try { // try from 0091a37c to 0091a4cf has its CatchHandler @ 0091e554 */
            uVar10 = __strlen_chk("      <Normalmap fileId=\"",0x1a);
            if (cVar4 == '\0') {
              (*(code *)(*pppuVar6)[6])(pppuVar6,"      <Normalmap fileId=\"");
              uVar19 = extraout_x1_30;
            }
            else {
              File::writeDosEOLExpand((File *)pppuVar6,"      <Normalmap fileId=\"",uVar10);
              uVar19 = extraout_x1_29;
            }
            uVar11 = FUN_0091faa0(&local_2d8,uVar19,&DAT_004cf2ba,
                                  *(undefined4 *)((long **)(ulong)_Var12 + 7));
            (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
            cVar4 = local_438;
            pppuVar6 = local_440;
            if (*(float *)(puVar49 + 0xc) != 0.035) {
              uVar10 = __strlen_chk("\" bumpDepth=\"",0xe);
              if (cVar4 == '\0') {
                (*(code *)(*pppuVar6)[6])(pppuVar6,"\" bumpDepth=\"");
                uVar19 = extraout_x1_32;
              }
              else {
                File::writeDosEOLExpand((File *)pppuVar6,"\" bumpDepth=\"",uVar10);
                uVar19 = extraout_x1_31;
              }
              uVar11 = FUN_0091faa0((double)(*(float *)(puVar49 + 0xc) / 0.035),&local_2d8,uVar19,
                                    &DAT_0050d9a5);
              (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
            }
            cVar4 = local_438;
            pppuVar6 = local_440;
            uVar10 = __strlen_chk(&DAT_004ddf8b,5);
            if (cVar4 == '\0') {
              (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004ddf8b);
            }
            else {
              File::writeDosEOLExpand((File *)pppuVar6,&DAT_004ddf8b,uVar10);
            }
          }
        }
        lVar20 = puVar49[5];
        if ((lVar20 != 0) && ((*(ushort *)(lVar20 + 0x48) >> 5 & 1) == 0)) {
          pcVar52 = (char *)(lVar20 + 0x31);
          if ((*(byte *)(lVar20 + 0x30) & 1) != 0) {
            pcVar52 = *(char **)(lVar20 + 0x40);
          }
          ppuVar21 = (undefined **)strlen(pcVar52);
          if ((undefined **)0xffffffffffffffef < ppuVar21) {
                    /* try { // try from 0091dfd8 to 0091dfdf has its CatchHandler @ 0091e344 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (ppuVar21 < (undefined **)0x17) {
            local_2d8 = (undefined **)CONCAT71(local_2d8._1_7_,(char)((int)ppuVar21 << 1));
            pvVar51 = pvVar48;
            if (ppuVar21 != (undefined **)0x0) goto LAB_0091a548;
          }
          else {
                    /* try { // try from 0091a52c to 0091a533 has its CatchHandler @ 0091e2a8 */
            pvVar51 = operator_new((ulong)(ppuVar21 + 2) & 0xfffffffffffffff0);
            local_2d8 = (undefined **)((ulong)(ppuVar21 + 2) & 0xfffffffffffffff0 | 1);
            local_2d0 = ppuVar21;
            local_2c8 = pvVar51;
LAB_0091a548:
            memcpy(pvVar51,pcVar52,(size_t)ppuVar21);
          }
          *(undefined *)((long)pvVar51 + (long)ppuVar21) = 0;
                    /* try { // try from 0091a55c to 0091a567 has its CatchHandler @ 0091e34c */
          _Var12 = std::__ndk1::
                   __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                   ::
                   find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                               *)&local_598,(basic_string *)&local_2d8);
          if (((ulong)local_2d8 & 1) != 0) {
            operator_delete(local_2c8);
          }
          cVar4 = local_438;
          pppuVar6 = local_440;
          if (&local_590 != (long **)(ulong)_Var12) {
                    /* try { // try from 0091a598 to 0091a64f has its CatchHandler @ 0091e554 */
            uVar10 = __strlen_chk("      <Glossmap fileId=\"",0x19);
            if (cVar4 == '\0') {
              (*(code *)(*pppuVar6)[6])(pppuVar6,"      <Glossmap fileId=\"");
              uVar19 = extraout_x1_34;
            }
            else {
              File::writeDosEOLExpand((File *)pppuVar6,"      <Glossmap fileId=\"",uVar10);
              uVar19 = extraout_x1_33;
            }
            uVar11 = FUN_0091faa0(&local_2d8,uVar19,&DAT_004cf2ba,
                                  *(undefined4 *)((long **)(ulong)_Var12 + 7));
            (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
            cVar4 = local_438;
            pppuVar6 = local_440;
            uVar10 = __strlen_chk(&DAT_004ddf8b,5);
            if (cVar4 == '\0') {
              (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004ddf8b);
            }
            else {
              File::writeDosEOLExpand((File *)pppuVar6,&DAT_004ddf8b,uVar10);
            }
          }
        }
        lVar20 = puVar49[6];
        if ((lVar20 != 0) && ((*(ushort *)(lVar20 + 0x48) >> 5 & 1) == 0)) {
          pcVar52 = (char *)(lVar20 + 0x31);
          if ((*(byte *)(lVar20 + 0x30) & 1) != 0) {
            pcVar52 = *(char **)(lVar20 + 0x40);
          }
          ppuVar21 = (undefined **)strlen(pcVar52);
          if ((undefined **)0xffffffffffffffef < ppuVar21) {
                    /* try { // try from 0091dfd0 to 0091dfd7 has its CatchHandler @ 0091e348 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (ppuVar21 < (undefined **)0x17) {
            local_2d8 = (undefined **)CONCAT71(local_2d8._1_7_,(char)((int)ppuVar21 << 1));
            pvVar51 = pvVar48;
            if (ppuVar21 != (undefined **)0x0) goto LAB_0091a6c8;
          }
          else {
                    /* try { // try from 0091a6ac to 0091a6b3 has its CatchHandler @ 0091e2ac */
            pvVar51 = operator_new((ulong)(ppuVar21 + 2) & 0xfffffffffffffff0);
            local_2d8 = (undefined **)((ulong)(ppuVar21 + 2) & 0xfffffffffffffff0 | 1);
            local_2d0 = ppuVar21;
            local_2c8 = pvVar51;
LAB_0091a6c8:
            memcpy(pvVar51,pcVar52,(size_t)ppuVar21);
          }
          *(undefined *)((long)pvVar51 + (long)ppuVar21) = 0;
                    /* try { // try from 0091a6dc to 0091a6e7 has its CatchHandler @ 0091e340 */
          _Var12 = std::__ndk1::
                   __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                   ::
                   find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                               *)&local_598,(basic_string *)&local_2d8);
          pplVar54 = (long **)(ulong)_Var12;
          if (((ulong)local_2d8 & 1) != 0) {
            operator_delete(local_2c8);
          }
          cVar4 = local_438;
          pppuVar6 = local_440;
          if ((&local_590 != pplVar54) && (*(char *)((long)pplVar54 + 0x6d) == '\0')) {
                    /* try { // try from 0091a720 to 0091ad93 has its CatchHandler @ 0091e554 */
            uVar10 = __strlen_chk("      <Emissivemap fileId=\"",0x1c);
            if (cVar4 == '\0') {
              (*(code *)(*pppuVar6)[6])(pppuVar6,"      <Emissivemap fileId=\"");
              uVar19 = extraout_x1_36;
            }
            else {
              File::writeDosEOLExpand((File *)pppuVar6,"      <Emissivemap fileId=\"",uVar10);
              uVar19 = extraout_x1_35;
            }
            uVar11 = FUN_0091faa0(&local_2d8,uVar19,&DAT_004cf2ba,*(undefined4 *)(pplVar54 + 7));
            (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
            cVar4 = local_438;
            pppuVar6 = local_440;
            uVar10 = __strlen_chk(&DAT_004ddf8b,5);
            if (cVar4 == '\0') {
              (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004ddf8b);
            }
            else {
              File::writeDosEOLExpand((File *)pppuVar6,&DAT_004ddf8b,uVar10);
            }
          }
        }
        cVar4 = local_438;
        pppuVar6 = local_440;
        if (0.0 < *(float *)(puVar49 + 7)) {
          uVar10 = __strlen_chk("      <Reflectionmap",0x15);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,"      <Reflectionmap");
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,"      <Reflectionmap",uVar10);
          }
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk(" lodDistanceScaling=\"",0x16);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6," lodDistanceScaling=\"");
            uVar19 = extraout_x1_38;
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6," lodDistanceScaling=\"",uVar10);
            uVar19 = extraout_x1_37;
          }
          uVar11 = FUN_0091faa0((double)*(float *)((long)puVar49 + 0x44),&local_2d8,uVar19,
                                &DAT_0050d9a5);
          (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk("\" viewDistanceScaling=\"",0x18);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,"\" viewDistanceScaling=\"");
            uVar19 = extraout_x1_40;
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,"\" viewDistanceScaling=\"",uVar10);
            uVar19 = extraout_x1_39;
          }
          uVar11 = FUN_0091faa0((double)*(float *)(puVar49 + 9),&local_2d8,uVar19,&DAT_0050d9a5);
          (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk(&DAT_004e56b4,2);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004e56b4);
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,&DAT_004e56b4,uVar10);
          }
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk(" type=\"planar\" scaling=\"",0x19);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6," type=\"planar\" scaling=\"");
            uVar19 = extraout_x1_42;
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6," type=\"planar\" scaling=\"",uVar10);
            uVar19 = extraout_x1_41;
          }
          uVar11 = FUN_0091faa0((double)*(float *)(puVar49 + 7),&local_2d8,uVar19,&DAT_0050d9a5);
          (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk("\" refractiveIndex=\"",0x14);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,"\" refractiveIndex=\"");
            uVar19 = extraout_x1_44;
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,"\" refractiveIndex=\"",uVar10);
            uVar19 = extraout_x1_43;
          }
          uVar11 = FUN_0091faa0((double)*(float *)((long)puVar49 + 0x4c),&local_2d8,uVar19,
                                &DAT_0050d9a5);
          (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk("\" bumpScale=\"",0xe);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,"\" bumpScale=\"");
            uVar19 = extraout_x1_46;
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,"\" bumpScale=\"",uVar10);
            uVar19 = extraout_x1_45;
          }
          uVar11 = FUN_0091faa0((double)*(float *)(puVar49 + 10),&local_2d8,uVar19,&DAT_0050d9a5);
          (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk("\" shapesObjectMask=\"",0x15);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,"\" shapesObjectMask=\"");
            uVar19 = extraout_x1_48;
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,"\" shapesObjectMask=\"",uVar10);
            uVar19 = extraout_x1_47;
          }
          uVar11 = FUN_0091faa0(&local_2d8,uVar19,&DAT_004cf2ba,
                                *(undefined4 *)((long)puVar49 + 0x3c));
          (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk("\" lightsObjectMask=\"",0x15);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,"\" lightsObjectMask=\"");
            uVar19 = extraout_x1_50;
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,"\" lightsObjectMask=\"",uVar10);
            uVar19 = extraout_x1_49;
          }
          uVar11 = FUN_0091faa0(&local_2d8,uVar19,&DAT_004cf2ba,*(undefined4 *)(puVar49 + 8));
          (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk(&DAT_004ddf8b,5);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004ddf8b);
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,&DAT_004ddf8b,uVar10);
          }
        }
        cVar4 = local_438;
        pppuVar6 = local_440;
        if (*(char *)((long)puVar49 + 0x54) != '\0') {
          uVar10 = __strlen_chk("      <Refractionmap coeff=\"",0x1d);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,"      <Refractionmap coeff=\"");
            uVar19 = extraout_x1_52;
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,"      <Refractionmap coeff=\"",uVar10);
            uVar19 = extraout_x1_51;
          }
          uVar11 = FUN_0091faa0((double)*(float *)(puVar49 + 0xb),&local_2d8,uVar19,&DAT_0050d9a5);
          (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk("\" bumpScale=\"",0xe);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,"\" bumpScale=\"");
            uVar19 = extraout_x1_54;
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,"\" bumpScale=\"",uVar10);
            uVar19 = extraout_x1_53;
          }
          uVar11 = FUN_0091faa0((double)*(float *)((long)puVar49 + 0x5c),&local_2d8,uVar19,
                                &DAT_0050d9a5);
          (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk(&DAT_004ddf8b,5);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004ddf8b);
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,&DAT_004ddf8b,uVar10);
          }
        }
        if (puVar49[0xd] != 0) {
          uVar10 = *(uint *)((long)puVar49 + 0x74);
          if (uVar10 != 0) {
            uVar18 = 0;
            do {
              lVar20 = puVar49[uVar18 + 0x10];
              if (lVar20 != 0) {
                lVar43 = *(long *)(*(long *)(*(long *)(puVar49[0xd] + 0x110) +
                                             (ulong)*(uint *)(puVar49 + 0xe) * 0xe0 + 0x58) +
                                  uVar18 * 8);
                bVar2 = *(byte *)(lVar43 + 0x18);
                uVar50 = (ulong)(bVar2 >> 1);
                if ((bVar2 & 1) != 0) {
                  uVar50 = *(ulong *)(lVar43 + 0x20);
                }
                if (uVar50 == 0) {
                  lVar44 = 0;
                }
                else {
                  lVar44 = *(long *)(lVar43 + 0x28);
                  if ((bVar2 & 1) == 0) {
                    lVar44 = lVar43 + 0x19;
                  }
                }
                lVar43 = lVar20 + 0x31;
                if ((*(byte *)(lVar20 + 0x30) & 1) != 0) {
                  lVar43 = *(long *)(lVar20 + 0x40);
                }
                local_400 = (undefined **)0x0;
                uStack_3f8 = (undefined **)0x0;
                local_3f0 = (long ******)0x0;
                if (lVar44 != 0) {
                    /* try { // try from 0091ae3c to 0091ae53 has its CatchHandler @ 0091e4e0 */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign((char *)&local_400);
                  PathUtil::normalizePath((basic_string *)&local_400,(basic_string *)&local_400);
                }
                local_690 = (long ******)0x0;
                local_688 = (long ******)0x0;
                local_680 = (char *)0x0;
                if (lVar43 != 0) {
                    /* try { // try from 0091ae60 to 0091ae77 has its CatchHandler @ 0091e4fc */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign((char *)&local_690);
                  PathUtil::normalizePath((basic_string *)&local_690,(basic_string *)&local_690);
                }
                if (lVar44 == 0) {
LAB_0091af18:
                  lVar20 = puVar49[uVar18 + 0x10];
                  pcVar52 = (char *)(lVar20 + 0x31);
                  if ((*(byte *)(lVar20 + 0x30) & 1) != 0) {
                    pcVar52 = *(char **)(lVar20 + 0x40);
                  }
                  ppuVar21 = (undefined **)strlen(pcVar52);
                  if ((undefined **)0xffffffffffffffef < ppuVar21) {
                    /* try { // try from 0091dfa4 to 0091dfab has its CatchHandler @ 0091e4cc */
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (ppuVar21 < (undefined **)0x17) {
                    local_2d8 = (undefined **)CONCAT71(local_2d8._1_7_,(char)((int)ppuVar21 << 1));
                    pvVar51 = pvVar48;
                    if (ppuVar21 != (undefined **)0x0) goto LAB_0091af84;
                  }
                  else {
                    /* try { // try from 0091af68 to 0091af6f has its CatchHandler @ 0091e44c */
                    pvVar51 = operator_new((ulong)(ppuVar21 + 2) & 0xfffffffffffffff0);
                    local_2d8 = (undefined **)((ulong)(ppuVar21 + 2) & 0xfffffffffffffff0 | 1);
                    local_2d0 = ppuVar21;
                    local_2c8 = pvVar51;
LAB_0091af84:
                    memcpy(pvVar51,pcVar52,(size_t)ppuVar21);
                  }
                  *(undefined *)((long)pvVar51 + (long)ppuVar21) = 0;
                    /* try { // try from 0091af98 to 0091afa3 has its CatchHandler @ 0091e494 */
                  _Var12 = std::__ndk1::
                           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                           ::
                           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                                       *)&local_598,(basic_string *)&local_2d8);
                  pplVar54 = (long **)(ulong)_Var12;
                  if (((ulong)local_2d8 & 1) != 0) {
                    operator_delete(local_2c8);
                  }
                  cVar4 = local_438;
                  pppuVar6 = local_440;
                  if ((&local_590 != pplVar54) && (*(char *)((long)pplVar54 + 0x6d) == '\0')) {
                    /* try { // try from 0091afdc to 0091b157 has its CatchHandler @ 0091e4fc */
                    uVar10 = __strlen_chk("      <Custommap name=\"",0x18);
                    if (cVar4 == '\0') {
                      (*(code *)(*pppuVar6)[6])(pppuVar6,"      <Custommap name=\"");
                    }
                    else {
                      File::writeDosEOLExpand((File *)pppuVar6,"      <Custommap name=\"",uVar10);
                    }
                    cVar4 = local_438;
                    pppuVar6 = local_440;
                    pbVar42 = *(byte **)(*(long *)(*(long *)(puVar49[0xd] + 0x110) +
                                                   (ulong)*(uint *)(puVar49 + 0xe) * 0xe0 + 0x58) +
                                        uVar18 * 8);
                    pbVar22 = *(byte **)(pbVar42 + 0x10);
                    if ((*pbVar42 & 1) == 0) {
                      pbVar22 = pbVar42 + 1;
                    }
                    uVar10 = __strlen_chk(pbVar22,0xffffffffffffffff);
                    if (cVar4 == '\0') {
                      (*(code *)(*pppuVar6)[6])(pppuVar6,pbVar22);
                    }
                    else {
                      File::writeDosEOLExpand((File *)pppuVar6,pbVar22,uVar10);
                    }
                    cVar4 = local_438;
                    pppuVar6 = local_440;
                    uVar10 = __strlen_chk("\" fileId=\"",0xb);
                    if (cVar4 == '\0') {
                      (*(code *)(*pppuVar6)[6])(pppuVar6,"\" fileId=\"");
                      uVar19 = extraout_x1_56;
                    }
                    else {
                      File::writeDosEOLExpand((File *)pppuVar6,"\" fileId=\"",uVar10);
                      uVar19 = extraout_x1_55;
                    }
                    uVar11 = FUN_0091faa0(&local_2d8,uVar19,&DAT_004cf2ba,
                                          *(undefined4 *)(pplVar54 + 7));
                    (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
                    cVar4 = local_438;
                    pppuVar6 = local_440;
                    uVar10 = __strlen_chk(&DAT_004ddf8b,5);
                    if (cVar4 == '\0') {
                      (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004ddf8b);
                    }
                    else {
                      File::writeDosEOLExpand((File *)pppuVar6,&DAT_004ddf8b,uVar10);
                    }
                  }
                }
                else {
                  pppppplVar41 = (long ******)((ulong)local_400 >> 1 & 0x7f);
                  pppppplVar60 = pppppplVar41;
                  if (((ulong)local_400 & 1) != 0) {
                    pppppplVar60 = (long ******)uStack_3f8;
                  }
                  pppppplVar28 = (long ******)((ulong)local_690 >> 1 & 0x7f);
                  if (((ulong)local_690 & 1) != 0) {
                    pppppplVar28 = local_688;
                  }
                  if (pppppplVar60 != pppppplVar28) goto LAB_0091af18;
                  pppppplVar28 = (long ******)((ulong)&local_400 | 1);
                  if (((ulong)local_400 & 1) != 0) {
                    pppppplVar28 = local_3f0;
                  }
                  pcVar52 = (char *)((ulong)&local_690 | 1);
                  if (((ulong)local_690 & 1) != 0) {
                    pcVar52 = local_680;
                  }
                  if (((ulong)local_400 & 1) == 0) {
                    pppppplVar28 = (long ******)((ulong)&local_400 | 1);
                    if (pppppplVar60 != (long ******)0x0) {
                      do {
                        pppppplVar41 = (long ******)((long)pppppplVar41 + -1);
                        cVar4 = *(char *)pppppplVar28;
                        cVar3 = *pcVar52;
                        pcVar52 = pcVar52 + 1;
                        pppppplVar28 = (long ******)((long)pppppplVar28 + 1);
                      } while (cVar4 == cVar3 && pppppplVar41 != (long ******)0x0);
                      if (cVar4 != cVar3) goto LAB_0091af18;
                    }
                  }
                  else if ((pppppplVar60 != (long ******)0x0) &&
                          (iVar9 = memcmp(pppppplVar28,pcVar52,(size_t)pppppplVar60), iVar9 != 0))
                  goto LAB_0091af18;
                }
                if (((ulong)local_690 & 1) != 0) {
                  operator_delete(local_680);
                }
                if (((ulong)local_400 & 1) != 0) {
                  operator_delete(local_3f0);
                }
                uVar10 = *(uint *)((long)puVar49 + 0x74);
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 < uVar10);
          }
          if (*(int *)(puVar49 + 0xf) != 0) {
            uVar18 = 0;
            pfVar58 = local_738;
            do {
              cVar4 = local_438;
              pppuVar6 = local_440;
              pbVar22 = *(byte **)(*(long *)(*(long *)(puVar49[0xd] + 0x110) +
                                             (ulong)*(uint *)(puVar49 + 0xe) * 0xe0 + 0x40) +
                                  uVar18 * 8);
              if ((((*(float *)(pbVar22 + 0x30) != pfVar58[-3]) ||
                   (*(float *)(pbVar22 + 0x34) != pfVar58[-2])) ||
                  (*(float *)(pbVar22 + 0x38) != pfVar58[-1])) ||
                 (*(float *)(pbVar22 + 0x3c) != *pfVar58)) {
                uVar10 = __strlen_chk("      <CustomParameter name=\"",0x1e);
                if (cVar4 == '\0') {
                  (*(code *)(*pppuVar6)[6])(pppuVar6,"      <CustomParameter name=\"");
                }
                else {
                  File::writeDosEOLExpand((File *)pppuVar6,"      <CustomParameter name=\"",uVar10);
                }
                pbVar42 = *(byte **)(pbVar22 + 0x10);
                bVar8 = (*pbVar22 & 1) == 0;
                if (bVar8) {
                  pbVar42 = pbVar22 + 1;
                }
                uVar10 = (uint)(*pbVar22 >> 1);
                if (!bVar8) {
                  uVar10 = *(uint *)(pbVar22 + 8);
                }
                if (local_438 == '\0') {
                  (*(code *)(*local_440)[6])();
                }
                else {
                  File::writeDosEOLExpand((File *)local_440,pbVar42,uVar10);
                }
                cVar4 = local_438;
                pppuVar6 = local_440;
                uVar10 = __strlen_chk("\" value=\"",10);
                if (cVar4 == '\0') {
                  (*(code *)(*pppuVar6)[6])(pppuVar6,"\" value=\"");
                  uVar19 = extraout_x1_58;
                }
                else {
                  File::writeDosEOLExpand((File *)pppuVar6,"\" value=\"",uVar10);
                  uVar19 = extraout_x1_57;
                }
                uVar11 = FUN_0091faa0((double)pfVar58[-3],&local_2d8,uVar19,&DAT_0050d9a5);
                (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
                cVar4 = local_438;
                pppuVar6 = local_440;
                uVar10 = __strlen_chk(&DAT_004d3339,2);
                if (cVar4 == '\0') {
                  (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004d3339);
                  uVar19 = extraout_x1_60;
                }
                else {
                  File::writeDosEOLExpand((File *)pppuVar6,&DAT_004d3339,uVar10);
                  uVar19 = extraout_x1_59;
                }
                uVar11 = FUN_0091faa0((double)pfVar58[-2],&local_2d8,uVar19,&DAT_0050d9a5);
                (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
                cVar4 = local_438;
                pppuVar6 = local_440;
                uVar10 = __strlen_chk(&DAT_004d3339,2);
                if (cVar4 == '\0') {
                  (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004d3339);
                  uVar19 = extraout_x1_62;
                }
                else {
                  File::writeDosEOLExpand((File *)pppuVar6,&DAT_004d3339,uVar10);
                  uVar19 = extraout_x1_61;
                }
                uVar11 = FUN_0091faa0((double)pfVar58[-1],&local_2d8,uVar19,&DAT_0050d9a5);
                (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
                cVar4 = local_438;
                pppuVar6 = local_440;
                uVar10 = __strlen_chk(&DAT_004d3339,2);
                if (cVar4 == '\0') {
                  (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004d3339);
                  uVar19 = extraout_x1_64;
                }
                else {
                  File::writeDosEOLExpand((File *)pppuVar6,&DAT_004d3339,uVar10);
                  uVar19 = extraout_x1_63;
                }
                uVar11 = FUN_0091faa0((double)*pfVar58,&local_2d8,uVar19,&DAT_0050d9a5);
                (*(code *)(*local_440)[6])(local_440,&local_2d8,uVar11);
                cVar4 = local_438;
                pppuVar6 = local_440;
                uVar10 = __strlen_chk(&DAT_004ddf8b,5);
                if (cVar4 == '\0') {
                    /* try { // try from 0091b19c to 0091b4a7 has its CatchHandler @ 0091e558 */
                  (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004ddf8b);
                }
                else {
                  File::writeDosEOLExpand((File *)pppuVar6,&DAT_004ddf8b,uVar10);
                }
              }
              uVar18 = uVar18 + 1;
              pfVar58 = pfVar58 + 4;
            } while (uVar18 < *(uint *)(puVar49 + 0xf));
          }
        }
        cVar4 = local_438;
        pppuVar6 = local_440;
                    /* try { // try from 0091b4b8 to 0091b4e3 has its CatchHandler @ 0091e554 */
        uVar10 = __strlen_chk("    </Material>\n",0x11);
        if (cVar4 == '\0') {
                    /* try { // try from 009194f8 to 009196f7 has its CatchHandler @ 0091e554 */
          (*(code *)(*pppuVar6)[6])(pppuVar6,"    </Material>\n");
        }
        else {
          File::writeDosEOLExpand((File *)pppuVar6,"    </Material>\n",uVar10);
        }
        puVar49 = puVar49 + 0x4a;
        local_738 = local_738 + 0x94;
      } while (puVar49 != puVar36);
    }
    cVar4 = local_438;
    pppuVar6 = local_440;
                    /* try { // try from 0091b4f4 to 0091b53b has its CatchHandler @ 0091e254 */
    uVar10 = __strlen_chk("  </Materials>\n\n",0x11);
    if (cVar4 == '\0') {
      (*(code *)(*pppuVar6)[6])(pppuVar6,"  </Materials>\n\n");
    }
    else {
      File::writeDosEOLExpand((File *)pppuVar6,"  </Materials>\n\n",uVar10);
    }
    local_2d8 = (undefined **)0xfd8f40;
    local_268 = (undefined **)0xfd8f68;
                    /* try { // try from 0091b560 to 0091b56b has its CatchHandler @ 0091e1a4 */
    std::__ndk1::ios_base::init(&local_268);
    local_1e0 = 0;
    local_1d8 = CONCAT44(local_1d8._4_4_,0xffffffff);
    local_2d8 = &PTR__basic_ostringstream_00fd8ed0;
    local_268 = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 0091b590 to 0091b597 has its CatchHandler @ 0091e188 */
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
    local_270 = 0x10;
    local_690 = (long ******)0x0;
    local_688 = (long ******)0x0;
    uStack_288 = 0;
    uStack_284 = 0;
    local_290 = 0;
    uStack_28c = 0;
    uStack_278 = 0;
    local_280 = (void *)0x0;
    local_680 = (char *)0x0;
    local_6a0 = (long ********)0x0;
    local_698 = 0;
    local_2d0 = &PTR__basic_stringbuf_00fd8fa0;
    local_6a8 = (long ********)&local_6a0;
    pplVar54 = local_4c0;
    while (pppppppplVar53 = local_4d8, pplVar54 != &local_4b8) {
      plVar40 = pplVar54[4];
      uVar10 = *(uint *)(pplVar54 + 5);
      uVar14 = *(uint *)(plVar40 + 6);
      pppppppplVar53 = (long ********)&local_6a0;
      pppppppplVar35 = (long ********)&local_6a0;
      pppppppplVar37 = local_6a0;
      if ((uVar14 >> 10 & 1) == 0) {
        if ((uVar14 >> 9 & 1) == 0) {
          if ((uVar14 & 1) == 0) {
            if ((uVar14 >> 4 & 1) != 0) {
              while (pppppppplVar37 != (long ********)0x0) {
                while (pppppppplVar35 = pppppppplVar37,
                      uVar10 < *(uint *)((long)pppppppplVar35 + 0x1c)) {
                  pppppppplVar53 = pppppppplVar35;
                  pppppppplVar37 = (long ********)*pppppppplVar35;
                  if ((long ********)*pppppppplVar35 == (long ********)0x0) {
                    ppppppplVar34 = *pppppppplVar35;
                    goto joined_r0x0091bd44;
                  }
                }
                if (uVar10 <= *(uint *)((long)pppppppplVar35 + 0x1c)) break;
                pppppppplVar53 = pppppppplVar35 + 1;
                pppppppplVar37 = (long ********)pppppppplVar35[1];
              }
              ppppppplVar34 = *pppppppplVar53;
joined_r0x0091bd44:
              if (ppppppplVar34 == (long *******)0x0) {
                    /* try { // try from 0091bb10 to 0091bb1b has its CatchHandler @ 0091e100 */
                ppppppplVar34 = (long *******)operator_new(0x20);
                *(uint *)((long)ppppppplVar34 + 0x1c) = uVar10;
                *ppppppplVar34 = (long ******)0x0;
                ppppppplVar34[1] = (long ******)0x0;
                ppppppplVar34[2] = (long ******)pppppppplVar35;
                *pppppppplVar53 = ppppppplVar34;
                if ((long ********)*local_6a8 != (long ********)0x0) {
                  ppppppplVar34 = *pppppppplVar53;
                  local_6a8 = (long ********)*local_6a8;
                }
                std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                          ((__tree_node_base *)local_6a0,(__tree_node_base *)ppppppplVar34);
                local_698 = local_698 + 1;
                    /* try { // try from 0091bb54 to 0091bb5b has its CatchHandler @ 0091e250 */
                this = (Spline *)SplineGeometry::getSpline();
                if (this != (Spline *)0x0) {
                  if (param_8) {
                    /* try { // try from 0091bb70 to 0091bb93 has its CatchHandler @ 0091e0d8 */
                    uVar11 = SerializationHelper::serializeSpline
                                       ((char *)plVar40[3],uVar10,this,(uchar **)&uStack_3f8,
                                        (uint *)&local_3f0);
                    local_400 = (undefined **)CONCAT44(local_400._4_4_,uVar11);
                    FUN_0091e8fc(&local_690,&local_400);
                  }
                  else {
                    /* try { // try from 0091bd4c to 0091be27 has its CatchHandler @ 0091e250 */
                    pbVar17 = std::__ndk1::
                              __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                        ((basic_ostream *)&local_2d8,"    <NurbsCurve name=\"",0x16)
                    ;
                    pcVar52 = (char *)plVar40[3];
                    sVar16 = strlen(pcVar52);
                    pbVar17 = std::__ndk1::
                              __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                        (pbVar17,pcVar52,sVar16);
                    pbVar17 = std::__ndk1::
                              __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                        (pbVar17,"\" shapeId=\"",0xb);
                    pbVar17 = (basic_ostream *)
                              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::
                              operator<<((basic_ostream<char,std::__ndk1::char_traits<char>> *)
                                         pbVar17,uVar10);
                    pbVar17 = std::__ndk1::
                              __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                        (pbVar17,"\" type=\"",8);
                    pcVar52 = "linear";
                    if (*(int *)(this + 0x30) != 0) {
                      pcVar52 = "cubic";
                    }
                    uVar18 = 5;
                    if (*(int *)(this + 0x30) == 0) {
                      uVar18 = 6;
                    }
                    pbVar17 = std::__ndk1::
                              __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                        (pbVar17,pcVar52,uVar18);
                    pbVar17 = std::__ndk1::
                              __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                        (pbVar17,"\" degree=\"3\" form=\"",0x13);
                    iVar9 = Spline::getForm();
                    pcVar52 = "open";
                    if (iVar9 != 0) {
                      pcVar52 = "closed";
                    }
                    uVar18 = 4;
                    if (iVar9 != 0) {
                      uVar18 = 6;
                    }
                    pbVar17 = std::__ndk1::
                              __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                        (pbVar17,pcVar52,uVar18);
                    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar17,"\">\n",3);
                    /* try { // try from 0091be28 to 0091be2f has its CatchHandler @ 0091e098 */
                    uVar10 = Spline::getNumOfCV();
                    if (uVar10 != 0) {
                      uVar14 = 0;
                      do {
                    /* try { // try from 0091be3c to 0091be9f has its CatchHandler @ 0091e414 */
                        Spline::getCV(this,uVar14,(float *)&local_400);
                        pbVar17 = std::__ndk1::
                                  __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                            ((basic_ostream *)&local_2d8,"      <cv c=\"",0xd);
                        pbVar17 = (basic_ostream *)
                                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::
                                  operator<<((basic_ostream<char,std::__ndk1::char_traits<char>> *)
                                             pbVar17,(float)local_400);
                        pbVar17 = std::__ndk1::
                                  __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                            (pbVar17," ",1);
                        pbVar17 = (basic_ostream *)
                                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::
                                  operator<<((basic_ostream<char,std::__ndk1::char_traits<char>> *)
                                             pbVar17,local_400._4_4_);
                        pbVar17 = std::__ndk1::
                                  __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                            (pbVar17," ",1);
                        pbVar17 = (basic_ostream *)
                                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::
                                  operator<<((basic_ostream<char,std::__ndk1::char_traits<char>> *)
                                             pbVar17,(float)uStack_3f8);
                        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar17,"\"/>\n",4);
                        uVar14 = uVar14 + 1;
                      } while (uVar10 != uVar14);
                    }
                    /* try { // try from 0091beac to 0091bebf has its CatchHandler @ 0091e094 */
                    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              ((basic_ostream *)&local_2d8,"    </NurbsCurve>\n",0x12);
                  }
                }
              }
            }
          }
          else {
            while (pppppppplVar37 != (long ********)0x0) {
              while (pppppppplVar35 = pppppppplVar37,
                    uVar10 < *(uint *)((long)pppppppplVar35 + 0x1c)) {
                pppppppplVar53 = pppppppplVar35;
                pppppppplVar37 = (long ********)*pppppppplVar35;
                if ((long ********)*pppppppplVar35 == (long ********)0x0) {
                  ppppppplVar34 = *pppppppplVar35;
                  goto joined_r0x0091baf8;
                }
              }
              if (uVar10 <= *(uint *)((long)pppppppplVar35 + 0x1c)) break;
              pppppppplVar53 = pppppppplVar35 + 1;
              pppppppplVar37 = (long ********)pppppppplVar35[1];
            }
            ppppppplVar34 = *pppppppplVar53;
joined_r0x0091baf8:
            if (ppppppplVar34 == (long *******)0x0) {
                    /* try { // try from 0091b99c to 0091b9a7 has its CatchHandler @ 0091e17c */
              ppppppplVar34 = (long *******)operator_new(0x20);
              *(uint *)((long)ppppppplVar34 + 0x1c) = uVar10;
              *ppppppplVar34 = (long ******)0x0;
              ppppppplVar34[1] = (long ******)0x0;
              ppppppplVar34[2] = (long ******)pppppppplVar35;
              *pppppppplVar53 = ppppppplVar34;
              if ((long ********)*local_6a8 != (long ********)0x0) {
                ppppppplVar34 = *pppppppplVar53;
                local_6a8 = (long ********)*local_6a8;
              }
              std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                        ((__tree_node_base *)local_6a0,(__tree_node_base *)ppppppplVar34);
              local_698 = local_698 + 1;
                    /* try { // try from 0091b9e0 to 0091b9e7 has its CatchHandler @ 0091e178 */
              pIVar25 = (IndexedTriangleSet *)Geometry::getCollisionProxyMesh();
              if (pIVar25 != (IndexedTriangleSet *)0x0) {
                    /* try { // try from 0091b9f0 to 0091b9f7 has its CatchHandler @ 0091e110 */
                lVar20 = Geometry::getBoundingVolume();
                if (param_8) {
                  local_2f0 = &PTR_cookTriangleMesh_00fe00e8;
                  pppppppuVar31 = &local_578;
                  pppppppuVar7 = local_578;
                  if (local_578 == (undefined8 *******)0x0) {
LAB_0091ba64:
                    pppppppuVar31 = (undefined8 *******)0x0;
                  }
                  else {
                    do {
                      pppppppuVar46 = pppppppuVar7;
                      pppppppuVar33 = pppppppuVar31;
                      uVar14 = *(uint *)(pppppppuVar46 + 4);
                      pppppppuVar31 = pppppppuVar33;
                      if (uVar14 >= uVar10) {
                        pppppppuVar31 = pppppppuVar46;
                      }
                      pppppppuVar7 = (undefined8 *******)pppppppuVar46[uVar14 < uVar10];
                    } while ((undefined8 *******)pppppppuVar46[uVar14 < uVar10] !=
                             (undefined8 *******)0x0);
                    if ((undefined8 ********)pppppppuVar31 == &local_578) goto LAB_0091ba64;
                    if (uVar10 <= uVar14) {
                      pppppppuVar33 = pppppppuVar46;
                    }
                    if (uVar10 < *(uint *)(pppppppuVar33 + 4)) goto LAB_0091ba64;
                    pppppppuVar31 = pppppppuVar31 + 5;
                  }
                    /* try { // try from 0091ba6c to 0091ba97 has its CatchHandler @ 0091e10c */
                  uVar11 = SerializationHelper::serializeIndexedTriangleSet
                                     ((char *)plVar40[3],uVar10,(float *)(lVar20 + 0xc),
                                      *(float *)(lVar20 + 0x18),pIVar25,(set *)pppppppuVar31,
                                      (CookingInterface *)&local_2f0,(uchar **)&uStack_3f8,
                                      (uint *)&local_3f0);
                  local_400 = (undefined **)CONCAT44(local_400._4_4_,uVar11);
                  FUN_0091e8fc(&local_690,&local_400);
                }
                else {
                    /* try { // try from 0091bd28 to 0091bd37 has its CatchHandler @ 0091e0dc */
                  I3DSaveUtil::serializeIndexedTriangleSet
                            (pIVar25,(char *)plVar40[3],uVar10,(Vector3 *)(float *)(lVar20 + 0xc),
                             *(float *)(lVar20 + 0x18),(basic_ostream *)&local_2d8);
                }
              }
            }
          }
          goto LAB_0091bec0;
        }
        while (pppppppplVar37 != (long ********)0x0) {
          while (pppppppplVar35 = pppppppplVar37, uVar10 < *(uint *)((long)pppppppplVar35 + 0x1c)) {
            pppppppplVar53 = pppppppplVar35;
            pppppppplVar37 = (long ********)*pppppppplVar35;
            if ((long ********)*pppppppplVar35 == (long ********)0x0) {
              ppppppplVar34 = *pppppppplVar35;
              goto joined_r0x0091b89c;
            }
          }
          if (uVar10 <= *(uint *)((long)pppppppplVar35 + 0x1c)) break;
          pppppppplVar53 = pppppppplVar35 + 1;
          pppppppplVar37 = (long ********)pppppppplVar35[1];
        }
        ppppppplVar34 = *pppppppplVar53;
joined_r0x0091b89c:
        if (ppppppplVar34 != (long *******)0x0) goto LAB_0091bec0;
                    /* try { // try from 0091b8a0 to 0091b8ab has its CatchHandler @ 0091e248 */
        ppppppplVar34 = (long *******)operator_new(0x20);
        *(uint *)((long)ppppppplVar34 + 0x1c) = uVar10;
        *ppppppplVar34 = (long ******)0x0;
        ppppppplVar34[1] = (long ******)0x0;
        ppppppplVar34[2] = (long ******)pppppppplVar35;
        *pppppppplVar53 = ppppppplVar34;
        if ((long ********)*local_6a8 != (long ********)0x0) {
          ppppppplVar34 = *pppppppplVar53;
          local_6a8 = (long ********)*local_6a8;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)local_6a0,(__tree_node_base *)ppppppplVar34);
        local_698 = local_698 + 1;
        plVar57 = plVar40 + 0x12;
        lVar20 = *plVar57;
        lVar43 = plVar40[0xd];
        plVar29 = (long *)(lVar43 + 0x10);
        this_01 = *(long **)(lVar43 + 0x28);
        uVar18 = plVar40[0x13] - lVar20 >> 2;
        if ((*(long *)(lVar43 + 0x18) - *plVar29 >> 4) * -0x3333333333333333 - (uVar18 & 0xffffffff)
            == 0) {
          this_00 = this_01;
          if (!param_8) goto LAB_0091bce0;
LAB_0091b930:
                    /* try { // try from 0091b938 to 0091b95f has its CatchHandler @ 0091e244 */
          uVar11 = SerializationHelper::serializeSplitMeshAttachment
                             ((char *)plVar40[3],uVar10,(vector *)plVar57,
                              (IndexedTriangleSet *)this_00,(vector *)plVar29,(uchar **)&uStack_3f8,
                              (uint *)&local_3f0);
          local_400 = (undefined **)CONCAT44(local_400._4_4_,uVar11);
          FUN_0091e8fc(&local_690,&local_400);
        }
        else {
          uVar50 = (ulong)(plVar40[0x13] - lVar20) >> 2 & 0xffffffff;
          uVar14 = (uint)uVar18;
          if (uVar14 == 0) {
            uVar55 = 0;
            uVar15 = 0;
          }
          else {
            lVar43 = 0;
            uVar15 = 0;
            uVar55 = 0;
            while( true ) {
                    /* try { // try from 0091bac4 to 0091bacb has its CatchHandler @ 0091e3d4 */
              lVar20 = IndexedTriangleSet::getSubset
                                 ((IndexedTriangleSet *)this_01,
                                  (uint)*(ushort *)(lVar20 + lVar43 + 2));
              uVar15 = *(int *)(lVar20 + 4) + uVar15;
              uVar55 = *(int *)(lVar20 + 0xc) + uVar55;
              if (uVar50 * 4 + -4 == lVar43) break;
              lVar20 = *plVar57;
              lVar43 = lVar43 + 4;
            }
          }
                    /* try { // try from 0091bba8 to 0091bbaf has its CatchHandler @ 0091e2ec */
          this_00 = (long *)operator_new(0x90);
                    /* try { // try from 0091bbb4 to 0091bbb7 has its CatchHandler @ 0091e168 */
          IndexedTriangleSet::IndexedTriangleSet((IndexedTriangleSet *)this_00);
                    /* try { // try from 0091bbb8 to 0091bbe7 has its CatchHandler @ 0091e2ec */
          uVar13 = TriangleSet::getAttributes();
          TriangleSet::setNumVertices((TriangleSet *)this_00,uVar15,uVar13);
          IndexedTriangleSet::setNumIndices((IndexedTriangleSet *)this_00,uVar55);
          IndexedTriangleSet::setNumSubsets((IndexedTriangleSet *)this_00,uVar14);
          if (uVar14 != 0) {
            uVar18 = 0;
            uVar14 = 0;
            uVar15 = 0;
            do {
                    /* try { // try from 0091bc04 to 0091bc23 has its CatchHandler @ 0091e428 */
              puVar23 = (uint *)IndexedTriangleSet::getSubset
                                          ((IndexedTriangleSet *)this_01,
                                           (uint)*(ushort *)(*plVar57 + uVar18 * 4 + 2));
              TriangleSet::copyVertices
                        ((TriangleSet *)this_00,uVar14,(TriangleSet *)this_01,*puVar23,puVar23[1]);
              if (puVar23[3] != 0) {
                uVar55 = 0;
                do {
                    /* try { // try from 0091bc30 to 0091bc5b has its CatchHandler @ 0091e528 */
                  lVar20 = IndexedTriangleSet::getIndices16();
                  IndexedTriangleSet::setIndex
                            ((IndexedTriangleSet *)this_00,
                             (uVar14 - *puVar23) +
                             (uint)*(ushort *)(lVar20 + (ulong)(uVar55 + puVar23[2]) * 2),
                             uVar15 + uVar55);
                  uVar55 = uVar55 + 1;
                } while (uVar55 < puVar23[3]);
              }
              uStack_3f8 = *(undefined ***)(puVar23 + 6);
              local_400 = *(undefined ***)(puVar23 + 4);
                    /* try { // try from 0091bc78 to 0091bca7 has its CatchHandler @ 0091e424 */
              puVar24 = (uint *)operator_new(0x20);
              uVar55 = puVar23[1];
              uVar13 = puVar23[3];
              *(undefined ***)(puVar24 + 6) = uStack_3f8;
              *(undefined ***)(puVar24 + 4) = local_400;
              *puVar24 = uVar14;
              puVar24[1] = uVar55;
              puVar24[2] = uVar15;
              puVar24[3] = uVar13;
              IndexedTriangleSet::setSubset
                        ((IndexedTriangleSet *)this_00,(IndexedTriangleSubset *)puVar24,(uint)uVar18
                        );
              uVar18 = uVar18 + 1;
              uVar14 = puVar23[1] + uVar14;
              uVar15 = puVar23[3] + uVar15;
            } while (uVar18 != uVar50);
          }
          *(IndexedTriangleSet *)(this_00 + 0x11) = *(IndexedTriangleSet *)(this_01 + 0x11);
          if (param_8) goto LAB_0091b930;
LAB_0091bce0:
                    /* try { // try from 0091bce8 to 0091bcfb has its CatchHandler @ 0091e164 */
          I3DSaveUtil::serializeAttachmentIndexedTriangleSet
                    ((IndexedTriangleSet *)this_00,(char *)plVar40[3],uVar10,(vector *)plVar57,
                     (vector *)plVar29,(basic_ostream *)&local_2d8);
        }
        if ((this_00 != this_01) && (this_00 != (long *)0x0)) {
          (**(code **)(*this_00 + 8))(this_00);
        }
      }
      else {
        while (pppppppplVar37 != (long ********)0x0) {
          while (pppppppplVar35 = pppppppplVar37, uVar10 < *(uint *)((long)pppppppplVar35 + 0x1c)) {
            pppppppplVar53 = pppppppplVar35;
            pppppppplVar37 = (long ********)*pppppppplVar35;
            if ((long ********)*pppppppplVar35 == (long ********)0x0) {
              ppppppplVar34 = *pppppppplVar35;
              goto joined_r0x0091b888;
            }
          }
          if (uVar10 <= *(uint *)((long)pppppppplVar35 + 0x1c)) break;
          pppppppplVar53 = pppppppplVar35 + 1;
          pppppppplVar37 = (long ********)pppppppplVar35[1];
        }
        ppppppplVar34 = *pppppppplVar53;
joined_r0x0091b888:
        if (ppppppplVar34 == (long *******)0x0) {
                    /* try { // try from 0091b730 to 0091b73b has its CatchHandler @ 0091e2c8 */
          ppppppplVar34 = (long *******)operator_new(0x20);
          *(uint *)((long)ppppppplVar34 + 0x1c) = uVar10;
          *ppppppplVar34 = (long ******)0x0;
          ppppppplVar34[1] = (long ******)0x0;
          ppppppplVar34[2] = (long ******)pppppppplVar35;
          *pppppppplVar53 = ppppppplVar34;
          if ((long ********)*local_6a8 != (long ********)0x0) {
            ppppppplVar34 = *pppppppplVar53;
            local_6a8 = (long ********)*local_6a8;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    ((__tree_node_base *)local_6a0,(__tree_node_base *)ppppppplVar34);
          local_698 = local_698 + 1;
                    /* try { // try from 0091b774 to 0091b77b has its CatchHandler @ 0091e2c4 */
          pIVar25 = (IndexedTriangleSet *)Geometry::getCollisionProxyMesh();
                    /* try { // try from 0091b780 to 0091b787 has its CatchHandler @ 0091e2c0 */
          lVar20 = Geometry::getBoundingVolume();
          if (param_8) {
            local_2f0 = &PTR_cookTriangleMesh_00fe00e8;
            pppppppuVar31 = &local_578;
            pppppppuVar7 = local_578;
            if (local_578 == (undefined8 *******)0x0) {
LAB_0091b7fc:
              pppppppuVar31 = (undefined8 *******)0x0;
            }
            else {
              do {
                pppppppuVar46 = pppppppuVar7;
                pppppppuVar33 = pppppppuVar31;
                uVar14 = *(uint *)(pppppppuVar46 + 4);
                pppppppuVar31 = pppppppuVar33;
                if (uVar14 >= uVar10) {
                  pppppppuVar31 = pppppppuVar46;
                }
                pppppppuVar7 = (undefined8 *******)pppppppuVar46[uVar14 < uVar10];
              } while ((undefined8 *******)pppppppuVar46[uVar14 < uVar10] != (undefined8 *******)0x0
                      );
              if ((undefined8 ********)pppppppuVar31 == &local_578) goto LAB_0091b7fc;
              if (uVar10 <= uVar14) {
                pppppppuVar33 = pppppppuVar46;
              }
              if (uVar10 < *(uint *)(pppppppuVar33 + 4)) goto LAB_0091b7fc;
              pppppppuVar31 = pppppppuVar31 + 5;
            }
                    /* try { // try from 0091b80c to 0091b833 has its CatchHandler @ 0091e2bc */
            uVar11 = SerializationHelper::serializeSplitMesh
                               ((char *)plVar40[3],uVar10,(float *)(lVar20 + 0xc),
                                *(float *)(lVar20 + 0x18),pIVar25,(set *)pppppppuVar31,
                                (CookingInterface *)&local_2f0,(Brep *)plVar40[0x2e],
                                (vector *)(plVar40 + 0x2f),(uchar **)&uStack_3f8,(uint *)&local_3f0)
            ;
            local_400 = (undefined **)CONCAT44(local_400._4_4_,uVar11);
            FUN_0091e8fc(&local_690,&local_400);
          }
          else {
                    /* try { // try from 0091b968 to 0091b977 has its CatchHandler @ 0091e24c */
            I3DSaveUtil::serializeIndexedTriangleSet
                      (pIVar25,(char *)plVar40[3],uVar10,(Vector3 *)(float *)(lVar20 + 0xc),
                       *(float *)(lVar20 + 0x18),(basic_ostream *)&local_2d8);
          }
        }
      }
LAB_0091bec0:
      pplVar38 = (long **)pplVar54[1];
      if ((long **)pplVar54[1] == (long **)0x0) {
        pplVar38 = pplVar54 + 2;
        bVar8 = (long **)**pplVar38 != pplVar54;
        pplVar54 = (long **)*pplVar38;
        if (bVar8) {
          do {
            plVar40 = *pplVar38;
            pplVar38 = (long **)(plVar40 + 2);
            pplVar54 = (long **)*pplVar38;
          } while (*pplVar54 != plVar40);
        }
      }
      else {
        do {
          pplVar54 = pplVar38;
          pplVar38 = (long **)*pplVar54;
        } while ((long **)*pplVar54 != (long **)0x0);
      }
    }
    while (pplVar54 = local_4f0, (long *********)pppppppplVar53 != &local_4d0) {
      pppppppplVar35 = (long ********)&local_6a0;
      pppppppplVar37 = (long ********)&local_6a0;
      if (local_6a0 == (long ********)0x0) {
LAB_0091bf80:
        ppppppplVar34 = *pppppppplVar37;
      }
      else {
        pppppppplVar47 = local_6a0;
        do {
          while (pppppppplVar35 = pppppppplVar47,
                *(uint *)((long)pppppppplVar35 + 0x1c) <= *(uint *)(pppppppplVar53 + 8)) {
            if (*(uint *)(pppppppplVar53 + 8) <= *(uint *)((long)pppppppplVar35 + 0x1c))
            goto LAB_0091bf80;
            pppppppplVar37 = pppppppplVar35 + 1;
            pppppppplVar47 = (long ********)*pppppppplVar37;
            if ((long ********)*pppppppplVar37 == (long ********)0x0) goto LAB_0091bf80;
          }
          pppppppplVar47 = (long ********)*pppppppplVar35;
          pppppppplVar37 = pppppppplVar35;
        } while ((long ********)*pppppppplVar35 != (long ********)0x0);
        ppppppplVar34 = *pppppppplVar35;
      }
      if (ppppppplVar34 == (long *******)0x0) {
                    /* try { // try from 0091bf88 to 0091bf93 has its CatchHandler @ 0091e360 */
        ppppppplVar34 = (long *******)operator_new(0x20);
        uVar11 = *(undefined4 *)(pppppppplVar53 + 8);
        *ppppppplVar34 = (long ******)0x0;
        ppppppplVar34[1] = (long ******)0x0;
        ppppppplVar34[2] = (long ******)pppppppplVar35;
        *(undefined4 *)((long)ppppppplVar34 + 0x1c) = uVar11;
        *pppppppplVar37 = ppppppplVar34;
        if ((long ********)*local_6a8 != (long ********)0x0) {
          ppppppplVar34 = *pppppppplVar37;
          local_6a8 = (long ********)*local_6a8;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)local_6a0,(__tree_node_base *)ppppppplVar34);
        local_2f0 = (undefined **)0x0;
        local_2e8 = (long ********)((ulong)local_2e8 & 0xffffffff00000000);
        local_698 = local_698 + 1;
        if (param_8) {
          ppppppplVar34 = pppppppplVar53[7];
          if ((*(byte *)(pppppppplVar53 + 5) & 1) == 0) {
            ppppppplVar34 = (long *******)((long)pppppppplVar53 + 0x29);
          }
                    /* try { // try from 0091bffc to 0091c02b has its CatchHandler @ 0091e35c */
          uVar11 = SerializationHelper::serializeIndexedTriangleSet
                             ((char *)ppppppplVar34,*(uint *)(pppppppplVar53 + 8),
                              (float *)&local_2f0,0.0,(IndexedTriangleSet *)pppppppplVar53[4],
                              (set *)0x0,(CookingInterface *)0x0,(uchar **)&uStack_3f8,
                              (uint *)&local_3f0);
          local_400 = (undefined **)CONCAT44(local_400._4_4_,uVar11);
          FUN_0091e8fc(&local_690,&local_400);
        }
        else {
          ppppppplVar34 = pppppppplVar53[7];
          if ((*(byte *)(pppppppplVar53 + 5) & 1) == 0) {
            ppppppplVar34 = (long *******)((long)pppppppplVar53 + 0x29);
          }
                    /* try { // try from 0091c054 to 0091c067 has its CatchHandler @ 0091e2cc */
          I3DSaveUtil::serializeIndexedTriangleSet
                    ((IndexedTriangleSet *)pppppppplVar53[4],(char *)ppppppplVar34,
                     *(uint *)(pppppppplVar53 + 8),(Vector3 *)&local_2f0,0.0,
                     (basic_ostream *)&local_2d8);
        }
      }
      pppppppplVar35 = (long ********)pppppppplVar53[1];
      if ((long ********)pppppppplVar53[1] == (long ********)0x0) {
        pppppppplVar35 = pppppppplVar53 + 2;
        bVar8 = (long ********)**pppppppplVar35 != pppppppplVar53;
        pppppppplVar53 = (long ********)*pppppppplVar35;
        if (bVar8) {
          do {
            ppppppplVar34 = *pppppppplVar35;
            pppppppplVar35 = (long ********)(ppppppplVar34 + 2);
            pppppppplVar53 = (long ********)*pppppppplVar35;
          } while (*pppppppplVar53 != ppppppplVar34);
        }
      }
      else {
        do {
          pppppppplVar53 = pppppppplVar35;
          pppppppplVar35 = (long ********)*pppppppplVar53;
        } while ((long ********)*pppppppplVar53 != (long ********)0x0);
      }
    }
    while (pplVar54 != &local_4e8) {
      pppppppplVar53 = (long ********)&local_6a0;
      pppppppplVar35 = (long ********)&local_6a0;
      if (local_6a0 == (long ********)0x0) {
LAB_0091c158:
        ppppppplVar34 = *pppppppplVar35;
      }
      else {
        pppppppplVar37 = local_6a0;
        do {
          while (pppppppplVar53 = pppppppplVar37,
                *(uint *)((long)pppppppplVar53 + 0x1c) <= *(uint *)(pplVar54 + 8)) {
            if (*(uint *)(pplVar54 + 8) <= *(uint *)((long)pppppppplVar53 + 0x1c))
            goto LAB_0091c158;
            pppppppplVar35 = pppppppplVar53 + 1;
            pppppppplVar37 = (long ********)*pppppppplVar35;
            if ((long ********)*pppppppplVar35 == (long ********)0x0) goto LAB_0091c158;
          }
          pppppppplVar37 = (long ********)*pppppppplVar53;
          pppppppplVar35 = pppppppplVar53;
        } while ((long ********)*pppppppplVar53 != (long ********)0x0);
        ppppppplVar34 = *pppppppplVar53;
      }
      if (ppppppplVar34 == (long *******)0x0) {
                    /* try { // try from 0091c160 to 0091c16b has its CatchHandler @ 0091e358 */
        ppppppplVar34 = (long *******)operator_new(0x20);
        uVar11 = *(undefined4 *)(pplVar54 + 8);
        *ppppppplVar34 = (long ******)0x0;
        ppppppplVar34[1] = (long ******)0x0;
        ppppppplVar34[2] = (long ******)pppppppplVar53;
        *(undefined4 *)((long)ppppppplVar34 + 0x1c) = uVar11;
        *pppppppplVar35 = ppppppplVar34;
        if ((long ********)*local_6a8 != (long ********)0x0) {
          ppppppplVar34 = *pppppppplVar35;
          local_6a8 = (long ********)*local_6a8;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)local_6a0,(__tree_node_base *)ppppppplVar34);
        plVar40 = pplVar54[4];
        local_698 = local_698 + 1;
                    /* try { // try from 0091c1ac to 0091c59f has its CatchHandler @ 0091e4f4 */
        pIVar25 = (IndexedTriangleSet *)DestructionGeometryShared::getMesh();
        cVar4 = local_438;
        pppuVar6 = local_440;
        uVar10 = __strlen_chk("    <PrefracturedMesh name=\"",0x1d);
        if (cVar4 == '\0') {
          (*(code *)(*pppuVar6)[6])(pppuVar6,"    <PrefracturedMesh name=\"");
        }
        else {
          File::writeDosEOLExpand((File *)pppuVar6,"    <PrefracturedMesh name=\"",uVar10);
        }
        bVar8 = (*(byte *)(pplVar54 + 5) & 1) != 0;
        plVar29 = (long *)((long)pplVar54 + 0x29);
        if (bVar8) {
          plVar29 = pplVar54[7];
        }
        uVar10 = (uint)(*(byte *)(pplVar54 + 5) >> 1);
        if (bVar8) {
          uVar10 = *(uint *)(pplVar54 + 6);
        }
        if (local_438 == '\0') {
          (*(code *)(*local_440)[6])();
        }
        else {
          File::writeDosEOLExpand((File *)local_440,plVar29,uVar10);
        }
        cVar4 = local_438;
        pppuVar6 = local_440;
        uVar10 = __strlen_chk("\" shapeId=\"",0xc);
        if (cVar4 == '\0') {
          (*(code *)(*pppuVar6)[6])(pppuVar6,"\" shapeId=\"");
          uVar19 = extraout_x1_66;
        }
        else {
          File::writeDosEOLExpand((File *)pppuVar6,"\" shapeId=\"",uVar10);
          uVar19 = extraout_x1_65;
        }
        uVar11 = FUN_0091faa0(&local_400,uVar19,&DAT_004cf2ba,*(undefined4 *)(pplVar54 + 8));
        (*(code *)(*local_440)[6])(local_440,&local_400,uVar11);
        cVar4 = local_438;
        pppuVar6 = local_440;
        uVar10 = __strlen_chk(&DAT_004ddf6f,4);
        if (cVar4 == '\0') {
          (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004ddf6f);
        }
        else {
          File::writeDosEOLExpand((File *)pppuVar6,&DAT_004ddf6f,uVar10);
        }
        cVar4 = local_438;
        pppuVar6 = local_440;
        uVar10 = __strlen_chk("      <Chunks count=\"",0x16);
        if (cVar4 == '\0') {
          (*(code *)(*pppuVar6)[6])(pppuVar6,"      <Chunks count=\"");
        }
        else {
          File::writeDosEOLExpand((File *)pppuVar6,"      <Chunks count=\"",uVar10);
        }
        auVar63 = DestructionGeometryShared::getNumChunks();
        uVar11 = FUN_0091faa0(&local_400,auVar63._8_8_,&DAT_004cf2ba,auVar63._0_8_ & 0xffffffff);
        (*(code *)(*local_440)[6])(local_440,&local_400,uVar11);
        cVar4 = local_438;
        pppuVar6 = local_440;
        uVar10 = __strlen_chk("\" vertexCount=\"",0x10);
        if (cVar4 == '\0') {
          (*(code *)(*pppuVar6)[6])(pppuVar6,"\" vertexCount=\"");
        }
        else {
          File::writeDosEOLExpand((File *)pppuVar6,"\" vertexCount=\"",uVar10);
        }
        auVar63 = TriangleSet::getNumVertices();
        uVar11 = FUN_0091faa0(&local_400,auVar63._8_8_,&DAT_004cf2ba,auVar63._0_8_ & 0xffffffff);
        (*(code *)(*local_440)[6])(local_440,&local_400,uVar11);
        cVar4 = local_438;
        pppuVar6 = local_440;
        uVar10 = __strlen_chk(&DAT_004e56b4,2);
        if (cVar4 == '\0') {
          (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004e56b4);
        }
        else {
          File::writeDosEOLExpand((File *)pppuVar6,&DAT_004e56b4,uVar10);
        }
        iVar9 = DestructionGeometryShared::getStartLevel();
        cVar4 = local_438;
        pppuVar6 = local_440;
        if (iVar9 != 1) {
          uVar10 = __strlen_chk(" startLevel=\"",0xe);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6," startLevel=\"");
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6," startLevel=\"",uVar10);
          }
          auVar63 = DestructionGeometryShared::getStartLevel();
          uVar11 = FUN_0091faa0(&local_400,auVar63._8_8_,&DAT_004cf2ba,auVar63._0_8_ & 0xffffffff);
          (*(code *)(*local_440)[6])(local_440,&local_400,uVar11);
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk(&DAT_004e56b4,2);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004e56b4);
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,&DAT_004e56b4,uVar10);
          }
        }
        uVar10 = TriangleSet::getAttributes();
        I3DSaveUtil::serializeVertexAttributes(uVar10,(basic_ostream *)&local_2d8);
        cVar4 = local_438;
        pppuVar6 = local_440;
        uVar10 = __strlen_chk(&DAT_004db81c,3);
        if (cVar4 == '\0') {
          (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004db81c);
        }
        else {
          File::writeDosEOLExpand((File *)pppuVar6,&DAT_004db81c,uVar10);
        }
                    /* try { // try from 0091c5a4 to 0091c5ab has its CatchHandler @ 0091e4f0 */
        for (uVar10 = 0; uVar14 = DestructionGeometryShared::getNumChunks(), cVar4 = local_438,
            pppuVar6 = local_440, uVar10 < uVar14; uVar10 = uVar10 + 1) {
                    /* try { // try from 0091c5b4 to 0091c5cb has its CatchHandler @ 0091e4f8 */
          pDVar26 = (DestructionChunk *)
                    DestructionGeometryShared::getChunk((DestructionGeometryShared *)plVar40,uVar10)
          ;
          I3DSaveUtil::serializeDestructionChunk(pDVar26,pIVar25,(basic_ostream *)&local_2d8);
        }
                    /* try { // try from 0091c5e0 to 0091c65b has its CatchHandler @ 0091e4f4 */
        uVar10 = __strlen_chk("      </Chunks>\n",0x11);
        if (cVar4 == '\0') {
          (*(code *)(*pppuVar6)[6])(pppuVar6,"      </Chunks>\n");
        }
        else {
          File::writeDosEOLExpand((File *)pppuVar6,"      </Chunks>\n",uVar10);
        }
        cVar4 = local_438;
        pppuVar6 = local_440;
        uVar10 = __strlen_chk("    </PrefracturedMesh>\n",0x19);
        if (cVar4 == '\0') {
          (*(code *)(*pppuVar6)[6])(pppuVar6,"    </PrefracturedMesh>\n");
        }
        else {
          File::writeDosEOLExpand((File *)pppuVar6,"    </PrefracturedMesh>\n",uVar10);
        }
      }
      pplVar38 = (long **)pplVar54[1];
      if ((long **)pplVar54[1] == (long **)0x0) {
        pplVar38 = pplVar54 + 2;
        bVar8 = (long **)**pplVar38 != pplVar54;
        pplVar54 = (long **)*pplVar38;
        if (bVar8) {
          do {
            plVar40 = *pplVar38;
            pplVar38 = (long **)(plVar40 + 2);
            pplVar54 = (long **)*pplVar38;
          } while (*pplVar54 != plVar40);
        }
      }
      else {
        do {
          pplVar54 = pplVar38;
          pplVar38 = (long **)*pplVar54;
        } while ((long **)*pplVar54 != (long **)0x0);
      }
    }
    if (local_508 != &local_500) {
      pppppplVar60 = (long ******)((ulong)&local_400 | 1);
      pplVar54 = local_508;
      do {
        plVar40 = pplVar54[4];
                    /* try { // try from 0091c6e0 to 0091c6e7 has its CatchHandler @ 0091e3ec */
        pNVar27 = (NavigationMesh *)NavigationMeshScenegraphNode::getNavigationMesh();
        if (pNVar27 != (NavigationMesh *)0x0) {
          uVar10 = *(uint *)(pplVar54 + 5);
          pppppppplVar53 = (long ********)&local_6a0;
          pppppppplVar35 = (long ********)&local_6a0;
          pppppppplVar37 = local_6a0;
          while (pppppppplVar37 != (long ********)0x0) {
            while (pppppppplVar35 = pppppppplVar37, uVar10 < *(uint *)((long)pppppppplVar35 + 0x1c))
            {
              pppppppplVar53 = pppppppplVar35;
              pppppppplVar37 = (long ********)*pppppppplVar35;
              if ((long ********)*pppppppplVar35 == (long ********)0x0) {
                ppppppplVar34 = *pppppppplVar35;
                goto joined_r0x0091c7cc;
              }
            }
            if (uVar10 <= *(uint *)((long)pppppppplVar35 + 0x1c)) break;
            pppppppplVar53 = pppppppplVar35 + 1;
            pppppppplVar37 = (long ********)*pppppppplVar53;
          }
          ppppppplVar34 = *pppppppplVar53;
joined_r0x0091c7cc:
          if (ppppppplVar34 == (long *******)0x0) {
                    /* try { // try from 0091c74c to 0091c757 has its CatchHandler @ 0091e2e8 */
            ppppppplVar34 = (long *******)operator_new(0x20);
            *(uint *)((long)ppppppplVar34 + 0x1c) = uVar10;
            *ppppppplVar34 = (long ******)0x0;
            ppppppplVar34[1] = (long ******)0x0;
            ppppppplVar34[2] = (long ******)pppppppplVar35;
            *pppppppplVar53 = ppppppplVar34;
            if ((long ********)*local_6a8 != (long ********)0x0) {
              ppppppplVar34 = *pppppppplVar53;
              local_6a8 = (long ********)*local_6a8;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      ((__tree_node_base *)local_6a0,(__tree_node_base *)ppppppplVar34);
            local_698 = local_698 + 1;
            pcVar52 = (char *)plVar40[1];
            pppppplVar41 = (long ******)strlen(pcVar52);
            if ((long ******)0xffffffffffffffef < pppppplVar41) {
                    /* try { // try from 0091dfe8 to 0091dfef has its CatchHandler @ 0091e2dc */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (pppppplVar41 < (long ******)0x17) {
              local_400 = (undefined **)CONCAT71(local_400._1_7_,(char)((int)pppppplVar41 << 1));
              pppppplVar28 = pppppplVar60;
              if (pppppplVar41 != (long ******)0x0) goto LAB_0091c7fc;
            }
            else {
                    /* try { // try from 0091c7dc to 0091c7e3 has its CatchHandler @ 0091e26c */
              pppppplVar28 = (long ******)
                             operator_new((ulong)(pppppplVar41 + 2) & 0xfffffffffffffff0);
              local_400 = (undefined **)((ulong)(pppppplVar41 + 2) & 0xfffffffffffffff0 | 1);
              uStack_3f8 = (undefined **)pppppplVar41;
              local_3f0 = pppppplVar28;
LAB_0091c7fc:
              memcpy(pppppplVar28,pcVar52,(size_t)pppppplVar41);
            }
            *(char *)((long)pppppplVar28 + (long)pppppplVar41) = '\0';
            if (param_8) {
              pppppplVar41 = pppppplVar60;
              if (((ulong)local_400 & 1) != 0) {
                pppppplVar41 = local_3f0;
              }
                    /* try { // try from 0091c82c to 0091c84f has its CatchHandler @ 0091e2e0 */
              uVar11 = SerializationHelper::serializeNavigationMesh
                                 ((char *)pppppplVar41,uVar10,pNVar27,(uchar **)&local_2e8,
                                  (uint *)&local_2e0);
              local_2f0 = (undefined **)CONCAT44(local_2f0._4_4_,uVar11);
              FUN_0091e8fc(&local_690,&local_2f0);
            }
            else {
                    /* try { // try from 0091c854 to 0091c867 has its CatchHandler @ 0091e268 */
              I3DSaveUtil::serializeNavigationMesh
                        (pNVar27,(basic_string *)&local_400,uVar10,(basic_ostream *)&local_2d8);
            }
            if (((ulong)local_400 & 1) != 0) {
              operator_delete(local_3f0);
            }
          }
        }
        pplVar38 = (long **)pplVar54[1];
        if ((long **)pplVar54[1] == (long **)0x0) {
          pplVar38 = pplVar54 + 2;
          pplVar39 = (long **)*pplVar38;
          if ((long **)*pplVar39 != pplVar54) {
            do {
              plVar40 = *pplVar38;
              pplVar38 = (long **)(plVar40 + 2);
              pplVar39 = (long **)*pplVar38;
            } while (*pplVar39 != plVar40);
          }
        }
        else {
          do {
            pplVar39 = pplVar38;
            pplVar38 = (long **)*pplVar39;
          } while ((long **)*pplVar39 != (long **)0x0);
        }
        pplVar54 = pplVar39;
      } while (pplVar39 != &local_500);
    }
    cVar4 = local_438;
    pppuVar6 = local_440;
                    /* try { // try from 0091c8d0 to 0091c917 has its CatchHandler @ 0091e364 */
    uVar10 = __strlen_chk("\n  <Shapes",0xb);
    if (cVar4 == '\0') {
      (*(code *)(*pppuVar6)[6])(pppuVar6,"\n  <Shapes");
    }
    else {
      File::writeDosEOLExpand((File *)pppuVar6,"\n  <Shapes",uVar10);
    }
    if (param_8) {
      iVar9 = (int)((ulong)((long)local_688 - (long)local_690) >> 3) * -0x55555555;
      local_6c0 = CONCAT44(local_6c0._4_4_,iVar9);
      if (iVar9 == 0) goto LAB_0091ccd4;
      pppppplVar60 = (long ******)strlen(param_5);
      if ((long ******)0xffffffffffffffef < pppppplVar60) {
                    /* try { // try from 0091e004 to 0091e00b has its CatchHandler @ 0091e0fc */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (pppppplVar60 < (long ******)0x17) {
        pppppplVar41 = (long ******)((ulong)&local_400 | 1);
        local_400 = (undefined **)CONCAT71(local_400._1_7_,(char)((int)pppppplVar60 << 1));
        if (pppppplVar60 != (long ******)0x0) goto LAB_0091c99c;
      }
      else {
                    /* try { // try from 0091c980 to 0091c987 has its CatchHandler @ 0091e0fc */
        pppppplVar41 = (long ******)operator_new((ulong)(pppppplVar60 + 2) & 0xfffffffffffffff0);
        local_400 = (undefined **)((ulong)(pppppplVar60 + 2) & 0xfffffffffffffff0 | 1);
        uStack_3f8 = (undefined **)pppppplVar60;
        local_3f0 = pppppplVar41;
LAB_0091c99c:
        memcpy(pppppplVar41,param_5,(size_t)pppppplVar60);
      }
      *(char *)((long)pppppplVar41 + (long)pppppplVar60) = '\0';
                    /* try { // try from 0091c9b0 to 0091c9bf has its CatchHandler @ 0091e0f0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_400);
      local_2f0 = (undefined **)0x0;
      local_2e8 = (long ********)0x0;
      local_2e0 = (void *)0x0;
                    /* try { // try from 0091c9cc to 0091cad7 has its CatchHandler @ 0091e264 */
      PathUtil::getFilename((basic_string *)&local_400,(basic_string *)&local_2f0,true);
      cVar4 = local_438;
      pppuVar6 = local_440;
      uVar10 = __strlen_chk(" externalShapesFile=\"",0x16);
      if (cVar4 == '\0') {
        (*(code *)(*pppuVar6)[6])(pppuVar6," externalShapesFile=\"");
      }
      else {
        File::writeDosEOLExpand((File *)pppuVar6," externalShapesFile=\"",uVar10);
      }
      cVar4 = local_438;
      pppuVar6 = local_440;
      pvVar48 = (void *)((ulong)&local_2f0 | 1);
      if (((ulong)local_2f0 & 1) != 0) {
        pvVar48 = local_2e0;
      }
      uVar10 = __strlen_chk(pvVar48,0xffffffffffffffff);
      if (cVar4 == '\0') {
        (*(code *)(*pppuVar6)[6])(pppuVar6,pvVar48);
      }
      else {
        File::writeDosEOLExpand((File *)pppuVar6,pvVar48,uVar10);
      }
      cVar4 = local_438;
      pppuVar6 = local_440;
      uVar10 = __strlen_chk(&DAT_004e56b4,2);
      if (cVar4 == '\0') {
        (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004e56b4);
      }
      else {
        File::writeDosEOLExpand((File *)pppuVar6,&DAT_004e56b4,uVar10);
      }
      pppppplVar60 = (long ******)((ulong)&local_400 | 1);
      if (((ulong)local_400 & 1) != 0) {
        pppppplVar60 = local_3f0;
      }
                    /* try { // try from 0091caf4 to 0091cb1f has its CatchHandler @ 0091e108 */
      plVar40 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,
                                         (char *)pppppplVar60,1,false);
      if (plVar40 != (long *)0x0) {
        uVar18 = (**(code **)(*plVar40 + 0x10))(plVar40);
        if ((uVar18 & 1) != 0) {
          if (param_9) {
                    /* try { // try from 0091cb2c to 0091cb2f has its CatchHandler @ 0091e080 */
            uVar15 = Watch::getCurrentTicks();
                    /* try { // try from 0091cb34 to 0091cb37 has its CatchHandler @ 0091e07c */
            uVar10 = UGCProtection::getSeedMax();
            uVar14 = 0;
            if (uVar10 != 0) {
              uVar14 = uVar15 / uVar10;
            }
            iVar9 = uVar15 - uVar14 * uVar10;
            if (iVar9 + 1U <= uVar10) {
              uVar10 = iVar9 + 1;
            }
          }
          else {
            uVar10 = 0;
          }
          local_6d8 = CONCAT44(local_6d8._4_4_,uVar10 << 0x10) | 7;
                    /* try { // try from 0091cba8 to 0091cbc3 has its CatchHandler @ 0091e0d0 */
          (**(code **)(*plVar40 + 0x30))(plVar40,&local_6d8,4);
          plVar29 = plVar40;
          if (uVar10 != 0) {
            plVar29 = (long *)operator_new(0x20);
                    /* try { // try from 0091cbc8 to 0091cbd7 has its CatchHandler @ 0091e084 */
            UGCProtection::UGCProtection((UGCProtection *)plVar29,uVar10,(File *)plVar40,true);
          }
                    /* try { // try from 0091cbe4 to 0091cbf3 has its CatchHandler @ 0091e0d0 */
          (**(code **)(*plVar29 + 0x30))(plVar29,&local_6c0,4);
          if ((int)local_6c0 != 0) {
            uVar18 = 0;
            lVar20 = 0;
            do {
                    /* try { // try from 0091cc34 to 0091cc7f has its CatchHandler @ 0091e304 */
              (**(code **)(*plVar29 + 0x30))(plVar29,(long)local_690 + lVar20,4);
              (**(code **)(*plVar29 + 0x30))(plVar29,(long)local_690 + lVar20 + 0x10,4);
              (**(code **)(*plVar29 + 0x30))
                        (plVar29,*(undefined8 *)((long)local_690 + lVar20 + 8),
                         *(undefined4 *)((long)local_690 + lVar20 + 0x10));
              pvVar48 = *(void **)((long)local_690 + lVar20 + 8);
              if (pvVar48 != (void *)0x0) {
                operator_delete__(pvVar48);
              }
              uVar18 = uVar18 + 1;
              *(undefined8 *)((long)local_690 + lVar20 + 8) = 0;
              lVar20 = lVar20 + 0x18;
            } while (uVar18 < (local_6c0 & 0xffffffff));
          }
          (**(code **)(*plVar29 + 8))(plVar29);
          if (((ulong)local_2f0 & 1) != 0) {
            operator_delete(local_2e0);
          }
          if (((ulong)local_400 & 1) != 0) {
            operator_delete(local_3f0);
          }
          goto LAB_0091ccd4;
        }
        (**(code **)(*plVar40 + 8))(plVar40);
      }
      if (((ulong)local_2f0 & 1) != 0) {
        operator_delete(local_2e0);
      }
      if (((ulong)local_400 & 1) != 0) {
        operator_delete(local_3f0);
      }
      bVar8 = false;
    }
    else {
LAB_0091ccd4:
      cVar4 = local_438;
      pppuVar6 = local_440;
                    /* try { // try from 0091cce0 to 0091cd23 has its CatchHandler @ 0091e364 */
      uVar10 = __strlen_chk(&DAT_004db81c,3);
      if (cVar4 == '\0') {
        (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004db81c);
      }
      else {
        File::writeDosEOLExpand((File *)pppuVar6,&DAT_004db81c,uVar10);
      }
                    /* try { // try from 0091cd24 to 0091cd33 has its CatchHandler @ 0091e160 */
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      pppppplVar60 = (long ******)((ulong)&local_400 | 1);
      uVar10 = (uint)((byte)local_400 >> 1);
      if (((ulong)local_400 & 1) != 0) {
        pppppplVar60 = local_3f0;
        uVar10 = (uint)(float)uStack_3f8;
      }
      if (local_438 == '\0') {
        (*(code *)(*local_440)[6])();
      }
      else {
                    /* try { // try from 0091cd64 to 0091cd77 has its CatchHandler @ 0091e150 */
        File::writeDosEOLExpand((File *)local_440,pppppplVar60,uVar10);
      }
      if (((ulong)local_400 & 1) != 0) {
        operator_delete(local_3f0);
      }
      cVar4 = local_438;
      pppuVar6 = local_440;
                    /* try { // try from 0091cd98 to 0091ce77 has its CatchHandler @ 0091e364 */
      uVar10 = __strlen_chk("  </Shapes>\n\n",0xe);
      if (cVar4 == '\0') {
        (*(code *)(*pppuVar6)[6])(pppuVar6,"  </Shapes>\n\n");
      }
      else {
        File::writeDosEOLExpand((File *)pppuVar6,"  </Shapes>\n\n",uVar10);
      }
      cVar4 = local_438;
      pppuVar6 = local_440;
      uVar10 = __strlen_chk("\n  <Dynamics>\n",0xf);
      if (cVar4 == '\0') {
        (*(code *)(*pppuVar6)[6])(pppuVar6,"\n  <Dynamics>\n");
        pplVar54 = local_4c0;
        pppuVar6 = local_440;
        cVar4 = local_438;
      }
      else {
        File::writeDosEOLExpand((File *)pppuVar6,"\n  <Dynamics>\n",uVar10);
        pplVar54 = local_4c0;
        pppuVar6 = local_440;
        cVar4 = local_438;
      }
      while (local_440 = pppuVar6, local_438 = cVar4, pplVar54 != &local_4b8) {
        plVar40 = pplVar54[4];
        if ((*(byte *)(plVar40 + 6) >> 1 & 1) != 0) {
          uVar10 = *(uint *)(pplVar54 + 5);
          pppppppplVar53 = (long ********)&local_6a0;
          pppppppplVar35 = (long ********)&local_6a0;
          pppppppplVar37 = local_6a0;
          while (pppppppplVar37 != (long ********)0x0) {
            while (pppppppplVar35 = pppppppplVar37, uVar10 < *(uint *)((long)pppppppplVar35 + 0x1c))
            {
              pppppppplVar53 = pppppppplVar35;
              pppppppplVar37 = (long ********)*pppppppplVar35;
              if ((long ********)*pppppppplVar35 == (long ********)0x0) {
                ppppppplVar34 = *pppppppplVar35;
                goto joined_r0x0091cfbc;
              }
            }
            if (uVar10 <= *(uint *)((long)pppppppplVar35 + 0x1c)) break;
            pppppppplVar53 = pppppppplVar35 + 1;
            pppppppplVar37 = (long ********)*pppppppplVar53;
          }
          ppppppplVar34 = *pppppppplVar53;
joined_r0x0091cfbc:
          if (ppppppplVar34 == (long *******)0x0) {
                    /* try { // try from 0091cef4 to 0091ceff has its CatchHandler @ 0091e294 */
            ppppppplVar34 = (long *******)operator_new(0x20);
            *(uint *)((long)ppppppplVar34 + 0x1c) = uVar10;
            *ppppppplVar34 = (long ******)0x0;
            ppppppplVar34[1] = (long ******)0x0;
            ppppppplVar34[2] = (long ******)pppppppplVar35;
            *pppppppplVar53 = ppppppplVar34;
            if ((long ********)*local_6a8 != (long ********)0x0) {
              ppppppplVar34 = *pppppppplVar53;
              local_6a8 = (long ********)*local_6a8;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      ((__tree_node_base *)local_6a0,(__tree_node_base *)ppppppplVar34);
            local_698 = local_698 + 1;
                    /* try { // try from 0091cf38 to 0091cf3f has its CatchHandler @ 0091e290 */
            ParticleSystemDesc::ParticleSystemDesc((ParticleSystemDesc *)&local_400);
                    /* try { // try from 0091cf40 to 0091cf4b has its CatchHandler @ 0091e274 */
            ParticleSystem::saveToDesc((ParticleSystem *)plVar40,(ParticleSystemDesc *)&local_400);
            uVar14 = 0;
            if ((local_360 != (long *******)0x0) &&
               (pppppppplVar53 = (long ********)&local_4d0, pppppppplVar35 = local_4d0,
               local_4d0 != (long ********)0x0)) {
              do {
                pppppppplVar47 = pppppppplVar35;
                pppppppplVar37 = pppppppplVar53;
                ppppppplVar34 = pppppppplVar47[4];
                pppppppplVar53 = pppppppplVar37;
                if (ppppppplVar34 >= local_360) {
                  pppppppplVar53 = pppppppplVar47;
                }
                pppppppplVar35 = (long ********)pppppppplVar47[ppppppplVar34 < local_360];
              } while ((long ********)pppppppplVar47[ppppppplVar34 < local_360] !=
                       (long ********)0x0);
              if ((long *********)pppppppplVar53 != &local_4d0) {
                if (local_360 <= ppppppplVar34) {
                  pppppppplVar37 = pppppppplVar47;
                }
                if (pppppppplVar37[4] <= local_360) {
                  uVar14 = *(uint *)(pppppppplVar53 + 8);
                  goto LAB_0091cfc8;
                }
              }
              uVar14 = 0;
            }
LAB_0091cfc8:
                    /* try { // try from 0091cfcc to 0091cfdb has its CatchHandler @ 0091e270 */
            I3DSaveUtil::serializeParticleSystem
                      ((ParticleSystemDesc *)&local_400,(char *)plVar40[3],uVar10,uVar14,
                       (FileOutputStream *)&local_448);
            if ((local_380 & 1) != 0) {
              operator_delete(local_370);
            }
          }
        }
        pplVar38 = (long **)pplVar54[1];
        pppuVar6 = local_440;
        cVar4 = local_438;
        if ((long **)pplVar54[1] == (long **)0x0) {
          pplVar38 = pplVar54 + 2;
          bVar8 = (long **)**pplVar38 != pplVar54;
          pplVar54 = (long **)*pplVar38;
          if (bVar8) {
            do {
              plVar40 = *pplVar38;
              pplVar38 = (long **)(plVar40 + 2);
              pplVar54 = (long **)*pplVar38;
            } while (*pplVar54 != plVar40);
          }
        }
        else {
          do {
            pplVar54 = pplVar38;
            pplVar38 = (long **)*pplVar54;
          } while ((long **)*pplVar54 != (long **)0x0);
        }
      }
      uVar10 = __strlen_chk("  </Dynamics>\n\n",0x10);
      if (cVar4 == '\0') {
                    /* try { // try from 0091d040 to 0091d04f has its CatchHandler @ 0091e364 */
        (*(code *)(*pppuVar6)[6])(pppuVar6,"  </Dynamics>\n\n");
      }
      else {
        File::writeDosEOLExpand((File *)pppuVar6,"  </Dynamics>\n\n",uVar10);
      }
      local_2e8 = (long ********)0x0;
      local_2e0 = (void *)0x0;
      local_2f0 = (undefined **)&local_2e8;
      if (local_5c8 != &local_5c0) {
        pplVar54 = local_5c8;
        do {
          plVar40 = pplVar54[4];
          lVar20 = plVar40[0x1a];
          uVar18 = plVar40[0x1b] - lVar20;
          if ((int)(uVar18 >> 3) != 0) {
            uVar50 = 0;
            lVar43 = plVar40[8];
            do {
              if (local_5d8 != (undefined8 *******)0x0) {
                ppppppplVar34 = *(long ********)(lVar20 + uVar50 * 8);
                pppppppuVar31 = &local_5d8;
                pppppppuVar7 = local_5d8;
                do {
                  pppppppuVar46 = pppppppuVar7;
                  pppppppuVar33 = pppppppuVar31;
                  ppppppplVar45 = (long *******)pppppppuVar46[4];
                  pppppppuVar31 = pppppppuVar33;
                  if (ppppppplVar45 >= ppppppplVar34) {
                    pppppppuVar31 = pppppppuVar46;
                  }
                  pppppppuVar7 = (undefined8 *******)pppppppuVar46[ppppppplVar45 < ppppppplVar34];
                } while ((undefined8 *******)pppppppuVar46[ppppppplVar45 < ppppppplVar34] !=
                         (undefined8 *******)0x0);
                if ((undefined8 ********)pppppppuVar31 != &local_5d8) {
                  if (ppppppplVar34 <= ppppppplVar45) {
                    pppppppuVar33 = pppppppuVar46;
                  }
                  if (pppppppuVar33[4] <= ppppppplVar34) {
                    puVar36 = (undefined8 *)(*(long *)(lVar43 + 0x10) + uVar50 * 0xc);
                    local_400 = (undefined **)*puVar36;
                    uStack_3f8 = (undefined **)
                                 CONCAT44(uStack_3f8._4_4_,*(undefined4 *)(puVar36 + 1));
                    /* try { // try from 0091d13c to 0091d143 has its CatchHandler @ 0091e434 */
                    GsQuaternion::getEulerAngles
                              ((GsQuaternion *)(*(long *)(lVar43 + 0x28) + uVar50 * 0x10),
                               (Vector3 *)((long)&uStack_3f8 + 4));
                    puVar36 = (undefined8 *)(*(long *)(lVar43 + 0x40) + uVar50 * 0xc);
                    local_3e8 = (long ******)*puVar36;
                    local_3e0 = *(undefined4 *)(puVar36 + 1);
                    uStack_3dc = CONCAT31(uStack_3dc._1_3_,
                                          (char)(*(ulong *)(*(long *)(lVar43 + 0x58) +
                                                           (uVar50 >> 3 & 0x1ffffffffffffff8)) >>
                                                (uVar50 & 0x3f))) & 0xffffff01;
                    pppppppplVar53 = (long ********)&local_2e8;
                    pppppppplVar35 = (long ********)&local_2e8;
                    pppppppplVar37 = local_2e8;
                    while (pppppppplVar37 != (long ********)0x0) {
                      while (pppppppplVar35 = pppppppplVar37, ppppppplVar34 < pppppppplVar35[4]) {
                        pppppppplVar53 = pppppppplVar35;
                        pppppppplVar37 = (long ********)*pppppppplVar35;
                        if ((long ********)*pppppppplVar35 == (long ********)0x0) {
                          ppppppplVar45 = *pppppppplVar35;
                          goto joined_r0x0091d240;
                        }
                      }
                      if (ppppppplVar34 <= pppppppplVar35[4]) break;
                      pppppppplVar53 = pppppppplVar35 + 1;
                      pppppppplVar37 = (long ********)*pppppppplVar53;
                    }
                    ppppppplVar45 = *pppppppplVar53;
joined_r0x0091d240:
                    if (ppppppplVar45 == (long *******)0x0) {
                    /* try { // try from 0091d1d4 to 0091d1df has its CatchHandler @ 0091e410 */
                      ppppppplVar45 = (long *******)operator_new(0x50);
                      ppppppplVar45[4] = (long ******)ppppppplVar34;
                      *ppppppplVar45 = (long ******)0x0;
                      ppppppplVar45[1] = (long ******)0x0;
                      ppppppplVar45[2] = (long ******)pppppppplVar35;
                      ppppppplVar45[6] = (long ******)uStack_3f8;
                      ppppppplVar45[5] = (long ******)local_400;
                      ppppppplVar45[8] = local_3e8;
                      ppppppplVar45[7] = local_3f0;
                      ppppppplVar45[9] = (long ******)CONCAT44(uStack_3dc,local_3e0);
                      *pppppppplVar53 = ppppppplVar45;
                      if ((long ********)*local_2f0 != (long ********)0x0) {
                        ppppppplVar45 = *pppppppplVar53;
                        local_2f0 = (undefined **)*local_2f0;
                      }
                      std::__ndk1::
                      __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                                ((__tree_node_base *)local_2e8,(__tree_node_base *)ppppppplVar45);
                      local_2e0 = (void *)((long)local_2e0 + 1);
                    }
                  }
                }
              }
              uVar50 = uVar50 + 1;
              if (uVar50 == (uVar18 >> 3 & 0xffffffff)) break;
              lVar20 = plVar40[0x1a];
            } while( true );
          }
          pplVar38 = (long **)pplVar54[1];
          if ((long **)pplVar54[1] == (long **)0x0) {
            pplVar38 = pplVar54 + 2;
            pplVar39 = (long **)*pplVar38;
            if ((long **)*pplVar39 != pplVar54) {
              do {
                plVar40 = *pplVar38;
                pplVar38 = (long **)(plVar40 + 2);
                pplVar39 = (long **)*pplVar38;
              } while (*pplVar39 != plVar40);
            }
          }
          else {
            do {
              pplVar39 = pplVar38;
              pplVar38 = (long **)*pplVar39;
            } while ((long **)*pplVar39 != (long **)0x0);
          }
          pplVar54 = pplVar39;
        } while (pplVar39 != &local_5c0);
      }
      cVar4 = local_438;
      pppuVar6 = local_440;
                    /* try { // try from 0091d2b4 to 0091d2f7 has its CatchHandler @ 0091e354 */
      uVar10 = __strlen_chk("  <Scene>\n",0xb);
      if (cVar4 == '\0') {
        (*(code *)(*pppuVar6)[6])(pppuVar6,"  <Scene>\n");
      }
      else {
        File::writeDosEOLExpand((File *)pppuVar6,"  <Scene>\n",uVar10);
      }
      lVar20 = *(long *)param_1;
      if (*(long *)(param_1 + 8) != lVar20) {
        uVar18 = 0;
        do {
                    /* try { // try from 0091d328 to 0091d35b has its CatchHandler @ 0091e3d0 */
          exportScenegraph(*(ScenegraphNode **)(lVar20 + uVar18 * 8),2,(set *)&pppppppuStack_5e0,
                           (map *)&local_2f0,(map *)&local_4c0,(map *)&local_4d8,(map *)&local_4f0,
                           (map *)&local_508,(map *)&local_598,(basic_string *)&local_630,param_7,
                           (basic_string *)&local_660,param_10,(FileOutputStream *)&local_448);
          uVar18 = (ulong)((int)uVar18 + 1);
          lVar20 = *(long *)param_1;
        } while (uVar18 < (ulong)(*(long *)(param_1 + 8) - lVar20 >> 3));
      }
      cVar4 = local_438;
      pppuVar6 = local_440;
                    /* try { // try from 0091d380 to 0091d3d3 has its CatchHandler @ 0091e354 */
      uVar10 = __strlen_chk("  </Scene>\n\n",0xd);
      if (cVar4 == '\0') {
        (*(code *)(*pppuVar6)[6])(pppuVar6,"  </Scene>\n\n");
      }
      else {
        File::writeDosEOLExpand((File *)pppuVar6,"  </Scene>\n\n",uVar10);
      }
      lVar20 = ProceduralPlacementManager::getInstance();
      if ((*(char *)(lVar20 + 0x162) != '\0') &&
         (lVar20 = ProceduralPlacementManager::getInstance(), *(char *)(lVar20 + 0x161) != '\0')) {
        local_400 = (undefined **)0xfd8f40;
        local_390[0] = (undefined **)0xfd8f68;
                    /* try { // try from 0091d404 to 0091d40f has its CatchHandler @ 0091e0ec */
        std::__ndk1::ios_base::init(local_390);
        local_308 = 0;
        local_300 = 0xffffffff;
        local_400 = &PTR__basic_ostringstream_00fd8ed0;
        local_390[0] = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 0091d434 to 0091d43b has its CatchHandler @ 0091e0e8 */
        std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
        local_398 = 0x10;
        uStack_3b0 = 0;
        local_3b8 = 0;
        uStack_3f8 = &PTR__basic_stringbuf_00fd8fa0;
        uStack_3a0 = 0;
        local_3a8 = (void *)0x0;
                    /* try { // try from 0091d460 to 0091d46f has its CatchHandler @ 0091e104 */
        exportProceduralPlacement((map *)&local_598,(basic_ostream *)&local_400);
                    /* try { // try from 0091d56c to 0091d58f has its CatchHandler @ 0091e0d4 */
        if (((*(byte *)((long)&local_3e0 + (long)local_400[-3]) & 5) == 0) &&
           (plVar40 = *(long **)((long)aplStack_3d8 + (long)local_400[-3]),
           (**(code **)(*plVar40 + 0x20))(plVar40,0,1,0x10), 0 < extraout_x1_67)) {
          ProceduralPlacementManager::getInstance();
          lVar20 = ProceduralPlacementManager::getBlockMask();
          cVar4 = local_438;
          pppuVar6 = local_440;
          if (lVar20 != 0) {
                    /* try { // try from 0091d5a0 to 0091d5c7 has its CatchHandler @ 0091e104 */
            uVar10 = __strlen_chk("  <ProceduralPlacement>\n",0x19);
            if (cVar4 == '\0') {
                    /* try { // try from 0091ded4 to 0091dee3 has its CatchHandler @ 0091e104 */
              (*(code *)(*pppuVar6)[6])(pppuVar6,"  <ProceduralPlacement>\n");
            }
            else {
              File::writeDosEOLExpand((File *)pppuVar6,"  <ProceduralPlacement>\n",uVar10);
            }
                    /* try { // try from 0091dee4 to 0091def3 has its CatchHandler @ 0091e078 */
            std::__ndk1::
            basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str()
            ;
            bVar8 = (local_6c0 & 1) != 0;
            pvVar48 = (void *)((ulong)&local_6c0 | 1);
            if (bVar8) {
              pvVar48 = local_6b0;
            }
            uVar10 = (uint)((byte)local_6c0 >> 1);
            if (bVar8) {
              uVar10 = (uint)local_6b8;
            }
            if (local_438 == '\0') {
              (*(code *)(*local_440)[6])();
            }
            else {
                    /* try { // try from 0091df24 to 0091df37 has its CatchHandler @ 0091e074 */
              File::writeDosEOLExpand((File *)local_440,pvVar48,uVar10);
            }
            if ((local_6c0 & 1) != 0) {
              operator_delete(local_6b0);
            }
            cVar4 = local_438;
            pppuVar6 = local_440;
                    /* try { // try from 0091df54 to 0091df9f has its CatchHandler @ 0091e104 */
            uVar10 = __strlen_chk("  </ProceduralPlacement>\n\n",0x1b);
            if (cVar4 == '\0') {
              (*(code *)(*pppuVar6)[6])(pppuVar6,"  </ProceduralPlacement>\n\n");
            }
            else {
              File::writeDosEOLExpand((File *)pppuVar6,"  </ProceduralPlacement>\n\n",uVar10);
            }
          }
        }
        local_390[0] = &PTR__basic_ostringstream_00fd8ef8;
        local_400 = &PTR__basic_ostringstream_00fd8ed0;
        uStack_3f8 = &PTR__basic_stringbuf_00fd8fa0;
        if ((local_3b8 & 1) != 0) {
          operator_delete(local_3a8);
        }
        std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
                  ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)&uStack_3f8);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_400);
        std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
                  ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_390);
      }
      cVar4 = local_438;
      pppuVar6 = local_440;
      if (local_5b8 != 0) {
        if (param_8) {
                    /* try { // try from 0091d508 to 0091d55b has its CatchHandler @ 0091e354 */
          uVar10 = __strlen_chk("\n  <Animation",0xe);
          if (cVar4 == '\0') {
                    /* try { // try from 0091d5d4 to 0091d5e3 has its CatchHandler @ 0091e354 */
            (*(code *)(*pppuVar6)[6])(pppuVar6,"\n  <Animation");
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,"\n  <Animation",uVar10);
          }
          sVar16 = strlen(param_5);
          if (0xffffffffffffffef < sVar16) {
                    /* try { // try from 0091e054 to 0091e05b has its CatchHandler @ 0091e0f4 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (sVar16 < 0x17) {
            pvVar48 = (void *)((ulong)&local_6c0 | 1);
            local_6c0 = CONCAT71(local_6c0._1_7_,(char)((int)sVar16 << 1));
            if (sVar16 != 0) goto LAB_0091d638;
          }
          else {
            uVar18 = sVar16 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0091d620 to 0091d627 has its CatchHandler @ 0091e0f4 */
            pvVar48 = operator_new(uVar18);
            local_6c0 = uVar18 | 1;
            local_6b8 = sVar16;
            local_6b0 = pvVar48;
LAB_0091d638:
            memcpy(pvVar48,param_5,sVar16);
          }
          *(undefined *)((long)pvVar48 + sVar16) = 0;
                    /* try { // try from 0091d64c to 0091d65b has its CatchHandler @ 0091e0c0 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_6c0);
          local_6d8 = 0;
          uStack_6d0 = 0;
          local_6c8 = (void *)0x0;
                    /* try { // try from 0091d664 to 0091d6a7 has its CatchHandler @ 0091e21c */
          PathUtil::getFilename((basic_string *)&local_6c0,(basic_string *)&local_6d8,true);
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk(" externalAnimFile=\"",0x14);
          if (cVar4 == '\0') {
                    /* try { // try from 0091d7b4 to 0091d807 has its CatchHandler @ 0091e21c */
            (*(code *)(*pppuVar6)[6])(pppuVar6," externalAnimFile=\"");
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6," externalAnimFile=\"",uVar10);
          }
          cVar4 = local_438;
          pppuVar6 = local_440;
          pvVar48 = (void *)((ulong)&local_6d8 | 1);
          if ((local_6d8 & 1) != 0) {
            pvVar48 = local_6c8;
          }
          uVar10 = __strlen_chk(pvVar48,0xffffffffffffffff);
          if (cVar4 == '\0') {
                    /* try { // try from 0091d830 to 0091d88b has its CatchHandler @ 0091e21c */
            (*(code *)(*pppuVar6)[6])(pppuVar6,pvVar48);
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,pvVar48,uVar10);
          }
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk(&DAT_004e56b4,2);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_004e56b4);
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,&DAT_004e56b4,uVar10);
          }
                    /* try { // try from 0091d88c to 0091d893 has its CatchHandler @ 0091e0bc */
          NativeFile::NativeFile((NativeFile *)&local_400);
          AVar1 = (uint)&local_6c0 | 1;
          if ((local_6c0 & 1) != 0) {
            AVar1 = (ACCESS_MODE)local_6b0;
          }
                    /* try { // try from 0091d8ac to 0091d8bb has its CatchHandler @ 0091e114 */
          NativeFile::open((char *)&local_400,AVar1,true);
          if ((long ******)uStack_3f8 != (long ******)0x0) {
            local_6dc = 7;
                    /* try { // try from 0091d8d0 to 0091d8df has its CatchHandler @ 0091e09c */
            NativeFile::write((NativeFile *)&local_400,&local_6dc,4);
                    /* try { // try from 0091d8e0 to 0091d903 has its CatchHandler @ 0091e0e4 */
            AnimSerializationHelper::serializeAnimation
                      ((set *)&local_5c8,(set *)&pppppppuStack_5e0,&local_6e8,&local_6ec);
            NativeFile::write((NativeFile *)&local_400,local_6e8,local_6ec);
            if (local_6e8 != (uchar *)0x0) {
              operator_delete__(local_6e8);
            }
          }
          cVar4 = local_438;
          pppuVar6 = local_440;
                    /* try { // try from 0091d91c to 0091d95f has its CatchHandler @ 0091e114 */
          uVar10 = __strlen_chk(&DAT_00512b6f,5);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,&DAT_00512b6f);
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,&DAT_00512b6f,uVar10);
          }
          NativeFile::~NativeFile((NativeFile *)&local_400);
          if ((local_6d8 & 1) != 0) {
            operator_delete(local_6c8);
          }
          if ((local_6c0 & 1) != 0) {
            operator_delete(local_6b0);
          }
        }
        else {
          uVar10 = __strlen_chk("\n  <Animation>\n",0x10);
          if (cVar4 == '\0') {
                    /* try { // try from 0091d6b4 to 0091d7a7 has its CatchHandler @ 0091e354 */
            (*(code *)(*pppuVar6)[6])(pppuVar6,"\n  <Animation>\n");
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,"\n  <Animation>\n",uVar10);
          }
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk("    <AnimationSets>\n",0x15);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,"    <AnimationSets>\n");
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,"    <AnimationSets>\n",uVar10);
          }
          exportCharacterSets((set *)&local_5c8,(set *)&pppppppuStack_5e0,
                              (FileOutputStream *)&local_448);
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk("    </AnimationSets>\n",0x16);
          if (cVar4 == '\0') {
            (*(code *)(*pppuVar6)[6])(pppuVar6,"    </AnimationSets>\n");
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,"    </AnimationSets>\n",uVar10);
          }
          cVar4 = local_438;
          pppuVar6 = local_440;
          uVar10 = __strlen_chk("  </Animation>\n\n",0x11);
          if (cVar4 == '\0') {
                    /* try { // try from 0091d814 to 0091d823 has its CatchHandler @ 0091e354 */
            (*(code *)(*pppuVar6)[6])(pppuVar6,"  </Animation>\n\n");
          }
          else {
            File::writeDosEOLExpand((File *)pppuVar6,"  </Animation>\n\n",uVar10);
          }
        }
      }
      local_400 = (undefined **)0xfd8f40;
      local_390[0] = (undefined **)0xfd8f68;
                    /* try { // try from 0091d9b0 to 0091d9bb has its CatchHandler @ 0091e140 */
      std::__ndk1::ios_base::init(local_390);
      local_308 = 0;
      local_300 = 0xffffffff;
      local_400 = &PTR__basic_ostringstream_00fd8ed0;
      local_390[0] = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 0091d9e0 to 0091d9e7 has its CatchHandler @ 0091e124 */
      std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
      local_398 = 0x10;
      uStack_3b0 = 0;
      local_3b8 = 0;
      uStack_3f8 = &PTR__basic_stringbuf_00fd8fa0;
      uStack_3a0 = 0;
      local_3a8 = (void *)0x0;
                    /* try { // try from 0091da0c to 0091da6f has its CatchHandler @ 0091e298 */
      exportUserAttributes((vector *)&local_5f8,(basic_ostream *)&local_400);
                    /* try { // try from 0091da80 to 0091da8f has its CatchHandler @ 0091e0e0 */
      if (((*(byte *)((long)&local_3e0 + (long)local_400[-3]) & 5) == 0) &&
         (plVar40 = *(long **)((long)aplStack_3d8 + (long)local_400[-3]),
         (**(code **)(*plVar40 + 0x20))(plVar40,0,1,0x10), cVar4 = local_438, pppuVar6 = local_440,
         0 < extraout_x1_68)) {
                    /* try { // try from 0091daa4 to 0091dae7 has its CatchHandler @ 0091e298 */
        uVar10 = __strlen_chk("  <UserAttributes>\n",0x14);
        if (cVar4 == '\0') {
                    /* try { // try from 0091de04 to 0091de13 has its CatchHandler @ 0091e298 */
          (*(code *)(*pppuVar6)[6])(pppuVar6,"  <UserAttributes>\n");
        }
        else {
          File::writeDosEOLExpand((File *)pppuVar6,"  <UserAttributes>\n",uVar10);
        }
                    /* try { // try from 0091de14 to 0091de23 has its CatchHandler @ 0091e0b8 */
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
        bVar8 = (local_6c0 & 1) != 0;
        pvVar48 = (void *)((ulong)&local_6c0 | 1);
        if (bVar8) {
          pvVar48 = local_6b0;
        }
        uVar10 = (uint)((byte)local_6c0 >> 1);
        if (bVar8) {
          uVar10 = (uint)local_6b8;
        }
        if (local_438 == '\0') {
          (*(code *)(*local_440)[6])();
        }
        else {
                    /* try { // try from 0091de54 to 0091de67 has its CatchHandler @ 0091e0a0 */
          File::writeDosEOLExpand((File *)local_440,pvVar48,uVar10);
        }
        if ((local_6c0 & 1) != 0) {
          operator_delete(local_6b0);
        }
        cVar4 = local_438;
        pppuVar6 = local_440;
                    /* try { // try from 0091de84 to 0091dec7 has its CatchHandler @ 0091e298 */
        uVar10 = __strlen_chk("  </UserAttributes>\n\n",0x16);
        if (cVar4 == '\0') {
          (*(code *)(*pppuVar6)[6])(pppuVar6,"  </UserAttributes>\n\n");
        }
        else {
          File::writeDosEOLExpand((File *)pppuVar6,"  </UserAttributes>\n\n",uVar10);
        }
      }
      cVar4 = local_438;
      pppuVar6 = local_440;
      uVar10 = __strlen_chk("</i3D>\n",8);
      if (cVar4 == '\0') {
        (*(code *)(*pppuVar6)[6])(pppuVar6,"</i3D>\n");
      }
      else {
        File::writeDosEOLExpand((File *)pppuVar6,"</i3D>\n",uVar10);
      }
      local_390[0] = &PTR__basic_ostringstream_00fd8ef8;
      local_400 = &PTR__basic_ostringstream_00fd8ed0;
      uStack_3f8 = &PTR__basic_stringbuf_00fd8fa0;
      if ((local_3b8 & 1) != 0) {
        operator_delete(local_3a8);
      }
      std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
                ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)&uStack_3f8);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_400);
      std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
                ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_390);
      std::__ndk1::
      __tree<std::__ndk1::__value_type<TransformGroup*,I3DSave::I3DTransformPoseObject>,std::__ndk1::__map_value_compare<TransformGroup*,std::__ndk1::__value_type<TransformGroup*,I3DSave::I3DTransformPoseObject>,std::__ndk1::less<TransformGroup*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<TransformGroup*,I3DSave::I3DTransformPoseObject>>>
      ::destroy((__tree<std::__ndk1::__value_type<TransformGroup*,I3DSave::I3DTransformPoseObject>,std::__ndk1::__map_value_compare<TransformGroup*,std::__ndk1::__value_type<TransformGroup*,I3DSave::I3DTransformPoseObject>,std::__ndk1::less<TransformGroup*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<TransformGroup*,I3DSave::I3DTransformPoseObject>>>
                 *)&local_2f0,(__tree_node *)local_2e8);
      bVar8 = true;
    }
    std::__ndk1::
    __tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>::
    destroy((__tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
             *)&local_6a8,(__tree_node *)local_6a0);
    if (local_690 != (long ******)0x0) {
      local_688 = local_690;
      operator_delete(local_690);
    }
    local_268 = &PTR__basic_ostringstream_00fd8ef8;
    local_2d8 = &PTR__basic_ostringstream_00fd8ed0;
    local_2d0 = &PTR__basic_stringbuf_00fd8fa0;
    if ((local_290 & 1) != 0) {
      operator_delete(local_280);
    }
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
              ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)&local_2d0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_2d8);
    std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
              ((basic_ios<char,std::__ndk1::char_traits<char>> *)&local_268);
    if (local_678 != (undefined8 *)0x0) {
      operator_delete(local_678);
    }
    if ((local_660 & 1) != 0) {
      operator_delete(local_650);
    }
    if ((local_648 & 1) != 0) {
      operator_delete(local_638);
    }
    if ((local_630 & 1) != 0) {
      operator_delete(local_620);
    }
    if ((local_618 & 1) != 0) {
      operator_delete(local_608);
    }
    if (local_5f8 != (void *)0x0) {
      local_5f0 = local_5f8;
      operator_delete(local_5f8);
    }
    std::__ndk1::
    __tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
    ::destroy((__tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
               *)&pppppppuStack_5e0,(__tree_node *)local_5d8);
    std::__ndk1::
    __tree<CharacterSet*,std::__ndk1::less<CharacterSet*>,std::__ndk1::allocator<CharacterSet*>>::
    destroy((__tree<CharacterSet*,std::__ndk1::less<CharacterSet*>,std::__ndk1::allocator<CharacterSet*>>
             *)&local_5c8,(__tree_node *)local_5c0);
    std::__ndk1::
    __tree<GsMaterial*,std::__ndk1::less<GsMaterial*>,std::__ndk1::allocator<GsMaterial*>>::destroy
              ((__tree<GsMaterial*,std::__ndk1::less<GsMaterial*>,std::__ndk1::allocator<GsMaterial*>>
                *)&local_5b0,(__tree_node *)local_5a8);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
    ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
               *)&local_598,(__tree_node *)local_590);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,SceneSave::ShapeCooking>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SceneSave::ShapeCooking>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SceneSave::ShapeCooking>>>
    ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,SceneSave::ShapeCooking>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SceneSave::ShapeCooking>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SceneSave::ShapeCooking>>>
               *)&local_580,(__tree_node *)local_578);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>,std::__ndk1::__map_value_compare<SharedParticleSystemDesc,std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>,std::__ndk1::less<SharedParticleSystemDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>>>
    ::destroy((__tree<std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>,std::__ndk1::__map_value_compare<SharedParticleSystemDesc,std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>,std::__ndk1::less<SharedParticleSystemDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>>>
               *)&local_568,local_560);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>,std::__ndk1::__map_value_compare<SceneSave::TriangleGeometryHash,std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>,std::__ndk1::less<SceneSave::TriangleGeometryHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>>>
    ::destroy((__tree<std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>,std::__ndk1::__map_value_compare<SceneSave::TriangleGeometryHash,std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>,std::__ndk1::less<SceneSave::TriangleGeometryHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>>>
               *)&pp_Stack_550,local_548);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,unsigned_int>,std::__ndk1::__map_value_compare<SceneSave::SplitAttachmentsHash,std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,unsigned_int>,std::__ndk1::less<SceneSave::SplitAttachmentsHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,unsigned_int>>>
    ::destroy((__tree<std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,unsigned_int>,std::__ndk1::__map_value_compare<SceneSave::SplitAttachmentsHash,std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,unsigned_int>,std::__ndk1::less<SceneSave::SplitAttachmentsHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,unsigned_int>>>
               *)&local_538,p_Stack_530);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>,std::__ndk1::__map_value_compare<SceneSave::TriangleGeometryHash,std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>,std::__ndk1::less<SceneSave::TriangleGeometryHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>>>
    ::destroy((__tree<std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>,std::__ndk1::__map_value_compare<SceneSave::TriangleGeometryHash,std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>,std::__ndk1::less<SceneSave::TriangleGeometryHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SceneSave::TriangleGeometryHash,unsigned_int>>>
               *)&pp_Stack_520,local_518);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<NavigationMeshScenegraphNode*,unsigned_int>,std::__ndk1::__map_value_compare<NavigationMeshScenegraphNode*,std::__ndk1::__value_type<NavigationMeshScenegraphNode*,unsigned_int>,std::__ndk1::less<NavigationMeshScenegraphNode*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<NavigationMeshScenegraphNode*,unsigned_int>>>
    ::destroy((__tree<std::__ndk1::__value_type<NavigationMeshScenegraphNode*,unsigned_int>,std::__ndk1::__map_value_compare<NavigationMeshScenegraphNode*,std::__ndk1::__value_type<NavigationMeshScenegraphNode*,unsigned_int>,std::__ndk1::less<NavigationMeshScenegraphNode*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<NavigationMeshScenegraphNode*,unsigned_int>>>
               *)&local_508,(__tree_node *)local_500);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<DestructionGeometryShared*,SceneSave::I3DShapeObject>,std::__ndk1::__map_value_compare<DestructionGeometryShared*,std::__ndk1::__value_type<DestructionGeometryShared*,SceneSave::I3DShapeObject>,std::__ndk1::less<DestructionGeometryShared*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<DestructionGeometryShared*,SceneSave::I3DShapeObject>>>
    ::destroy((__tree<std::__ndk1::__value_type<DestructionGeometryShared*,SceneSave::I3DShapeObject>,std::__ndk1::__map_value_compare<DestructionGeometryShared*,std::__ndk1::__value_type<DestructionGeometryShared*,SceneSave::I3DShapeObject>,std::__ndk1::less<DestructionGeometryShared*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<DestructionGeometryShared*,SceneSave::I3DShapeObject>>>
               *)&local_4f0,(__tree_node *)local_4e8);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>,std::__ndk1::__map_value_compare<IndexedTriangleSet*,std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>,std::__ndk1::less<IndexedTriangleSet*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>>>
    ::destroy((__tree<std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>,std::__ndk1::__map_value_compare<IndexedTriangleSet*,std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>,std::__ndk1::less<IndexedTriangleSet*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>>>
               *)&local_4d8,(__tree_node *)local_4d0);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<Geometry*,unsigned_int>,std::__ndk1::__map_value_compare<Geometry*,std::__ndk1::__value_type<Geometry*,unsigned_int>,std::__ndk1::less<Geometry*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<Geometry*,unsigned_int>>>
    ::destroy((__tree<std::__ndk1::__value_type<Geometry*,unsigned_int>,std::__ndk1::__map_value_compare<Geometry*,std::__ndk1::__value_type<Geometry*,unsigned_int>,std::__ndk1::less<Geometry*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<Geometry*,unsigned_int>>>
               *)&local_4c0,(__tree_node *)local_4b8);
    BufferedFileWriter::~BufferedFileWriter((BufferedFileWriter *)&local_430);
    if (bVar8) {
                    /* try { // try from 0091dcc0 to 0091dcef has its CatchHandler @ 0091e2b4 */
      NativeFile::close();
      StopWatch::stop();
      if (((ulong)local_480 & 1) != 0) {
        pppppplVar32 = local_470;
      }
      uVar18 = NativeFileUtil::moveFile((char *)pppppplVar32,param_5,true);
      if ((uVar18 & 1) != 0) {
                    /* try { // try from 0091dcf4 to 0091dcfb has its CatchHandler @ 0091e0c8 */
        local_400 = (undefined **)time((time_t *)0x0);
                    /* try { // try from 0091dd04 to 0091dd57 has its CatchHandler @ 0091e180 */
        __tp = localtime(&local_400);
        strftime((char *)&local_2d8,0x100,"%c",__tp);
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar9 != 0
           )) {
                    /* try { // try from 0091e01c to 0091e027 has its CatchHandler @ 0091e060 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        StopWatch::getStoppedMs();
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "Scenefile \'%s\' saved in %f ms at %s.\n",param_5,&local_2d8);
        uVar11 = 1;
        goto LAB_0091dd64;
      }
    }
  }
  uVar11 = 0;
LAB_0091dd64:
  NativeFile::~NativeFile(local_4a8);
  if (((ulong)local_480 & 1) != 0) {
    operator_delete(local_470);
  }
  if (*(long *)(lVar5 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}


