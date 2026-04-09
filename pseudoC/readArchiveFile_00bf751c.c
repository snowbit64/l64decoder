// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readArchiveFile
// Entry Point: 00bf751c
// Size: 2760 bytes
// Signature: undefined __thiscall readArchiveFile(CompiledShaderArchive * this, char * param_1, char * param_2, bool param_3, bool param_4)


/* CompiledShaderArchive::readArchiveFile(char const*, char const*, bool, bool) */

void __thiscall
CompiledShaderArchive::readArchiveFile
          (CompiledShaderArchive *this,char *param_1,char *param_2,bool param_3,bool param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  pair pVar13;
  int iVar14;
  long *plVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  void *__dest;
  void *pvVar20;
  CompressionDictionary *this_00;
  MarkovHuffmanTree *this_01;
  ulong *puVar21;
  undefined8 *puVar22;
  int *piVar23;
  long lVar24;
  char *pcVar25;
  uint *puVar26;
  undefined4 *puVar27;
  ulong *__src;
  ulong *puVar28;
  ulong uVar29;
  ulong __n;
  ulong uVar30;
  ulong *local_c8;
  undefined8 local_c0;
  void *pvStack_b8;
  int local_b0;
  ulong local_a0;
  void *pvStack_98;
  uint local_90;
  undefined uStack_8c;
  undefined2 uStack_8b;
  undefined uStack_89;
  uint uStack_88;
  undefined uStack_84;
  undefined2 uStack_83;
  undefined local_81;
  undefined7 uStack_80;
  long local_70;
  
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  plVar15 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,
                                     false);
  pcVar25 = param_1;
  if (plVar15 == (long *)0x0) {
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      if (param_3) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
           iVar14 != 0)) {
                    /* try { // try from 00bf7e84 to 00bf7e8f has its CatchHandler @ 00bf7ff4 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: Shader archive \'%s\' cannot be found.\n",param_1);
      }
    }
    else {
      plVar15 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_2,
                                         0,false);
      pcVar25 = param_2;
      if (plVar15 != (long *)0x0) goto LAB_00bf7578;
      if (param_3) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
           iVar14 != 0)) {
                    /* try { // try from 00bf7f5c to 00bf7f67 has its CatchHandler @ 00bf7fe8 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: Shader archive \'%s\' cannot be found, and alt archive \'%s\' also cannot be found.\n"
                           ,param_1,param_2);
      }
    }
  }
  else {
LAB_00bf7578:
    uVar11 = (**(code **)(*plVar15 + 0x48))(plVar15);
    if ((ulong)uVar11 < 0x20) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar14 != 0
         )) {
                    /* try { // try from 00bf7de0 to 00bf7deb has its CatchHandler @ 00bf7ffc */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Shader archive \'%s\' is corrupt.\n",pcVar25);
      (**(code **)(*plVar15 + 8))(plVar15);
    }
    else {
      piVar16 = (int *)operator_new__((ulong)uVar11);
      uVar12 = (**(code **)(*plVar15 + 0x28))(plVar15,piVar16,uVar11);
      if (uVar12 == uVar11) {
        (**(code **)(*plVar15 + 8))(plVar15);
        if (*piVar16 == 0x53484152) {
          if (piVar16[1] == 8) {
            if (param_4) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar14 != 0)) {
                    /* try { // try from 00bf7fa4 to 00bf7faf has its CatchHandler @ 00bf7fe4 */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
              LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                                "Loading shader archive \'%s\'. %u bytes compressed\n",pcVar25,
                                (ulong)uVar11);
            }
            uVar11 = piVar16[2];
            uVar3 = piVar16[3];
            uVar29 = (ulong)uVar3;
            uVar12 = piVar16[4];
            uVar30 = (ulong)uVar12;
            uVar4 = piVar16[5];
            lVar24 = uVar29 * 0x18;
            plVar15 = (long *)(this + 0x30);
            __src = (ulong *)((long)piVar16 +
                             (ulong)((int)lVar24 + uVar4 * 0x14 + uVar11 + (int)(uVar30 * 0x20)));
            local_c8 = __src;
            if (*(long *)(this + 0x38) == *plVar15) {
              std::__ndk1::
              vector<CompiledShaderArchive::StructLayoutsEntry,std::__ndk1::allocator<CompiledShaderArchive::StructLayoutsEntry>>
              ::reserve((vector<CompiledShaderArchive::StructLayoutsEntry,std::__ndk1::allocator<CompiledShaderArchive::StructLayoutsEntry>>
                         *)plVar15,uVar29);
              std::__ndk1::
              vector<CompiledShaderArchive::ShaderEntry,std::__ndk1::allocator<CompiledShaderArchive::ShaderEntry>>
              ::reserve((vector<CompiledShaderArchive::ShaderEntry,std::__ndk1::allocator<CompiledShaderArchive::ShaderEntry>>
                         *)this,uVar30);
              std::__ndk1::
              vector<CompiledShaderArchive::ProgramEntry,std::__ndk1::allocator<CompiledShaderArchive::ProgramEntry>>
              ::reserve((vector<CompiledShaderArchive::ProgramEntry,std::__ndk1::allocator<CompiledShaderArchive::ProgramEntry>>
                         *)(this + 0x18),(ulong)uVar4);
            }
            puVar17 = (undefined4 *)operator_new__(uVar29 << 2);
            puVar18 = (undefined4 *)operator_new__((ulong)(uVar12 + 1) << 2);
            if (uVar3 != 0) {
              puVar28 = (ulong *)((long)piVar16 + (ulong)uVar11 + 8);
              puVar27 = puVar17;
              do {
                puVar21 = &local_a0;
                pvStack_98 = (void *)puVar28[1];
                local_a0 = *puVar28;
                uVar3 = *(uint *)(puVar28 + -1);
                uVar2 = (ulong)uVar3;
                uVar5 = *(uint *)((long)puVar28 + -4);
                local_90 = (int)((ulong)(*(long *)(this + 0x38) - *(long *)(this + 0x30)) >> 3) *
                           -0x33333333;
                pVar13 = std::__ndk1::
                         __tree<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::StructLayoutsHash,std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::StructLayoutsHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>>>
                         ::
                         __emplace_unique_key_args<CompiledShaderArchive::StructLayoutsHash,std::__ndk1::pair<CompiledShaderArchive::StructLayoutsHash,unsigned_int>>
                                   ((__tree<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::StructLayoutsHash,std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::StructLayoutsHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>>>
                                     *)(this + 0xd0),(StructLayoutsHash *)puVar21,(pair *)&local_a0)
                ;
                if (((ulong)puVar21 & 0xff) != 0) {
                  local_90 = 0;
                  uStack_8c = 0;
                  uStack_8b = 0;
                  uStack_89 = 0;
                  uStack_84 = 0;
                  uStack_83 = 0;
                  local_81 = 0;
                  uStack_80 = 0;
                  pvStack_98 = (void *)0x0;
                  local_a0 = local_a0 & 0xffffffff00000000;
                  uStack_88 = uVar3;
                  pvVar20 = operator_new__(uVar2);
                  local_90 = (uint)pvVar20;
                  uStack_8c = (undefined)((ulong)pvVar20 >> 0x20);
                  uStack_8b = (undefined2)((ulong)pvVar20 >> 0x28);
                  uStack_89 = (undefined)((ulong)pvVar20 >> 0x38);
                  memcpy(pvVar20,__src,uVar2);
                  uStack_84 = (undefined)uVar5;
                  __memcpy_chk(&uStack_83,(byte *)((long)__src + uVar2),(ulong)uVar5 * 5,0xb);
                  FUN_00bf6974(plVar15,&local_a0);
                }
                puVar28 = puVar28 + 3;
                __src = (ulong *)((long)__src + (ulong)uVar5 * 5 + uVar2);
                uVar29 = uVar29 - 1;
                *puVar27 = *(undefined4 *)((ulong)pVar13 + 0x2c);
                puVar27 = puVar27 + 1;
                local_c8 = __src;
              } while (uVar29 != 0);
            }
            lVar24 = lVar24 + (ulong)uVar11;
            *puVar18 = 0xffffffff;
            if (uVar12 != 0) {
              uVar29 = 0;
              do {
                puVar28 = &local_a0;
                puVar26 = (uint *)((long)piVar16 + uVar29 * 0x20 + lVar24);
                pvStack_98 = *(void **)(puVar26 + 5);
                local_a0 = *(ulong *)(puVar26 + 3);
                uVar11 = *puVar26;
                uVar2 = (ulong)uVar11;
                uVar12 = puVar26[1];
                local_90 = (uint)((ulong)(*(long *)(this + 8) - *(long *)this) >> 5);
                pVar13 = std::__ndk1::
                         __tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderHash,std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>>>
                         ::
                         __emplace_unique_key_args<CompiledShaderArchive::ShaderHash,std::__ndk1::pair<CompiledShaderArchive::ShaderHash,unsigned_int>>
                                   ((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderHash,std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>>>
                                     *)(this + 0xb8),(ShaderHash *)puVar28,(pair *)&local_a0);
                if (((ulong)puVar28 & 0xff) != 0) {
                  pvStack_98 = (void *)0x0;
                  uStack_8c = 0;
                  uStack_8b = 0;
                  local_a0 = 0;
                  uStack_89 = 0;
                  uStack_88 = 0;
                  uStack_84 = 0;
                  uStack_83 = 0;
                  local_90 = uVar11;
                  pvStack_98 = operator_new__(uVar2);
                  memcpy(pvStack_98,__src,uVar2);
                  uStack_8c = (undefined)uVar12;
                  __memcpy_chk(&uStack_8b,(byte *)((long)__src + uVar2),(ulong)uVar12 * 5,0xb);
                  puVar28 = *(ulong **)(this + 8);
                  if (puVar28 == *(ulong **)(this + 0x10)) {
                    pvVar20 = *(void **)this;
                    __n = (long)puVar28 - (long)pvVar20;
                    uVar1 = ((long)__n >> 5) + 1;
                    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__vector_base_common<true>::__throw_length_error();
                    }
                    if (uVar1 <= (ulong)((long)__n >> 4)) {
                      uVar1 = (long)__n >> 4;
                    }
                    if (0x7fffffffffffffdf < __n) {
                      uVar1 = 0x7ffffffffffffff;
                    }
                    if (uVar1 == 0) {
                      __dest = (void *)0x0;
                    }
                    else {
                      if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_006d1f18(
                                    "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                    );
                      }
                      __dest = operator_new(uVar1 << 5);
                    }
                    puVar28 = (ulong *)((long)__dest + ((long)__n >> 5) * 0x20);
                    puVar28[1] = (ulong)pvStack_98;
                    *puVar28 = local_a0;
                    puVar28[3] = CONCAT17(local_81,CONCAT25(uStack_83,CONCAT14(uStack_84,uStack_88))
                                         );
                    puVar28[2] = CONCAT17(uStack_89,CONCAT25(uStack_8b,CONCAT14(uStack_8c,local_90))
                                         );
                    if (0 < (long)__n) {
                      memcpy(__dest,pvVar20,__n);
                    }
                    *(void **)this = __dest;
                    *(ulong **)(this + 8) = puVar28 + 4;
                    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 0x20);
                    if (pvVar20 != (void *)0x0) {
                      operator_delete(pvVar20);
                    }
                  }
                  else {
                    puVar28[1] = (ulong)pvStack_98;
                    *puVar28 = local_a0;
                    puVar28[3] = CONCAT17(local_81,CONCAT25(uStack_83,CONCAT14(uStack_84,uStack_88))
                                         );
                    puVar28[2] = CONCAT17(uStack_89,CONCAT25(uStack_8b,CONCAT14(uStack_8c,local_90))
                                         );
                    *(ulong **)(this + 8) = puVar28 + 4;
                  }
                }
                uVar1 = uVar29 + 1;
                lVar10 = uVar29 * 0x20 + lVar24;
                __src = (ulong *)((long)__src + (ulong)uVar12 * 5 + uVar2);
                uVar11 = *(uint *)((ulong)pVar13 + 0x2c);
                puVar26 = (uint *)((long)piVar16 + lVar10 + 8);
                uVar12 = *puVar26;
                puVar18[uVar1] = uVar11;
                local_c8 = __src;
                if (uVar12 != 0) {
                  uVar12 = 0;
                  puVar28 = __src;
                  do {
                    __src = puVar28 + 2;
                    pvStack_b8 = (void *)puVar28[1];
                    local_c0 = *puVar28;
                    local_c8 = __src;
                    local_a0 = local_c0;
                    pvStack_98 = pvStack_b8;
                    local_90 = uVar11;
                    std::__ndk1::
                    __tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderHash,std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>>>
                    ::
                    __emplace_unique_key_args<CompiledShaderArchive::ShaderHash,std::__ndk1::pair<CompiledShaderArchive::ShaderHash,unsigned_int>>
                              ((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderHash,std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>>>
                                *)(this + 0xa0),(ShaderHash *)&local_a0,(pair *)&local_a0);
                    uVar12 = uVar12 + 1;
                    puVar28 = __src;
                  } while (uVar12 < *puVar26);
                }
                puVar26 = (uint *)((long)piVar16 + lVar10 + 0x1c);
                if (*puVar26 != 0) {
                  uVar11 = 0;
                  do {
                    bVar7 = *(byte *)((long)__src + 1);
                    uVar29 = (ulong)bVar7;
                    puVar28 = (ulong *)((long)__src + 2);
                    bVar8 = *(byte *)__src;
                    local_c8 = puVar28;
                    pvVar20 = operator_new__(uVar29);
                    memcpy(pvVar20,puVar28,uVar29);
                    __src = (ulong *)((long)puVar28 + uVar29);
                    local_90 = *(uint *)((ulong)pVar13 + 0x2c);
                    puVar28 = &local_a0;
                    local_a0 = (ulong)CONCAT14(bVar7,(uint)bVar8);
                    local_c8 = __src;
                    pvStack_98 = pvVar20;
                    std::__ndk1::
                    __tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderId,std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>>>
                    ::
                    __emplace_unique_key_args<CompiledShaderArchive::ShaderId,std::__ndk1::pair<CompiledShaderArchive::ShaderId,unsigned_int>>
                              ((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderId,std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>>>
                                *)(this + 0x60),(ShaderId *)puVar28,(pair *)&local_a0);
                    if (((ulong)puVar28 & 1) == 0) {
                      operator_delete__(pvVar20);
                    }
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < *puVar26);
                }
                uVar29 = uVar1;
              } while (uVar1 != uVar30);
            }
            if (uVar4 != 0) {
              uVar29 = 0;
              lVar24 = uVar30 * 0x20 + lVar24;
              do {
                piVar23 = (int *)((long)piVar16 + uVar29 * 0x14 + lVar24);
                puVar22 = &local_c0;
                local_a0 = 0;
                local_b0 = (int)((ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18)) >> 3) *
                           -0x55555555;
                local_90 = puVar18[piVar23[2] + 1];
                uVar6 = puVar17[(uint)piVar23[3]];
                pvStack_98 = (void *)CONCAT44(puVar18[piVar23[1] + 1],puVar18[*piVar23 + 1]);
                local_c0 = CONCAT44(puVar18[piVar23[1] + 1],puVar18[*piVar23 + 1]);
                uStack_8c = (undefined)uVar6;
                uStack_8b = (undefined2)((uint)uVar6 >> 8);
                uStack_89 = (undefined)((uint)uVar6 >> 0x18);
                pvStack_b8 = (void *)CONCAT44(uVar6,local_90);
                pVar13 = std::__ndk1::
                         __tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramHash,std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>>>
                         ::
                         __emplace_unique_key_args<CompiledShaderArchive::ProgramHash,std::__ndk1::pair<CompiledShaderArchive::ProgramHash,unsigned_int>>
                                   ((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramHash,std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>>>
                                     *)(this + 0x88),(ProgramHash *)puVar22,(pair *)&local_c0);
                if (((ulong)puVar22 & 0xff) != 0) {
                  FUN_00bf5624(this + 0x18,&local_a0);
                }
                puVar26 = (uint *)((long)piVar16 + uVar29 * 0x14 + lVar24 + 0x10);
                if (*puVar26 != 0) {
                  uVar11 = 0;
                  do {
                    puVar28 = (ulong *)((long)__src + 1);
                    bVar7 = *(byte *)__src;
                    uVar30 = (ulong)bVar7;
                    local_c8 = puVar28;
                    pvVar20 = operator_new__(uVar30);
                    memcpy(pvVar20,puVar28,uVar30);
                    __src = (ulong *)((long)puVar28 + uVar30);
                    local_b0 = *(int *)((ulong)pVar13 + 0x2c);
                    puVar22 = &local_c0;
                    local_c0 = CONCAT44(local_c0._4_4_,(uint)bVar7);
                    local_c8 = __src;
                    pvStack_b8 = pvVar20;
                    std::__ndk1::
                    __tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramId,std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>>>
                    ::
                    __emplace_unique_key_args<CompiledShaderArchive::ProgramId,std::__ndk1::pair<CompiledShaderArchive::ProgramId,unsigned_int>>
                              ((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramId,std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>>>
                                *)(this + 0x48),(ProgramId *)puVar22,(pair *)&local_c0);
                    if (((ulong)puVar22 & 1) == 0) {
                      operator_delete__(pvVar20);
                    }
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < *puVar26);
                }
                uVar29 = uVar29 + 1;
              } while (uVar29 != uVar4);
            }
            if (*(char *)(piVar16 + 7) != '\0') {
              this_00 = (CompressionDictionary *)operator_new(0x20);
                    /* try { // try from 00bf7d6c to 00bf7d6f has its CatchHandler @ 00bf8018 */
              CompressionDictionary::CompressionDictionary(this_00);
              *(CompressionDictionary **)(this + 0x78) = this_00;
              CompressionDictionary::deserialize(this_00,(uchar **)&local_c8);
            }
            if (*(char *)((long)piVar16 + 0x1d) != '\0') {
              this_01 = (MarkovHuffmanTree *)operator_new(0x20);
                    /* try { // try from 00bf7d94 to 00bf7d97 has its CatchHandler @ 00bf8014 */
              MarkovHuffmanTree::MarkovHuffmanTree(this_01);
              *(MarkovHuffmanTree **)(this + 0x80) = this_01;
              MarkovHuffmanTree::deserialize(this_01,(uchar **)&local_c8);
            }
            *(int *)(this + 0x100) = piVar16[6];
            operator_delete__(puVar18);
            operator_delete__(puVar17);
            operator_delete__(piVar16);
            uVar19 = 1;
            goto LAB_00bf7930;
          }
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar14 != 0)) {
                    /* try { // try from 00bf7f14 to 00bf7f1f has its CatchHandler @ 00bf7fec */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Error: Shader archive \'%s\' has version %u. Expecting version %u.\n",
                             pcVar25,(ulong)(uint)piVar16[1],8);
        }
        else {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar14 != 0)) {
                    /* try { // try from 00bf7ecc to 00bf7ed7 has its CatchHandler @ 00bf7ff0 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Error: Shader archive \'%s\' is of an old incompatible type which does not contain a version number.\n"
                             ,pcVar25);
        }
      }
      else {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
           iVar14 != 0)) {
                    /* try { // try from 00bf7e30 to 00bf7e3b has its CatchHandler @ 00bf7ff8 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: Failed to read shader archive \'%s\'.\n",pcVar25);
        (**(code **)(*plVar15 + 8))(plVar15);
      }
      operator_delete__(piVar16);
    }
  }
  uVar19 = 0;
LAB_00bf7930:
  if (*(long *)(lVar9 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar19);
  }
  return;
}


