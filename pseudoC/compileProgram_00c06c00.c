// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileProgram
// Entry Point: 00c06c00
// Size: 4624 bytes
// Signature: undefined __thiscall compileProgram(ShaderConverter * this, char * param_1, ShaderLanguage * param_2, map * param_3, basic_string * param_4, basic_string * param_5, basic_string * param_6, vector * param_7, uint * param_8, CodeStringStream * param_9, ulonglong * param_10)


/* ShaderConverter::compileProgram(char const*, ShaderLanguage const&,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, ShaderStructLayout,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, ShaderStructLayout> > >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, std::__ndk1::vector<ShaderStructLayout,
   std::__ndk1::allocator<ShaderStructLayout> >&, unsigned int&, CodeStringStream*, unsigned long
   long&) */

undefined4 __thiscall
ShaderConverter::compileProgram
          (ShaderConverter *this,char *param_1,ShaderLanguage *param_2,map *param_3,
          basic_string *param_4,basic_string *param_5,basic_string *param_6,vector *param_7,
          uint *param_8,CodeStringStream *param_9,ulonglong *param_10)

{
  basic_string *pbVar1;
  ShaderLanguage SVar2;
  uint uVar3;
  long lVar4;
  Logger *this_00;
  bool bVar5;
  __tree_iterator _Var6;
  pair pVar7;
  __tree_const_iterator _Var8;
  int iVar9;
  HlslParser *this_01;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  SHC_String *pSVar14;
  GsTFunction *pGVar16;
  IR_Function *this_02;
  GsTFunction *pGVar17;
  IR_Function *this_03;
  GsTFunction *pGVar18;
  IR_Function *this_04;
  ShaderConverter *pSVar19;
  size_t sVar20;
  char *pcVar22;
  StructType SVar23;
  uint *puVar24;
  int *piVar25;
  __tree_node_base **pp_Var26;
  byte *pbVar27;
  ulong **ppuVar28;
  byte *pbVar29;
  long *plVar30;
  __tree_node_base **pp_Var31;
  byte *pbVar32;
  HlslParser *__s;
  ulong *puVar33;
  IR_Struct *pIVar34;
  __tree_node_base *p_Var35;
  undefined8 *this_05;
  ulong **ppuVar36;
  undefined4 uVar37;
  IR_Struct *this_06;
  CodeStringStream aCStack_14e0 [48];
  CodeStringStream aCStack_14b0 [48];
  CodeStringStream aCStack_1480 [48];
  CodeStringStream aCStack_1450 [48];
  undefined8 local_1420;
  undefined8 uStack_1418;
  undefined8 local_1410;
  CodeStringStream aCStack_13f0 [48];
  CodeStringStream aCStack_13c0 [48];
  CodeStringStream aCStack_1390 [48];
  CodeStringStream aCStack_1360 [48];
  CodeStringStream aCStack_1330 [48];
  CodeStringStream aCStack_1300 [48];
  CodeStringStream aCStack_12d0 [48];
  CodeStringStream aCStack_12a0 [48];
  CodeStringStream aCStack_1270 [48];
  undefined8 local_1240;
  undefined8 local_1238;
  undefined8 local_1230;
  undefined8 local_1228;
  undefined8 local_1220;
  undefined8 local_1218;
  undefined8 local_1210;
  undefined8 local_1208;
  undefined8 local_1200;
  CodeStringStream aCStack_11f8 [48];
  CodeStringStream aCStack_11c8 [48];
  CodeStringStream aCStack_1198 [24];
  byte local_1180;
  void *local_1170;
  CodeStringStream aCStack_1168 [24];
  byte local_1150;
  void *local_1140;
  CodeStringStream aCStack_1138 [24];
  byte local_1120;
  void *local_1110;
  __tree_node **local_1108;
  __tree_node *local_1100;
  undefined8 local_10f8;
  void *local_10f0;
  void *local_10e8;
  undefined8 local_10e0;
  undefined8 local_10d8;
  size_t sStack_10d0;
  ShaderConverter *local_10c8;
  undefined2 local_10c0;
  byte *local_10b8;
  byte *local_10b0;
  ulong local_10a8;
  undefined4 local_10a0;
  ConversionContext aCStack_1098 [40];
  uint auStack_1070 [4];
  ConversionContext aCStack_1060 [56];
  ConversionContext aCStack_1028 [56];
  CreateIR aCStack_ff0 [408];
  SharedContext aSStack_e58 [16];
  IR_TypeSet aIStack_e48 [3488];
  long local_a8;
  long local_a0;
  char local_78;
  long local_70;
  undefined8 *puVar15;
  ShaderConverter *pSVar21;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  this_01 = (HlslParser *)operator_new(0x50);
                    /* try { // try from 00c06c58 to 00c06c5f has its CatchHandler @ 00c0807c */
  HlslParser::HlslParser(this_01,(Context *)this);
  lVar10 = Watch::getCurrentTicks();
  uVar11 = HlslParser::parse(this_01,param_1,(char *)0x0);
  if ((uVar11 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar9 != 0)) {
                    /* try { // try from 00c07ca8 to 00c07cb3 has its CatchHandler @ 00c07e30 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Could not parse GISL program.\n");
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar9 != 0)) {
                    /* try { // try from 00c07cf0 to 00c07cfb has its CatchHandler @ 00c07e2c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    this_00 = LogManager::getInstance()::singletonLogManager;
    __s = *(HlslParser **)(this_01 + 0x10);
    if (((byte)*this_01 & 1) == 0) {
      __s = this_01 + 1;
    }
    sVar20 = strlen((char *)__s);
    Logger::errorMessage(this_00,(char *)__s,(uint)sVar20);
    HlslParser::~HlslParser(this_01);
    operator_delete(this_01);
    uVar37 = 0;
    goto LAB_00c07a18;
  }
  lVar12 = Watch::getCurrentTicks();
  plVar30 = *(long **)(this_01 + 0x40);
  local_10e8 = (void *)0x0;
  local_10f0 = (void *)0x0;
  *param_10 = lVar12 - lVar10;
  local_10e0 = 0;
                    /* try { // try from 00c06ca4 to 00c06cab has its CatchHandler @ 00c08024 */
  GsTSymbolTableLevel::sort(*(GsTSymbolTableLevel **)(*plVar30 + 0x10),(vector *)&local_10f0);
                    /* try { // try from 00c06cc4 to 00c06cd3 has its CatchHandler @ 00c0801c */
  IR_HllConvertUtil::SharedContext::SharedContext
            (aSStack_e58,*param_2,param_7,*(IR_TypeSet **)(this_01 + 0x30));
                    /* try { // try from 00c06cdc to 00c06ceb has its CatchHandler @ 00c08014 */
  CreateIR::CreateIR(aCStack_ff0,*(GsTSymbolTable **)(this_01 + 0x40),aIStack_e48);
  if (local_10e8 != local_10f0) {
    uVar11 = 0;
    do {
      plVar30 = *(long **)((long)local_10f0 + uVar11 * 0x10);
                    /* try { // try from 00c06d30 to 00c06d37 has its CatchHandler @ 00c0809c */
      uVar13 = (**(code **)(*plVar30 + 0x20))(plVar30);
      if ((((uVar13 & 1) != 0) && (*(char *)(plVar30 + 0xb) == '\0')) &&
         ((*(byte *)(plVar30 + 7) >> 3 & 1) != 0)) {
        piVar25 = (int *)plVar30[6];
        if (*piVar25 < 3) {
          if (piVar25[2] - 3U < 7) {
LAB_00c06d94:
            this_05 = *(undefined8 **)(**(long **)(this_01 + 0x40) + 0x10);
                    /* try { // try from 00c06da8 to 00c06dbb has its CatchHandler @ 00c0804c */
            pSVar14 = (SHC_String *)(**(code **)(*plVar30 + 0x10))(plVar30);
            _Var6 = std::__ndk1::
                    __tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
                    ::find<SHC_String>((__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
                                        *)this_05,pSVar14);
            puVar15 = (undefined8 *)(ulong)_Var6;
            if (this_05 + 1 != puVar15) {
              if ((long *)puVar15[8] != (long *)0x0) {
                (**(code **)(*(long *)puVar15[8] + 8))();
              }
              pp_Var31 = (__tree_node_base **)puVar15[1];
              if ((__tree_node_base **)puVar15[1] == (__tree_node_base **)0x0) {
                pp_Var31 = (__tree_node_base **)(puVar15 + 2);
                pp_Var26 = (__tree_node_base **)*pp_Var31;
                if ((undefined8 *)*pp_Var26 != puVar15) {
                  do {
                    p_Var35 = *pp_Var31;
                    pp_Var31 = (__tree_node_base **)(p_Var35 + 0x10);
                    pp_Var26 = (__tree_node_base **)*pp_Var31;
                  } while (*pp_Var26 != p_Var35);
                }
              }
              else {
                do {
                  pp_Var26 = pp_Var31;
                  pp_Var31 = (__tree_node_base **)*pp_Var26;
                } while ((__tree_node_base **)*pp_Var26 != (__tree_node_base **)0x0);
              }
              if ((undefined8 *)*this_05 == puVar15) {
                *this_05 = pp_Var26;
              }
              this_05[3] = this_05[3] + -1;
              std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                        ((__tree_node_base *)this_05[1],(__tree_node_base *)puVar15);
            }
            pbVar27 = (byte *)plVar30[2];
            if (pbVar27 != (byte *)0x0) {
              bVar5 = (*pbVar27 & 1) != 0;
              uVar13 = (ulong)(*pbVar27 >> 1);
              if (bVar5) {
                uVar13 = *(ulong *)(pbVar27 + 8);
              }
              if (uVar13 != 0) {
                pbVar32 = *(byte **)(pbVar27 + 0x10);
                if (!bVar5) {
                  pbVar32 = pbVar27 + 1;
                }
                    /* try { // try from 00c06e74 to 00c06eaf has its CatchHandler @ 00c08048 */
                lVar10 = IR_TypeSet::findOrCreateStruct(aIStack_e48,(char *)pbVar32,0);
                *(undefined *)(*(long *)(lVar10 + 8) + 0x52) = 1;
                pbVar32 = (byte *)plVar30[1];
                pbVar27 = *(byte **)(pbVar32 + 0x10);
                if ((*pbVar32 & 1) == 0) {
                  pbVar27 = pbVar32 + 1;
                }
                IR_Struct::addField(*(IR_Struct **)(lVar10 + 8),(char *)pbVar27,
                                    (IR_Type *)plVar30[6],*(IR_QualFlags *)(plVar30 + 7),(char *)0x0
                                   );
                goto LAB_00c06d08;
              }
            }
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar9 != 0)) {
                    /* try { // try from 00c07dd0 to 00c07ddb has its CatchHandler @ 00c07e10 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            pbVar32 = (byte *)plVar30[1];
            pbVar27 = *(byte **)(pbVar32 + 0x10);
            if ((*pbVar32 & 1) == 0) {
              pbVar27 = pbVar32 + 1;
            }
                    /* try { // try from 00c07754 to 00c07767 has its CatchHandler @ 00c07ee0 */
            LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                               "Error: global variable definition MUST have a Constant Buffer name attached (\'%s\')\n"
                               ,pbVar27);
            goto LAB_00c07768;
          }
        }
        else if ((*piVar25 == 4) &&
                (uVar3 = (*(uint **)(piVar25 + 2))[2] - 3, bVar5 = **(uint **)(piVar25 + 2) < 3,
                bVar5 && uVar3 < 6 || bVar5 && uVar3 == 6)) goto LAB_00c06d94;
      }
LAB_00c06d08:
      uVar11 = (ulong)((int)uVar11 + 1);
    } while (uVar11 < (ulong)((long)local_10e8 - (long)local_10f0 >> 4));
  }
                    /* try { // try from 00c06f34 to 00c06f3f has its CatchHandler @ 00c08010 */
  pGVar16 = (GsTFunction *)
            GsTSymbolTableLevel::findFunctionByUniqueName
                      (*(GsTSymbolTableLevel **)(**(long **)(this_01 + 0x40) + 0x10),"main_vp");
  if (pGVar16 == (GsTFunction *)0x0) {
    this_02 = (IR_Function *)0x0;
  }
  else {
                    /* try { // try from 00c06f48 to 00c06f57 has its CatchHandler @ 00c07fe8 */
    this_02 = (IR_Function *)CreateIR::compileFunction(aCStack_ff0,pGVar16,false);
  }
                    /* try { // try from 00c06f70 to 00c06f7b has its CatchHandler @ 00c0800c */
  pGVar17 = (GsTFunction *)
            GsTSymbolTableLevel::findFunctionByUniqueName
                      (*(GsTSymbolTableLevel **)(**(long **)(this_01 + 0x40) + 0x10),"main_fp");
  if (pGVar17 == (GsTFunction *)0x0) {
    this_03 = (IR_Function *)0x0;
  }
  else {
                    /* try { // try from 00c06f84 to 00c06f93 has its CatchHandler @ 00c07fe4 */
    this_03 = (IR_Function *)CreateIR::compileFunction(aCStack_ff0,pGVar17,false);
  }
                    /* try { // try from 00c06fac to 00c06fbb has its CatchHandler @ 00c08008 */
  pGVar18 = (GsTFunction *)
            GsTSymbolTableLevel::findFunctionByUniqueName
                      (*(GsTSymbolTableLevel **)(**(long **)(this_01 + 0x40) + 0x10),"main_cp");
  if (pGVar18 == (GsTFunction *)0x0) {
    if (((ulong)pGVar16 | (ulong)pGVar17) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar9 != 0))
      {
                    /* try { // try from 00c07d84 to 00c07d8f has its CatchHandler @ 00c07e14 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
                    /* try { // try from 00c070f8 to 00c0710b has its CatchHandler @ 00c08078 */
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: none of main_vp/main_fp/main_cp are defined.\n");
    }
    else if (pGVar16 == (GsTFunction *)0x0) {
                    /* try { // try from 00c076a0 to 00c076af has its CatchHandler @ 00c08078 */
      pcVar22 = (char *)LogManager::getInstance();
      LogManager::errorf(pcVar22,"Error: missing main_vp function.\n");
    }
    else {
      if (pGVar17 != (GsTFunction *)0x0) {
        this_04 = (IR_Function *)0x0;
        goto LAB_00c07014;
      }
                    /* try { // try from 00c0771c to 00c0772b has its CatchHandler @ 00c08078 */
      pcVar22 = (char *)LogManager::getInstance();
      LogManager::errorf(pcVar22,"Error: missing main_fp function.\n");
    }
