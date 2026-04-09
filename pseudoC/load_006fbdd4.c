// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load
// Entry Point: 006fbdd4
// Size: 4148 bytes
// Signature: undefined __thiscall load(AnimalHusbandry * this, char * param_1)


/* AnimalHusbandry::load(char const*) */

bool __thiscall AnimalHusbandry::load(AnimalHusbandry *this,char *param_1)

{
  AnimalSoundSystem *this_00;
  AnimalHusbandry AVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  __tree_iterator _Var5;
  int iVar6;
  ulong uVar7;
  size_t sVar8;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  UpdateManager *this_01;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
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
  long **pplVar12;
  long *plVar13;
  long lVar14;
  long **pplVar15;
  void *pvVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined4 uVar21;
  float fVar22;
  undefined auVar23 [16];
  ulong local_2f8;
  int local_2cc;
  ulong local_2c0;
  undefined8 local_2b8;
  char *local_2b0;
  ulong local_2a8;
  undefined8 uStack_2a0;
  char *local_298;
  long **local_290;
  long *local_288;
  undefined8 local_280;
  ulong local_278;
  undefined8 uStack_270;
  void *local_268;
  undefined8 local_260;
  size_t local_258;
  void *local_250;
  char acStack_248 [128];
  undefined8 local_1c8;
  size_t local_1c0;
  void *local_1b8;
  DomXMLFile aDStack_148 [216];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  DomXMLFile::DomXMLFile(aDStack_148);
                    /* try { // try from 006fbe10 to 006fbe8b has its CatchHandler @ 006fce74 */
  uVar7 = DomXMLFile::loadFromFile(aDStack_148,param_1,true);
  if ((uVar7 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 006fcdc4 to 006fcdcf has its CatchHandler @ 006fce08 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Can\'t load animal husbandry XML file \'%s\'.\n",param_1);
    goto LAB_006fcce0;
  }
  local_278 = 0;
  uStack_270 = 0;
  local_268 = (void *)0x0;
  sVar8 = strlen(param_1);
  if (0xffffffffffffffef < sVar8) {
                    /* try { // try from 006fcdac to 006fcdb3 has its CatchHandler @ 006fce60 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    pvVar16 = (void *)((ulong)&local_1c8 | 1);
    local_1c8 = (char *)CONCAT71(local_1c8._1_7_,(char)((int)sVar8 << 1));
    if (sVar8 != 0) goto LAB_006fbeb0;
  }
  else {
    uVar7 = sVar8 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 006fbe98 to 006fbe9f has its CatchHandler @ 006fce60 */
    pvVar16 = operator_new(uVar7);
    local_1c8 = (char *)(uVar7 | 1);
    local_1c0 = sVar8;
    local_1b8 = pvVar16;
LAB_006fbeb0:
    memcpy(pvVar16,param_1,sVar8);
  }
  *(undefined *)((long)pvVar16 + sVar8) = 0;
                    /* try { // try from 006fbec4 to 006fbed3 has its CatchHandler @ 006fce40 */
  PathUtil::getBasePath((basic_string *)&local_1c8,(basic_string *)&local_278,true);
  if (((ulong)local_1c8 & 1) != 0) {
    operator_delete(local_1b8);
  }
  local_288 = (long *)0x0;
  local_280 = 0;
                    /* try { // try from 006fbef4 to 006fbf07 has its CatchHandler @ 006fcec0 */
  local_290 = &local_288;
  pcVar9 = (char *)DomXMLFile::getValue
                             (aDStack_148,"animalHusbandry.animals#milkRobotSoundGroup",false);
  local_2f8 = 2;
  if (pcVar9 != (char *)0x0) {
    *(undefined4 *)(this + 0x1fd08) = 2;
    local_1c0 = 2;
                    /* try { // try from 006fbf20 to 006fbf2b has its CatchHandler @ 006fce38 */
    local_1c8 = pcVar9;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
    ::__emplace_unique_impl<std::__ndk1::pair<char_const*,unsigned_int>>((pair *)&local_290);
    local_2f8 = 3;
  }
                    /* try { // try from 006fbf30 to 006fbf43 has its CatchHandler @ 006fcec0 */
  pcVar9 = (char *)DomXMLFile::getValue
                             (aDStack_148,"animalHusbandry.animals#milkRobotDoorSoundGroup",false);
  if (pcVar9 != (char *)0x0) {
    sVar8 = strlen(pcVar9);
    if (0xffffffffffffffef < sVar8) {
                    /* try { // try from 006fcdfc to 006fce03 has its CatchHandler @ 006fce3c */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar8 < 0x17) {
      pvVar16 = (void *)((ulong)&local_1c8 | 1);
      local_1c8 = (char *)CONCAT71(local_1c8._1_7_,(char)((int)sVar8 << 1));
      if (sVar8 != 0) goto LAB_006fbfa0;
    }
    else {
      uVar7 = sVar8 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 006fbf88 to 006fbf8f has its CatchHandler @ 006fce3c */
      pvVar16 = operator_new(uVar7);
      local_1c8 = (char *)(uVar7 | 1);
      local_1c0 = sVar8;
      local_1b8 = pvVar16;
LAB_006fbfa0:
      memcpy(pvVar16,pcVar9,sVar8);
    }
    *(undefined *)((long)pvVar16 + sVar8) = 0;
                    /* try { // try from 006fbfb4 to 006fbfbf has its CatchHandler @ 006fce20 */
    _Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                        *)&local_290,(basic_string *)&local_1c8);
    if (((ulong)local_1c8 & 1) != 0) {
      operator_delete(local_1b8);
    }
    if (&local_288 == (long **)(ulong)_Var5) {
      *(int *)(this + 0x1fd0c) = (int)local_2f8;
                    /* try { // try from 006fbff4 to 006fbfff has its CatchHandler @ 006fce1c */
      local_1c8 = pcVar9;
      local_1c0 = local_2f8;
      std::__ndk1::
      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
      ::__emplace_unique_impl<std::__ndk1::pair<char_const*,unsigned_int>>((pair *)&local_290);
      local_2f8 = (ulong)((int)local_2f8 + 1);
    }
    else {
      *(undefined4 *)(this + 0x1fd0c) = *(undefined4 *)((long **)(ulong)_Var5 + 7);
    }
  }
                    /* try { // try from 006fc004 to 006fc013 has its CatchHandler @ 006fcec0 */
  iVar6 = DomXMLFile::getNumChildren(aDStack_148,"animalHusbandry.animals");
  *(int *)(this + 0x54) = iVar6;
  if (iVar6 == 0) {
    local_2cc = 0;
  }
  else {
    lVar14 = 0;
    uVar7 = 0;
    lVar17 = 0x3ed8;
    lVar19 = 0x3ea8;
    local_2cc = 0;
    pvVar16 = (void *)((ulong)&local_260 | 1);
    lVar20 = 0x3ef0;
    do {
                    /* try { // try from 006fc084 to 006fc0a7 has its CatchHandler @ 006fced4 */
      FUN_006fcf34(&local_1c8);
      auVar23 = DomXMLFile::hasProperty(aDStack_148,(char *)&local_1c8,(bool *)0x0);
      if ((auVar23 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                    /* try { // try from 006fc0ac to 006fc55b has its CatchHandler @ 006fcf04 */
        FUN_006fcf34(acStack_248,auVar23._8_8_,"%s#radius",&local_1c8);
        uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,0.0);
        *(undefined4 *)(this + lVar14 + 0x70) = uVar21;
        FUN_006fcf34(acStack_248,extraout_x1,"%s#threatAwarenessRadius",&local_1c8);
        uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,0.0);
        *(undefined4 *)(this + 0x1fc94) = uVar21;
        FUN_006fcf34(acStack_248,extraout_x1_00,"%s#handleThreats",&local_1c8);
        bVar4 = Properties::getBoolDefault((Properties *)aDStack_148,acStack_248,false);
        this[0x1fc90] = (AnimalHusbandry)(bVar4 & 1);
        FUN_006fcf34(acStack_248,extraout_x1_01,"%s#slowingDistance",&local_1c8);
        uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,0.0);
        *(undefined4 *)(this + lVar14 + 0x74) = uVar21;
        FUN_006fcf34(acStack_248,extraout_x1_02,"%s#allowMilkingPlace",&local_1c8);
        bVar4 = Properties::getBoolDefault((Properties *)aDStack_148,acStack_248,false);
        this[lVar14 + 0x78] = (AnimalHusbandry)(bVar4 & 1);
        FUN_006fcf34(acStack_248,extraout_x1_03,"%s#headOffset",&local_1c8);
        uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,0.0);
        *(undefined4 *)(this + lVar14 + 0x7c) = uVar21;
        FUN_006fcf34(acStack_248,extraout_x1_04,"%s#canEat",&local_1c8);
        bVar4 = Properties::getBoolDefault((Properties *)aDStack_148,acStack_248,false);
        this[lVar14 + 0x7a] = (AnimalHusbandry)(bVar4 & 1);
        FUN_006fcf34(acStack_248,extraout_x1_05,"%s#canDrink",&local_1c8);
        bVar4 = Properties::getBoolDefault((Properties *)aDStack_148,acStack_248,false);
        this[lVar14 + 0x7b] = (AnimalHusbandry)(bVar4 & 1);
        FUN_006fcf34(acStack_248,extraout_x1_06,"%s#canSleep",&local_1c8);
        bVar4 = Properties::getBoolDefault((Properties *)aDStack_148,acStack_248,false);
        this[lVar14 + 0x79] = (AnimalHusbandry)(bVar4 & 1);
        FUN_006fcf34(acStack_248,extraout_x1_07,"%s#canEatDuringNight",&local_1c8);
        bVar4 = Properties::getBoolDefault((Properties *)aDStack_148,acStack_248,false);
        this[0x1fc48] = (AnimalHusbandry)(bVar4 & 1);
        FUN_006fcf34(acStack_248,extraout_x1_08,"%s#canBeCleaned",&local_1c8);
        bVar4 = Properties::getBoolDefault((Properties *)aDStack_148,acStack_248,false);
        this[0x1fc49] = (AnimalHusbandry)(bVar4 & 1);
        FUN_006fcf34(acStack_248,extraout_x1_09,"%s#canBeMounted",&local_1c8);
        bVar4 = Properties::getBoolDefault((Properties *)aDStack_148,acStack_248,false);
        this[0x1fc4a] = (AnimalHusbandry)(bVar4 & 1);
        FUN_006fcf34(acStack_248,extraout_x1_10,"%s.statesTimers#idleMin",&local_1c8);
        uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,0.0);
        *(undefined4 *)(this + 0x1fc4c) = uVar21;
        FUN_006fcf34(acStack_248,extraout_x1_11,"%s.statesTimers#idleMax",&local_1c8);
        uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,0.0);
        *(undefined4 *)(this + 0x1fc50) = uVar21;
        FUN_006fcf34(acStack_248,extraout_x1_12,"%s.statesTimers#sleepMin",&local_1c8);
        uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,0.0);
        *(undefined4 *)(this + 0x1fc54) = uVar21;
        FUN_006fcf34(acStack_248,extraout_x1_13,"%s.statesTimers#sleepMax",&local_1c8);
        uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,0.0);
        *(undefined4 *)(this + 0x1fc58) = uVar21;
        FUN_006fcf34(acStack_248,extraout_x1_14,"%s.statesTimers#restMin",&local_1c8);
        uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,0.0);
        *(undefined4 *)(this + 0x1fc5c) = uVar21;
        FUN_006fcf34(acStack_248,extraout_x1_15,"%s.statesTimers#restMax",&local_1c8);
        uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,0.0);
        *(undefined4 *)(this + 0x1fc60) = uVar21;
        FUN_006fcf34(acStack_248,extraout_x1_16,"%s.statesTimers#chewMin",&local_1c8);
        uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,0.0);
        *(undefined4 *)(this + 0x1fc64) = uVar21;
        FUN_006fcf34(acStack_248,extraout_x1_17,"%s.statesTimers#chewMax",&local_1c8);
        uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,0.0);
        *(undefined4 *)(this + 0x1fc68) = uVar21;
        FUN_006fcf34(acStack_248,extraout_x1_18,"%s.statesTimers#eatMin",&local_1c8);
        uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,0.0);
        *(undefined4 *)(this + 0x1fc6c) = uVar21;
        FUN_006fcf34(acStack_248,extraout_x1_19,"%s.statesTimers#eatMax",&local_1c8);
        uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,0.0);
        *(undefined4 *)(this + 0x1fc70) = uVar21;
        FUN_006fcf34(acStack_248,extraout_x1_20,"%s.statesTimers#drinkMin",&local_1c8);
        uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,0.0);
        *(undefined4 *)(this + 0x1fc74) = uVar21;
        FUN_006fcf34(acStack_248,extraout_x1_21,"%s.statesTimers#drinkMax",&local_1c8);
        uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,0.0);
        *(undefined4 *)(this + 0x1fc78) = uVar21;
        FUN_006fcf34(acStack_248,extraout_x1_22,"%s.statesTimers#wanderMin",&local_1c8);
        uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,0.0);
        *(undefined4 *)(this + 0x1fc84) = uVar21;
        FUN_006fcf34(acStack_248,extraout_x1_23,"%s.statesTimers#wanderMax",&local_1c8);
        uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,0.0);
        *(undefined4 *)(this + 0x1fc88) = uVar21;
        FUN_006fcf34(acStack_248,extraout_x1_24,"%s.statesTimers#grazeMin",&local_1c8);
        uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,0.0);
        *(undefined4 *)(this + 0x1fc7c) = uVar21;
        FUN_006fcf34(acStack_248,extraout_x1_25,"%s.statesTimers#grazeMax",&local_1c8);
        uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,0.0);
        *(undefined4 *)(this + 0x1fc80) = uVar21;
        FUN_006fcf34(acStack_248,extraout_x1_26,"%s#interessDistance",&local_1c8);
                    /* try { // try from 006fc55c to 006fc587 has its CatchHandler @ 006fcec8 */
        fVar22 = (float)Properties::getFloat((Properties *)aDStack_148,acStack_248,1.0);
        *(float *)(this + 0x1fc8c) = fVar22 * fVar22;
        FUN_006fcf34(acStack_248,extraout_x1_27,"%s.assets#filename",&local_1c8);
                    /* try { // try from 006fc588 to 006fc5af has its CatchHandler @ 006fcecc */
        auVar23 = DomXMLFile::getValue(aDStack_148,acStack_248,false);
        pcVar9 = auVar23._0_8_;
        FUN_006fcf34(acStack_248,auVar23._8_8_,"%s.assets#animation",&local_1c8);
                    /* try { // try from 006fc5b0 to 006fc5bf has its CatchHandler @ 006fcec4 */
        pcVar10 = (char *)DomXMLFile::getValue(aDStack_148,acStack_248,false);
        if ((pcVar9 != (char *)0x0) && (pcVar10 != (char *)0x0)) {
          local_2c0 = 0;
          local_2a8 = 0;
          uStack_2a0 = 0;
          local_298 = (char *)0x0;
          local_2b8 = 0;
          local_2b0 = (char *)0x0;
          if (*pcVar9 == '$') {
                    /* try { // try from 006fc5ec to 006fc8f7 has its CatchHandler @ 006fcedc */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)&local_2a8);
          }
          else {
            PathUtil::buildAbsolutePath
                      ((basic_string *)&local_278,pcVar9,(basic_string *)&local_2a8);
          }
          if (*pcVar10 == '$') {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)&local_2c0);
          }
          else {
            PathUtil::buildAbsolutePath
                      ((basic_string *)&local_278,pcVar10,(basic_string *)&local_2c0);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(this + lVar17),(basic_string *)&local_2a8);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(this + lVar20),(basic_string *)&local_2c0);
          pcVar9 = (char *)((ulong)&local_2a8 | 1);
          if ((local_2a8 & 1) != 0) {
            pcVar9 = local_298;
          }
          I3DAssetPtr::loadSharedI3DAsync
                    ((I3DAssetPtr *)(this + lVar14 + 0x80),pcVar9,false,false,
                     (MeshSplitFileState *)0x0,false,false,(Loader *)(this + lVar14 + 0x68));
          pcVar9 = (char *)((ulong)&local_2c0 | 1);
          if ((local_2c0 & 1) != 0) {
            pcVar9 = local_2b0;
          }
          I3DAssetPtr::loadSharedI3DAsync
                    ((I3DAssetPtr *)(this + lVar14 + 0xa0),pcVar9,false,false,
                     (MeshSplitFileState *)0x0,false,false,(Loader *)(this + lVar14 + 0x68));
          FUN_006fcf34(acStack_248,extraout_x1_28,"%s.assets#skeletonIndex",&local_1c8);
          Properties::getString((Properties *)aDStack_148,acStack_248,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)(this + lVar14 + 0xc0));
          FUN_006fcf34(acStack_248,extraout_x1_29,"%s.assets#meshIndex",&local_1c8);
          Properties::getString((Properties *)aDStack_148,acStack_248,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)(this + lVar14 + 0xd8));
          FUN_006fcf34(acStack_248,extraout_x1_30,"%s.assets#proxyIndex",&local_1c8);
          Properties::getString((Properties *)aDStack_148,acStack_248,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)(this + lVar14 + 0xf0));
          FUN_006fcf34(acStack_248,extraout_x1_31,"%s.assets#headIndex",&local_1c8);
          Properties::getString((Properties *)aDStack_148,acStack_248,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)(this + lVar14 + 0x108));
          FUN_006fcf34(acStack_248,extraout_x1_32,"%s.assets#shaderIndex",&local_1c8);
          Properties::getString((Properties *)aDStack_148,acStack_248,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)(this + lVar14 + 0x120));
          FUN_006fcf34(acStack_248,extraout_x1_33,"%s.assets.texture#multi",&local_1c8);
          bVar4 = Properties::getBoolDefault((Properties *)aDStack_148,acStack_248,false);
          this[lVar19] = (AnimalHusbandry)(bVar4 & 1);
          FUN_006fcf34(acStack_248,extraout_x1_34,"%s.assets.texture#numTilesU",&local_1c8);
          uVar21 = Properties::getInt((Properties *)aDStack_148,acStack_248,0);
          *(undefined4 *)(this + lVar14 + 0x3eb4) = uVar21;
          FUN_006fcf34(acStack_248,extraout_x1_35,"%s.assets.texture#numTilesV",&local_1c8);
          uVar21 = Properties::getInt((Properties *)aDStack_148,acStack_248,0);
          *(undefined4 *)(this + lVar14 + 0x3eb8) = uVar21;
          FUN_006fcf34(acStack_248,extraout_x1_36,"%s.assets.texture#tileUIndex",&local_1c8);
          uVar21 = Properties::getInt((Properties *)aDStack_148,acStack_248,0);
          *(undefined4 *)(this + lVar14 + 0x3eac) = uVar21;
          FUN_006fcf34(acStack_248,extraout_x1_37,"%s.assets.texture#tileVIndex",&local_1c8);
          uVar21 = Properties::getInt((Properties *)aDStack_148,acStack_248,0);
          *(undefined4 *)(this + lVar14 + 0x3eb0) = uVar21;
          FUN_006fcf34(acStack_248,extraout_x1_38,"%s.assets.texture#mirrorV",&local_1c8);
          bVar4 = Properties::getBoolDefault((Properties *)aDStack_148,acStack_248,false);
          this[lVar19 + 0x14] = (AnimalHusbandry)(bVar4 & 1);
          FUN_006fcf34(acStack_248,extraout_x1_39,"%s.locomotion#filename",&local_1c8);
                    /* try { // try from 006fc8f8 to 006fc90b has its CatchHandler @ 006fced8 */
          pcVar9 = (char *)DomXMLFile::getValue(aDStack_148,acStack_248,false);
          if (pcVar9 != (char *)0x0) {
            local_260 = (char *)0x0;
            local_258 = 0;
            local_250 = (void *)0x0;
            if (*pcVar9 == '$') {
                    /* try { // try from 006fc928 to 006fc95f has its CatchHandler @ 006fce8c */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_260);
            }
            else {
              PathUtil::buildAbsolutePath
                        ((basic_string *)&local_278,pcVar9,(basic_string *)&local_260);
            }
            AnimalLocomotionSystemSource::load((char *)(this + lVar14 + 0x138));
            if (((ulong)local_260 & 1) != 0) {
              operator_delete(local_250);
            }
            local_2cc = local_2cc + 1;
          }
                    /* try { // try from 006fc97c to 006fc99f has its CatchHandler @ 006fced8 */
          FUN_006fcf34(acStack_248);
          pcVar9 = (char *)DomXMLFile::getValue(aDStack_148,acStack_248,false);
          if (pcVar9 != (char *)0x0) {
            sVar8 = strlen(pcVar9);
            if (0xffffffffffffffef < sVar8) {
                    /* try { // try from 006fcd9c to 006fcda3 has its CatchHandler @ 006fce88 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (sVar8 < 0x17) {
              local_260 = (char *)CONCAT71(local_260._1_7_,(char)((int)sVar8 << 1));
              pvVar11 = pvVar16;
              if (sVar8 != 0) goto LAB_006fc9f8;
            }
            else {
              uVar18 = sVar8 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 006fc9e0 to 006fc9e7 has its CatchHandler @ 006fce6c */
              pvVar11 = operator_new(uVar18);
              local_260 = (char *)(uVar18 | 1);
              local_258 = sVar8;
              local_250 = pvVar11;
LAB_006fc9f8:
              memcpy(pvVar11,pcVar9,sVar8);
            }
            *(undefined *)((long)pvVar11 + sVar8) = 0;
                    /* try { // try from 006fca0c to 006fca17 has its CatchHandler @ 006fce80 */
            _Var5 = std::__ndk1::
                    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                    ::
                    find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                              ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                                *)&local_290,(basic_string *)&local_260);
            if (((ulong)local_260 & 1) != 0) {
              operator_delete(local_250);
            }
            if (&local_288 == (long **)(ulong)_Var5) {
              local_258 = local_2f8;
              *(int *)(this + lVar14 + 0x3ed0) = (int)local_2f8;
                    /* try { // try from 006fca5c to 006fca67 has its CatchHandler @ 006fce5c */
              local_260 = pcVar9;
              std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
              ::__emplace_unique_impl<std::__ndk1::pair<char_const*,unsigned_int>>
                        ((pair *)&local_290);
              local_2f8 = (ulong)((int)local_2f8 + 1);
            }
            else {
              *(undefined4 *)(this + lVar14 + 0x3ed0) = *(undefined4 *)((long **)(ulong)_Var5 + 7);
            }
          }
                    /* try { // try from 006fca70 to 006fca93 has its CatchHandler @ 006fced8 */
          FUN_006fcf34(acStack_248);
          pcVar9 = (char *)DomXMLFile::getValue(aDStack_148,acStack_248,false);
          if (pcVar9 != (char *)0x0) {
            sVar8 = strlen(pcVar9);
            if (0xffffffffffffffef < sVar8) {
                    /* try { // try from 006fcda4 to 006fcdab has its CatchHandler @ 006fce84 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (sVar8 < 0x17) {
              local_260 = (char *)CONCAT71(local_260._1_7_,(char)((int)sVar8 << 1));
              pvVar11 = pvVar16;
              if (sVar8 != 0) goto LAB_006fcaec;
            }
            else {
              uVar18 = sVar8 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 006fcad4 to 006fcadb has its CatchHandler @ 006fce68 */
              pvVar11 = operator_new(uVar18);
              local_260 = (char *)(uVar18 | 1);
              local_258 = sVar8;
              local_250 = pvVar11;
LAB_006fcaec:
              memcpy(pvVar11,pcVar9,sVar8);
            }
            *(undefined *)((long)pvVar11 + sVar8) = 0;
                    /* try { // try from 006fcb00 to 006fcb0b has its CatchHandler @ 006fce7c */
            _Var5 = std::__ndk1::
                    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                    ::
                    find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                              ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                                *)&local_290,(basic_string *)&local_260);
            if (((ulong)local_260 & 1) != 0) {
              operator_delete(local_250);
            }
            if (&local_288 == (long **)(ulong)_Var5) {
              local_258 = local_2f8;
              *(int *)(this + lVar14 + 0x3ecc) = (int)local_2f8;
                    /* try { // try from 006fcb50 to 006fcb5b has its CatchHandler @ 006fce58 */
              local_260 = pcVar9;
              std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
              ::__emplace_unique_impl<std::__ndk1::pair<char_const*,unsigned_int>>
                        ((pair *)&local_290);
              local_2f8 = (ulong)((int)local_2f8 + 1);
            }
            else {
              *(undefined4 *)(this + lVar14 + 0x3ecc) = *(undefined4 *)((long **)(ulong)_Var5 + 7);
            }
          }
                    /* try { // try from 006fcb64 to 006fcbf7 has its CatchHandler @ 006fced8 */
          FUN_006fcf34(acStack_248);
          uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,10000.0);
          *(undefined4 *)(this + lVar14 + 0x3ec0) = uVar21;
          FUN_006fcf34(acStack_248,extraout_x1_40,"%s.audio#yellMaxInterval",&local_1c8);
          uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,20000.0);
          *(undefined4 *)(this + lVar14 + 0x3ec4) = uVar21;
          FUN_006fcf34(acStack_248,extraout_x1_41,"%s.audio#yellTimerCrowdScale",&local_1c8);
          uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_248,0.1);
          *(undefined4 *)(this + lVar14 + 0x3ec8) = uVar21;
          if ((local_2c0 & 1) != 0) {
            operator_delete(local_2b0);
          }
          if ((local_2a8 & 1) != 0) {
            operator_delete(local_298);
          }
        }
      }
      uVar7 = uVar7 + 1;
      lVar14 = lVar14 + 0x3ea0;
      lVar17 = lVar17 + 0x3ea0;
      lVar20 = lVar20 + 0x3ea0;
      lVar19 = lVar19 + 0x3ea0;
    } while (uVar7 < *(uint *)(this + 0x54));
  }
                    /* try { // try from 006fcc30 to 006fcc8b has its CatchHandler @ 006fcec0 */
  AnimalSoundSource::loadXML
            ((AnimalSoundSource *)(this + 0x1fc98),aDStack_148,"animalHusbandry.sound");
  this_00 = (AnimalSoundSystem *)(this + 0x1fcb0);
  AnimalSoundSystem::init
            (this_00,(AnimalSoundSource *)(this + 0x1fc98),*(TransformGroup **)(this + 0x48),
             *(uint *)(this + 0x1fd18),(bool)this[0x52]);
  AnimalSoundSystem::registerSoundId(this_00,0,"walk");
  AnimalSoundSystem::registerSoundId(this_00,1,"run");
  *(AnimalSoundSystem **)(this + 0x1f768) = this_00;
  pplVar15 = local_290;
  while (pplVar15 != &local_288) {
    plVar13 = (long *)((long)pplVar15 + 0x21);
    if ((*(byte *)(pplVar15 + 4) & 1) != 0) {
      plVar13 = pplVar15[6];
    }
                    /* try { // try from 006fcd4c to 006fcd53 has its CatchHandler @ 006fced0 */
    AnimalSoundSystem::registerSoundId(this_00,*(uint *)(pplVar15 + 7),(char *)plVar13);
    pplVar12 = (long **)pplVar15[1];
    if ((long **)pplVar15[1] == (long **)0x0) {
      pplVar12 = pplVar15 + 2;
      bVar3 = (long **)**pplVar12 != pplVar15;
      pplVar15 = (long **)*pplVar12;
      if (bVar3) {
        do {
          plVar13 = *pplVar12;
          pplVar12 = (long **)(plVar13 + 2);
          pplVar15 = (long **)*pplVar12;
        } while (*pplVar15 != plVar13);
      }
    }
    else {
      do {
        pplVar15 = pplVar12;
        pplVar12 = (long **)*pplVar15;
      } while ((long **)*pplVar15 != (long **)0x0);
    }
  }
  *(int *)(this + 0x54) = local_2cc;
  this[0x50] = (AnimalHusbandry)(local_2cc != 0);
                    /* try { // try from 006fccb0 to 006fccbf has its CatchHandler @ 006fce70 */
  this_01 = (UpdateManager *)UpdateManager::getInstance();
  UpdateManager::addUpdateable(this_01,(Updateable *)(this + 0x20),false);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
             *)&local_290,(__tree_node *)local_288);
  if ((local_278 & 1) != 0) {
    operator_delete(local_268);
  }
LAB_006fcce0:
  AVar1 = this[0x50];
  DomXMLFile::~DomXMLFile(aDStack_148);
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return AVar1 != (AnimalHusbandry)0x0;
}


