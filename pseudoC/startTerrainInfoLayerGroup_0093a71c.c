// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startTerrainInfoLayerGroup
// Entry Point: 0093a71c
// Size: 752 bytes
// Signature: undefined __cdecl startTerrainInfoLayerGroup(void * param_1, char * param_2, char * * param_3)


/* WARNING: Removing unreachable block (ram,0x0093a900) */
/* I3DSceneGraphFactory::startTerrainInfoLayerGroup(void*, char const*, char const**) */

void I3DSceneGraphFactory::startTerrainInfoLayerGroup(void *param_1,char *param_2,char **param_3)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *__s;
  size_t __n;
  long lVar7;
  ulong **ppuVar8;
  void *__dest;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_b8;
  size_t sStack_b0;
  void *local_a8;
  uint local_a0;
  uint uStack_9c;
  uint local_98;
  __tree_node **local_90;
  __tree_node *local_88;
  undefined8 local_80;
  uint local_74;
  uint local_70;
  uint local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  __s = (char *)ExpatUtil::getAttr("name",param_3);
  local_6c = 0;
  ExpatUtil::getUIntAttr("firstChannel",&local_6c,param_3);
  local_70 = 0;
  ExpatUtil::getUIntAttr("numChannels",&local_70,param_3);
  local_74 = 0;
  ExpatUtil::getUIntAttr("maxDefaultFill",&local_74,param_3);
  uVar5 = local_6c;
  uVar4 = local_70;
  uVar3 = local_74;
  if ((__s == (char *)0x0) || (local_70 == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 0093a9d0 to 0093a9db has its CatchHandler @ 0093aa0c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: TerrainInfoLayer group definition error.\n");
    goto LAB_0093a988;
  }
  uVar10 = (ulong)*(uint *)(*(long *)((long)param_1 + 0x280) + 0x1d8);
  lVar11 = *(long *)(*(long *)((long)param_1 + 0x280) + 0xe8);
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_b8 | 1);
    local_b8 = CONCAT71(local_b8._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_0093a878;
  }
  else {
    uVar9 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar9);
    local_b8 = uVar9 | 1;
    sStack_b0 = __n;
    local_a8 = __dest;
LAB_0093a878:
    memcpy(__dest,__s,__n);
  }
  local_90 = &local_88;
  *(undefined *)((long)__dest + __n) = 0;
  lVar7 = lVar11 + uVar10 * 0x50;
  local_a0 = uVar5;
  uStack_9c = uVar4;
  local_98 = uVar3;
  local_88 = (__tree_node *)0x0;
  local_80 = 0;
  ppuVar8 = (ulong **)(lVar7 + 0x40);
  puVar1 = *ppuVar8;
  if (puVar1 < *(ulong **)(lVar7 + 0x48)) {
    puVar1[2] = (ulong)local_a8;
    puVar1[1] = sStack_b0;
    *puVar1 = local_b8;
    sStack_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    puVar1[3] = CONCAT44(uVar4,uVar5);
    *(uint *)(puVar1 + 4) = uVar3;
    puVar1[5] = (ulong)local_90;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[5] = (ulong)(puVar1 + 6);
    local_80 = 0;
    local_88 = (__tree_node *)0x0;
    *ppuVar8 = puVar1 + 8;
  }
  else {
                    /* try { // try from 0093a920 to 0093a927 has its CatchHandler @ 0093aa24 */
    std::__ndk1::
    vector<TerrainTransformGroupDesc::LayerGroupDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::LayerGroupDesc>>
    ::__push_back_slow_path<TerrainTransformGroupDesc::LayerGroupDesc>
              ((vector<TerrainTransformGroupDesc::LayerGroupDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::LayerGroupDesc>>
                *)(lVar11 + uVar10 * 0x50 + 0x38),(LayerGroupDesc *)&local_b8);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
             *)&local_90,local_88);
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  lVar11 = *(long *)((long)param_1 + 0x280);
  lVar7 = *(long *)(lVar11 + 0xe8) + (ulong)*(uint *)(lVar11 + 0x1d8) * 0x50;
  *(int *)(lVar11 + 0x1dc) =
       (int)((ulong)(*(long *)(lVar7 + 0x40) - *(long *)(lVar7 + 0x38)) >> 6) + -1;
LAB_0093a988:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


