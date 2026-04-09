// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestAdContentAsync
// Entry Point: 00af3304
// Size: 3996 bytes
// Signature: undefined __thiscall requestAdContentAsync(GiantsAdsProvider * this, bool * param_1, AndroidHTTPSRequest * param_2)


/* WARNING: Type propagation algorithm not settling */
/* GiantsAdsProvider::requestAdContentAsync(bool volatile&, AndroidHTTPSRequest&) */

undefined4 __thiscall
GiantsAdsProvider::requestAdContentAsync
          (GiantsAdsProvider *this,bool *param_1,AndroidHTTPSRequest *param_2)

{
  uint uVar1;
  basic_string *pbVar2;
  long lVar3;
  bool bVar4;
  undefined *__src;
  undefined8 *this_00;
  undefined2 *puVar5;
  undefined8 *this_01;
  long *plVar6;
  basic_ostream *pbVar7;
  size_t sVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined2 *__n;
  ulong *puVar14;
  void *pvVar15;
  char **ppcVar16;
  int iVar17;
  long lVar18;
  GiantsAdsProvider *pGVar19;
  Object *pOVar20;
  char **ppcVar21;
  bool bVar22;
  ulong uVar23;
  void *pvVar24;
  char *pcVar25;
  undefined8 *puVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 local_2fc;
  undefined8 local_2f8;
  size_t local_2f0;
  void *local_2e8;
  uint local_2dc;
  uchar *local_2d8;
  ulong local_2d0;
  ulong uStack_2c8;
  basic_string *local_2c0;
  ulong local_2b0;
  ulong uStack_2a8;
  char *local_2a0;
  undefined8 local_298;
  undefined2 *local_290;
  void *local_288;
  uint local_280;
  uint uStack_27c;
  undefined8 *local_278;
  uint local_26c;
  uint *local_268;
  uint *local_260;
  uint *local_258;
  map amStack_24c [4];
  ulong local_248;
  undefined8 uStack_240;
  char *local_238;
  undefined8 local_230;
  size_t local_228;
  char *local_220;
  byte local_218 [16];
  void *local_208;
  byte local_200 [8];
  ulong local_1f8;
  char *local_1f0;
  undefined2 local_1e8 [4];
  undefined8 *local_1e0;
  undefined8 local_1d8;
  ulong local_1d0;
  char *local_1c8;
  ulong local_1c0;
  undefined8 uStack_1b8;
  char *local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined local_190 [6];
  undefined uStack_18a;
  undefined uStack_189;
  undefined uStack_188;
  undefined2 local_187;
  undefined local_185;
  uint local_184;
  undefined1 *local_180;
  undefined **local_178 [8];
  ulong local_138;
  undefined8 uStack_130;
  void *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_110 [17];
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  Mutex::enterCriticalSection();
  lVar18 = *(long *)(this + 0xa0);
  if (lVar18 != *(long *)(this + 0xa8)) {
    uVar23 = (ulong)((byte)this[0xd8] >> 1);
    if (((byte)this[0xd8] & 1) != 0) {
      uVar23 = *(ulong *)(this + 0xe0);
    }
    if (uVar23 != 0) {
      this_00 = (undefined8 *)operator_new(0x18);
      uVar23 = 0;
      puVar26 = (undefined8 *)((ulong)local_190 | 1);
      this_00[1] = 0;
      this_00[2] = 0;
      *this_00 = 0;
      do {
        this_01 = (undefined8 *)operator_new(0x28);
        this_01[4] = 0;
        *(undefined4 *)(this_01 + 4) = 0x3f800000;
        this_01[1] = 0;
        *this_01 = 0;
        this_01[3] = 0;
        this_01[2] = 0;
        StringUtil::base64Encode
                  ((uchar *)(*(long *)(lVar18 + uVar23 * 8) + 4),0x10,true,(char **)&local_1d8);
        uStack_18a = 0;
        local_190[0] = (basic_iostream<char,std::__ndk1::char_traits<char>>)0xa;
        *(undefined4 *)puVar26 = 0x4970616d;
        *(undefined *)((long)puVar26 + 4) = 100;
                    /* try { // try from 00af3444 to 00af344f has its CatchHandler @ 00af44b0 */
        JSONUtil::Object::addAtom
                  ((Object *)this_01,(basic_string *)local_190,
                   (char *)CONCAT71(local_1d8._1_7_,(byte)local_1d8));
        if (((byte)local_190[0] & 1) != 0) {
          operator_delete(local_180);
        }
        if ((void *)CONCAT71(local_1d8._1_7_,(byte)local_1d8) != (void *)0x0) {
          operator_delete__((void *)CONCAT71(local_1d8._1_7_,(byte)local_1d8));
        }
        local_190[0] = (basic_iostream<char,std::__ndk1::char_traits<char>>)0x16;
        local_184 = local_184 & 0xffffff00;
        *(undefined4 *)((long)puVar26 + 7) = 0x6449746e;
        lVar18 = *(long *)(this + 0xa0);
        *puVar26 = 0x6e656d6563616c70;
                    /* try { // try from 00af349c to 00af34a3 has its CatchHandler @ 00af44b4 */
        std::__ndk1::to_string(*(uint *)(*(long *)(lVar18 + uVar23 * 8) + 0x14));
        pcVar25 = (char *)((ulong)&local_1c0 | 1);
        if ((local_1c0 & 1) != 0) {
          pcVar25 = local_1b0;
        }
                    /* try { // try from 00af34b4 to 00af34bf has its CatchHandler @ 00af44bc */
        JSONUtil::Object::addAtom((Object *)this_01,(basic_string *)local_190,pcVar25);
        if ((local_1c0 & 1) != 0) {
          operator_delete(local_1b0);
        }
        if (((byte)local_190[0] & 1) != 0) {
          operator_delete(local_180);
        }
        local_185 = 0;
        local_190[0] = (basic_iostream<char,std::__ndk1::char_traits<char>>)0x14;
        *(undefined2 *)(puVar26 + 1) = 0x6449;
        *puVar26 = 0x65636e6174736e69;
                    /* try { // try from 00af3504 to 00af3513 has its CatchHandler @ 00af44dc */
        JSONUtil::Object::addAtom((Object *)this_01,(basic_string *)local_190,"0");
        if (((byte)local_190[0] & 1) != 0) {
          operator_delete(local_180);
        }
        local_190[0] = (basic_iostream<char,std::__ndk1::char_traits<char>>)0x16;
        local_184 = local_184 & 0xffffff00;
        *(undefined4 *)((long)puVar26 + 7) = 0x6f697461;
        lVar18 = *(long *)(this + 0xa0);
        *puVar26 = 0x6152746365707361;
                    /* try { // try from 00af3560 to 00af356b has its CatchHandler @ 00af44e0 */
        JSONUtil::Object::addAtom
                  ((Object *)this_01,(basic_string *)local_190,
                   *(char **)(s_aspectRatioMapping +
                             (ulong)*(uint *)(*(long *)(lVar18 + uVar23 * 8) + 0x18) * 8));
        if (((byte)local_190[0] & 1) != 0) {
          operator_delete(local_180);
        }
        puVar5 = (undefined2 *)operator_new(0x10);
        *(undefined8 **)(puVar5 + 4) = this_01;
        *puVar5 = 4;
        JSONUtil::Array::addAtom((Array *)this_00,(Atom *)puVar5);
        lVar18 = *(long *)(this + 0xa0);
        uVar23 = uVar23 + 1;
      } while (uVar23 < (ulong)(*(long *)(this + 0xa8) - lVar18 >> 3));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_1d8);
                    /* try { // try from 00af359c to 00af35a3 has its CatchHandler @ 00af43c4 */
      Mutex::leaveCriticalSection();
                    /* try { // try from 00af35a4 to 00af35ab has its CatchHandler @ 00af43bc */
      puVar26 = (undefined8 *)operator_new(0x28);
      puVar26[4] = 0;
      *(undefined4 *)(puVar26 + 4) = 0x3f800000;
      local_190[0] = (basic_iostream<char,std::__ndk1::char_traits<char>>)0x14;
      puVar26[1] = 0;
      *puVar26 = 0;
      puVar26[3] = 0;
      puVar26[2] = 0;
      local_185 = 0;
      local_187 = 0x7374;
      local_190._1_5_ = 0x6563616c70;
      uStack_18a = 0x6d;
      uStack_189 = 0x65;
      uStack_188 = 0x6e;
                    /* try { // try from 00af35f0 to 00af35fb has its CatchHandler @ 00af43a0 */
      JSONUtil::Object::addAtom((Object *)puVar26,(basic_string *)local_190,(Array *)this_00);
      if (((byte)local_190[0] & 1) != 0) {
        operator_delete(local_180);
      }
      local_1e8[0] = 4;
                    /* try { // try from 00af361c to 00af362b has its CatchHandler @ 00af4394 */
      local_1e0 = puVar26;
      JSONUtil::serialize((Atom *)local_1e8,1);
      local_110[0] = 0xfdbff0;
      uStack_188 = 0;
      local_187 = 0;
      local_185 = 0;
      local_184 = 0;
      local_190[0] = (basic_iostream<char,std::__ndk1::char_traits<char>>)0xc8;
      local_190._1_5_ = 0xfdbf;
      uStack_18a = 0;
      uStack_189 = 0;
      local_180 = (undefined1 *)0xfdbeb0;
                    /* try { // try from 00af3660 to 00af366b has its CatchHandler @ 00af4380 */
      std::__ndk1::ios_base::init(local_110);
      local_110[0] = 0xfdbed8;
      local_88 = 0;
      local_80 = 0xffffffff;
      local_190[0] = (basic_iostream<char,std::__ndk1::char_traits<char>>)0x88;
      local_190._1_5_ = 0xfdbe;
      uStack_18a = 0;
      uStack_189 = 0;
      local_180 = (undefined1 *)0xfdbeb0;
                    /* try { // try from 00af368c to 00af3693 has its CatchHandler @ 00af4360 */
      std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
      local_118 = 0x18;
      uStack_130 = 0;
      local_138 = 0;
      local_178[0] = &PTR__basic_stringbuf_00fd8fa0;
      uStack_120 = 0;
      local_128 = (void *)0x0;
                    /* try { // try from 00af36c8 to 00af37fb has its CatchHandler @ 00af447c */
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_180,"action=queryAds",0xf);
      plVar6 = (long *)std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 ((basic_ostream *)&local_180,"&productId=",0xb);
      *(uint *)((long)plVar6 + *(long *)(*plVar6 + -0x18) + 8) =
           *(uint *)((long)plVar6 + *(long *)(*plVar6 + -0x18) + 8) & 0xffffffb5 | 8;
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)plVar6,*(uint *)(this + 0x30)
                );
      pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_180,"&platform=",10);
      pGVar19 = *(GiantsAdsProvider **)(this + 0xe8);
      if (((byte)this[0xd8] & 1) == 0) {
        pGVar19 = this + 0xd9;
      }
      sVar8 = strlen((char *)pGVar19);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar7,(char *)pGVar19,sVar8);
      uVar23 = (ulong)((byte)local_1d8 >> 1);
      if (((byte)local_1d8 & 1) != 0) {
        uVar23 = local_1d0;
      }
      if (uVar23 != 0) {
        pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           ((basic_ostream *)&local_180,"&requestDateTime=",0x11);
        pcVar25 = (char *)((ulong)&local_1d8 | 1);
        if (((byte)local_1d8 & 1) != 0) {
          pcVar25 = local_1c8;
        }
        sVar8 = strlen(pcVar25);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar7,pcVar25,sVar8);
      }
      pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_180,"&placements=",0xc);
      pcVar25 = (char *)((ulong)local_200 | 1);
      uVar23 = (ulong)(local_200[0] >> 1);
      if ((local_200[0] & 1) != 0) {
        pcVar25 = local_1f0;
        uVar23 = local_1f8;
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar7,pcVar25,uVar23);
                    /* try { // try from 00af37fc to 00af3807 has its CatchHandler @ 00af435c */
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      __src = s_adsServerHostname;
      sVar8 = strlen(s_adsServerHostname);
      if (0xffffffffffffffef < sVar8) {
                    /* try { // try from 00af4278 to 00af427f has its CatchHandler @ 00af446c */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar8 < 0x17) {
        pcVar25 = (char *)((ulong)&local_230 | 1);
        local_230 = CONCAT71(local_230._1_7_,(char)((int)sVar8 << 1));
        if (sVar8 != 0) goto LAB_00af3870;
      }
      else {
        uVar23 = sVar8 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00af3850 to 00af3857 has its CatchHandler @ 00af446c */
        pcVar25 = (char *)operator_new(uVar23);
        local_230 = uVar23 | 1;
        local_228 = sVar8;
        local_220 = pcVar25;
LAB_00af3870:
        memcpy(pcVar25,__src,sVar8);
      }
      pcVar25[sVar8] = '\0';
                    /* try { // try from 00af3884 to 00af3897 has its CatchHandler @ 00af434c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_230);
      local_248 = 0;
      uStack_240 = 0;
      pcVar25 = (char *)((ulong)&local_230 | 1);
      if ((local_230 & 1) != 0) {
        pcVar25 = local_220;
      }
      uVar1 = (uint)local_218 | 1;
      if ((local_218[0] & 1) != 0) {
        uVar1 = (uint)local_208;
      }
      local_238 = (char *)0x0;
                    /* try { // try from 00af38d4 to 00af38f3 has its CatchHandler @ 00af4344 */
      uVar23 = AndroidHTTPSRequest::httpPOST
                         ((char *)param_2,pcVar25,uVar1,(FormPostData *)0x0,(basic_string *)0x0,
                          (Range *)&local_248,(uint *)0x0,amStack_24c);
      if ((uVar23 & 1) == 0) {
        uVar28 = 0;
      }
      else {
        local_1a0 = 0x3f800000;
        pcVar25 = (char *)((ulong)&local_248 | 1);
        if ((local_248 & 1) != 0) {
          pcVar25 = local_238;
        }
        uStack_1a8 = 0;
        local_1b0 = (char *)0x0;
        uStack_1b8 = 0;
        local_1c0 = 0;
                    /* try { // try from 00af392c to 00af3937 has its CatchHandler @ 00af4310 */
        uVar23 = JSONUtil::deserializeObject(pcVar25,(Object *)&local_1c0,(ParamSet *)0x0);
        if ((uVar23 & 1) == 0) {
          bVar22 = false;
          bVar4 = true;
        }
        else {
                    /* try { // try from 00af393c to 00af3957 has its CatchHandler @ 00af42bc */
          pcVar9 = (char *)JSONUtil::Object::getAtom
                                     ((Object *)&local_1c0,"timestampMs",(Atom *)&JSONUtil::s_nul,0)
          ;
          pcVar25 = *(char **)(pcVar9 + 8);
          if (*pcVar9 != '\x03') {
            pcVar25 = (char *)0x0;
          }
                    /* try { // try from 00af3968 to 00af3983 has its CatchHandler @ 00af42b4 */
          pcVar10 = (char *)JSONUtil::Object::getAtom
                                      ((Object *)&local_1c0,"imageUrl",(Atom *)&JSONUtil::s_nul,0);
          pcVar9 = *(char **)(pcVar10 + 8);
          if (*pcVar10 != '\x03') {
            pcVar9 = (char *)0x0;
          }
                    /* try { // try from 00af3998 to 00af39b3 has its CatchHandler @ 00af42ac */
          pcVar10 = (char *)JSONUtil::Object::getAtom
                                      ((Object *)&local_1c0,"placements",(Atom *)&JSONUtil::s_nul,0)
          ;
          bVar22 = false;
          plVar6 = *(long **)(pcVar10 + 8);
          bVar4 = true;
          if (*pcVar10 != '\x05') {
            plVar6 = (long *)0x0;
          }
          if (((pcVar25 != (char *)0x0) && (pcVar9 != (char *)0x0)) && (plVar6 != (long *)0x0)) {
                    /* try { // try from 00af39e4 to 00af3bf3 has its CatchHandler @ 00af433c */
            pcVar10 = (char *)JSONUtil::Object::getAtom
                                        ((Object *)&local_1c0,"impressionsSettings",(Atom *)0x0,0);
            if ((pcVar10 != (char *)0x0) && (*pcVar10 == '\x04')) {
              pcVar11 = (char *)JSONUtil::Object::getAtom
                                          (*(Object **)(pcVar10 + 8),"minExposureTimeMs",
                                           (Atom *)&JSONUtil::s_nul,0);
              iVar17 = (int)*(double *)(pcVar11 + 8);
              if (*pcVar11 != '\x02') {
                iVar17 = 10000;
              }
              *(int *)(this + 0xf8) = iVar17;
              pOVar20 = *(Object **)(pcVar10 + 8);
              if (*pcVar10 != '\x04') {
                pOVar20 = (Object *)0x0;
              }
              pcVar11 = (char *)JSONUtil::Object::getAtom
                                          (pOVar20,"minContinuousExposureTimeMs",
                                           (Atom *)&JSONUtil::s_nul,0);
              iVar17 = (int)*(double *)(pcVar11 + 8);
              if (*pcVar11 != '\x02') {
                iVar17 = 500;
              }
              *(int *)(this + 0xfc) = iVar17;
              pOVar20 = *(Object **)(pcVar10 + 8);
              if (*pcVar10 != '\x04') {
                pOVar20 = (Object *)0x0;
              }
              pcVar11 = (char *)JSONUtil::Object::getAtom
                                          (pOVar20,"minScreenCoveragePercent",
                                           (Atom *)&JSONUtil::s_nul,0);
              fVar27 = (float)(*(double *)(pcVar11 + 8) / 100.0);
              if (*pcVar11 != '\x02') {
                fVar27 = 0.015;
              }
              *(float *)(this + 0x100) = fVar27;
              pOVar20 = *(Object **)(pcVar10 + 8);
              if (*pcVar10 != '\x04') {
                pOVar20 = (Object *)0x0;
              }
              pcVar11 = (char *)JSONUtil::Object::getAtom
                                          (pOVar20,"maxScreenCoveragePercent",
                                           (Atom *)&JSONUtil::s_nul,0);
              fVar27 = (float)(*(double *)(pcVar11 + 8) / 100.0);
              if (*pcVar11 != '\x02') {
                fVar27 = 1.0;
              }
              *(float *)(this + 0x104) = fVar27;
              pOVar20 = *(Object **)(pcVar10 + 8);
              if (*pcVar10 != '\x04') {
                pOVar20 = (Object *)0x0;
              }
              pcVar11 = (char *)JSONUtil::Object::getAtom
                                          (pOVar20,"maxAngleDeg",(Atom *)&JSONUtil::s_nul,0);
              fVar27 = (float)*(double *)(pcVar11 + 8);
              if (*pcVar11 != '\x02') {
                fVar27 = 55.0;
              }
              uVar28 = MathUtil::degreeToRadian(fVar27);
              *(undefined4 *)(this + 0x108) = uVar28;
              pOVar20 = *(Object **)(pcVar10 + 8);
              if (*pcVar10 != '\x04') {
                pOVar20 = (Object *)0x0;
              }
              pcVar10 = (char *)JSONUtil::Object::getAtom
                                          (pOVar20,"coolOffPerdiodMs",(Atom *)&JSONUtil::s_nul,0);
              iVar17 = (int)*(double *)(pcVar10 + 8);
              if (*pcVar10 != '\x02') {
                iVar17 = 20000;
              }
              *(int *)(this + 0x10c) = iVar17;
            }
            Mutex::enterCriticalSection();
            uVar12 = strtoull(pcVar25,(char **)0x0,0);
            *(ulonglong *)(this + 0x188) = uVar12;
            uVar13 = Watch::getCurrentTicks();
            *(undefined8 *)(this + 400) = uVar13;
            Mutex::leaveCriticalSection();
            local_260 = (uint *)0x0;
            local_258 = (uint *)0x0;
            local_268 = (uint *)0x0;
            ppcVar21 = (char **)*plVar6;
            ppcVar16 = (char **)plVar6[1];
            uVar23 = (long)ppcVar16 - (long)ppcVar21;
            if (uVar23 != 0) {
              if (0x3333333333333330 < uVar23) {
                    /* try { // try from 00af4290 to 00af429b has its CatchHandler @ 00af42e4 */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00af3c30 to 00af3c33 has its CatchHandler @ 00af42e4 */
              local_260 = (uint *)operator_new(((long)uVar23 >> 3) * 0x28);
              local_258 = local_260 + ((long)uVar23 >> 3) * 10;
              ppcVar21 = (char **)*plVar6;
              ppcVar16 = (char **)plVar6[1];
            }
            local_268 = local_260;
            if (ppcVar21 == ppcVar16) {
              bVar22 = false;
            }
            else {
              pvVar24 = (void *)((ulong)&local_298 | 1);
              bVar22 = false;
              do {
                pcVar25 = *ppcVar21;
                if (*pcVar25 == '\x04') {
                    /* try { // try from 00af3cbc to 00af3ccf has its CatchHandler @ 00af43f4 */
                  pcVar10 = (char *)JSONUtil::Object::getAtom
                                              (*(Object **)(pcVar25 + 8),"campaignId",
                                               (Atom *)&JSONUtil::s_nul,0);
                  local_26c = (uint)*(double *)(pcVar10 + 8);
                  if (*pcVar10 != '\x02') {
                    local_26c = 0;
                  }
                  pOVar20 = *(Object **)(pcVar25 + 8);
                  if (*pcVar25 != '\x04') {
                    pOVar20 = (Object *)0x0;
                  }
                    /* try { // try from 00af3cf8 to 00af3d0b has its CatchHandler @ 00af4400 */
                  pcVar11 = (char *)JSONUtil::Object::getAtom
                                              (pOVar20,"mapId",(Atom *)&JSONUtil::s_nul,0);
                  pcVar10 = *(char **)(pcVar11 + 8);
                  if (*pcVar11 != '\x03') {
                    pcVar10 = (char *)0x0;
                  }
                    /* try { // try from 00af3d1c to 00af3d2b has its CatchHandler @ 00af43f8 */
                  StringUtil::base64Decode(pcVar10,true,(uchar **)&local_278,&uStack_27c);
                  pOVar20 = *(Object **)(pcVar25 + 8);
                  if (*pcVar25 != '\x04') {
                    pOVar20 = (Object *)0x0;
                  }
                    /* try { // try from 00af3d3c to 00af3d4f has its CatchHandler @ 00af4404 */
                  pcVar10 = (char *)JSONUtil::Object::getAtom
                                              (pOVar20,"placementId",(Atom *)&JSONUtil::s_nul,0);
                  local_280 = (uint)*(double *)(pcVar10 + 8);
                  if (*pcVar10 != '\x02') {
                    local_280 = 0;
                  }
                  pOVar20 = *(Object **)(pcVar25 + 8);
                  if (*pcVar25 != '\x04') {
                    pOVar20 = (Object *)0x0;
                  }
                    /* try { // try from 00af3d78 to 00af3d8b has its CatchHandler @ 00af43fc */
                  JSONUtil::Object::getAtom(pOVar20,"instanceId",(Atom *)&JSONUtil::s_nul,0);
                  pOVar20 = *(Object **)(pcVar25 + 8);
                  if (*pcVar25 != '\x04') {
                    pOVar20 = (Object *)0x0;
                  }
                  puVar5 = &JSONUtil::s_nul;
                    /* try { // try from 00af3d9c to 00af3daf has its CatchHandler @ 00af4408 */
                  pcVar25 = (char *)JSONUtil::Object::getAtom
                                              (pOVar20,"image",(Atom *)&JSONUtil::s_nul,0);
                  if ((*pcVar25 == '\x03') &&
                     (pcVar25 = *(char **)(pcVar25 + 8), pcVar25 != (char *)0x0)) {
                    __n = (undefined2 *)strlen(pcVar25);
                    if ((undefined2 *)0xffffffffffffffef < __n) {
                    /* try { // try from 00af4280 to 00af4287 has its CatchHandler @ 00af4338 */
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_length_error();
                    }
                    if (__n < (undefined2 *)0x17) {
                      local_298 = CONCAT71(local_298._1_7_,(char)((int)__n << 1));
                      pvVar15 = pvVar24;
                      if (__n != (undefined2 *)0x0) goto LAB_00af3e1c;
                    }
                    else {
                    /* try { // try from 00af3e00 to 00af3e07 has its CatchHandler @ 00af42e0 */
                      pvVar15 = operator_new((ulong)(__n + 8) & 0xfffffffffffffff0);
                      local_298 = (ulong)(__n + 8) & 0xfffffffffffffff0 | 1;
                      local_290 = __n;
                      local_288 = pvVar15;
LAB_00af3e1c:
                      puVar5 = __n;
                      memcpy(pvVar15,pcVar25,(size_t)__n);
                    }
                    *(undefined *)((long)pvVar15 + (long)__n) = 0;
                    /* try { // try from 00af3e30 to 00af3e3f has its CatchHandler @ 00af4330 */
                    std::__ndk1::operator+
                              ((__ndk1 *)this,(basic_string_conflict *)&local_298,
                               (basic_string_conflict *)puVar5);
                    /* try { // try from 00af3e40 to 00af3e4f has its CatchHandler @ 00af431c */
                    puVar14 = (ulong *)std::__ndk1::
                                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                       ::append((char *)&local_2d0);
                    local_2a0 = (char *)puVar14[2];
                    uStack_2a8 = puVar14[1];
                    local_2b0 = *puVar14;
                    puVar14[1] = 0;
                    puVar14[2] = 0;
                    *puVar14 = 0;
                    if ((local_2d0 & 1) != 0) {
                      operator_delete(local_2c0);
                    }
                    /* try { // try from 00af3e78 to 00af3e7f has its CatchHandler @ 00af4318 */
                    PathUtil::makeUnifiedPathInPlace((basic_string *)&local_2b0);
                    local_2d8 = (uchar *)0x0;
                    local_2dc = 0;
                    pcVar25 = (char *)((ulong)&local_2b0 | 1);
                    if ((local_2b0 & 1) != 0) {
                      pcVar25 = local_2a0;
                    }
                    /* try { // try from 00af3e9c to 00af3ebb has its CatchHandler @ 00af43cc */
                    pGVar19 = (GiantsAdsProvider *)
                              FileManager::exist((FileManager *)FileManager::s_singletonFileManager,
                                                 pcVar25);
                    if (((ulong)pGVar19 & 1) == 0) {
                      sVar8 = strlen(pcVar9);
                      if (0xffffffffffffffef < sVar8) {
                    /* try { // try from 00af4288 to 00af428f has its CatchHandler @ 00af42c4 */
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_length_error();
                      }
                      if (sVar8 < 0x17) {
                        local_2f8 = CONCAT71(local_2f8._1_7_,(char)((int)sVar8 << 1));
                        pvVar15 = (void *)((ulong)&local_2f8 | 1);
                        if (sVar8 != 0) goto LAB_00af3f1c;
                      }
                      else {
                        uVar23 = sVar8 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00af3f04 to 00af3f0b has its CatchHandler @ 00af42a4 */
                        pvVar15 = operator_new(uVar23);
                        local_2f8 = uVar23 | 1;
                        local_2f0 = sVar8;
                        local_2e8 = pvVar15;
LAB_00af3f1c:
                        memcpy(pvVar15,pcVar9,sVar8);
                      }
                      *(undefined *)((long)pvVar15 + sVar8) = 0;
                      pvVar15 = pvVar24;
                      if ((local_298 & 1) != 0) {
                        pvVar15 = local_288;
                      }
                    /* try { // try from 00af3f48 to 00af3f4f has its CatchHandler @ 00af42c8 */
                      puVar14 = (ulong *)std::__ndk1::
                                         basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                         ::append((char *)&local_2f8,(ulong)pvVar15);
                      local_2c0 = (basic_string *)puVar14[2];
                      uStack_2c8 = puVar14[1];
                      local_2d0 = *puVar14;
                      puVar14[1] = 0;
                      puVar14[2] = 0;
                      *puVar14 = 0;
                      if ((local_2f8 & 1) != 0) {
                        operator_delete(local_2e8);
                      }
                      local_2f8 = 0;
                      local_2f0 = 0;
                      local_2e8 = (void *)0x0;
                      local_2fc = 0;
                      pbVar2 = (basic_string *)((ulong)&local_2d0 | 1);
                      if ((local_2d0 & 1) != 0) {
                        pbVar2 = local_2c0;
                      }
                    /* try { // try from 00af3f98 to 00af3ff7 has its CatchHandler @ 00af42e8 */
                      uVar23 = AndroidHTTPSRequest::httpGET
                                         ((char *)param_2,pbVar2,(Range *)&local_2f8,(char *)0x0,
                                          (uint *)0x0,(map *)&local_2fc);
                      if ((uVar23 & 1) == 0) {
LAB_00af4028:
                        uVar23 = 0;
                      }
                      else {
                        sVar8 = local_2f8 >> 1 & 0x7f;
                        if ((local_2f8 & 1) != 0) {
                          sVar8 = local_2f0;
                        }
                        if (sVar8 == 0) goto LAB_00af4028;
                        bVar22 = true;
                        uVar23 = saveImageToGS2D(this,(basic_string *)&local_2f8,true,true,
                                                 (basic_string *)&local_2b0,&local_2d8,&local_2dc);
                        uVar23 = uVar23 & 0xffffffff;
                      }
                      if ((local_2f8 & 1) != 0) {
                        operator_delete(local_2e8);
                      }
                      if ((local_2d0 & 1) == 0) goto joined_r0x00af4040;
                      operator_delete(local_2c0);
                      if ((uVar23 & 1) != 0) goto LAB_00af4044;
LAB_00af408c:
                      if (local_2d8 != (uchar *)0x0) {
                        operator_delete__(local_2d8);
                      }
                    }
                    else {
                      uVar23 = loadImageFileContent
                                         (pGVar19,(basic_string *)&local_2b0,&local_2d8,&local_2dc);
joined_r0x00af4040:
                      if ((uVar23 & 1) == 0) goto LAB_00af408c;
LAB_00af4044:
                      if (local_2d8 == (uchar *)0x0) goto LAB_00af408c;
                      if (local_260 < local_258) {
                        *(uchar **)(local_260 + 8) = local_2d8;
                        *local_260 = local_26c;
                        local_260[5] = local_280;
                        local_260[6] = local_2dc;
                        uVar13 = *local_278;
                        *(undefined8 *)(local_260 + 3) = local_278[1];
                        *(undefined8 *)(local_260 + 1) = uVar13;
                        local_260 = local_260 + 10;
                      }
                      else {
                    /* try { // try from 00af4098 to 00af40b7 has its CatchHandler @ 00af43cc */
                        std::__ndk1::
                        vector<GiantsAdsProvider::ContentData,std::__ndk1::allocator<GiantsAdsProvider::ContentData>>
                        ::
                        __emplace_back_slow_path<unsigned_int&,unsigned_char*&,unsigned_int&,unsigned_char*&,unsigned_int&>
                                  ((vector<GiantsAdsProvider::ContentData,std::__ndk1::allocator<GiantsAdsProvider::ContentData>>
                                    *)&local_268,&local_26c,(uchar **)&local_278,&local_280,
                                   &local_2d8,&local_2dc);
                      }
                    }
                    if ((local_2b0 & 1) != 0) {
                      operator_delete(local_2a0);
                    }
                    if ((local_298 & 1) != 0) {
                      operator_delete(local_288);
                    }
                  }
                  if (local_278 != (undefined8 *)0x0) {
                    operator_delete__(local_278);
                  }
                  ppcVar16 = (char **)plVar6[1];
                }
                ppcVar21 = ppcVar21 + 1;
              } while (ppcVar21 != ppcVar16);
            }
                    /* try { // try from 00af4100 to 00af410b has its CatchHandler @ 00af42e4 */
            Mutex::enterCriticalSection();
                    /* try { // try from 00af4124 to 00af4127 has its CatchHandler @ 00af42a0 */
            std::__ndk1::
            vector<GiantsAdsProvider::ContentData,std::__ndk1::allocator<GiantsAdsProvider::ContentData>>
            ::insert<std::__ndk1::__wrap_iter<GiantsAdsProvider::ContentData*>>
                      ((vector<GiantsAdsProvider::ContentData,std::__ndk1::allocator<GiantsAdsProvider::ContentData>>
                        *)(this + 0x138),(__wrap_iter)*(undefined8 *)(this + 0x140),
                       (__wrap_iter)local_268,(__wrap_iter)local_260);
                    /* try { // try from 00af4128 to 00af412f has its CatchHandler @ 00af42e4 */
            Mutex::leaveCriticalSection();
            if (local_268 != (uint *)0x0) {
              local_260 = local_268;
              operator_delete(local_268);
            }
            bVar4 = false;
          }
        }
        JSONUtil::Object::~Object((Object *)&local_1c0);
        uVar28 = 1;
        if ((!bVar4) && (bVar22)) {
                    /* try { // try from 00af4160 to 00af4167 has its CatchHandler @ 00af42a8 */
          cleanImageCache();
          uVar28 = 1;
        }
      }
      if ((local_248 & 1) != 0) {
        operator_delete(local_238);
      }
      if ((local_230 & 1) != 0) {
        operator_delete(local_220);
      }
      if ((local_218[0] & 1) != 0) {
        operator_delete(local_208);
      }
      local_110[0] = 0xfdbed8;
      local_180 = std::__ndk1::
                  basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  ::vtable + 0x40;
      local_178[0] = &PTR__basic_stringbuf_00fd8fa0;
      local_190[0] = (basic_iostream<char,std::__ndk1::char_traits<char>>)0x88;
      local_190._1_5_ = 0xfdbe;
      uStack_18a = 0;
      uStack_189 = 0;
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
                ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_178);
      std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
                ((basic_iostream<char,std::__ndk1::char_traits<char>> *)local_190);
      std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
                ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_110);
      if ((local_200[0] & 1) != 0) {
        operator_delete(local_1f0);
      }
      JSONUtil::Atom::clear();
      if (((byte)local_1d8 & 1) != 0) {
        operator_delete(local_1c8);
      }
      goto LAB_00af4220;
    }
  }
  Mutex::leaveCriticalSection();
  uVar28 = 1;
LAB_00af4220:
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return uVar28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