LAB_00c07768:
    HlslParser::~HlslParser(this_01);
    operator_delete(this_01);
    uVar37 = 0;
  }
  else {
                    /* try { // try from 00c06fc0 to 00c07043 has its CatchHandler @ 00c08078 */
    this_04 = (IR_Function *)CreateIR::compileFunction(aCStack_ff0,pGVar18,false);
    if (((ulong)pGVar16 | (ulong)pGVar17) != 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar9 != 0))
      {
                    /* try { // try from 00c07d38 to 00c07d43 has its CatchHandler @ 00c07e18 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: main_cp defined with main_fp or main_vp.\n");
      goto LAB_00c07768;
    }
LAB_00c07014:
    pSVar19 = (ShaderConverter *)this_04;
    if (this_02 != (IR_Function *)0x0) {
      pSVar19 = (ShaderConverter *)IR_Function::prepare(this_02,true);
    }
    if (this_03 != (IR_Function *)0x0) {
      pSVar19 = (ShaderConverter *)IR_Function::prepare(this_03,true);
    }
    if (this_04 != (IR_Function *)0x0) {
      pSVar19 = (ShaderConverter *)IR_Function::prepare(this_04,true);
    }
    local_1108 = &local_1100;
    local_10f8 = 0;
    local_1100 = (__tree_node *)0x0;
    ppuVar36 = *(ulong ***)param_3;
    while (ppuVar36 != (ulong **)(ShaderConverter *)(param_3 + 8)) {
                    /* try { // try from 00c07094 to 00c0709f has its CatchHandler @ 00c08088 */
      pVar7 = std::__ndk1::
              __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                        ((basic_string *)&local_1108,(basic_string *)(ppuVar36 + 4));
      pSVar19 = (ShaderConverter *)(ulong)pVar7;
      ppuVar28 = (ulong **)ppuVar36[1];
      if ((ulong **)ppuVar36[1] == (ulong **)0x0) {
        ppuVar28 = ppuVar36 + 2;
        bVar5 = (ulong **)**ppuVar28 != ppuVar36;
        ppuVar36 = (ulong **)*ppuVar28;
        if (bVar5) {
          do {
            puVar33 = *ppuVar28;
            ppuVar28 = (ulong **)(puVar33 + 2);
            ppuVar36 = (ulong **)*ppuVar28;
          } while (*ppuVar36 != puVar33);
        }
      }
      else {
        do {
          ppuVar36 = ppuVar28;
          ppuVar28 = (ulong **)*ppuVar36;
        } while ((ulong **)*ppuVar36 != (ulong **)0x0);
      }
    }
    if (this_02 == (IR_Function *)0x0) {
                    /* try { // try from 00c07110 to 00c0715b has its CatchHandler @ 00c08004 */
      IR_TypeSet::clearStructFieldMarks();
      IR_Function::markUsedStructFields(this_04,1,2,true);
      IR_Function::eliminateReadsFromConstantStructFields();
      local_10d8 = CONCAT44(local_10d8._4_4_,0x1010100);
      IR_TypeSet::removeStructFields(aIStack_e48,(bool *)&local_10d8,(set *)&local_1108);
      IR_Function::simplifyHssa(this_04,true);
    }
    else {
                    /* try { // try from 00c0706c to 00c0707f has its CatchHandler @ 00c08004 */
      eliminateUnusedFields(pSVar19,this_02,this_03,aIStack_e48,(set *)&local_1108);
    }
                    /* try { // try from 00c0715c to 00c0716f has its CatchHandler @ 00c07fdc */
    IR_HllConvertUtil::ConversionContext::ConversionContext(aCStack_1028,aSStack_e58,this_02,0);
                    /* try { // try from 00c07170 to 00c07183 has its CatchHandler @ 00c07fd8 */
    IR_HllConvertUtil::ConversionContext::ConversionContext(aCStack_1060,aSStack_e58,this_03,1);
                    /* try { // try from 00c07184 to 00c071d3 has its CatchHandler @ 00c08000 */
    puVar24 = (uint *)0x2;
    IR_HllConvertUtil::ConversionContext::ConversionContext(aCStack_1098,aSStack_e58,this_04,2);
    if (this_04 == (IR_Function *)0x0) {
LAB_00c071c0:
      if (this_02 != (IR_Function *)0x0) {
        IR_HllConvertUtil::collectExports(aCStack_1028);
        IR_HllConvertUtil::collectExports(aCStack_1060);
      }
                    /* try { // try from 00c071d4 to 00c071db has its CatchHandler @ 00c07fd4 */
      CodeStringStream::CodeStringStream(aCStack_1138);
                    /* try { // try from 00c071dc to 00c071e3 has its CatchHandler @ 00c07fcc */
      CodeStringStream::CodeStringStream(aCStack_1168);
                    /* try { // try from 00c071e4 to 00c071eb has its CatchHandler @ 00c07fc4 */
      CodeStringStream::CodeStringStream(aCStack_1198);
      SVar2 = *param_2;
                    /* try { // try from 00c071fc to 00c07207 has its CatchHandler @ 00c07fec */
      IR_HllConvertUtil::writeStructDefs
                ((IR_HllConvertUtil *)aSStack_e58,(SharedContext *)aCStack_1198,
                 (CodeStringStream *)param_8,puVar24);
      if ((int)((ulong)(local_a0 - local_a8) >> 4) != 0) {
        uVar11 = 0;
        do {
          this_06 = *(IR_Struct **)(*(long *)(local_a8 + uVar11 * 0x10) + 8);
          if (this_06[0x52] == (IR_Struct)0x0) {
            if (this_06[0x53] != (IR_Struct)0x0) {
              bVar5 = false;
              SVar23 = 1;
              goto LAB_00c072a0;
            }
            if (this_06[0x54] != (IR_Struct)0x0) {
              SVar23 = 2;
              bVar5 = true;
              goto LAB_00c072a0;
            }
          }
          else {
            bVar5 = false;
            SVar23 = 0;
LAB_00c072a0:
            uVar13 = (*(long *)(this_06 + 0x38) - *(long *)(this_06 + 0x30) >> 3) * 0xb6db6db7;
            if ((int)uVar13 != 0) {
              uVar13 = uVar13 & 0xffffffff;
              piVar25 = (int *)(*(long *)(this_06 + 0x30) + 0x20);
              do {
                if (*piVar25 != 0) goto LAB_00c072e4;
                piVar25 = piVar25 + 0xe;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            if (bVar5) {
LAB_00c072e4:
              pIVar34 = *(IR_Struct **)(this_06 + 0x10);
              if (((byte)*this_06 & 1) == 0) {
                pIVar34 = this_06 + 1;
              }
                    /* try { // try from 00c072f4 to 00c072fb has its CatchHandler @ 00c08058 */
              ShaderStructLayout::ShaderStructLayout
                        ((ShaderStructLayout *)&local_10d8,(char *)pIVar34,SVar23);
              puVar33 = *(ulong **)(param_7 + 8);
              if (puVar33 < *(ulong **)(param_7 + 0x10)) {
                puVar33[5] = 0;
                puVar33[6] = 0;
                puVar33[4] = 0;
                puVar33[2] = (ulong)local_10c8;
                puVar33[1] = sStack_10d0;
                *puVar33 = local_10d8;
                local_10c8 = (ShaderConverter *)0x0;
                sStack_10d0 = 0;
                local_10d8 = 0;
                *(undefined2 *)(puVar33 + 3) = local_10c0;
                puVar33[4] = (ulong)local_10b8;
                puVar33[5] = (ulong)local_10b0;
                puVar33[6] = local_10a8;
                *(undefined4 *)(puVar33 + 7) = local_10a0;
                *(ulong **)(param_7 + 8) = puVar33 + 8;
                local_10b8 = (byte *)0x0;
                local_10b0 = (byte *)0x0;
                local_10a8 = 0;
              }
              else {
                    /* try { // try from 00c07370 to 00c0737b has its CatchHandler @ 00c07ff0 */
                std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
                __push_back_slow_path<ShaderStructLayout>
                          ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)
                           param_7,(ShaderStructLayout *)&local_10d8);
                pbVar27 = local_10b8;
                pbVar32 = local_10b0;
                if (local_10b8 != (byte *)0x0) {
                  while (pbVar29 = pbVar32, pbVar29 != pbVar27) {
                    pbVar32 = pbVar29 + -0x20;
                    if ((*pbVar32 & 1) != 0) {
                      operator_delete(*(void **)(pbVar29 + -0x10));
                    }
                  }
                  local_10b0 = pbVar27;
                  operator_delete(local_10b8);
                }
              }
              if ((local_10d8 & 1) != 0) {
                operator_delete(local_10c8);
              }
              lVar10 = *(long *)(param_7 + 8);
                    /* try { // try from 00c073e4 to 00c073f3 has its CatchHandler @ 00c08054 */
              uVar13 = IR_Struct::fillShaderStructLayout
                                 (this_06,(ShaderStructLayout *)(lVar10 + -0x40),param_7);
              if ((uVar13 & 1) == 0) {
LAB_00c07688:
                HlslParser::~HlslParser(this_01);
                operator_delete(this_01);
                uVar37 = 0;
                goto LAB_00c079a0;
              }
              if ((int)((ulong)(*(long *)(lVar10 + -0x18) - *(long *)(lVar10 + -0x20)) >> 5) == 0) {
                lVar10 = *(long *)(param_7 + 8);
                pbVar27 = *(byte **)(lVar10 + -0x20);
                if (pbVar27 != (byte *)0x0) {
                  pbVar29 = *(byte **)(lVar10 + -0x18);
                  pbVar32 = pbVar27;
                  if (pbVar29 != pbVar27) {
                    do {
                      pbVar32 = pbVar29 + -0x20;
                      if ((*pbVar32 & 1) != 0) {
                        operator_delete(*(void **)(pbVar29 + -0x10));
                      }
                      pbVar29 = pbVar32;
                    } while (pbVar32 != pbVar27);
                    pbVar32 = *(byte **)(lVar10 + -0x20);
                  }
                  *(byte **)(lVar10 + -0x18) = pbVar27;
                  operator_delete(pbVar32);
                }
                if ((*(byte *)(lVar10 + -0x40) & 1) != 0) {
                  operator_delete(*(void **)(lVar10 + -0x30));
                }
                *(byte **)(param_7 + 8) = (byte *)(lVar10 + -0x40);
                goto LAB_00c07240;
              }
              pIVar34 = this_06 + 1;
              if (((byte)*this_06 & 1) != 0) {
                pIVar34 = *(IR_Struct **)(this_06 + 0x10);
              }
              sVar20 = strlen((char *)pIVar34);
              if (0xffffffffffffffef < sVar20) {
                    /* try { // try from 00c07c90 to 00c07c97 has its CatchHandler @ 00c08044 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              if (sVar20 < 0x17) {
                local_10d8 = CONCAT71(local_10d8._1_7_,(char)((int)sVar20 << 1));
                pSVar19 = (ShaderConverter *)((ulong)&local_10d8 | 1);
                if (sVar20 != 0) goto LAB_00c074b8;
              }
              else {
                uVar13 = sVar20 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c0749c to 00c074a3 has its CatchHandler @ 00c07fe0 */
                pSVar19 = (ShaderConverter *)operator_new(uVar13);
                local_10d8 = uVar13 | 1;
                sStack_10d0 = sVar20;
                local_10c8 = pSVar19;
LAB_00c074b8:
                memcpy(pSVar19,pIVar34,sVar20);
              }
              pSVar19[sVar20] = (ShaderConverter)0x0;
                    /* try { // try from 00c074cc to 00c074d7 has its CatchHandler @ 00c0802c */
              _Var8 = std::__ndk1::
                      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
                      ::
                      find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
                                  *)param_3,(basic_string *)&local_10d8);
              pSVar21 = (ShaderConverter *)(ulong)_Var8;
              pSVar19 = pSVar21;
              if ((local_10d8 & 1) != 0) {
                pSVar19 = local_10c8;
                operator_delete(local_10c8);
              }
              if ((ShaderConverter *)(param_3 + 8) != pSVar21) {
                pbVar1 = (basic_string *)(pSVar21 + 0x38);
                    /* try { // try from 00c07500 to 00c0753f has its CatchHandler @ 00c08050 */
                uVar13 = checkStructLayout(pSVar19,(ShaderStructLayout *)(lVar10 + -0x40),
                                           (ShaderStructLayout *)pbVar1);
                if ((uVar13 & 1) == 0) goto LAB_00c07688;
                lVar10 = *(long *)(param_7 + 8);
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           *)(basic_string *)(lVar10 + -0x40),pbVar1);
                *(undefined2 *)(lVar10 + -0x28) = *(undefined2 *)(pSVar21 + 0x50);
                if ((basic_string *)(lVar10 + -0x40) != pbVar1) {
                  std::__ndk1::
                  vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                  ::assign<ShaderStructLayout::Field*>
                            ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                              *)(lVar10 + -0x20),*(Field **)(pSVar21 + 0x58),
                             *(Field **)(pSVar21 + 0x60));
                }
                *(undefined4 *)(lVar10 + -8) = *(undefined4 *)(pSVar21 + 0x70);
              }
            }
          }
