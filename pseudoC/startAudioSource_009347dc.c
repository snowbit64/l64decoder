// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startAudioSource
// Entry Point: 009347dc
// Size: 2496 bytes
// Signature: undefined __cdecl startAudioSource(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startAudioSource(void*, char const*, char const**) */

void I3DSceneGraphFactory::startAudioSource(void *param_1,char *param_2,char **param_3)

{
  char **ppcVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  char **ppcVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  byte *pbVar10;
  char **__dest;
  float *__dest_00;
  AudioSource *this;
  long *plVar11;
  size_t sVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  void *pvVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ushort local_138;
  undefined local_136;
  void *local_128;
  undefined8 local_120;
  size_t local_118;
  void *local_110;
  char **local_108;
  byte *local_100;
  float *local_f8;
  float *local_f0;
  float *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  void *local_d0;
  uint local_c8 [4];
  char **local_b8;
  char **local_b0;
  char **local_a8;
  long local_a0;
  
  lVar4 = tpidr_el0;
  local_a0 = *(long *)(lVar4 + 0x28);
  pcVar8 = (char *)ExpatUtil::getAttr("name",param_3);
  if (pcVar8 == (char *)0x0) goto LAB_009350f0;
  local_c8[0] = 0;
  local_b0 = (char **)0x0;
  local_a8 = (char **)0x0;
  local_b8 = (char **)0x0;
  local_108 = param_3;
                    /* try { // try from 00934844 to 00934853 has its CatchHandler @ 00935258 */
  pcVar9 = (char *)ExpatUtil::getAttr("fileIds",param_3);
  if (pcVar9 == (char *)0x0) {
                    /* try { // try from 00934898 to 009348a7 has its CatchHandler @ 00935200 */
    pcVar9 = (char *)ExpatUtil::getAttr("fileId",param_3);
    if (pcVar9 != (char *)0x0) {
      uVar6 = atoi(pcVar9);
                    /* try { // try from 009348bc to 009348d7 has its CatchHandler @ 00935210 */
      local_100 = (byte *)I3DLoad::findFilePath((I3DLoad *)param_1,uVar6);
      if (local_100 == (byte *)0x0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0
           )) {
                    /* try { // try from 00935160 to 0093516b has its CatchHandler @ 0093519c */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
                    /* try { // try from 00934d64 to 00934d7f has its CatchHandler @ 00935210 */
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning: AudioSource \'%s\' file not found %s.\n",pcVar8,pcVar9);
      }
      else {
        SmallVector<char_const*,1u>::push_back
                  ((SmallVector<char_const*,1u> *)local_c8,(char **)&local_100);
      }
    }
  }
  else {
    local_100 = (byte *)0x0;
    local_f8 = (float *)0x0;
    local_f0 = (float *)0x0;
    pbVar10 = (byte *)strlen(pcVar9);
    if ((byte *)0xffffffffffffffef < pbVar10) {
                    /* try { // try from 00935138 to 0093513f has its CatchHandler @ 00935240 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (pbVar10 < (byte *)0x17) {
      pvVar18 = (void *)((ulong)&local_e0 | 1);
      local_e0 = (byte *)CONCAT71(local_e0._1_7_,(char)((int)pbVar10 << 1));
      if (pbVar10 != (byte *)0x0) goto LAB_009348fc;
    }
    else {
                    /* try { // try from 009348e4 to 009348eb has its CatchHandler @ 00935240 */
      pvVar18 = operator_new((ulong)(pbVar10 + 0x10) & 0xfffffffffffffff0);
      local_e0 = (byte *)((ulong)(pbVar10 + 0x10) & 0xfffffffffffffff0 | 1);
      local_d8 = pbVar10;
      local_d0 = pvVar18;
LAB_009348fc:
      memcpy(pvVar18,pcVar9,(size_t)pbVar10);
    }
    *(byte *)((long)pvVar18 + (long)pbVar10) = 0;
    uVar13 = local_120 >> 0x10;
    local_120 = CONCAT62((uint6)uVar13 & 0xffffffffff00,0x2002);
                    /* try { // try from 0093491c to 00934933 has its CatchHandler @ 00935218 */
    StringUtil::split((basic_string *)&local_e0,(basic_string *)&local_120,(vector *)&local_100,true
                      ,true);
    if ((local_120 & 1) != 0) {
      operator_delete(local_110);
    }
    if (((ulong)local_e0 & 1) != 0) {
      operator_delete(local_d0);
    }
    ppcVar5 = local_b0;
    ppcVar1 = local_b8;
    pbVar16 = (byte *)local_f8;
    pbVar10 = local_100;
    pbVar17 = (byte *)local_f8;
    if ((long)local_f8 - (long)local_100 != 0) {
      uVar13 = ((long)local_f8 - (long)local_100 >> 3) * -0x5555555555555555;
      if (((uVar13 & 0xfffffffe) != 0) &&
         (uVar13 = uVar13 & 0xffffffff, (ulong)((long)local_a8 - (long)local_b8 >> 3) < uVar13)) {
                    /* try { // try from 0093499c to 0093499f has its CatchHandler @ 009351c8 */
        __dest = (char **)operator_new(uVar13 << 3);
        sVar12 = (long)ppcVar5 - (long)ppcVar1;
        if (0 < (long)sVar12) {
          memcpy(__dest,ppcVar1,sVar12);
        }
        local_b8 = __dest;
        local_b0 = (char **)((long)__dest + sVar12);
        local_a8 = __dest + uVar13;
        if (ppcVar1 != (char **)0x0) {
          operator_delete(ppcVar1);
          pbVar10 = local_100;
          pbVar16 = (byte *)local_f8;
        }
      }
      pbVar17 = pbVar10;
      if (pbVar16 != pbVar10) {
        uVar13 = 0;
        do {
          pbVar10 = pbVar10 + uVar13 * 0x18;
          pbVar16 = *(byte **)(pbVar10 + 0x10);
          if ((*pbVar10 & 1) == 0) {
            pbVar16 = pbVar10 + 1;
          }
          if (pbVar16 == (byte *)0x0) {
            local_e0 = (byte *)0x0;
LAB_00934a74:
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar7 != 0)) {
                    /* try { // try from 00934aa0 to 00934aa7 has its CatchHandler @ 009351b0 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                              "Warning: AudioSource \'%s\' file not found %s.\n",pcVar8,pbVar16);
          }
          else {
            uVar6 = atoi((char *)pbVar16);
            local_e0 = (byte *)I3DLoad::findFilePath((I3DLoad *)param_1,uVar6);
            if (local_e0 == (byte *)0x0) goto LAB_00934a74;
                    /* try { // try from 00934a10 to 00934a8f has its CatchHandler @ 009352b0 */
            SmallVector<char_const*,1u>::push_back
                      ((SmallVector<char_const*,1u> *)local_c8,(char **)&local_e0);
          }
          uVar13 = (ulong)((int)uVar13 + 1);
          uVar14 = ((long)local_f8 - (long)local_100 >> 3) * -0x5555555555555555;
          pbVar10 = local_100;
          pbVar17 = (byte *)local_f8;
        } while (uVar13 <= uVar14 && uVar14 - uVar13 != 0);
      }
    }
    pbVar16 = pbVar10;
    if (pbVar10 != (byte *)0x0) {
      while (pbVar15 = pbVar17, pbVar15 != pbVar10) {
        pbVar17 = pbVar15 + -0x18;
        pbVar16 = local_100;
        if ((*pbVar17 & 1) != 0) {
          operator_delete(*(void **)(pbVar15 + -8));
          pbVar16 = local_100;
        }
      }
      local_f8 = (float *)pbVar10;
      operator_delete(pbVar16);
    }
  }
  local_100 = (byte *)((ulong)local_100 & 0xffffffff00000000);
  local_f0 = (float *)0x0;
  local_e8 = (float *)0x0;
  local_f8 = (float *)0x0;
                    /* try { // try from 00934b2c to 00934b37 has its CatchHandler @ 00935254 */
  pcVar9 = (char *)ExpatUtil::getAttr("randomPlayback",local_108);
  fVar20 = 0.0;
  if ((pcVar9 == (char *)0x0) || (iVar7 = strcasecmp(pcVar9,"false"), iVar7 == 0)) {
    fVar21 = 0.0;
  }
  else {
                    /* try { // try from 00934b50 to 00934b5f has its CatchHandler @ 0093520c */
    pcVar9 = (char *)ExpatUtil::getAttr("probabilities",param_3);
    if (pcVar9 != (char *)0x0) {
      local_e0 = (byte *)0x0;
      local_d8 = (byte *)0x0;
      local_d0 = (void *)0x0;
      sVar12 = strlen(pcVar9);
      if (0xffffffffffffffef < sVar12) {
                    /* try { // try from 00935140 to 00935147 has its CatchHandler @ 009351fc */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar12 < 0x17) {
        pvVar18 = (void *)((ulong)&local_120 | 1);
        local_120 = CONCAT71(local_120._1_7_,(char)((int)sVar12 << 1));
        if (sVar12 != 0) goto LAB_00934bcc;
      }
      else {
        uVar13 = sVar12 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00934bb4 to 00934bbb has its CatchHandler @ 009351fc */
        pvVar18 = operator_new(uVar13);
        local_120 = uVar13 | 1;
        local_118 = sVar12;
        local_110 = pvVar18;
LAB_00934bcc:
        memcpy(pvVar18,pcVar9,sVar12);
      }
      *(undefined *)((long)pvVar18 + sVar12) = 0;
      local_136 = 0;
      local_138 = 0x2002;
                    /* try { // try from 00934bec to 00934c03 has its CatchHandler @ 009351d0 */
      StringUtil::split((basic_string *)&local_120,(basic_string *)&local_138,(vector *)&local_e0,
                        true,true);
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      if ((local_120 & 1) != 0) {
        operator_delete(local_110);
      }
      pbVar17 = local_d8;
      pbVar10 = local_e0;
      pfVar3 = local_f0;
      pfVar2 = local_f8;
      uVar13 = ((long)local_d8 - (long)local_e0 >> 3) * -0x5555555555555555;
      pbVar16 = local_d8;
      if (uVar13 - local_c8[0] == 0) {
        if (((uVar13 & 0xfffffffe) != 0) &&
           (uVar13 = uVar13 & 0xffffffff, (ulong)((long)local_e8 - (long)local_f8 >> 2) < uVar13)) {
                    /* try { // try from 00934c74 to 00934c77 has its CatchHandler @ 009351c4 */
          __dest_00 = (float *)operator_new(uVar13 << 2);
          sVar12 = (long)pfVar3 - (long)pfVar2;
          if (0 < (long)sVar12) {
            memcpy(__dest_00,pfVar2,sVar12);
          }
          local_f8 = __dest_00;
          local_f0 = (float *)((long)__dest_00 + sVar12);
          local_e8 = __dest_00 + uVar13;
          if (pfVar2 != (float *)0x0) {
            operator_delete(pfVar2);
            pbVar10 = local_e0;
            pbVar17 = local_d8;
          }
        }
        pbVar16 = pbVar10;
        if (pbVar17 != pbVar10) {
          uVar13 = 0;
          do {
            pbVar10 = pbVar10 + uVar13 * 0x18;
            pbVar16 = *(byte **)(pbVar10 + 0x10);
            if ((*pbVar10 & 1) == 0) {
              pbVar16 = pbVar10 + 1;
            }
            dVar19 = atof((char *)pbVar16);
            local_120 = CONCAT44(local_120._4_4_,(float)dVar19);
                    /* try { // try from 00934cf0 to 00934cfb has its CatchHandler @ 0093527c */
            SmallVector<float,1u>::push_back
                      ((SmallVector<float,1u> *)&local_100,(float *)&local_120);
            uVar13 = (ulong)((int)uVar13 + 1);
            uVar14 = ((long)local_d8 - (long)local_e0 >> 3) * -0x5555555555555555;
            pbVar10 = local_e0;
            pbVar16 = local_d8;
          } while (uVar13 <= uVar14 && uVar14 - uVar13 != 0);
        }
      }
      pbVar17 = pbVar10;
      if (pbVar10 != (byte *)0x0) {
        while (pbVar15 = pbVar16, pbVar15 != pbVar10) {
          pbVar16 = pbVar15 + -0x18;
          pbVar17 = local_e0;
          if ((*pbVar16 & 1) != 0) {
            operator_delete(*(void **)(pbVar15 + -8));
            pbVar17 = local_e0;
          }
        }
        local_d8 = pbVar10;
        operator_delete(pbVar17);
      }
    }
                    /* try { // try from 00934d90 to 00934d9f has its CatchHandler @ 00935208 */
    pcVar9 = (char *)ExpatUtil::getAttr("retriggerDelay",param_3);
    fVar21 = 0.0;
    if (pcVar9 != (char *)0x0) {
      local_e0 = (byte *)0x0;
      local_d8 = (byte *)0x0;
      local_d0 = (void *)0x0;
      sVar12 = strlen(pcVar9);
      if (0xffffffffffffffef < sVar12) {
                    /* try { // try from 00935148 to 0093514f has its CatchHandler @ 009351f8 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar12 < 0x17) {
        pvVar18 = (void *)((ulong)&local_120 | 1);
        local_120 = CONCAT71(local_120._1_7_,(char)((int)sVar12 << 1));
        if (sVar12 != 0) goto LAB_00934e08;
      }
      else {
        uVar13 = sVar12 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00934df0 to 00934df7 has its CatchHandler @ 009351f8 */
        pvVar18 = operator_new(uVar13);
        local_120 = uVar13 | 1;
        local_118 = sVar12;
        local_110 = pvVar18;
LAB_00934e08:
        memcpy(pvVar18,pcVar9,sVar12);
      }
      *(undefined *)((long)pvVar18 + sVar12) = 0;
      local_136 = 0;
      local_138 = 0x2002;
                    /* try { // try from 00934e28 to 00934e3f has its CatchHandler @ 009351cc */
      StringUtil::split((basic_string *)&local_120,(basic_string *)&local_138,(vector *)&local_e0,
                        true,true);
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      if ((local_120 & 1) != 0) {
        operator_delete(local_110);
      }
      pbVar17 = local_d8;
      pbVar16 = local_e0;
      pbVar10 = pbVar16;
      if ((long)local_d8 - (long)local_e0 == 0x30) {
        pbVar15 = *(byte **)(local_e0 + 0x10);
        if ((*local_e0 & 1) == 0) {
          pbVar15 = local_e0 + 1;
        }
        dVar19 = atof((char *)pbVar15);
        fVar21 = (float)dVar19;
        pbVar15 = pbVar16 + 0x19;
        if ((pbVar16[0x18] & 1) != 0) {
          pbVar15 = *(byte **)(pbVar16 + 0x28);
        }
        dVar19 = atof((char *)pbVar15);
        fVar20 = (float)dVar19;
      }
      else {
        fVar21 = 0.0;
        fVar20 = 0.0;
        if (local_e0 == (byte *)0x0) goto LAB_00934ef8;
      }
      while (pbVar15 = pbVar17, pbVar15 != pbVar16) {
        pbVar17 = pbVar15 + -0x18;
        pbVar10 = local_e0;
        if ((*pbVar17 & 1) != 0) {
          operator_delete(*(void **)(pbVar15 + -8));
          pbVar10 = local_e0;
        }
      }
      local_d8 = pbVar16;
      operator_delete(pbVar10);
    }
  }
