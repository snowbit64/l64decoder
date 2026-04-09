// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startTerrainDetailLayerGroup
// Entry Point: 00939a9c
// Size: 764 bytes
// Signature: undefined __cdecl startTerrainDetailLayerGroup(void * param_1, char * param_2, char * * param_3)


/* WARNING: Removing unreachable block (ram,0x00939c88) */
/* I3DSceneGraphFactory::startTerrainDetailLayerGroup(void*, char const*, char const**) */

void I3DSceneGraphFactory::startTerrainDetailLayerGroup(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *__s;
  size_t __n;
  ulong *puVar6;
  long lVar7;
  void *__dest;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
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
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __s = (char *)ExpatUtil::getAttr("name",param_3);
  local_6c = 0;
  ExpatUtil::getUIntAttr("firstChannel",&local_6c,param_3);
  local_70 = 0;
  ExpatUtil::getUIntAttr("numChannels",&local_70,param_3);
  local_74 = 0;
  ExpatUtil::getUIntAttr("maxDefaultFill",&local_74,param_3);
  uVar4 = local_6c;
  uVar3 = local_70;
  uVar2 = local_74;
  if ((__s == (char *)0x0) || (local_70 == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 00939d5c to 00939d67 has its CatchHandler @ 00939d98 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: TerrainDetailLayer group definition error.\n");
    goto LAB_00939d14;
  }
  uVar9 = (ulong)*(uint *)(*(long *)((long)param_1 + 0x280) + 0x200);
  lVar10 = *(long *)(*(long *)((long)param_1 + 0x280) + 0x1e8);
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_b8 | 1);
    local_b8 = CONCAT71(local_b8._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00939bf8;
  }
  else {
    uVar8 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar8);
    local_b8 = uVar8 | 1;
    sStack_b0 = __n;
    local_a8 = __dest;
LAB_00939bf8:
    memcpy(__dest,__s,__n);
  }
  local_90 = &local_88;
  *(undefined *)((long)__dest + __n) = 0;
  lVar7 = lVar10 + uVar9 * 0x2d8;
  local_a0 = uVar4;
  uStack_9c = uVar3;
  local_98 = uVar2;
  local_88 = (__tree_node *)0x0;
  local_80 = 0;
  puVar6 = *(ulong **)(lVar7 + 0x2c8);
  if (puVar6 < *(ulong **)(lVar7 + 0x2d0)) {
    puVar6[2] = (ulong)local_a8;
    puVar6[1] = sStack_b0;
    *puVar6 = local_b8;
    sStack_b0 = 0;
    local_a8 = (void *)0x0;
    local_b8 = 0;
    puVar6[3] = CONCAT44(uVar3,uVar4);
    *(uint *)(puVar6 + 4) = uVar2;
    puVar6[5] = (ulong)local_90;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[5] = (ulong)(puVar6 + 6);
    local_80 = 0;
    local_88 = (__tree_node *)0x0;
    *(ulong **)(lVar7 + 0x2c8) = puVar6 + 8;
  }
  else {
                    /* try { // try from 00939ca8 to 00939caf has its CatchHandler @ 00939db0 */
    std::__ndk1::
    vector<TerrainTransformGroupDesc::LayerGroupDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::LayerGroupDesc>>
    ::__push_back_slow_path<TerrainTransformGroupDesc::LayerGroupDesc>
              ((vector<TerrainTransformGroupDesc::LayerGroupDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::LayerGroupDesc>>
                *)(lVar10 + uVar9 * 0x2d8 + 0x2c0),(LayerGroupDesc *)&local_b8);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
             *)&local_90,local_88);
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  lVar10 = *(long *)((long)param_1 + 0x280);
  lVar7 = *(long *)(lVar10 + 0x1e8) + (ulong)*(uint *)(lVar10 + 0x200) * 0x2d8;
  *(int *)(lVar10 + 0x204) =
       (int)((ulong)(*(long *)(lVar7 + 0x2c8) - *(long *)(lVar7 + 0x2c0)) >> 6) + -1;
LAB_00939d14:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