LAB_00c07240:
          uVar11 = uVar11 + 1;
        } while (uVar11 < ((ulong)(local_a0 - local_a8) >> 4 & 0xffffffff));
      }
                    /* try { // try from 00c07588 to 00c075d7 has its CatchHandler @ 00c07fec */
      if ((this_02 != (IR_Function *)0x0) &&
         (IR_Function::colourRegisters(), param_9 != (CodeStringStream *)0x0)) {
        IR_Function::disassembleToStream(this_02,param_9);
      }
      if ((this_03 != (IR_Function *)0x0) &&
         (IR_Function::colourRegisters(), param_9 != (CodeStringStream *)0x0)) {
        IR_Function::disassembleToStream(this_03,param_9);
      }
      if ((this_04 != (IR_Function *)0x0) &&
         (IR_Function::colourRegisters(), param_9 != (CodeStringStream *)0x0)) {
        IR_Function::disassembleToStream(this_04,param_9);
      }
                    /* try { // try from 00c075d8 to 00c075df has its CatchHandler @ 00c07f88 */
      CodeStringStream::CodeStringStream((CodeStringStream *)&local_10d8);
                    /* try { // try from 00c075e0 to 00c075e7 has its CatchHandler @ 00c07f80 */
      CodeStringStream::CodeStringStream(aCStack_11c8);
                    /* try { // try from 00c075e8 to 00c075ef has its CatchHandler @ 00c07f78 */
      CodeStringStream::CodeStringStream(aCStack_11f8);
      local_1208 = 0;
      local_1210 = 0;
      local_1200 = 0;
      local_1220 = 0;
      local_1228 = 0;
      local_1218 = 0;
      local_1238 = 0;
      local_1240 = 0;
      local_1230 = 0;
      if (this_02 == (IR_Function *)0x0) {
                    /* try { // try from 00c076b4 to 00c076bf has its CatchHandler @ 00c07f8c */
        uVar11 = IR_HllConvertUtil::collectGlobals(aCStack_1098,(vector *)&local_1240);
        if ((uVar11 & 1) != 0) {
                    /* try { // try from 00c076c4 to 00c076cf has its CatchHandler @ 00c07ef4 */
          uVar11 = IR_HllConvertUtil::sortAndAssignGlobalLocations
                             (aSStack_e58,(vector *)&local_1240);
          goto LAB_00c076d0;
        }
LAB_00c0795c:
        HlslParser::~HlslParser(this_01);
        operator_delete(this_01);
        uVar37 = 0;
      }
      else {
                    /* try { // try from 00c07618 to 00c07633 has its CatchHandler @ 00c07f8c */
        uVar11 = IR_HllConvertUtil::collectGlobals(aCStack_1028,(vector *)&local_1210);
        if (((uVar11 & 1) == 0) ||
           (uVar11 = IR_HllConvertUtil::collectGlobals(aCStack_1060,(vector *)&local_1228),
           (uVar11 & 1) == 0)) goto LAB_00c0795c;
        if ((5 < *param_2) || ((1 << (ulong)(*param_2 & 0x1f) & 0x34U) == 0)) {
                    /* try { // try from 00c0792c to 00c0795b has its CatchHandler @ 00c07ef4 */
          uVar11 = IR_HllConvertUtil::sortAndAssignGlobalLocations
                             (aSStack_e58,(vector *)&local_1210);
          if ((uVar11 & 1) != 0) {
            uVar11 = IR_HllConvertUtil::sortAndAssignGlobalLocations
                               (aSStack_e58,(vector *)&local_1228);
            goto LAB_00c076d0;
          }
LAB_00c0794c:
          pcVar22 = (char *)LogManager::getInstance();
          LogManager::errorf(pcVar22,"Error: shader is using too many textures.\n");
          goto LAB_00c0795c;
        }
                    /* try { // try from 00c0765c to 00c0766b has its CatchHandler @ 00c07ef4 */
        uVar11 = IR_HllConvertUtil::sortAndAssignGlobalLocations
                           (aSStack_e58,(vector *)&local_1210,(vector *)&local_1228);
LAB_00c076d0:
        if ((uVar11 & 1) == 0) goto LAB_00c0794c;
                    /* try { // try from 00c076d4 to 00c076db has its CatchHandler @ 00c07edc */
        CodeStringStream::CodeStringStream(aCStack_1270);
                    /* try { // try from 00c076dc to 00c076e3 has its CatchHandler @ 00c07ed4 */
        CodeStringStream::CodeStringStream(aCStack_12a0);
                    /* try { // try from 00c076e4 to 00c076eb has its CatchHandler @ 00c07ecc */
        CodeStringStream::CodeStringStream(aCStack_12d0);
        if (this_02 == (IR_Function *)0x0) {
                    /* try { // try from 00c07780 to 00c077cf has its CatchHandler @ 00c07eec */
          IR_HllConvertUtil::convertFunction
                    (aCStack_1098,aCStack_12d0,aCStack_11f8,(vector *)&local_1240);
        }
        else {
                    /* try { // try from 00c076f0 to 00c07717 has its CatchHandler @ 00c07eec */
          IR_HllConvertUtil::convertFunction
                    (aCStack_1028,aCStack_1270,(CodeStringStream *)&local_10d8,(vector *)&local_1210
                    );
          IR_HllConvertUtil::convertFunction
                    (aCStack_1060,aCStack_12a0,aCStack_11c8,(vector *)&local_1228);
        }
        if (local_78 != '\0') {
          local_78 = '\0';
        }
        IR_HllConvertUtil::writeShaderStructDefs(aSStack_e58,aCStack_1198,param_7);
        if ((this_03 != (IR_Function *)0x0) && (SVar2 == 5)) {
          IR_HllConvertUtil::writeFsOutputStructMetal(aCStack_1060,aCStack_1198);
        }
                    /* try { // try from 00c077d0 to 00c077d7 has its CatchHandler @ 00c07ec4 */
        CodeStringStream::CodeStringStream(aCStack_1300);
                    /* try { // try from 00c077d8 to 00c077df has its CatchHandler @ 00c07ebc */
        CodeStringStream::CodeStringStream(aCStack_1330);
                    /* try { // try from 00c077e0 to 00c077e7 has its CatchHandler @ 00c07eb4 */
        CodeStringStream::CodeStringStream(aCStack_1360);
        if (this_02 == (IR_Function *)0x0) {
          if (SVar2 == 5) {
            IR_HllConvertUtil::writeStubMetal(aCStack_1098,aCStack_1360,(vector *)&local_1240);
          }
        }
        else if (SVar2 == 5) {
                    /* try { // try from 00c077f8 to 00c07837 has its CatchHandler @ 00c07e74 */
          IR_HllConvertUtil::writeStubMetal(aCStack_1028,aCStack_1300,(vector *)&local_1210);
          IR_HllConvertUtil::writeStubMetal(aCStack_1060,aCStack_1330,(vector *)&local_1228);
        }
                    /* try { // try from 00c07838 to 00c0783f has its CatchHandler @ 00c07eac */
        CodeStringStream::CodeStringStream(aCStack_1390);
                    /* try { // try from 00c07840 to 00c07847 has its CatchHandler @ 00c07ea4 */
        CodeStringStream::CodeStringStream(aCStack_13c0);
                    /* try { // try from 00c07848 to 00c0784f has its CatchHandler @ 00c07e9c */
        CodeStringStream::CodeStringStream(aCStack_13f0);
        if (this_02 == (IR_Function *)0x0) {
          if (*param_2 == 4) {
            IR_HllConvertUtil::writeSrt(aSStack_e58,aCStack_1198,(vector *)&local_1240);
          }
          IR_HllConvertUtil::writeGlobalData(aCStack_1098,aCStack_13f0,(vector *)&local_1240);
        }
        else {
          if (*param_2 == 4) {
            local_1420 = 0;
            uStack_1418 = 0;
            local_1410 = 0;
                    /* try { // try from 00c0786c to 00c0788b has its CatchHandler @ 00c07e5c */
            IR_HllConvertUtil::mergeGlobalData
                      ((vector *)&local_1420,(vector *)&local_1210,(vector *)&local_1228);
            IR_HllConvertUtil::writeSrt(aSStack_e58,aCStack_1198,(vector *)&local_1420);
            FUN_00c08754(&local_1420);
          }
                    /* try { // try from 00c07894 to 00c078db has its CatchHandler @ 00c07ee4 */
          IR_HllConvertUtil::writeGlobalData(aCStack_1028,aCStack_1390,(vector *)&local_1210);
          IR_HllConvertUtil::writeGlobalData(aCStack_1060,aCStack_13c0,(vector *)&local_1228);
        }
                    /* try { // try from 00c078dc to 00c078e3 has its CatchHandler @ 00c07e94 */
        CodeStringStream::CodeStringStream((CodeStringStream *)&local_1420);
                    /* try { // try from 00c078e4 to 00c078eb has its CatchHandler @ 00c07e8c */
        CodeStringStream::CodeStringStream(aCStack_1450);
                    /* try { // try from 00c078ec to 00c078f3 has its CatchHandler @ 00c07e84 */
        CodeStringStream::CodeStringStream(aCStack_1480);
        if (*param_2 == 2) {
          if (this_02 == (IR_Function *)0x0) {
                    /* try { // try from 00c07a50 to 00c07a5f has its CatchHandler @ 00c07e6c */
            IR_HllConvertUtil::writeSignature(aSStack_e58,aCStack_1480,(vector *)&local_1240);
          }
          else {
                    /* try { // try from 00c07908 to 00c07927 has its CatchHandler @ 00c07e6c */
            IR_HllConvertUtil::writeSignature
                      (aSStack_e58,(CodeStringStream *)&local_1420,(vector *)&local_1210,
                       (vector *)&local_1228);
            StringStream::appendShared((StringStream *)aCStack_1450,(StringStream *)&local_1420);
          }
        }
                    /* try { // try from 00c07a60 to 00c07a67 has its CatchHandler @ 00c07e7c */
        CodeStringStream::CodeStringStream(aCStack_14b0);
        bVar5 = ((byte)this[0xe10] & 1) != 0;
        uVar11 = (ulong)((byte)this[0xe10] >> 1);
        if (bVar5) {
          uVar11 = *(ulong *)(this + 0xe18);
        }
        pSVar19 = this + 0xe11;
        if (bVar5) {
          pSVar19 = *(ShaderConverter **)(this + 0xe20);
        }
        if ((uVar11 != 0) && (pSVar19 != (ShaderConverter *)0x0)) {
                    /* try { // try from 00c07a94 to 00c07a9b has its CatchHandler @ 00c07e48 */
          StringStream::pushString((StringStream *)aCStack_14b0,(char *)pSVar19);
        }
        if (this_02 != (IR_Function *)0x0) {
                    /* try { // try from 00c07aa0 to 00c07aa7 has its CatchHandler @ 00c07e54 */
          CodeStringStream::CodeStringStream(aCStack_14e0);
                    /* try { // try from 00c07aa8 to 00c07b13 has its CatchHandler @ 00c07f00 */
          StringStream::appendShared((StringStream *)aCStack_14e0,(StringStream *)aCStack_14b0);
          StringStream::append((StringStream *)aCStack_14e0,(StringStream *)&local_1420);
          StringStream::append((StringStream *)aCStack_14e0,(StringStream *)aCStack_1138);
          StringStream::appendShared((StringStream *)aCStack_14e0,(StringStream *)aCStack_1198);
          StringStream::append((StringStream *)aCStack_14e0,(StringStream *)&local_10d8);
          StringStream::append((StringStream *)aCStack_14e0,(StringStream *)aCStack_1390);
          StringStream::append((StringStream *)aCStack_14e0,(StringStream *)aCStack_1270);
          StringStream::append((StringStream *)aCStack_14e0,(StringStream *)aCStack_1300);
          StringStream::resolve((StringStream *)aCStack_14e0,param_4);
          CodeStringStream::~CodeStringStream(aCStack_14e0);
        }
        if (this_03 != (IR_Function *)0x0) {
                    /* try { // try from 00c07b20 to 00c07b27 has its CatchHandler @ 00c07e50 */
          CodeStringStream::CodeStringStream(aCStack_14e0);
                    /* try { // try from 00c07b28 to 00c07b93 has its CatchHandler @ 00c07efc */
          StringStream::appendShared((StringStream *)aCStack_14e0,(StringStream *)aCStack_14b0);
          StringStream::append((StringStream *)aCStack_14e0,(StringStream *)aCStack_1450);
          StringStream::append((StringStream *)aCStack_14e0,(StringStream *)aCStack_1168);
          StringStream::appendShared((StringStream *)aCStack_14e0,(StringStream *)aCStack_1198);
          StringStream::append((StringStream *)aCStack_14e0,(StringStream *)aCStack_11c8);
          StringStream::append((StringStream *)aCStack_14e0,(StringStream *)aCStack_13c0);
          StringStream::append((StringStream *)aCStack_14e0,(StringStream *)aCStack_12a0);
          StringStream::append((StringStream *)aCStack_14e0,(StringStream *)aCStack_1330);
          StringStream::resolve((StringStream *)aCStack_14e0,param_5);
          CodeStringStream::~CodeStringStream(aCStack_14e0);
        }
        if (this_04 != (IR_Function *)0x0) {
                    /* try { // try from 00c07ba0 to 00c07ba7 has its CatchHandler @ 00c07e4c */
          CodeStringStream::CodeStringStream(aCStack_14e0);
                    /* try { // try from 00c07ba8 to 00c07c07 has its CatchHandler @ 00c07ef8 */
          StringStream::appendShared((StringStream *)aCStack_14e0,(StringStream *)aCStack_14b0);
          StringStream::append((StringStream *)aCStack_14e0,(StringStream *)aCStack_1480);
          StringStream::appendShared((StringStream *)aCStack_14e0,(StringStream *)aCStack_1198);
          StringStream::append((StringStream *)aCStack_14e0,(StringStream *)aCStack_11f8);
          StringStream::append((StringStream *)aCStack_14e0,(StringStream *)aCStack_13f0);
          StringStream::append((StringStream *)aCStack_14e0,(StringStream *)aCStack_12d0);
          StringStream::append((StringStream *)aCStack_14e0,(StringStream *)aCStack_1360);
          StringStream::resolve((StringStream *)aCStack_14e0,param_6);
          CodeStringStream::~CodeStringStream(aCStack_14e0);
        }
        HlslParser::~HlslParser(this_01);
        operator_delete(this_01);
        CodeStringStream::~CodeStringStream(aCStack_14b0);
        CodeStringStream::~CodeStringStream(aCStack_1480);
        CodeStringStream::~CodeStringStream(aCStack_1450);
        CodeStringStream::~CodeStringStream((CodeStringStream *)&local_1420);
        CodeStringStream::~CodeStringStream(aCStack_13f0);
        CodeStringStream::~CodeStringStream(aCStack_13c0);
        CodeStringStream::~CodeStringStream(aCStack_1390);
        CodeStringStream::~CodeStringStream(aCStack_1360);
        CodeStringStream::~CodeStringStream(aCStack_1330);
        CodeStringStream::~CodeStringStream(aCStack_1300);
        CodeStringStream::~CodeStringStream(aCStack_12d0);
        CodeStringStream::~CodeStringStream(aCStack_12a0);
        CodeStringStream::~CodeStringStream(aCStack_1270);
        uVar37 = 1;
      }
      FUN_00c08754(&local_1240);
      FUN_00c08754(&local_1228);
      FUN_00c08754(&local_1210);
      CodeStringStream::~CodeStringStream(aCStack_11f8);
      CodeStringStream::~CodeStringStream(aCStack_11c8);
      CodeStringStream::~CodeStringStream((CodeStringStream *)&local_10d8);
