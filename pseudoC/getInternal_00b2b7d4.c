// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInternal
// Entry Point: 00b2b7d4
// Size: 1492 bytes
// Signature: undefined __thiscall getInternal(ResourceManager * this, char * param_1, uint param_2, ResourceDesc * param_3, STREAM_QUEUE param_4, bool param_5, bool param_6, bool * param_7)


/* ResourceManager::getInternal(char const*, unsigned int, ResourceDesc*,
   StreamManager::STREAM_QUEUE, bool, bool, bool&) */

long * __thiscall
ResourceManager::getInternal
          (ResourceManager *this,char *param_1,uint param_2,ResourceDesc *param_3,
          STREAM_QUEUE param_4,bool param_5,bool param_6,bool *param_7)

{
  size_t sVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  uint uVar6;
  __tree_iterator _Var7;
  int iVar8;
  ulong uVar9;
  size_t sVar10;
  ulong uVar11;
  ResourceManager *pRVar12;
  StreamManager *pSVar13;
  long *plVar14;
  ResourceManager *pRVar15;
  char *__s2;
  STREAM_QUEUE SVar16;
  ulong *puVar17;
  ResourceDesc *pRVar18;
  ResourceManager **ppRVar19;
  char *pcVar20;
  ResourceManager **ppRVar21;
  char *pcVar22;
  ResourceManager **ppRVar23;
  long *plVar24;
  ulong local_b8;
  size_t local_b0;
  char *local_a8;
  uint local_a0;
  ResourceDesc *local_98;
  ulong local_90;
  size_t local_88;
  char *local_80;
  uint local_78;
  ResourceDesc *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  *param_7 = false;
  pcVar2 = FileManager::s_singletonFileManager + 0x31;
  if ((FileManager::s_singletonFileManager[48] & 1) != 0) {
    pcVar2 = (char *)FileManager::s_singletonFileManager._64_8_;
  }
  uVar9 = StringUtil::startsWith(param_1,pcVar2);
  if ((uVar9 & 1) != 0) {
    sVar10 = strlen(pcVar2);
    param_1 = param_1 + sVar10;
  }
  ppRVar19 = (ResourceManager **)(this + 0x50);
  ppRVar21 = (ResourceManager **)*ppRVar19;
  ppRVar23 = ppRVar19;
  if (ppRVar21 != (ResourceManager **)0x0) {
    do {
      if (*(uint *)(ppRVar21 + 4) >= param_2) {
        ppRVar23 = ppRVar21;
      }
      ppRVar21 = (ResourceManager **)ppRVar21[*(uint *)(ppRVar21 + 4) < param_2];
    } while (ppRVar21 != (ResourceManager **)0x0);
    if ((ppRVar23 != ppRVar19) && (*(uint *)(ppRVar23 + 4) <= param_2)) {
      local_90 = 0;
      local_88 = 0;
      local_80 = (char *)0x0;
                    /* try { // try from 00b2b914 to 00b2b977 has its CatchHandler @ 00b2be20 */
      puVar17 = &local_90;
      pRVar18 = param_3;
      local_78 = param_2;
      local_70 = param_3;
      uVar9 = (**(code **)(*(long *)ppRVar23[5] + 0x10))(ppRVar23[5],param_1);
      uVar6 = (uint)pRVar18;
      if ((uVar9 & 1) == 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)&local_90);
      }
      else {
        pcVar22 = (char *)((ulong)&local_90 | 1);
        if ((local_90 & 1) != 0) {
          pcVar22 = local_80;
        }
        uVar9 = StringUtil::startsWith(pcVar22,pcVar2);
        if ((uVar9 & 1) != 0) {
          uVar6 = __strlen_chk(pcVar2,0xffffffffffffffff);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::erase
                    ((ulong)&local_90,0);
        }
      }
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = (char *)0x0;
                    /* try { // try from 00b2b988 to 00b2b9ef has its CatchHandler @ 00b2bdf0 */
      local_a0 = param_2;
      local_98 = param_3;
      _Var7 = std::__ndk1::
              __tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
              ::find<ResourceManager::InternalResourceDesc>
                        ((__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                          *)this,(InternalResourceDesc *)&local_90);
      pRVar15 = (ResourceManager *)(ulong)_Var7;
      if (this + 8 == pRVar15) {
        pcVar22 = (char *)((ulong)&local_90 | 1);
        pcVar2 = pcVar22;
        if ((local_90 & 1) != 0) {
          pcVar2 = local_80;
        }
        puVar17 = &local_b8;
        uVar11 = (**(code **)(*(long *)ppRVar23[5] + 0x18))(ppRVar23[5],pcVar2,param_3);
        uVar9 = local_b8;
        if ((uVar11 & 1) == 0) {
LAB_00b2bad8:
          if ((uVar9 & 1) == 0) {
            local_b8 = local_b8 & 0xffffffffffff0000;
          }
          else {
            *local_a8 = '\0';
            local_b0 = 0;
          }
        }
        else {
          uVar11 = local_b8 >> 1 & 0x7f;
          sVar10 = uVar11;
          if ((local_b8 & 1) != 0) {
            sVar10 = local_b0;
          }
          sVar1 = local_90 >> 1 & 0x7f;
          if ((local_90 & 1) != 0) {
            sVar1 = local_88;
          }
          if (sVar10 == sVar1) {
            pcVar20 = (char *)((ulong)&local_b8 | 1);
            pcVar2 = pcVar20;
            if ((local_b8 & 1) != 0) {
              pcVar2 = local_a8;
            }
            __s2 = pcVar22;
            if ((local_90 & 1) != 0) {
              __s2 = local_80;
            }
            if ((local_b8 & 1) == 0) {
              if (sVar10 != 0) {
                do {
                  uVar11 = uVar11 - 1;
                  cVar3 = *pcVar20;
                  cVar4 = *__s2;
                  __s2 = __s2 + 1;
                  pcVar20 = pcVar20 + 1;
                } while (cVar3 == cVar4 && uVar11 != 0);
                if (cVar3 != cVar4) goto LAB_00b2ba88;
              }
            }
            else if ((sVar10 != 0) && (iVar8 = memcmp(pcVar2,__s2,sVar10), iVar8 != 0))
            goto LAB_00b2ba88;
            goto LAB_00b2bad8;
          }
LAB_00b2ba88:
                    /* try { // try from 00b2ba88 to 00b2bad3 has its CatchHandler @ 00b2bde4 */
          _Var7 = std::__ndk1::
                  __tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                  ::find<ResourceManager::InternalResourceDesc>
                            ((__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                              *)this,(InternalResourceDesc *)&local_b8);
          pRVar12 = (ResourceManager *)(ulong)_Var7;
          if (pRVar15 != pRVar12) {
            pRVar18 = *(ResourceDesc **)(pRVar12 + 0x48);
            if ((local_90 & 1) != 0) {
              pcVar22 = local_80;
            }
            pRVar15 = (ResourceManager *)addInternal(this,pcVar22,param_3,(Resource *)pRVar18);
            plVar24 = (long *)internalReloadResource
                                        (pRVar15,*(Resource **)(pRVar12 + 0x48),(uint)param_3,
                                         pRVar18,param_4,param_6);
            goto LAB_00b2bc10;
          }
        }
        if (param_5) {
                    /* try { // try from 00b2bafc to 00b2bb03 has its CatchHandler @ 00b2bde0 */
          Mutex::leaveCriticalSection();
          pcVar2 = pcVar22;
          if ((local_90 & 1) != 0) {
            pcVar2 = local_80;
          }
                    /* try { // try from 00b2bb24 to 00b2bb2b has its CatchHandler @ 00b2bde8 */
          plVar24 = (long *)(**(code **)(*(long *)ppRVar23[5] + 0x20))(ppRVar23[5],pcVar2,param_3);
          if (plVar24 != (long *)0x0) {
                    /* try { // try from 00b2bb3c to 00b2bb67 has its CatchHandler @ 00b2bdec */
            uVar9 = (**(code **)(*plVar24 + 0x18))(plVar24);
            if ((uVar9 & 1) != 0) {
              pSVar13 = (StreamManager *)StreamManager::getInstance();
              SVar16 = param_4;
              uVar9 = StreamManager::addStreamable(pSVar13,(Streamable *)(plVar24 + 2),param_4);
              if ((uVar9 & 1) != 0) {
                Mutex::enterCriticalSection();
                    /* try { // try from 00b2bb68 to 00b2bb8b has its CatchHandler @ 00b2bdd8 */
                _Var7 = std::__ndk1::
                        __tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                        ::find<ResourceManager::InternalResourceDesc>
                                  ((__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                                    *)this,(InternalResourceDesc *)&local_90);
                pRVar12 = (ResourceManager *)(ulong)_Var7;
                if (pRVar15 == pRVar12) {
                  sVar10 = local_b8 >> 1 & 0x7f;
                  if ((local_b8 & 1) != 0) {
                    sVar10 = local_b0;
                  }
                  if (sVar10 != 0) {
                    /* try { // try from 00b2bc4c to 00b2bc97 has its CatchHandler @ 00b2bdd4 */
                    _Var7 = std::__ndk1::
                            __tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                            ::find<ResourceManager::InternalResourceDesc>
                                      ((__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                                        *)this,(InternalResourceDesc *)&local_b8);
                    pRVar12 = (ResourceManager *)(ulong)_Var7;
                    if (pRVar15 != pRVar12) {
                      pRVar18 = *(ResourceDesc **)(pRVar12 + 0x48);
                      if ((local_90 & 1) != 0) {
                        pcVar22 = local_80;
                      }
                      pRVar15 = (ResourceManager *)
                                addInternal(this,pcVar22,param_3,(Resource *)pRVar18);
                      plVar14 = (long *)internalReloadResource
                                                  (pRVar15,*(Resource **)(pRVar12 + 0x48),
                                                   (uint)param_3,pRVar18,param_4,param_6);
                      goto LAB_00b2bb8c;
                    }
                  }
                  *param_7 = true;
                  FUN_00f276d0(1,plVar24 + 1);
                  if ((local_90 & 1) != 0) {
                    pcVar22 = local_80;
                  }
                    /* try { // try from 00b2bcc4 to 00b2bd0f has its CatchHandler @ 00b2bddc */
                  addInternal(this,pcVar22,param_3,(Resource *)plVar24);
                  sVar10 = local_b8 >> 1 & 0x7f;
                  if ((local_b8 & 1) != 0) {
                    sVar10 = local_b0;
                  }
                  if (sVar10 != 0) {
                    pcVar2 = (char *)((ulong)&local_b8 | 1);
                    if ((local_b8 & 1) != 0) {
                      pcVar2 = local_a8;
                    }
                    addInternal(this,pcVar2,param_3,(Resource *)plVar24);
                  }
                }
                else {
                  plVar14 = (long *)internalReloadResource
                                              (pRVar12,*(Resource **)(pRVar12 + 0x48),SVar16,
                                               (ResourceDesc *)puVar17,param_4,param_6);
LAB_00b2bb8c:
                    /* try { // try from 00b2bb90 to 00b2bb9f has its CatchHandler @ 00b2bddc */
                  pSVar13 = (StreamManager *)StreamManager::getInstance();
                  StreamManager::removeStreamable(pSVar13,(Streamable *)(plVar24 + 2),param_4);
                  (**(code **)(*plVar24 + 8))(plVar24);
                  plVar24 = plVar14;
                }
                goto LAB_00b2bc10;
              }
            }
                    /* try { // try from 00b2bbb8 to 00b2bbc7 has its CatchHandler @ 00b2bdec */
            pSVar13 = (StreamManager *)StreamManager::getInstance();
            StreamManager::removeStreamable(pSVar13,(Streamable *)(plVar24 + 2),param_4);
            (**(code **)(*plVar24 + 8))(plVar24);
          }
          if (param_6) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar8 != 0)) {
                    /* try { // try from 00b2bd6c to 00b2bd77 has its CatchHandler @ 00b2bda8 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
                    /* try { // try from 00b2bbec to 00b2bc0b has its CatchHandler @ 00b2bde8 */
            LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                               "Error: Can\'t load resource \'%s\'.\n",param_1);
          }
          Mutex::enterCriticalSection();
        }
        plVar24 = (long *)0x0;
      }
      else {
        plVar24 = (long *)internalReloadResource
                                    (pRVar15,*(Resource **)(pRVar15 + 0x48),uVar6,
                                     (ResourceDesc *)puVar17,param_4,param_6);
      }
LAB_00b2bc10:
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      goto LAB_00b2b8c4;
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0)) {
                    /* try { // try from 00b2bd24 to 00b2bd2f has its CatchHandler @ 00b2bdbc */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Error: No loader found to load resource \'%s\'.\n",param_1);
  plVar24 = (long *)0x0;
LAB_00b2b8c4:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar24;
}


