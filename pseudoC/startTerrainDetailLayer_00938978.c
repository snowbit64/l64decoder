// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startTerrainDetailLayer
// Entry Point: 00938978
// Size: 2072 bytes
// Signature: undefined __cdecl startTerrainDetailLayer(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startTerrainDetailLayer(void*, char const*, char const**) */

void I3DSceneGraphFactory::startTerrainDetailLayer(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  byte *pbVar2;
  byte **ppbVar3;
  long lVar4;
  byte *pbVar5;
  void *pvVar6;
  void *pvVar7;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var8;
  void *pvVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  undefined8 uVar13;
  long lVar14;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var15;
  byte *pbVar16;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var17;
  ulong uVar18;
  char **ppcVar19;
  undefined *puVar20;
  ulong local_928;
  undefined8 uStack_920;
  void *local_918;
  char *local_910;
  char **local_908;
  undefined8 local_900;
  uint local_8f8;
  void *local_8f0;
  void *local_668;
  void *local_660;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *local_650;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *local_648;
  undefined8 local_638;
  byte *pbStack_630;
  byte *local_628;
  byte *local_620;
  byte *pbStack_618;
  byte *local_610;
  byte *pbStack_608;
  byte *local_600;
  undefined auStack_5f8 [616];
  byte *local_390;
  byte *pbStack_388;
  byte *local_380;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *local_378;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Stack_370;
  byte *local_368;
  ulong local_360;
  undefined8 uStack_358;
  char *local_350;
  ulong uStack_348;
  undefined8 uStack_340;
  void *local_338;
  undefined8 local_328;
  undefined4 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined local_2f0;
  undefined local_1f1;
  undefined local_1f0;
  undefined8 local_f0;
  ulong auStack_e8 [4];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined uStack_b8;
  undefined7 local_b7;
  undefined uStack_b0;
  undefined8 uStack_af;
  undefined8 local_a4;
  float local_9c;
  void *local_98;
  void *pvStack_90;
  undefined8 local_88;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Stack_80;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_328 = 0xff00ff42800000;
  uStack_70 = 0;
  local_78 = (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
              *)0x0;
  p_Stack_80 = (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                *)0x0;
  local_88 = 0;
  local_308 = 0xffffffff;
  local_310 = 0x100000000;
  local_320 = 1;
  local_2f8 = 0x42480000;
  pvStack_90 = (void *)0x0;
  local_98 = (void *)0x0;
  local_318 = 0;
  local_300 = 0;
  local_2f0 = 0;
  local_1f0 = 0;
  local_a4 = 0;
  local_9c = 0.0;
  auStack_e8[0] = 0;
  local_f0 = 0;
  auStack_e8[2] = 0;
  auStack_e8[1] = 0;
  uStack_c8 = 0;
  auStack_e8[3] = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_af = 0;
  local_b7 = 0;
  uStack_b0 = 0;
  uStack_348 = 0;
  local_350 = (char *)0x0;
  local_338 = (void *)0x0;
  uStack_340 = 0;
  uStack_358 = 0;
  local_360 = 0;
                    /* try { // try from 00938a40 to 00938a57 has its CatchHandler @ 009391f0 */
  local_908 = param_3;
  uVar10 = I3DReader::readStringListAttribute
                     ((I3DReader *)&local_908,"densityMapShaderNames",(basic_string *)&local_360,2);
  if (uVar10 != 0) {
    uVar18 = (ulong)uVar10;
    ppcVar19 = &local_350;
    puVar20 = &local_1f1;
    do {
      pcVar12 = (char *)((long)ppcVar19 + -0xf);
      if ((*(byte *)(ppcVar19 + -2) & 1) != 0) {
        pcVar12 = *ppcVar19;
      }
      strncpy(puVar20 + -0xff,pcVar12,0x100);
      *puVar20 = 0;
      ppcVar19 = ppcVar19 + 3;
      puVar20 = puVar20 + 0x100;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
                    /* try { // try from 00938aa8 to 00938ac7 has its CatchHandler @ 009391fc */
  pcVar12 = (char *)ExpatUtil::getAttr("materialId",local_908);
  if (pcVar12 == (char *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar10 = StringUtil::strtouint(pcVar12);
    uVar13 = I3DLoad::findMaterial((I3DLoad *)param_1,uVar10);
  }
                    /* try { // try from 00938ad4 to 00938cc7 has its CatchHandler @ 00939200 */
  local_910 = (char *)ExpatUtil::getAttr("name",param_3);
  if ((local_910 == (char *)0x0) ||
     (uVar18 = readCommonTerrainDetailLayerAttributes
                         ((I3DReader *)&local_908,(I3DLoad *)param_1,
                          (TerrainDetailTransformGroupDesc *)&local_328,(DensityMap *)0x0),
     (uVar18 & 1) == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar11 != 0))
    {
                    /* try { // try from 00939154 to 0093915f has its CatchHandler @ 00939190 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar12 = "Unknown";
    if (local_910 != (char *)0x0) {
      pcVar12 = local_910;
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Failed to load terrain detail layer \'%s\'.\n",pcVar12);
  }
  else {
    local_638 = (byte *)CONCAT44(local_638._4_4_,0x42a00000);
    local_300 = uVar13;
    pcVar12 = (char *)ExpatUtil::getAttr("viewDistance",local_908);
    if (pcVar12 == (char *)0x0) {
      local_2f8 = 0x42a00000;
    }
    else {
      StringUtil::atof(pcVar12,(float *)&local_638);
      local_2f8 = (undefined4)local_638;
    }
    local_638 = (byte *)CONCAT44(local_638._4_4_,0x40a00000);
    pcVar12 = (char *)ExpatUtil::getAttr("blendOutDistance",local_908);
    if (pcVar12 == (char *)0x0) {
      local_2f4 = 0x40a00000;
    }
    else {
      StringUtil::atof(pcVar12,(float *)&local_638);
      local_2f4 = (undefined4)local_638;
    }
    local_928 = 0;
    uStack_920 = 0;
    local_918 = (void *)0x0;
                    /* try { // try from 00938ce4 to 00938cff has its CatchHandler @ 009391f4 */
    lVar14 = ExpatUtil::getAttr("combinedValuesChannels",local_908);
    if (lVar14 != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_928);
      pbStack_630 = (byte *)0x0;
      local_638 = (byte *)0x0;
      local_628 = (byte *)0x0;
      local_900 = CONCAT53(local_900._3_5_,0x3b02);
                    /* try { // try from 00938d18 to 00938d2f has its CatchHandler @ 009391bc */
      StringUtil::split((basic_string *)&local_928,(basic_string *)&local_900,(vector *)&local_638,
                        true,false);
      if ((local_900 & 1) != 0) {
        operator_delete(local_8f0);
      }
      uVar18 = ((long)pbStack_630 - (long)local_638 >> 3) * -0x5555555555555555;
      uStack_af = CONCAT17(1,(undefined7)uStack_af);
      if ((int)uVar18 != 0) {
        lVar14 = 0;
        do {
          pbVar2 = local_638 + lVar14;
          local_8f8 = 0;
          local_900 = 0;
          pbVar16 = *(byte **)(pbVar2 + 0x10);
          if ((*pbVar2 & 1) == 0) {
            pbVar16 = pbVar2 + 1;
          }
                    /* try { // try from 00938dac to 00938dbb has its CatchHandler @ 00939210 */
          uVar10 = StringUtil::splitIntoUInts((char *)pbVar16,(uint *)&local_900,3,' ');
          if ((1 < uVar10) && (local_8f8 < 2)) {
            lVar1 = (ulong)local_8f8 * 4;
            uVar10 = *(uint *)((long)&local_f0 + lVar1);
            if (uVar10 < 4) {
              auStack_e8[(ulong)local_8f8 * 4 + (ulong)uVar10] = local_900;
              *(uint *)((long)&local_f0 + lVar1) = uVar10 + 1;
            }
          }
          lVar14 = lVar14 + 0x18;
        } while (((uVar18 & 0xffffffff) + (uVar18 & 0xffffffff) * 2) * 8 - lVar14 != 0);
      }
      pbVar2 = local_638;
      pbVar16 = pbStack_630;
      if (local_638 != (byte *)0x0) {
        while (pbVar5 = pbVar16, pbVar5 != pbVar2) {
          pbVar16 = pbVar5 + -0x18;
          if ((*pbVar16 & 1) != 0) {
            operator_delete(*(void **)(pbVar5 + -8));
          }
        }
        pbStack_630 = pbVar2;
        operator_delete(local_638);
      }
    }
                    /* try { // try from 00938e4c to 00938e87 has its CatchHandler @ 009391f4 */
    ExpatUtil::getUIntAttr("heightFirstChannel",(uint *)&local_a4,param_3);
    ExpatUtil::getUIntAttr("heightNumChannels",(uint *)((long)&local_a4 + 4),param_3);
    ExpatUtil::getFloatAttr("maxHeight",&local_9c,param_3);
    lVar14 = *(long *)((long)param_1 + 0x280);
                    /* try { // try from 00938e8c to 00938e9b has its CatchHandler @ 009391e8 */
    std::__ndk1::pair<char_const*,TerrainLayerTransformGroupDesc>::
    pair<char_const*&,TerrainLayerTransformGroupDesc&,false>
              ((pair<char_const*,TerrainLayerTransformGroupDesc> *)&local_900,&local_910,
               (TerrainLayerTransformGroupDesc *)&local_328);
                    /* try { // try from 00938e9c to 00938ea7 has its CatchHandler @ 009391d4 */
    std::__ndk1::
    pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>
    ::pair<char_const*,TerrainLayerTransformGroupDesc,false>
              ((pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>
                *)&local_638,(pair *)&local_900);
    ppbVar3 = *(byte ***)(lVar14 + 0x1f0);
    if (ppbVar3 < *(byte ***)(lVar14 + 0x1f8)) {
      ppbVar3[2] = local_628;
      ppbVar3[1] = pbStack_630;
      *ppbVar3 = local_638;
      local_628 = (byte *)0x0;
      pbStack_630 = (byte *)0x0;
      local_638 = (byte *)0x0;
      ppbVar3[4] = pbStack_618;
      ppbVar3[3] = local_620;
      ppbVar3[6] = pbStack_608;
      ppbVar3[5] = local_610;
      ppbVar3[7] = local_600;
      memcpy(ppbVar3 + 8,auStack_5f8,0x268);
      ppbVar3[0x56] = (byte *)0x0;
      ppbVar3[0x55] = (byte *)0x0;
      ppbVar3[0x58] = (byte *)0x0;
      ppbVar3[0x57] = (byte *)0x0;
      ppbVar3[0x5a] = (byte *)0x0;
      ppbVar3[0x59] = (byte *)0x0;
      ppbVar3[0x55] = local_390;
      ppbVar3[0x56] = pbStack_388;
      pbStack_388 = (byte *)0x0;
      local_390 = (byte *)0x0;
      ppbVar3[0x57] = local_380;
      local_380 = (byte *)0x0;
      ppbVar3[0x58] = (byte *)local_378;
      ppbVar3[0x59] = (byte *)p_Stack_370;
      p_Stack_370 = (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                     *)0x0;
      local_378 = (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                   *)0x0;
      ppbVar3[0x5a] = local_368;
      local_368 = (byte *)0x0;
      *(byte ***)(lVar14 + 0x1f0) = ppbVar3 + 0x5b;
    }
    else {
                    /* try { // try from 00938f74 to 00938f7b has its CatchHandler @ 009391ac */
      std::__ndk1::
      vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>>>
      ::
      __push_back_slow_path<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>>
                ((vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>>>
                  *)(lVar14 + 0x1e8),(pair *)&local_638);
      p_Var8 = local_378;
      if (local_378 !=
          (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
           *)0x0) {
        if (p_Stack_370 != local_378) {
          p_Var17 = p_Stack_370 + -0x18;
          do {
            std::__ndk1::
            __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
            ::destroy(p_Var17,*(__tree_node **)(p_Var17 + 8));
            if (((byte)p_Var17[-0x28] & 1) != 0) {
              operator_delete(*(void **)(p_Var17 + -0x18));
            }
            p_Var15 = p_Var17 + -0x28;
            p_Var17 = p_Var17 + -0x40;
          } while (p_Var15 != p_Var8);
        }
        p_Stack_370 = p_Var8;
        operator_delete(local_378);
      }
    }
    pbVar2 = local_390;
    pbVar16 = pbStack_388;
    if (local_390 != (byte *)0x0) {
      while (pbVar5 = pbVar16, pbVar5 != pbVar2) {
        if ((pbVar5[-0x20] & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -0x10));
        }
        pbVar16 = pbVar5 + -0x38;
        if ((pbVar5[-0x38] & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -0x28));
        }
      }
      pbStack_388 = pbVar2;
      operator_delete(local_390);
    }
    if (((ulong)local_638 & 1) != 0) {
      operator_delete(local_628);
    }
    p_Var8 = local_650;
    if (local_650 !=
        (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
         *)0x0) {
      if (local_648 != local_650) {
        p_Var17 = local_648 + -0x18;
        do {
          std::__ndk1::
          __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::destroy(p_Var17,*(__tree_node **)(p_Var17 + 8));
          if (((byte)p_Var17[-0x28] & 1) != 0) {
            operator_delete(*(void **)(p_Var17 + -0x18));
          }
          p_Var15 = p_Var17 + -0x28;
          p_Var17 = p_Var17 + -0x40;
        } while (p_Var15 != p_Var8);
      }
      local_648 = p_Var8;
      operator_delete(local_650);
    }
    pvVar6 = local_668;
    if (local_668 != (void *)0x0) {
      while (pvVar9 = local_660, pvVar9 != pvVar6) {
        if ((*(byte *)((long)pvVar9 + -0x20) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar9 + -0x10));
        }
        local_660 = (void *)((long)pvVar9 + -0x38);
        if ((*(byte *)((long)pvVar9 + -0x38) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar9 + -0x28));
        }
      }
      local_660 = pvVar6;
      operator_delete(local_668);
    }
    lVar14 = *(long *)((long)param_1 + 0x280);
    *(int *)(lVar14 + 0x200) =
         (int)((ulong)(*(long *)(lVar14 + 0x1f0) - *(long *)(lVar14 + 0x1e8)) >> 3) * -0x2d02d02d +
         -1;
    if ((local_928 & 1) != 0) {
      operator_delete(local_918);
    }
  }
  if ((uStack_348 & 1) != 0) {
    operator_delete(local_338);
  }
  p_Var8 = p_Stack_80;
  if ((local_360 & 1) != 0) {
    operator_delete(local_350);
    p_Var8 = p_Stack_80;
  }
  pvVar6 = local_98;
  p_Stack_80 = p_Var8;
  if (p_Var8 != (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                 *)0x0) {
    if (local_78 != p_Var8) {
      p_Var17 = local_78 + -0x18;
      do {
        std::__ndk1::
        __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
        ::destroy(p_Var17,*(__tree_node **)(p_Var17 + 8));
        if (((byte)p_Var17[-0x28] & 1) != 0) {
          operator_delete(*(void **)(p_Var17 + -0x18));
        }
        p_Var15 = p_Var17 + -0x28;
        p_Var17 = p_Var17 + -0x40;
      } while (p_Var15 != p_Var8);
    }
    local_78 = p_Var8;
    operator_delete(p_Stack_80);
    pvVar6 = local_98;
  }
  local_98 = pvVar6;
  pvVar9 = pvStack_90;
  if (pvVar6 != (void *)0x0) {
    while (pvVar7 = pvVar9, pvVar7 != pvVar6) {
      if ((*(byte *)((long)pvVar7 + -0x20) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar7 + -0x10));
      }
      pvVar9 = (void *)((long)pvVar7 + -0x38);
      if ((*(byte *)((long)pvVar7 + -0x38) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar7 + -0x28));
      }
    }
    pvStack_90 = pvVar6;
    operator_delete(local_98);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