LAB_00c079a0:
      if ((local_1180 & 1) != 0) {
        operator_delete(local_1170);
      }
      StringStream::~StringStream((StringStream *)aCStack_1198);
      if ((local_1150 & 1) != 0) {
        operator_delete(local_1140);
      }
      StringStream::~StringStream((StringStream *)aCStack_1168);
      if ((local_1120 & 1) != 0) {
        operator_delete(local_1110);
      }
      StringStream::~StringStream((StringStream *)aCStack_1138);
    }
    else {
      puVar24 = (uint *)0x3;
      uVar11 = HlslParser::getSystemVarValue
                         (this_01,"GS_SYSTEM_THREADS_PER_GROUP",auStack_1070,3,true);
      if ((uVar11 & 1) != 0) goto LAB_00c071c0;
      HlslParser::~HlslParser(this_01);
      operator_delete(this_01);
      uVar37 = 0;
    }
    std::__ndk1::
    __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::destroy((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
               *)&local_1108,local_1100);
  }
  CreateIR::~CreateIR(aCStack_ff0);
  IR_TypeSet::~IR_TypeSet(aIStack_e48);
  if (local_10f0 != (void *)0x0) {
    local_10e8 = local_10f0;
    operator_delete(local_10f0);
  }
LAB_00c07a18:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar37;
}