LAB_00934ef8:
  local_e0 = (byte *)CONCAT44(local_e0._4_4_,0x41200000);
                    /* try { // try from 00934f04 to 00934f1b has its CatchHandler @ 0093526c */
  pcVar9 = (char *)ExpatUtil::getAttr("range",local_108);
  if (pcVar9 == (char *)0x0) {
    fVar22 = 10.0;
  }
  else {
    StringUtil::atof(pcVar9,(float *)&local_e0);
    fVar22 = (float)local_e0;
  }
  local_e0 = (byte *)CONCAT44(local_e0._4_4_,0x3f800000);
                    /* try { // try from 00934f34 to 00934f4b has its CatchHandler @ 00935268 */
  pcVar9 = (char *)ExpatUtil::getAttr("innerRange",local_108);
  if (pcVar9 == (char *)0x0) {
    fVar23 = 1.0;
  }
  else {
    StringUtil::atof(pcVar9,(float *)&local_e0);
    fVar23 = (float)local_e0;
  }
  local_e0 = (byte *)CONCAT44(local_e0._4_4_,0x3f800000);
                    /* try { // try from 00934f64 to 00934f7b has its CatchHandler @ 00935264 */
  pcVar9 = (char *)ExpatUtil::getAttr("volume",local_108);
  if (pcVar9 == (char *)0x0) {
    fVar24 = 1.0;
  }
  else {
    StringUtil::atof(pcVar9,(float *)&local_e0);
    fVar24 = (float)local_e0;
  }
                    /* try { // try from 00934f8c to 00934f9f has its CatchHandler @ 00935260 */
  pcVar9 = (char *)ExpatUtil::getAttr("loops",local_108);
  if (pcVar9 == (char *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = StringUtil::strtouint(pcVar9);
  }
                    /* try { // try from 00934fac to 00934fbf has its CatchHandler @ 00935278 */
  pcVar9 = (char *)ExpatUtil::getAttr("audioGroup",param_3);
  uVar6 = AudioSource::getGroupFromName(pcVar9);
                    /* try { // try from 00934fc4 to 00934fcb has its CatchHandler @ 00935274 */
  this = (AudioSource *)operator_new(0x298);
  ppcVar1 = (char **)((ulong)local_c8 | 4);
  if (1 < local_c8[0]) {
    ppcVar1 = local_b8;
  }
  pfVar2 = (float *)((ulong)&local_100 | 4);
  if (1 < (uint)local_100) {
    pfVar2 = local_f8;
  }
  pfVar3 = (float *)0x0;
  if ((uint)local_100 != 0) {
    pfVar3 = pfVar2;
  }
                    /* try { // try from 0093500c to 0093502f has its CatchHandler @ 00935244 */
  AudioSource::AudioSource
            (this,pcVar8,ppcVar1,local_c8[0],fVar22,fVar23,fVar24,iVar7,pfVar3,fVar21,fVar20,uVar6,
             *(STREAM_QUEUE *)((long)param_1 + 0x254));
                    /* try { // try from 00935030 to 0093504f has its CatchHandler @ 00935274 */
  readTransformGroup((I3DReader *)&local_108,(I3DLoad *)param_1,(TransformGroup *)this,false,false,
                     true,false);
                    /* try { // try from 00935054 to 0093505f has its CatchHandler @ 00935270 */
  pcVar8 = (char *)ExpatUtil::getAttr("color",local_108);
  if (pcVar8 != (char *)0x0) {
                    /* try { // try from 00935064 to 0093508b has its CatchHandler @ 0093528c */
    pcVar8 = (char *)StringUtil::atof(pcVar8,(float *)&local_e0);
    pcVar8 = (char *)StringUtil::atof(pcVar8,(float *)((long)&local_e0 + 4));
    pcVar8 = (char *)StringUtil::atof(pcVar8,(float *)&local_d8);
    StringUtil::atof(pcVar8,(float *)((long)&local_d8 + 4));
    *(byte **)(this + 0x280) = local_e0;
    *(undefined4 *)(this + 0x288) = (undefined4)local_d8;
  }
  plVar11 = *(long **)(*(long *)((long)param_1 + 0x280) + 0x60);
                    /* try { // try from 009350ac to 009350b7 has its CatchHandler @ 00935270 */
  (**(code **)(*plVar11 + 0x18))(plVar11,this,0xffffffff);
  local_100 = (byte *)((ulong)local_100 & 0xffffffff00000000);
  *(AudioSource **)(*(long *)((long)param_1 + 0x280) + 0x60) = this;
  if (local_f8 != (float *)0x0) {
    local_f0 = local_f8;
    operator_delete(local_f8);
  }
  local_c8[0] = 0;
  if (local_b8 != (char **)0x0) {
    local_b0 = local_b8;
    operator_delete(local_b8);
  }
LAB_009350f0:
  if (*(long *)(lVar4 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


