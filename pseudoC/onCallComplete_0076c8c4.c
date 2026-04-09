// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onCallComplete
// Entry Point: 0076c8c4
// Size: 4472 bytes
// Signature: undefined __thiscall onCallComplete(ScriptingSavegameUploadReport * this, ErrorCode param_1, char * param_2)


/* WARNING: Type propagation algorithm not settling */
/* ScriptingSavegameUploadReport::onCallComplete(SaveGameUtilBase::ErrorCode, char const*) */

void __thiscall
ScriptingSavegameUploadReport::onCallComplete
          (ScriptingSavegameUploadReport *this,ErrorCode param_1,char *param_2)

{
  char *pcVar1;
  ScriptingSavegameUploadReport *pSVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  basic_string_conflict *pbVar8;
  undefined8 *puVar9;
  ulong uVar10;
  char *pcVar11;
  size_t sVar12;
  size_t sVar13;
  undefined2 *puVar14;
  LuauScriptSystem *pLVar15;
  undefined **ppuVar16;
  basic_string_conflict *pbVar17;
  long lVar18;
  void *pvVar19;
  basic_string_conflict *pbVar20;
  int local_574;
  ulong local_570;
  undefined8 uStack_568;
  void *local_560;
  ulong local_558;
  undefined8 uStack_550;
  char *local_548;
  ulong local_540;
  undefined8 local_538;
  void *local_530;
  bool local_524 [4];
  ulonglong local_520;
  ulonglong local_518;
  undefined8 local_510;
  size_t sStack_508;
  undefined8 *local_500;
  bool local_4e4 [4];
  undefined8 local_4e0;
  undefined uStack_4d8;
  undefined7 uStack_4d7;
  char *local_4d0;
  byte local_4c8 [16];
  char *local_4b8;
  ulong local_4b0;
  undefined8 uStack_4a8;
  char *local_4a0;
  ZipArchiveWriter aZStack_498 [32];
  long *local_478;
  ulong local_470;
  undefined8 uStack_468;
  undefined8 *local_460;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  ulong local_3a8;
  undefined8 local_3a0;
  undefined4 uStack_398;
  undefined2 uStack_394;
  undefined uStack_392;
  undefined4 uStack_391;
  undefined5 uStack_38d;
  undefined4 local_388;
  undefined2 local_384;
  undefined local_382;
  undefined4 local_378;
  undefined2 local_374;
  undefined local_372;
  undefined4 local_368;
  undefined2 local_364;
  undefined local_362;
  undefined4 local_358;
  undefined2 local_354;
  undefined local_352;
  undefined4 local_348;
  undefined2 local_344;
  undefined local_342;
  undefined4 local_338;
  undefined2 local_334;
  undefined local_332;
  undefined4 local_328;
  undefined2 local_324;
  undefined local_322;
  undefined4 local_318;
  undefined2 local_314;
  undefined local_312;
  undefined4 local_308;
  undefined2 local_304;
  undefined local_302;
  undefined4 local_2f8;
  undefined2 local_2f4;
  undefined local_2f2;
  undefined4 local_2e8;
  undefined2 local_2e4;
  undefined local_2e2;
  undefined4 local_2d8;
  undefined2 local_2d4;
  undefined local_2d2;
  undefined4 local_2c8;
  undefined2 local_2c4;
  undefined local_2c2;
  undefined4 local_2b8;
  undefined2 local_2b4;
  undefined local_2b2;
  undefined4 local_2a8;
  undefined2 local_2a4;
  undefined local_2a2;
  undefined4 local_298;
  undefined2 local_294;
  undefined local_292;
  undefined4 local_288;
  undefined2 local_284;
  undefined local_282;
  undefined4 local_278;
  undefined2 local_274;
  undefined local_272;
  undefined *local_270;
  void *pvStack_268;
  undefined8 *local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined uStack_248;
  undefined7 uStack_247;
  undefined local_240;
  undefined2 uStack_23f;
  undefined uStack_23d;
  undefined4 uStack_23c;
  DomXMLFile aDStack_150 [216];
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if (param_1 == 0) {
    ZipArchiveWriter::ZipArchiveWriter(aZStack_498,(char *)0x0);
    pbVar8 = (basic_string_conflict *)strlen(param_2);
    if ((basic_string_conflict *)0xffffffffffffffef < pbVar8) {
                    /* try { // try from 0076d910 to 0076d917 has its CatchHandler @ 0076dc88 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (pbVar8 < (basic_string_conflict *)0x17) {
      pvVar19 = (void *)((ulong)&local_3d0 | 1);
      local_3d0 = (basic_string_conflict *)CONCAT71(local_3d0._1_7_,(char)((int)pbVar8 << 1));
      if (pbVar8 != (basic_string_conflict *)0x0) goto LAB_0076c970;
    }
    else {
                    /* try { // try from 0076c958 to 0076c95f has its CatchHandler @ 0076dc88 */
      pvVar19 = operator_new((ulong)(pbVar8 + 0x10) & 0xfffffffffffffff0);
      local_3d0 = (basic_string_conflict *)((ulong)(pbVar8 + 0x10) & 0xfffffffffffffff0 | 1);
      uStack_3c8 = pbVar8;
      local_3c0 = (undefined8 *)pvVar19;
LAB_0076c970:
      memcpy(pvVar19,param_2,(size_t)pbVar8);
    }
    *(basic_string_conflict *)((long)pvVar19 + (long)pbVar8) = (basic_string_conflict)0x0;
                    /* try { // try from 0076c984 to 0076c993 has its CatchHandler @ 0076dc6c */
    ZipArchiveWriter::addDirectoryFlat(aZStack_498,(basic_string *)&local_3d0,9);
    if (((ulong)local_3d0 & 1) != 0) {
      operator_delete(local_3c0);
    }
    local_4b0 = 0;
    uStack_4a8 = 0;
    local_4a0 = (char *)0x0;
                    /* try { // try from 0076c9ac to 0076c9c3 has its CatchHandler @ 0076dc64 */
    PathUtil::getUserProfileAppPath
              ("FarmingSimulator2023Mobile",(basic_string *)&local_4b0,false,false);
                    /* try { // try from 0076c9c4 to 0076c9d7 has its CatchHandler @ 0076dc5c */
    FUN_006cadd8(&local_3d0,&local_4b0,"game.xml");
                    /* try { // try from 0076c9d8 to 0076c9df has its CatchHandler @ 0076dc44 */
    puVar9 = (undefined8 *)operator_new(0x20);
    local_240 = SUB81(puVar9,0);
    uStack_23f = (undefined2)((ulong)puVar9 >> 8);
    uStack_23d = (undefined)((ulong)puVar9 >> 0x18);
    uStack_23c = (undefined4)((ulong)puVar9 >> 0x20);
    *(undefined *)((long)puVar9 + 0x17) = 0;
    puVar9[1] = 0x672f6f666e496c61;
    *puVar9 = 0x6e6f697469646441;
    *(undefined8 *)((long)puVar9 + 0xf) = 0x6c6d782e656d6167;
    uStack_248 = 0x17;
    uStack_247 = 0;
    local_250._0_1_ = (MemoryBufferedFile)0x21;
    local_250._1_7_ = 0;
                    /* try { // try from 0076ca10 to 0076ca23 has its CatchHandler @ 0076dc2c */
    ZipArchiveWriter::addFile(aZStack_498,(basic_string *)&local_3d0,(basic_string *)&local_250,9);
    if (((byte)local_250._0_1_ & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_23c,
                                       CONCAT13(uStack_23d,CONCAT21(uStack_23f,local_240))));
    }
    if (((ulong)local_3d0 & 1) != 0) {
      operator_delete(local_3c0);
    }
                    /* try { // try from 0076ca44 to 0076ca57 has its CatchHandler @ 0076dc24 */
    FUN_006cadd8(&local_3d0,&local_4b0,"gameSettings.xml");
                    /* try { // try from 0076ca58 to 0076ca5f has its CatchHandler @ 0076dc20 */
    puVar9 = (undefined8 *)operator_new(0x20);
    local_240 = SUB81(puVar9,0);
    uStack_23f = (undefined2)((ulong)puVar9 >> 8);
    uStack_23d = (undefined)((ulong)puVar9 >> 0x18);
    uStack_23c = (undefined4)((ulong)puVar9 >> 0x20);
    *(undefined *)((long)puVar9 + 0x1f) = 0;
    uStack_248 = 0x1f;
    uStack_247 = 0;
    local_250._0_1_ = (MemoryBufferedFile)0x21;
    local_250._1_7_ = 0;
    puVar9[1] = 0x672f6f666e496c61;
    *puVar9 = 0x6e6f697469646441;
    *(undefined8 *)((long)puVar9 + 0x17) = 0x6c6d782e73676e69;
    *(undefined8 *)((long)puVar9 + 0xf) = 0x74746553656d6167;
                    /* try { // try from 0076ca8c to 0076ca9f has its CatchHandler @ 0076dc1c */
    ZipArchiveWriter::addFile(aZStack_498,(basic_string *)&local_3d0,(basic_string *)&local_250,9);
    if (((byte)local_250._0_1_ & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_23c,
                                       CONCAT13(uStack_23d,CONCAT21(uStack_23f,local_240))));
    }
    if (((ulong)local_3d0 & 1) != 0) {
      operator_delete(local_3c0);
    }
                    /* try { // try from 0076cac0 to 0076cad3 has its CatchHandler @ 0076dc14 */
    FUN_006cadd8(local_4c8,&local_4b0,"game.xml");
                    /* try { // try from 0076cad4 to 0076cadb has its CatchHandler @ 0076dc0c */
    DomXMLFile::DomXMLFile(aDStack_150);
    pcVar11 = (char *)((ulong)local_4c8 | 1);
    if ((local_4c8[0] & 1) != 0) {
      pcVar11 = local_4b8;
    }
                    /* try { // try from 0076caf4 to 0076caff has its CatchHandler @ 0076dc04 */
    uVar10 = DomXMLFile::loadFromFile(aDStack_150,pcVar11,true);
    if ((uVar10 & 1) != 0) {
                    /* try { // try from 0076cb04 to 0076cb17 has its CatchHandler @ 0076db0c */
      pcVar11 = (char *)DomXMLFile::getValue(aDStack_150,"game.logging.file#filename",false);
      if (pcVar11 != (char *)0x0) {
        local_3d0 = (basic_string_conflict *)0x0;
        uStack_3c8 = (basic_string_conflict *)0x0;
        local_3c0 = (undefined8 *)0x0;
        pcVar1 = (char *)((ulong)&local_4b0 | 1);
        if ((local_4b0 & 1) != 0) {
          pcVar1 = local_4a0;
        }
                    /* try { // try from 0076cb40 to 0076cb4b has its CatchHandler @ 0076da80 */
        NativeFileUtil::getFiles(pcVar1,(vector *)&local_3d0,false);
        local_250._0_1_ = (MemoryBufferedFile)0x0;
        local_250._1_7_ = 0;
        uStack_248 = 0;
        uStack_247 = 0;
        local_240 = 0;
        uStack_23f = 0;
        uStack_23d = 0;
        uStack_23c = 0;
        local_470 = 0;
        uStack_468 = 0;
        local_460 = (undefined8 *)0x0;
        sVar12 = strlen(pcVar11);
        if (0xffffffffffffffef < sVar12) {
                    /* try { // try from 0076da30 to 0076da37 has its CatchHandler @ 0076da8c */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar12 < 0x17) {
          puVar9 = (undefined8 *)((ulong)&local_510 | 1);
          local_510 = CONCAT71(local_510._1_7_,(char)((int)sVar12 << 1));
          if (sVar12 != 0) goto LAB_0076cbb8;
        }
        else {
          uVar10 = sVar12 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0076cb9c to 0076cba3 has its CatchHandler @ 0076da8c */
          puVar9 = (undefined8 *)operator_new(uVar10);
          local_510 = uVar10 | 1;
          sStack_508 = sVar12;
          local_500 = puVar9;
LAB_0076cbb8:
          memcpy(puVar9,pcVar11,sVar12);
        }
        *(undefined *)((long)puVar9 + sVar12) = 0;
                    /* try { // try from 0076cbcc to 0076cbe7 has its CatchHandler @ 0076db14 */
        PathUtil::getFilename((basic_string *)&local_510,(basic_string *)&local_250,false);
        PathUtil::getFileExtension((basic_string *)&local_510,(basic_string *)&local_470);
        if ((local_510 & 1) != 0) {
          operator_delete(local_500);
        }
                    /* try { // try from 0076cbf8 to 0076cc07 has its CatchHandler @ 0076da7c */
        FUN_006cadd8(&local_510,&local_4b0,pcVar11);
        local_4d0 = (char *)((ulong)local_4d0 & 0xffffffffffffff00);
        local_4e0._0_1_ = 0x1e;
        local_4e0._1_7_ = 0x6f697469646441;
        uStack_4d8 = 0x6e;
        uStack_4d7 = 0x2f6f666e496c61;
                    /* try { // try from 0076cc30 to 0076cc3b has its CatchHandler @ 0076da78 */
        puVar9 = (undefined8 *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 append((char *)&local_4e0);
        local_260 = (undefined8 *)puVar9[2];
        pvStack_268 = (void *)puVar9[1];
        local_270 = (undefined *)*puVar9;
        puVar9[1] = 0;
        puVar9[2] = 0;
        *puVar9 = 0;
                    /* try { // try from 0076cc54 to 0076cc67 has its CatchHandler @ 0076da74 */
        ppuVar16 = &local_270;
        ZipArchiveWriter::addFile(aZStack_498,(basic_string *)&local_510,(basic_string *)ppuVar16,9)
        ;
        if (((ulong)local_270 & 1) != 0) {
          operator_delete(local_260);
        }
        if (((byte)local_4e0 & 1) != 0) {
          operator_delete(local_4d0);
        }
        if ((local_510 & 1) != 0) {
          operator_delete(local_500);
        }
        pbVar8 = uStack_3c8;
        if (local_3d0 != uStack_3c8) {
          pbVar20 = local_3d0;
          do {
            if (*(int *)(pbVar20 + 0x18) == 1) {
              pbVar17 = *(basic_string_conflict **)(pbVar20 + 0x10);
              if (((byte)*pbVar20 & 1) == 0) {
                pbVar17 = pbVar20 + 1;
              }
              pcVar1 = (char *)((ulong)&local_250 | 1);
              if (((byte)local_250._0_1_ & 1) != 0) {
                pcVar1 = (char *)CONCAT44(uStack_23c,
                                          CONCAT13(uStack_23d,CONCAT21(uStack_23f,local_240)));
              }
                    /* try { // try from 0076cd08 to 0076cd3b has its CatchHandler @ 0076dcd0 */
              uVar10 = StringUtil::iStartsWith((char *)pbVar17,pcVar1);
              if ((uVar10 & 1) != 0) {
                pbVar17 = pbVar20 + 1;
                if (((byte)*pbVar20 & 1) != 0) {
                  pbVar17 = *(basic_string_conflict **)(pbVar20 + 0x10);
                }
                puVar9 = (undefined8 *)((ulong)&local_470 | 1);
                if ((local_470 & 1) != 0) {
                  puVar9 = local_460;
                }
                uVar10 = StringUtil::iEndsWith((char *)pbVar17,(char *)puVar9);
                if ((uVar10 & 1) != 0) {
                  sVar13 = strlen(pcVar11);
                  sVar12 = (ulong)((byte)*pbVar20 >> 1);
                  if (((byte)*pbVar20 & 1) != 0) {
                    sVar12 = *(size_t *)(pbVar20 + 8);
                  }
                  if (sVar13 == sVar12) {
                    /* try { // try from 0076cd68 to 0076cd7b has its CatchHandler @ 0076da88 */
                    ppuVar16 = (undefined **)0xffffffffffffffff;
                    iVar6 = std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar11);
                    if (iVar6 == 0) goto LAB_0076ccd0;
                  }
                    /* try { // try from 0076cd80 to 0076cd8f has its CatchHandler @ 0076db68 */
                  std::__ndk1::operator+
                            ((__ndk1 *)&local_4b0,pbVar20,(basic_string_conflict *)ppuVar16);
                  local_4d0 = (char *)((ulong)local_4d0 & 0xffffffffffffff00);
                  local_4e0._0_1_ = 0x1e;
                  *(undefined8 *)((ulong)&local_4e0 | 1) = 0x6e6f697469646441;
                  *(undefined8 *)((long)(undefined8 *)((ulong)&local_4e0 | 1) + 7) =
                       0x2f6f666e496c616e;
                  pbVar17 = pbVar20 + 1;
                  if (((byte)*pbVar20 & 1) != 0) {
                    pbVar17 = *(basic_string_conflict **)(pbVar20 + 0x10);
                  }
                    /* try { // try from 0076cdc4 to 0076cdcb has its CatchHandler @ 0076db3c */
                  puVar9 = (undefined8 *)
                           std::__ndk1::
                           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           ::append((char *)&local_4e0,(ulong)pbVar17);
                  local_260 = (undefined8 *)puVar9[2];
                  pvStack_268 = (void *)puVar9[1];
                  local_270 = (undefined *)*puVar9;
                  puVar9[1] = 0;
                  puVar9[2] = 0;
                  *puVar9 = 0;
                    /* try { // try from 0076cde4 to 0076cdf7 has its CatchHandler @ 0076db24 */
                  ppuVar16 = &local_270;
                  ZipArchiveWriter::addFile
                            (aZStack_498,(basic_string *)&local_510,(basic_string *)ppuVar16,9);
                  if (((ulong)local_270 & 1) != 0) {
                    operator_delete(local_260);
                  }
                  if (((byte)local_4e0 & 1) != 0) {
                    operator_delete(local_4d0);
                  }
                  if ((local_510 & 1) != 0) {
                    operator_delete(local_500);
                  }
                }
              }
            }
LAB_0076ccd0:
            pbVar20 = pbVar20 + 0x30;
          } while (pbVar20 != pbVar8);
        }
        if ((local_470 & 1) != 0) {
          operator_delete(local_460);
        }
        if (((byte)local_250._0_1_ & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_23c,
                                           CONCAT13(uStack_23d,CONCAT21(uStack_23f,local_240))));
        }
        pbVar20 = local_3d0;
        pbVar8 = uStack_3c8;
        if (local_3d0 != (basic_string_conflict *)0x0) {
          while (pbVar8 != pbVar20) {
            if (((byte)pbVar8[-0x30] & 1) != 0) {
              operator_delete(*(void **)(pbVar8 + -0x20));
            }
            pbVar8 = pbVar8 + -0x30;
          }
          uStack_3c8 = pbVar20;
          operator_delete(local_3d0);
        }
      }
    }
    if (((DAT_010777e8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_010777e8), iVar6 != 0)) {
      DAT_010777d0 = 0;
      DAT_010777d8 = 0;
      DAT_010777e0 = (void *)0x0;
      __cxa_atexit(std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   ~basic_string,&DAT_010777d0,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&DAT_010777e8);
    }
    if (((DAT_01077808 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_01077808), iVar6 != 0)) {
      DAT_010777f0 = 0;
      DAT_010777f8 = 0;
      DAT_01077800 = (void *)0x0;
      __cxa_atexit(std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   ~basic_string,&DAT_010777f0,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&DAT_01077808);
    }
    if (((DAT_01077828 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_01077828), iVar6 != 0)) {
      DAT_01077810 = 0;
      DAT_01077818 = 0;
      DAT_01077820 = (void *)0x0;
      __cxa_atexit(std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   ~basic_string,&DAT_01077810,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&DAT_01077828);
    }
                    /* try { // try from 0076cef0 to 0076cf1b has its CatchHandler @ 0076dbfc */
    uVar10 = GenericSaveGameUtil::getSaveGameInfoById
                       (*(uint *)(this + 0x40),(basic_string *)&DAT_010777d0,
                        (basic_string *)&DAT_010777f0,(basic_string *)&DAT_01077810,local_4e4);
    if ((uVar10 & 1) != 0) {
                    /* try { // try from 0076cf20 to 0076cf27 has its CatchHandler @ 0076db04 */
      MemoryBufferedFile::MemoryBufferedFile((MemoryBufferedFile *)&local_3d0);
                    /* try { // try from 0076cf28 to 0076cf57 has its CatchHandler @ 0076dbf4 */
      MemoryBufferedFile::reserve((MemoryBufferedFile *)&local_3d0,1);
      bVar4 = (DAT_010777d0 & 1) == 0;
      pvVar19 = DAT_010777e0;
      if (bVar4) {
        pvVar19 = (void *)((long)&DAT_010777d0 + 1);
      }
      uVar7 = (uint)((byte)DAT_010777d0 >> 1);
      if (!bVar4) {
        uVar7 = (uint)DAT_010777d8;
      }
      MemoryBufferedFile::write((MemoryBufferedFile *)&local_3d0,pvVar19,uVar7);
      uStack_23d = 0;
      local_250._0_1_ = (MemoryBufferedFile)0x24;
      uStack_23f = 0x6c6d;
      uStack_247 = 0x2e656d61676576;
      local_240 = 0x78;
      local_250._1_7_ = 0x53726565726163;
      uStack_248 = 0x61;
                    /* try { // try from 0076cf80 to 0076cf93 has its CatchHandler @ 0076daec */
      ZipArchiveWriter::addFile
                (aZStack_498,(MemoryBufferedFile *)&local_3d0,(basic_string *)&local_250,9);
      if (((byte)local_250._0_1_ & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_23c,
                                         CONCAT13(uStack_23d,CONCAT21(uStack_23f,local_240))));
      }
                    /* try { // try from 0076cfa4 to 0076cfab has its CatchHandler @ 0076dae4 */
      MemoryBufferedFile::MemoryBufferedFile((MemoryBufferedFile *)&local_250);
                    /* try { // try from 0076cfac to 0076cfdb has its CatchHandler @ 0076dbdc */
      MemoryBufferedFile::reserve((MemoryBufferedFile *)&local_250,1);
      bVar4 = (DAT_010777f0 & 1) == 0;
      pvVar19 = DAT_01077800;
      if (bVar4) {
        pvVar19 = (void *)((long)&DAT_010777f0 + 1);
      }
      uVar7 = (uint)((byte)DAT_010777f0 >> 1);
      if (!bVar4) {
        uVar7 = (uint)DAT_010777f8;
      }
      MemoryBufferedFile::write((MemoryBufferedFile *)&local_250,pvVar19,uVar7);
                    /* try { // try from 0076cfdc to 0076cfe3 has its CatchHandler @ 0076dae0 */
      local_460 = (undefined8 *)operator_new(0x30);
      *(undefined *)((long)local_460 + 0x29) = 0;
      uStack_468 = 0x29;
      local_470 = 0x31;
      local_460[1] = 0x6d2f6f666e496c61;
      *local_460 = 0x6e6f697469646441;
      local_460[3] = 0x657463696c666e6f;
      local_460[2] = 0x4361746164617465;
      *(undefined8 *)((long)local_460 + 0x21) = 0x6c6d782e656c6946;
      *(undefined8 *)((long)local_460 + 0x19) = 0x64657463696c666e;
                    /* try { // try from 0076d010 to 0076d023 has its CatchHandler @ 0076dac4 */
      ZipArchiveWriter::addFile
                (aZStack_498,(MemoryBufferedFile *)&local_250,(basic_string *)&local_470,9);
      if ((local_470 & 1) != 0) {
        operator_delete(local_460);
      }
                    /* try { // try from 0076d034 to 0076d03b has its CatchHandler @ 0076dac0 */
      MemoryBufferedFile::MemoryBufferedFile((MemoryBufferedFile *)&local_470);
                    /* try { // try from 0076d03c to 0076d06b has its CatchHandler @ 0076dbc4 */
      MemoryBufferedFile::reserve((MemoryBufferedFile *)&local_470,1);
      bVar4 = (DAT_01077810 & 1) == 0;
      pvVar19 = DAT_01077820;
      if (bVar4) {
        pvVar19 = (void *)((long)&DAT_01077810 + 1);
      }
      uVar7 = (uint)((byte)DAT_01077810 >> 1);
      if (!bVar4) {
        uVar7 = (uint)DAT_01077818;
      }
      MemoryBufferedFile::write((MemoryBufferedFile *)&local_470,pvVar19,uVar7);
                    /* try { // try from 0076d06c to 0076d073 has its CatchHandler @ 0076dabc */
      local_500 = (undefined8 *)operator_new(0x30);
      *(undefined *)((long)local_500 + 0x27) = 0;
      sStack_508 = 0x27;
      local_510 = 0x31;
      local_500[1] = 0x6d2f6f666e496c61;
      *local_500 = 0x6e6f697469646441;
      local_500[3] = 0x46656d614e707369;
      local_500[2] = 0x4461746164617465;
      *(undefined8 *)((long)local_500 + 0x1f) = 0x7478742e656c6946;
                    /* try { // try from 0076d0a0 to 0076d0b3 has its CatchHandler @ 0076daa4 */
      ZipArchiveWriter::addFile
                (aZStack_498,(MemoryBufferedFile *)&local_470,(basic_string *)&local_510,9);
      if ((local_510 & 1) != 0) {
        operator_delete(local_500);
      }
                    /* try { // try from 0076d0c4 to 0076d0cb has its CatchHandler @ 0076daa0 */
      MemoryBufferedFile::MemoryBufferedFile((MemoryBufferedFile *)&local_510);
                    /* try { // try from 0076d0cc to 0076d0d7 has its CatchHandler @ 0076da90 */
      MemoryBufferedFile::reserve((MemoryBufferedFile *)&local_510,1);
      if (local_4e4[0] == false) {
                    /* try { // try from 0076d12c to 0076d133 has its CatchHandler @ 0076da54 */
        local_260 = (undefined8 *)operator_new(0x30);
        *(undefined *)((long)local_260 + 0x2f) = 0;
        pvStack_268 = (void *)0x2f;
        local_270 = (undefined *)0x31;
        local_260[1] = 0x6d2f6f666e496c61;
        *local_260 = 0x6e6f697469646441;
        local_260[3] = 0x74666f53544f4e73;
        local_260[2] = 0x4961746164617465;
        *(undefined8 *)((long)local_260 + 0x27) = 0x6f666e692e646574;
        *(undefined8 *)((long)local_260 + 0x1f) = 0x63696c666e6f4374;
                    /* try { // try from 0076d160 to 0076d173 has its CatchHandler @ 0076da50 */
        ZipArchiveWriter::addFile
                  (aZStack_498,(MemoryBufferedFile *)&local_510,(basic_string *)&local_270,9);
      }
      else {
                    /* try { // try from 0076d0e0 to 0076d0e7 has its CatchHandler @ 0076da70 */
        local_260 = (undefined8 *)operator_new(0x30);
        *(undefined *)((long)local_260 + 0x2c) = 0;
        pvStack_268 = (void *)0x2c;
        local_270 = (undefined *)0x31;
        local_260[1] = 0x6d2f6f666e496c61;
        *local_260 = 0x6e6f697469646441;
        local_260[3] = 0x6e6f4374666f5373;
        local_260[2] = 0x4961746164617465;
        *(undefined8 *)((long)local_260 + 0x24) = 0x6f666e692e646574;
        *(undefined8 *)((long)local_260 + 0x1c) = 0x63696c666e6f4374;
                    /* try { // try from 0076d114 to 0076d127 has its CatchHandler @ 0076da58 */
        ZipArchiveWriter::addFile
                  (aZStack_498,(MemoryBufferedFile *)&local_510,(basic_string *)&local_270,9);
      }
      if (((ulong)local_270 & 1) != 0) {
        operator_delete(local_260);
      }
      MemoryBufferedFile::~MemoryBufferedFile((MemoryBufferedFile *)&local_510);
      MemoryBufferedFile::~MemoryBufferedFile((MemoryBufferedFile *)&local_470);
      MemoryBufferedFile::~MemoryBufferedFile((MemoryBufferedFile *)&local_250);
      MemoryBufferedFile::~MemoryBufferedFile((MemoryBufferedFile *)&local_3d0);
    }
    local_4e0._0_1_ = 0;
    local_4e0._1_7_ = 0;
    uStack_4d8 = 0;
    uStack_4d7 = 0;
    local_4d0 = (char *)0x0;
                    /* try { // try from 0076d1ac to 0076d1b7 has its CatchHandler @ 0076dbd4 */
    PathUtil::getAppBasePath((basic_string *)&local_4e0);
    pcVar11 = (char *)((ulong)&local_4e0 | 1);
    if (((byte)local_4e0 & 1) != 0) {
      pcVar11 = local_4d0;
    }
                    /* try { // try from 0076d1cc to 0076d1df has its CatchHandler @ 0076dc90 */
    EnvUtil::getFreeDiskSpace(pcVar11,&local_518);
    EnvUtil::getFreeDiskSpace(param_2,&local_520);
                    /* try { // try from 0076d1f4 to 0076d1fb has its CatchHandler @ 0076dbbc */
    EnvUtil::getDiskSpaceFormated(local_518);
                    /* try { // try from 0076d208 to 0076d213 has its CatchHandler @ 0076dba4 */
    EnvUtil::getDiskSpaceFormated(local_520);
    FUN_0076dd94(&local_250);
    if ((local_470 & 1) != 0) {
      operator_delete(local_460);
    }
    if (((ulong)local_3d0 & 1) != 0) {
      operator_delete(local_3c0);
    }
                    /* try { // try from 0076d270 to 0076d277 has its CatchHandler @ 0076db9c */
    MemoryBufferedFile::MemoryBufferedFile((MemoryBufferedFile *)&local_510);
                    /* try { // try from 0076d278 to 0076d29f has its CatchHandler @ 0076dcc8 */
    MemoryBufferedFile::reserve((MemoryBufferedFile *)&local_510,1);
    uVar7 = __strlen_chk(&local_250,0x100);
    MemoryBufferedFile::write((MemoryBufferedFile *)&local_510,&local_250,uVar7);
                    /* try { // try from 0076d2a0 to 0076d2a7 has its CatchHandler @ 0076db94 */
    local_3c0 = (undefined8 *)operator_new(0x20);
    *(undefined *)((long)local_3c0 + 0x17) = 0;
    uStack_3c8 = (basic_string_conflict *)0x17;
    local_3d0 = (basic_string_conflict *)0x21;
    local_3c0[1] = 0x692f6f666e496c61;
    *local_3c0 = 0x6e6f697469646441;
    *(undefined8 *)((long)local_3c0 + 0xf) = 0x7478742e6f666e69;
                    /* try { // try from 0076d2d0 to 0076d2e3 has its CatchHandler @ 0076db7c */
    ZipArchiveWriter::addFile
              (aZStack_498,(MemoryBufferedFile *)&local_510,(basic_string *)&local_3d0,9);
    if (((ulong)local_3d0 & 1) != 0) {
      operator_delete(local_3c0);
    }
                    /* try { // try from 0076d2f4 to 0076d2fb has its CatchHandler @ 0076dcc8 */
    ZipArchiveWriter::closeArchive();
                    /* try { // try from 0076d308 to 0076d30f has its CatchHandler @ 0076db74 */
    uVar10 = (**(code **)(*local_478 + 0x48))(local_478);
    *(ulong *)(this + 0x38) = uVar10;
                    /* try { // try from 0076d314 to 0076d347 has its CatchHandler @ 0076dcb0 */
    puVar9 = (undefined8 *)operator_new__(uVar10);
    (**(code **)(*local_478 + 0x38))(local_478,0);
    (**(code **)(*local_478 + 0x28))(local_478,puVar9,*(undefined4 *)(this + 0x38));
    local_524[0] = false;
                    /* try { // try from 0076d34c to 0076d353 has its CatchHandler @ 0076db6c */
    AndroidHTTPSRequest::AndroidHTTPSRequest((AndroidHTTPSRequest *)&local_470);
                    /* try { // try from 0076d354 to 0076d3bf has its CatchHandler @ 0076dd04 */
    AndroidHTTPSRequest::init((char *)&local_470,false,true);
    AndroidHTTPSRequest::setUserAgent((AndroidHTTPSRequest *)&local_470,"GIANTS Engine");
    AndroidHTTPSRequest::setReferer
              ((AndroidHTTPSRequest *)&local_470,"http://www.farming-simulator.com/");
    AndroidHTTPSRequest::setCancelFlag((AndroidHTTPSRequest *)&local_470,local_524);
    AndroidHTTPSRequest::setCallback((AndroidHTTPSRequest *)&local_470,saveGameUploadProgress,this);
    AndroidHTTPSRequest::addHeader
              ((AndroidHTTPSRequest *)&local_470,"Content-Type","multipart/form-data");
    local_540 = 0;
    local_538 = 0;
    local_530 = (void *)0x0;
    local_558 = 0;
    uStack_550 = 0;
    local_548 = (char *)0x0;
    uStack_3b8 = 0xa499ec2b1fb698fe;
    local_3c0 = (undefined8 *)0x6f0bec91ea6409a6;
    local_3a8 = 0xbb1d9f6760ded9b;
    uStack_3b0 = 0xf06542a784fe7118;
    bVar5 = 0x9e;
    local_3a0 = 0x92fe6900b283c062;
    uStack_38d = 0x8992fe6900;
    local_388 = CONCAT13(local_388._3_1_,0xa27f09);
    uStack_398 = 0xfe720d86;
    uStack_394 = 0xb2d8;
    uStack_392 = 4;
    uStack_391 = 0xb283a076;
    uStack_3c8 = (basic_string_conflict *)0x93f2670ba780fe75;
    local_3d0 = (basic_string_conflict *)0x43edccec7618b69e;
    lVar18 = 0;
    while( true ) {
      *(byte *)((long)&local_3d0 + lVar18) =
           (&DAT_0051898b)[(ulong)((uint)lVar18 + (((uint)lVar18 & 0xff) / 5) * -5) & 0xff] ^ bVar5;
                    /* try { // try from 0076d434 to 0076d43b has its CatchHandler @ 0076dd0c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back((char)&local_558);
      if (lVar18 == 0x4a) break;
      bVar5 = *(byte *)((long)&local_3d0 + lVar18 + 1);
      lVar18 = lVar18 + 1;
    }
                    /* try { // try from 0076d458 to 0076d4ab has its CatchHandler @ 0076dcb8 */
    StringUtil::uriEncode((basic_string *)(this + 0x20),(basic_string *)&local_540);
    pvVar19 = (void *)((ulong)&local_540 | 1);
    if ((local_540 & 1) != 0) {
      pvVar19 = local_530;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_558,(ulong)pvVar19);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_558);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_558);
    local_570 = 0;
    uStack_568 = 0;
    pvStack_268 = (void *)((ulong)&local_540 | 1);
    if ((local_540 & 1) != 0) {
      pvStack_268 = local_530;
    }
    local_560 = (void *)0x0;
    local_270 = &DAT_0051217f;
    pcVar11 = (char *)((ulong)&local_558 | 1);
    if ((local_558 & 1) != 0) {
      pcVar11 = local_548;
    }
    local_258 = (undefined4)*(undefined8 *)(this + 0x38);
    local_574 = 200;
                    /* try { // try from 0076d4f8 to 0076d593 has its CatchHandler @ 0076dc98 */
    local_260 = puVar9;
    bVar5 = AndroidHTTPSRequest::httpPOST
                      ((char *)&local_470,pcVar11,0x50a39f,(FormPostData *)0x1,
                       (basic_string *)&local_270,(Range *)&local_570,(uint *)0x0,(map *)&local_574)
    ;
    bVar4 = local_574 != 200;
    if (((bVar5 ^ 1) & 1 | bVar4) != 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 0076d9f4 to 0076d9ff has its CatchHandler @ 0076da3c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pvVar19 = (void *)((ulong)&local_570 | 1);
      if ((local_570 & 1) != 0) {
        pvVar19 = local_560;
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        "Server returned an error\n%s",pvVar19);
      puVar14 = (undefined2 *)operator_new(0x20);
      *puVar14 = 0;
      *(undefined8 *)(puVar14 + 0xc) = 0;
      GenericSaveGameUtil::readSaveGameFinish(ScriptingSavegameReport::StaticCallback,puVar14);
      uStack_3c8._4_4_ = (uint)((ulong)uStack_3c8 >> 0x20) & 0xff000000;
      local_3d0 = (basic_string_conflict *)CONCAT44(local_3d0._4_4_,9);
      uStack_3b8._4_4_ = (uint)((ulong)uStack_3b8 >> 0x20) & 0xff000000;
      local_3a8 = local_3a8 & 0xff00000000000000;
      uStack_398 = 0;
      uStack_392 = 0;
      uStack_394 = 0;
      local_388 = 0;
      local_382 = 0;
      local_384 = 0;
      local_378 = 0;
      local_372 = 0;
      local_374 = 0;
      local_368 = 0;
      local_362 = 0;
      local_364 = 0;
      local_358 = 0;
      local_352 = 0;
      local_354 = 0;
      local_348 = 0;
      local_342 = 0;
      local_344 = 0;
      local_338 = 0;
      local_332 = 0;
      local_334 = 0;
      local_328 = 0;
      local_322 = 0;
      local_324 = 0;
      local_318 = 0;
      local_312 = 0;
      local_314 = 0;
      local_308 = 0;
      local_302 = 0;
      local_304 = 0;
      local_2f8 = 0;
      local_2f2 = 0;
      local_2f4 = 0;
      local_2e8 = 0;
      local_2e2 = 0;
      local_2e4 = 0;
      local_2d8 = 0;
      local_2d2 = 0;
      local_2d4 = 0;
      local_2c8 = 0;
      local_2c2 = 0;
      local_2c4 = 0;
      local_2b8 = 0;
      local_2b2 = 0;
      local_2b4 = 0;
      local_2a8 = 0;
      local_2a2 = 0;
      local_2a4 = 0;
      local_298 = 0;
      local_292 = 0;
      local_294 = 0;
      local_288 = 0;
      local_282 = 0;
      local_284 = 0;
      local_278 = 0;
      local_272 = 0;
      uStack_3c8 = (basic_string_conflict *)CONCAT44(uStack_3c8._4_4_,1);
      local_274 = 0;
      local_3c0 = (undefined8 *)((ulong)local_3c0 & 0xffffffff00000000);
      uStack_3b8 = CONCAT44(uStack_3b8._4_4_,4);
                    /* try { // try from 0076d6b0 to 0076d6d7 has its CatchHandler @ 0076dc84 */
      ScriptSystemManager::getInstance();
      pLVar15 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
      pSVar2 = *(ScriptingSavegameUploadReport **)(this + 0x10);
      if (((byte)*this & 1) == 0) {
        pSVar2 = this + 1;
      }
      LuauScriptSystem::invokeScriptMethod
                (pLVar15,(char *)pSVar2,(MethodInvocation *)&local_3d0,2,0,*(void **)(this + 0x18));
    }
    operator_delete__(puVar9);
    if ((local_570 & 1) != 0) {
      operator_delete(local_560);
    }
    if ((local_558 & 1) != 0) {
      operator_delete(local_548);
    }
    if ((local_540 & 1) != 0) {
      operator_delete(local_530);
    }
    AndroidHTTPSRequest::~AndroidHTTPSRequest((AndroidHTTPSRequest *)&local_470);
    MemoryBufferedFile::~MemoryBufferedFile((MemoryBufferedFile *)&local_510);
    if (((byte)local_4e0 & 1) != 0) {
      operator_delete(local_4d0);
    }
    DomXMLFile::~DomXMLFile(aDStack_150);
    if ((local_4c8[0] & 1) != 0) {
      operator_delete(local_4b8);
    }
    if ((local_4b0 & 1) != 0) {
      operator_delete(local_4a0);
    }
    ZipArchiveWriter::~ZipArchiveWriter(aZStack_498);
    if (((bVar5 ^ 1) & 1 | bVar4) != 0) goto LAB_0076d8bc;
  }
  puVar14 = (undefined2 *)operator_new(0x20);
  *puVar14 = 0;
  *(undefined8 *)(puVar14 + 0xc) = 0;
  GenericSaveGameUtil::readSaveGameFinish(ScriptingSavegameReport::StaticCallback,puVar14);
  uStack_3c8._4_4_ = (uint)((ulong)uStack_3c8 >> 0x20) & 0xff000000;
  uStack_3c8 = (basic_string_conflict *)CONCAT44(uStack_3c8._4_4_,1);
  uStack_3b8._4_4_ = (uint)((ulong)uStack_3b8 >> 0x20) & 0xff000000;
  local_3a8 = local_3a8 & 0xff00000000000000;
  uStack_398 = 0;
  uStack_392 = 0;
  uStack_394 = 0;
  local_388 = 0;
  local_382 = 0;
  local_384 = 0;
  local_378 = 0;
  local_372 = 0;
  local_374 = 0;
  local_368 = 0;
  local_362 = 0;
  local_364 = 0;
  local_358 = 0;
  local_352 = 0;
  local_354 = 0;
  local_348 = 0;
  local_342 = 0;
  local_344 = 0;
  local_338 = 0;
  local_332 = 0;
  local_334 = 0;
  local_328 = 0;
  local_322 = 0;
  local_324 = 0;
  local_318 = 0;
  local_312 = 0;
  local_314 = 0;
  local_308 = 0;
  local_302 = 0;
  local_304 = 0;
  local_2f8 = 0;
  local_2f2 = 0;
  local_2f4 = 0;
  local_2e8 = 0;
  local_2e2 = 0;
  local_2e4 = 0;
  local_2d8 = 0;
  local_2d2 = 0;
  local_2d4 = 0;
  local_2c8 = 0;
  local_2c2 = 0;
  local_2c4 = 0;
  local_2b8 = 0;
  local_2b2 = 0;
  local_2b4 = 0;
  local_2a8 = 0;
  local_2a2 = 0;
  local_2a4 = 0;
  local_298 = 0;
  local_292 = 0;
  local_294 = 0;
  local_288 = 0;
  local_282 = 0;
  local_284 = 0;
  local_272 = 0;
  local_274 = 0;
  local_3d0 = (basic_string_conflict *)CONCAT44(local_3d0._4_4_,param_1);
  local_278 = 0;
  local_3c0 = (undefined8 *)CONCAT44(local_3c0._4_4_,0x3f800000);
  uStack_3b8 = CONCAT44(uStack_3b8._4_4_,4);
  ScriptSystemManager::getInstance();
  pLVar15 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
  pSVar2 = *(ScriptingSavegameUploadReport **)(this + 0x10);
  if (((byte)*this & 1) == 0) {
    pSVar2 = this + 1;
  }
  LuauScriptSystem::invokeScriptMethod
            (pLVar15,(char *)pSVar2,(MethodInvocation *)&local_3d0,2,0,*(void **)(this + 0x18));
LAB_0076d8bc:
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


