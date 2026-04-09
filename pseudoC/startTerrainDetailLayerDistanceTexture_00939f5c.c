// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startTerrainDetailLayerDistanceTexture
// Entry Point: 00939f5c
// Size: 588 bytes
// Signature: undefined __cdecl startTerrainDetailLayerDistanceTexture(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startTerrainDetailLayerDistanceTexture(void*, char const*, char const**) */

void I3DSceneGraphFactory::startTerrainDetailLayerDistanceTexture
               (void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  basic_string *pbVar7;
  basic_string local_88;
  uint local_84;
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  ulong uStack_68;
  undefined8 uStack_60;
  void *local_58;
  basic_string local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = ExpatUtil::getAttr("match",param_3);
  if (lVar3 == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0093a124 to 0093a12f has its CatchHandler @ 0093a1ac */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar4 = "Warning: TerrainDetailLayer DistanceTexture lacks \'match\' attribute.\n";
  }
  else {
    local_84 = 0;
    ExpatUtil::getUIntAttr("fileId",&local_84,param_3);
    lVar3 = I3DLoad::findFilePath((I3DLoad *)param_1,local_84);
    if (lVar3 != 0) {
      local_88 = 0;
      ExpatUtil::getUIntAttr("layer",&local_88,param_3);
      uStack_68 = 0;
      local_70 = (void *)0x0;
      local_58 = (void *)0x0;
      uStack_60 = 0;
      uStack_78 = 0;
      local_80 = 0;
                    /* try { // try from 00939ff0 to 0093a00f has its CatchHandler @ 0093a1ec */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_80);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&uStack_68);
      uVar5 = (ulong)*(uint *)(*(long *)((long)param_1 + 0x280) + 0x200);
      lVar3 = *(long *)(*(long *)((long)param_1 + 0x280) + 0x1e8);
      local_50 = local_88;
      lVar6 = lVar3 + uVar5 * 0x2d8;
      pbVar7 = *(basic_string **)(lVar6 + 0x2b0);
      if (pbVar7 == *(basic_string **)(lVar6 + 0x2b8)) {
                    /* try { // try from 0093a0c4 to 0093a0cb has its CatchHandler @ 0093a1ec */
        std::__ndk1::
        vector<TerrainLayerTransformGroupDesc::DistanceTextureDesc,std::__ndk1::allocator<TerrainLayerTransformGroupDesc::DistanceTextureDesc>>
        ::__push_back_slow_path<TerrainLayerTransformGroupDesc::DistanceTextureDesc_const&>
                  ((vector<TerrainLayerTransformGroupDesc::DistanceTextureDesc,std::__ndk1::allocator<TerrainLayerTransformGroupDesc::DistanceTextureDesc>>
                    *)(lVar3 + uVar5 * 0x2d8 + 0x2a8),(DistanceTextureDesc *)&local_80);
      }
      else {
                    /* try { // try from 0093a044 to 0093a04f has its CatchHandler @ 0093a1e0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar7);
                    /* try { // try from 0093a054 to 0093a05b has its CatchHandler @ 0093a1c4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar7 + 6);
        pbVar7[0xc] = local_50;
        *(basic_string **)(lVar6 + 0x2b0) = pbVar7 + 0xe;
      }
      if ((uStack_68 & 1) != 0) {
        operator_delete(local_58);
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      goto LAB_0093a0ec;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0093a16c to 0093a177 has its CatchHandler @ 0093a1a8 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar4 = "Warning: TerrainDetailLayer DistanceTexture has bad fileId.\n";
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,pcVar4);
LAB_0093a0ec:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


