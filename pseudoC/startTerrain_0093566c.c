// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startTerrain
// Entry Point: 0093566c
// Size: 1228 bytes
// Signature: undefined __cdecl startTerrain(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startTerrain(void*, char const*, char const**) */

void I3DSceneGraphFactory::startTerrain(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  TransformGroup *this;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint local_7c;
  ulong local_78;
  undefined8 uStack_70;
  char *local_68;
  char **local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_60 = param_3;
  pcVar4 = (char *)ExpatUtil::getAttr("name",param_3);
  local_78 = 0;
  uStack_70 = 0;
  pcVar5 = "Terrain";
  if (pcVar4 != (char *)0x0) {
    pcVar5 = pcVar4;
  }
  local_68 = (char *)0x0;
                    /* try { // try from 009356c8 to 009356db has its CatchHandler @ 00935b68 */
  StringUtil::convertAsciiToUtf8(pcVar5,(basic_string *)&local_78,false);
  StringUtil::decodeHtmlSpecialCharactersInPlace((basic_string *)&local_78);
                    /* try { // try from 009356dc to 009356e3 has its CatchHandler @ 00935b64 */
  this = (TransformGroup *)operator_new(0x158);
  pcVar4 = (char *)((ulong)&local_78 | 1);
  pcVar5 = pcVar4;
  if ((local_78 & 1) != 0) {
    pcVar5 = local_68;
  }
                    /* try { // try from 00935700 to 00935703 has its CatchHandler @ 00935b54 */
  TransformGroup::TransformGroup(this,pcVar5);
                    /* try { // try from 00935704 to 00935723 has its CatchHandler @ 00935b64 */
  readTransformGroup((I3DReader *)&local_60,(I3DLoad *)param_1,this,true,false,false,false);
  lVar8 = *(long *)((long)param_1 + 0x280);
  *(TransformGroup **)(lVar8 + 0x1e0) = this;
                    /* try { // try from 00935730 to 00935783 has its CatchHandler @ 00935b74 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (lVar8 + 0x208),(basic_string *)&local_78);
  TerrainTransformGroupDesc::setToDefault();
  lVar7 = *(long *)((long)param_1 + 0x280);
  *(undefined4 *)(lVar7 + 0x220) = 0;
  ExpatUtil::getUIntAttr("nodeId",(uint *)(lVar7 + 0x220),param_3);
  PathUtil::getFilename
            ((basic_string *)((long)param_1 + 0x210),(basic_string *)(lVar8 + 0x148),true);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)(basic_string *)(lVar8 + 0x148));
                    /* try { // try from 00935784 to 009357bb has its CatchHandler @ 00935b70 */
  lVar7 = ExpatUtil::getAttr("cacheFilenamesPrefix",param_3);
  if (lVar7 == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (lVar8 + 0x130),(basic_string *)&local_78);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(lVar8 + 0x130));
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (lVar8 + 0x160),(basic_string *)((long)param_1 + 0x1f8));
                    /* try { // try from 009357bc to 009357ef has its CatchHandler @ 00935b6c */
  pcVar5 = (char *)ExpatUtil::getAttr("heightMapId",param_3);
  if (pcVar5 != (char *)0x0) {
    uVar2 = atoi(pcVar5);
    lVar7 = I3DLoad::findFilePath((I3DLoad *)param_1,uVar2);
    if (lVar7 != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)(lVar8 + 0x68));
    }
  }
                    /* try { // try from 009357f0 to 00935803 has its CatchHandler @ 00935b7c */
  uVar6 = ExpatUtil::getUIntAttr("materialId",&local_7c,param_3);
  if ((uVar6 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00935ab4 to 00935abf has its CatchHandler @ 00935b3c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    if ((local_78 & 1) != 0) {
      pcVar4 = local_68;
    }
                    /* try { // try from 00935840 to 00935853 has its CatchHandler @ 00935b7c */
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Material id not specified for terrain \'%s\'",pcVar4);
  }
  else {
                    /* try { // try from 0093580c to 00935813 has its CatchHandler @ 00935b50 */
    lVar7 = I3DLoad::findMaterial((I3DLoad *)param_1,local_7c);
    if (lVar7 == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 00935afc to 00935b07 has its CatchHandler @ 00935b38 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      if ((local_78 & 1) != 0) {
        pcVar4 = local_68;
      }
                    /* try { // try from 0093587c to 0093588f has its CatchHandler @ 00935b50 */
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: Material with id %u not found in terrain \'%s\'.\n",
                        (ulong)local_7c,pcVar4);
    }
    else {
      *(long *)(lVar8 + 0x128) = lVar7;
    }
  }
                    /* try { // try from 00935894 to 0093595f has its CatchHandler @ 00935b7c */
  ExpatUtil::getUIntAttr("patchSize",(uint *)(lVar8 + 0x118),param_3);
  ExpatUtil::getFloatAttr("maxLODDistance",(float *)(lVar8 + 0x11c),param_3);
  ExpatUtil::getFloatAttr("heightScale",(float *)(lVar8 + 0x84),param_3);
  ExpatUtil::getFloatAttr("unitsPerPixel",(float *)(lVar8 + 0x80),param_3);
  ExpatUtil::getFloatAttr("lodBlendStart",(float *)(lVar8 + 0x88),param_3);
  ExpatUtil::getFloatAttr("lodBlendEnd",(float *)(lVar8 + 0x8c),param_3);
  *(undefined8 *)(lVar8 + 0x90) = *(undefined8 *)(lVar8 + 0x88);
  ExpatUtil::getFloatAttr("lodBlendStartDynamic",(float *)(undefined8 *)(lVar8 + 0x90),param_3);
  ExpatUtil::getFloatAttr("lodBlendEndDynamic",(float *)(lVar8 + 0x94),param_3);
  ExpatUtil::getFloatAttr("detailLodBlendDelta",(float *)(lVar8 + 0x98),param_3);
  ExpatUtil::getBoolAttr("castShadowMap",(bool *)(lVar8 + 0x178),param_3);
                    /* try { // try from 00935960 to 00935a67 has its CatchHandler @ 00935b78 */
  pcVar5 = (char *)ExpatUtil::getAttr("patchVisibility",param_3);
  if (pcVar5 != (char *)0x0) {
    iVar3 = strcmp(pcVar5,"true");
    *(bool *)(lVar8 + 0x124) = iVar3 == 0;
  }
  ExpatUtil::getUIntAttr("occLevel",(uint *)(lVar8 + 0x188),param_3);
  ExpatUtil::getFloatAttr("occDistanceWeight",(float *)(lVar8 + 0x18c),param_3);
  uVar6 = ExpatUtil::getUIntAttr("occNumLODs",(uint *)(lVar8 + 0x17c),param_3);
  if ((uVar6 & 1) == 0) {
    *(undefined4 *)(lVar8 + 0x17c) = 0;
    *(undefined4 *)(lVar8 + 0x184) = *(undefined4 *)(lVar8 + 0x118);
    ExpatUtil::getUIntAttr("occFaceCount",(uint *)(lVar8 + 0x198),param_3);
    ExpatUtil::getFloatAttr("occMaxHausdorffDistance",(float *)(lVar8 + 0x19c),param_3);
    ExpatUtil::getFloatAttr("occMaxHausdorffDistanceExtra",(float *)(lVar8 + 0x1a0),param_3);
    ExpatUtil::getFloatAttr("occFaceoccMinHorizontalDistanceCount",(float *)(lVar8 + 0x1a4),param_3)
    ;
  }
  else {
    ExpatUtil::getFloatAttr("occMaxLODDistance",(float *)(lVar8 + 0x180),param_3);
    ExpatUtil::getUIntAttr("occPatchSize",(uint *)(lVar8 + 0x184),param_3);
    ExpatUtil::getUIntAttr("occMaxAdjacentFaces",(uint *)(lVar8 + 400),param_3);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


