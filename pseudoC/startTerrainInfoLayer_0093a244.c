// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startTerrainInfoLayer
// Entry Point: 0093a244
// Size: 676 bytes
// Signature: undefined __cdecl startTerrainInfoLayer(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startTerrainInfoLayer(void*, char const*, char const**) */

void I3DSceneGraphFactory::startTerrainInfoLayer(void *param_1,char *param_2,char **param_3)

{
  ulong *puVar1;
  long lVar2;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *__nptr;
  char *pcVar7;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var8;
  long lVar9;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *this;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  undefined4 local_70;
  undefined local_6c;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *local_68;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *local_60;
  ulong local_58;
  bool local_50 [4];
  uint local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pcVar6 = (char *)ExpatUtil::getAttr("name",param_3);
  __nptr = (char *)ExpatUtil::getAttr("fileId",param_3);
  if (__nptr != (char *)0x0) {
    uVar4 = atoi(__nptr);
    pcVar7 = (char *)I3DLoad::findFilePath((I3DLoad *)param_1,uVar4);
    if ((pcVar6 != (char *)0x0) && (pcVar7 != (char *)0x0)) {
      local_4c = 1;
      ExpatUtil::getUIntAttr("numChannels",&local_4c,param_3);
      local_50[0] = false;
      ExpatUtil::getBoolAttr("runtime",local_50,param_3);
      lVar9 = *(long *)((long)param_1 + 0x280);
      TerrainTransformGroupDesc::InfoLayerDesc::InfoLayerDesc
                ((InfoLayerDesc *)&local_a0,pcVar6,pcVar7,local_4c,local_50[0]);
      puVar1 = *(ulong **)(lVar9 + 0xf0);
      if (puVar1 < *(ulong **)(lVar9 + 0xf8)) {
        puVar1[7] = 0;
        puVar1[8] = 0;
        puVar1[9] = 0;
        puVar1[2] = (ulong)local_90;
        puVar1[1] = uStack_98;
        *puVar1 = local_a0;
        local_a0 = 0;
        uStack_98 = 0;
        puVar1[4] = uStack_80;
        puVar1[3] = local_88;
        puVar1[5] = (ulong)local_78;
        local_90 = (void *)0x0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = (void *)0x0;
        *(undefined *)((long)puVar1 + 0x34) = local_6c;
        *(undefined4 *)(puVar1 + 6) = local_70;
        puVar1[7] = (ulong)local_68;
        puVar1[8] = (ulong)local_60;
        local_68 = (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                    *)0x0;
        local_60 = (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                    *)0x0;
        puVar1[9] = local_58;
        local_58 = 0;
        *(ulong **)(lVar9 + 0xf0) = puVar1 + 10;
      }
      else {
                    /* try { // try from 0093a3c4 to 0093a3cb has its CatchHandler @ 0093a500 */
        std::__ndk1::
        vector<TerrainTransformGroupDesc::InfoLayerDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::InfoLayerDesc>>
        ::__push_back_slow_path<TerrainTransformGroupDesc::InfoLayerDesc>
                  ((vector<TerrainTransformGroupDesc::InfoLayerDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::InfoLayerDesc>>
                    *)(lVar9 + 0xe8),(InfoLayerDesc *)&local_a0);
        p_Var3 = local_68;
        if (local_68 !=
            (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
             *)0x0) {
          if (local_60 != local_68) {
            this = local_60 + -0x18;
            do {
              std::__ndk1::
              __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
              ::destroy(this,*(__tree_node **)(this + 8));
              if (((byte)this[-0x28] & 1) != 0) {
                operator_delete(*(void **)(this + -0x18));
              }
              p_Var8 = this + -0x28;
              this = this + -0x40;
            } while (p_Var8 != p_Var3);
          }
          local_60 = p_Var3;
          operator_delete(local_68);
        }
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      lVar9 = *(long *)((long)param_1 + 0x280);
      *(int *)(lVar9 + 0x1d8) =
           (int)((ulong)(*(long *)(lVar9 + 0xf0) - *(long *)(lVar9 + 0xe8)) >> 4) * -0x33333333 + -1
      ;
      goto LAB_0093a474;
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 0093a4ac to 0093a4b7 has its CatchHandler @ 0093a4e8 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  pcVar6 = "";
  if (__nptr != (char *)0x0) {
    pcVar6 = __nptr;
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                    "Warning: TerrainInfoLayer file reference %s not found in i3d files section.\n",
                    pcVar6);
LAB_0093a474:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


