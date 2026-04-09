// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setEnvMaps
// Entry Point: 00a0f4fc
// Size: 2876 bytes
// Signature: undefined __thiscall setEnvMaps(EnvMapBlender * this, char * param_1, char * param_2, char * param_3, char * param_4, float param_5, float param_6, float param_7, float param_8, bool param_9)


/* EnvMapBlender::setEnvMaps(char const*, char const*, char const*, char const*, float, float,
   float, float, bool) */

void __thiscall
EnvMapBlender::setEnvMaps
          (EnvMapBlender *this,char *param_1,char *param_2,char *param_3,char *param_4,float param_5
          ,float param_6,float param_7,float param_8,bool param_9)

{
  EnvMapBlender *pEVar1;
  EnvMapBlender EVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char *__s;
  char *__s_00;
  char *__s_01;
  int iVar11;
  undefined4 uVar12;
  size_t sVar13;
  char *pcVar14;
  ulong uVar15;
  undefined8 uVar16;
  size_t sVar17;
  size_t sVar18;
  long *plVar19;
  Thread *this_00;
  long lVar20;
  char *pcVar21;
  long lVar22;
  size_t sVar23;
  long *plVar24;
  char *__s1;
  undefined8 *puVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  uchar *local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined2 local_220;
  undefined4 local_21c;
  undefined2 local_218;
  undefined8 local_210 [19];
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  long *local_150 [4];
  float local_130 [4];
  char *local_120 [5];
  undefined local_f8;
  undefined local_f7;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined4 local_b4;
  char *local_b0;
  long local_a8;
  
  lVar3 = tpidr_el0;
  local_a8 = *(long *)(lVar3 + 0x28);
  local_120[0] = param_1;
  local_120[1] = param_2;
  local_120[2] = param_3;
  local_120[3] = param_4;
  if (param_5 <= 0.999) {
    if (0.999 < param_6) {
      lVar20 = 1;
      goto LAB_00a0f5c8;
    }
    if (0.999 < param_7) {
      lVar20 = 2;
      goto LAB_00a0f5c8;
    }
    local_130[0] = param_5;
    local_130[1] = param_6;
    local_130[2] = param_7;
    local_130[3] = param_8;
    if (0.999 < param_8) {
      lVar20 = 3;
      goto LAB_00a0f5c8;
    }
  }
  else {
    lVar20 = 0;
LAB_00a0f5c8:
    local_130[0] = 0.0;
    local_130[1] = 0.0;
    local_130[2] = 0.0;
    local_130[3] = 0.0;
    local_120[0] = local_120[lVar20];
    local_120[1] = local_120[lVar20];
    local_130[lVar20] = 1.0;
    local_120[2] = local_120[lVar20];
    local_120[3] = local_120[lVar20];
  }
  fVar10 = local_130[3];
  fVar9 = local_130[2];
  fVar8 = local_130[1];
  fVar7 = local_130[0];
  if (local_130[0] <= 0.0) {
    if (0.0 < local_130[1]) {
      lVar20 = 1;
      goto LAB_00a0f650;
    }
    if (0.0 < local_130[2]) {
      lVar20 = 2;
      goto LAB_00a0f650;
    }
    pcVar21 = local_120[0];
    if (0.0 < local_130[3]) {
      lVar20 = 3;
      goto LAB_00a0f650;
    }
  }
  else {
    lVar20 = 0;
LAB_00a0f650:
    pcVar21 = local_120[lVar20];
  }
  if (local_130[0] == 0.0) {
    local_120[0] = pcVar21;
  }
  __s = local_120[0];
  if (local_130[1] == 0.0) {
    local_120[1] = pcVar21;
  }
  __s_00 = local_120[1];
  if (local_130[2] == 0.0) {
    local_120[2] = pcVar21;
  }
  __s_01 = local_120[2];
  if (local_130[3] == 0.0) {
    local_120[3] = pcVar21;
  }
  pcVar21 = local_120[3];
  if (param_9) {
    if (((byte)*this & 1) == 0) {
      *(undefined2 *)this = 0;
    }
    else {
      **(undefined **)(this + 0x10) = 0;
      *(undefined8 *)(this + 8) = 0;
    }
    *(undefined4 *)(this + 0x60) = 0;
    if (((byte)this[0x18] & 1) == 0) {
      *(undefined2 *)(this + 0x18) = 0;
    }
    else {
      **(undefined **)(this + 0x28) = 0;
      *(undefined8 *)(this + 0x20) = 0;
    }
    *(undefined4 *)(this + 100) = 0;
    if (((byte)this[0x30] & 1) == 0) {
      *(undefined2 *)(this + 0x30) = 0;
    }
    else {
      **(undefined **)(this + 0x40) = 0;
      *(undefined8 *)(this + 0x38) = 0;
    }
    *(undefined4 *)(this + 0x68) = 0;
    if (((byte)this[0x48] & 1) == 0) {
      *(undefined2 *)(this + 0x48) = 0;
    }
    else {
      **(undefined **)(this + 0x58) = 0;
      *(undefined8 *)(this + 0x50) = 0;
    }
    *(undefined4 *)(this + 0x6c) = 0;
    if (((byte)this[0x70] & 1) == 0) {
      *(undefined2 *)(this + 0x70) = 0;
    }
    else {
      **(undefined **)(this + 0x80) = 0;
      *(undefined8 *)(this + 0x78) = 0;
    }
    *(undefined4 *)(this + 0xd0) = 0;
    if (((byte)this[0x88] & 1) == 0) {
      *(undefined2 *)(this + 0x88) = 0;
    }
    else {
      **(undefined **)(this + 0x98) = 0;
      *(undefined8 *)(this + 0x90) = 0;
    }
    *(undefined4 *)(this + 0xd4) = 0;
    if (((byte)this[0xa0] & 1) == 0) {
      *(undefined2 *)(this + 0xa0) = 0;
    }
    else {
      **(undefined **)(this + 0xb0) = 0;
      *(undefined8 *)(this + 0xa8) = 0;
    }
    *(undefined4 *)(this + 0xd8) = 0;
    if (((byte)this[0xb8] & 1) == 0) {
      *(undefined2 *)(this + 0xb8) = 0;
    }
    else {
      **(undefined **)(this + 200) = 0;
      *(undefined8 *)(this + 0xc0) = 0;
    }
    *(undefined4 *)(this + 0xdc) = 0;
    local_150[1] = (long *)0x0;
    local_150[0] = (long *)0x0;
    local_150[3] = (long *)0x0;
    local_150[2] = (long *)0x0;
    SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)local_210);
    SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(local_210 + 2));
    SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(local_210 + 4));
    SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(local_210 + 6));
    SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(local_210 + 8));
    SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(local_210 + 10));
    SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(local_210 + 0xc));
    SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(local_210 + 0xe));
    SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(local_210 + 0x10));
    SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(local_210 + 0x12));
    SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)&local_170);
    SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)&local_160);
    lVar20 = 0;
    puVar25 = local_210;
    __s1 = __s;
LAB_00a0f92c:
    sVar13 = strlen(__s1);
    sVar18 = (ulong)((byte)this[0x3a8] >> 1);
    if (((byte)this[0x3a8] & 1) != 0) {
      sVar18 = *(size_t *)(this + 0x3b0);
    }
                    /* try { // try from 00a0f954 to 00a0fa27 has its CatchHandler @ 00a10050 */
    if ((sVar13 == sVar18) &&
       (iVar11 = std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 compare((ulong)(this + 0x3a8),0,(char *)0xffffffffffffffff,(ulong)__s1),
       iVar11 == 0)) {
      lVar27 = 0;
    }
    else {
      sVar13 = strlen(__s1);
      sVar18 = (ulong)((byte)this[0x3c0] >> 1);
      if (((byte)this[0x3c0] & 1) != 0) {
        sVar18 = *(size_t *)(this + 0x3c8);
      }
      if ((sVar13 == sVar18) &&
         (iVar11 = std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   compare((ulong)(this + 0x3c0),0,(char *)0xffffffffffffffff,(ulong)__s1),
         iVar11 == 0)) {
        lVar27 = 1;
      }
      else {
        sVar13 = strlen(__s1);
        sVar18 = (ulong)((byte)this[0x3d8] >> 1);
        if (((byte)this[0x3d8] & 1) != 0) {
          sVar18 = *(size_t *)(this + 0x3e0);
        }
        if ((sVar13 == sVar18) &&
           (iVar11 = std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::compare((ulong)(this + 0x3d8),0,(char *)0xffffffffffffffff,(ulong)__s1),
           iVar11 == 0)) {
          lVar27 = 2;
        }
        else {
          sVar13 = strlen(__s1);
          sVar18 = (ulong)((byte)this[0x3f0] >> 1);
          if (((byte)this[0x3f0] & 1) != 0) {
            sVar18 = *(size_t *)(this + 0x3f8);
          }
          if ((sVar13 != sVar18) ||
             (iVar11 = std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::compare((ulong)(this + 0x3f0),0,(char *)0xffffffffffffffff,(ulong)__s1),
             iVar11 != 0)) {
            local_258 = 0;
            uStack_250 = 0;
            local_248 = 0;
            local_240 = (uchar *)0x0;
            local_268 = 0;
            local_228 = 0;
            local_260 = 0x100000001;
            local_220 = 0;
            local_21c = 0;
            local_218 = 0;
            local_238 = 0;
            uStack_230 = 0;
            pcVar14 = (char *)TextureUtil::getSpecificFilename(__s1);
            uVar15 = ImageLoadUtil::loadImage(pcVar14,1,(ImageDesc *)&local_268,0);
            if ((uVar15 & 1) != 0) {
              SphericalHarmonicsUtil::computeSHB2FromCubeMap
                        ((SHB2 *)puVar25,(uint)local_258,local_240,(FORMAT)local_228,
                         (TYPE)uStack_250,(uint)local_268,local_268._4_4_,local_258._4_4_,
                         (uint)local_258);
              local_d4 = PixelFormatUtil::getPixelFormat
                                   (local_258._4_4_,(FORMAT)local_228,(TYPE)uStack_250,true,pcVar14)
              ;
              local_f7 = 0;
              local_dc = 0x200000000;
              local_e4 = 0x100000001;
              plVar24 = *(long **)(this + 0x548);
              local_cc = 0x100000001;
              uStack_bc = 0x3f80000000000000;
              local_c4 = 0;
              local_ec = local_268;
              local_f8 = (undefined)local_220;
              local_b4 = 0;
              local_f4 = (uint)local_258;
              uStack_f0 = 0xffffffff;
              local_d0 = 0;
              local_120[4] = (char *)local_240;
              local_b0 = pcVar14;
              uVar16 = (**(code **)(*plVar24 + 0x138))(plVar24);
              uVar16 = (**(code **)(*plVar24 + 0x100))(plVar24,uVar16,local_120 + 4);
              EVar2 = this[0x530];
              *(undefined8 *)((long)local_150 + lVar20) = uVar16;
              if (EVar2 == (EnvMapBlender)0x0) {
                this[0x530] = (EnvMapBlender)0x1;
                uVar12 = PixelFormatUtil::getPixelFormat
                                   (local_258._4_4_,(FORMAT)local_228,(TYPE)uStack_250,true,
                                    "EnvBlendOuput");
                *(undefined4 *)(this + 0x534) = uVar12;
                *(uint *)(this + 0x538) = (uint)local_268;
                *(uint *)(this + 0x53c) = (uint)local_258;
              }
              if (local_240 != (uchar *)0x0) {
                operator_delete__(local_240);
              }
              local_240 = (uchar *)0x0;
              local_248 = 0;
            }
            if (pcVar14 == __s1) goto joined_r0x00a0fb70;
            if (pcVar14 == (char *)0x0) goto joined_r0x00a0fb70;
            operator_delete__(pcVar14);
            goto joined_r0x00a0fb70;
          }
          lVar27 = 3;
        }
      }
    }
    uVar28 = *(undefined8 *)(this + lVar27 * 0x30 + 0x440);
    uVar16 = *(undefined8 *)(this + lVar27 * 0x30 + 0x438);
    uVar30 = *(undefined8 *)(this + lVar27 * 0x30 + 0x450);
    uVar29 = *(undefined8 *)(this + lVar27 * 0x30 + 0x448);
    *(undefined8 *)((long)local_150 + lVar20) = *(undefined8 *)(this + lVar27 * 8 + 0x418);
    uVar32 = *(undefined8 *)(this + lVar27 * 0x30 + 0x460);
    uVar31 = *(undefined8 *)(this + lVar27 * 0x30 + 0x458);
    puVar25[1] = uVar28;
    *puVar25 = uVar16;
    puVar25[3] = uVar30;
    puVar25[2] = uVar29;
    puVar25[5] = uVar32;
    puVar25[4] = uVar31;
    lVar27 = lVar20;
    puVar26 = puVar25;
    if (lVar20 != 0x18) {
      while( true ) {
        __s1 = *(char **)((long)local_120 + lVar27 + 8);
        lVar20 = lVar27 + 8;
        puVar25 = puVar26 + 6;
        if (lVar20 == 0) break;
        iVar11 = strcmp(__s1,local_120[0]);
        if (iVar11 == 0) {
          lVar22 = 0;
        }
        else {
          if (lVar20 == 8) break;
          iVar11 = strcmp(__s1,local_120[1]);
          if (iVar11 == 0) {
            lVar22 = 1;
          }
          else {
            if ((lVar20 == 0x10) || (iVar11 = strcmp(__s1,local_120[2]), iVar11 != 0)) break;
            lVar22 = 2;
          }
        }
        *(long **)((long)local_150 + lVar27 + 8) = local_150[lVar22];
        uVar16 = local_210[lVar22 * 6];
        puVar26[7] = local_210[lVar22 * 6 + 1];
        *puVar25 = uVar16;
        uVar16 = local_210[lVar22 * 6 + 2];
        puVar26[9] = local_210[lVar22 * 6 + 3];
        puVar26[8] = uVar16;
        uVar16 = local_210[lVar22 * 6 + 4];
        puVar26[0xb] = local_210[lVar22 * 6 + 5];
        puVar26[10] = uVar16;
joined_r0x00a0fb70:
        lVar27 = lVar20;
        puVar26 = puVar25;
        if (lVar20 == 0x18) goto LAB_00a0fc58;
      }
      goto LAB_00a0f92c;
    }
LAB_00a0fc58:
    plVar6 = local_150[3];
    plVar5 = local_150[2];
    plVar4 = local_150[1];
    plVar24 = local_150[0];
    if (local_150[0] != (long *)0x0) {
      if (((local_150[1] != (long *)0x0) && (local_150[2] != (long *)0x0)) &&
         (local_150[3] != (long *)0x0)) {
        lVar20 = 0;
        lVar27 = 0x418;
        do {
          EVar2 = this[lVar20 + 0x3a8];
          sVar23 = *(size_t *)(this + lVar20 + 0x3b0);
          sVar13 = (size_t)((byte)EVar2 >> 1);
          sVar18 = sVar13;
          if (((byte)EVar2 & 1) != 0) {
            sVar18 = sVar23;
          }
          if (sVar18 != 0) {
            pEVar1 = this + lVar20 + 0x3a8;
            sVar17 = strlen(__s);
            if (sVar17 == sVar18) {
                    /* try { // try from 00a0fcd0 to 00a0fdb3 has its CatchHandler @ 00a1004c */
              iVar11 = std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::compare((ulong)pEVar1,0,(char *)0xffffffffffffffff,(ulong)__s);
              if (iVar11 == 0) goto LAB_00a0fc90;
              EVar2 = this[lVar20 + 0x3a8];
              sVar23 = *(size_t *)(this + lVar20 + 0x3b0);
              sVar13 = (size_t)((byte)EVar2 >> 1);
            }
            sVar17 = strlen(__s_00);
            sVar18 = sVar13;
            if (((byte)EVar2 & 1) != 0) {
              sVar18 = sVar23;
            }
            if (sVar17 == sVar18) {
              iVar11 = std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::compare((ulong)pEVar1,0,(char *)0xffffffffffffffff,(ulong)__s_00);
              if (iVar11 == 0) goto LAB_00a0fc90;
              EVar2 = this[lVar20 + 0x3a8];
              sVar23 = *(size_t *)(this + lVar20 + 0x3b0);
              sVar13 = (size_t)((byte)EVar2 >> 1);
            }
            sVar17 = strlen(__s_01);
            sVar18 = sVar13;
            if (((byte)EVar2 & 1) != 0) {
              sVar18 = sVar23;
            }
            if (sVar17 == sVar18) {
              iVar11 = std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::compare((ulong)pEVar1,0,(char *)0xffffffffffffffff,(ulong)__s_01);
              if (iVar11 == 0) goto LAB_00a0fc90;
              EVar2 = this[lVar20 + 0x3a8];
              sVar23 = *(size_t *)(this + lVar20 + 0x3b0);
              sVar13 = (size_t)((byte)EVar2 >> 1);
            }
            sVar18 = strlen(pcVar21);
            if (((byte)EVar2 & 1) != 0) {
              sVar13 = sVar23;
            }
            if ((sVar18 != sVar13) ||
               (iVar11 = std::__ndk1::
                         basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         ::compare((ulong)pEVar1,0,(char *)0xffffffffffffffff,(ulong)pcVar21),
               iVar11 != 0)) {
              plVar19 = *(long **)(this + lVar27);
              *(undefined8 *)(this + lVar27) = 0;
              if (lVar20 != 0x48) {
                if (*(long **)(this + lVar27 + 8) == plVar19) {
                  *(undefined8 *)(this + lVar27 + 8) = 0;
                }
                if (lVar20 != 0x30) {
                  if (*(long **)(this + lVar27 + 0x10) == plVar19) {
                    *(undefined8 *)(this + lVar27 + 0x10) = 0;
                  }
                  if ((lVar20 != 0x18) && (*(long **)(this + lVar27 + 0x18) == plVar19)) {
                    *(undefined8 *)(this + lVar27 + 0x18) = 0;
                  }
                }
              }
              if (plVar19 != (long *)0x0) {
                (**(code **)(*plVar19 + 8))();
              }
            }
          }
LAB_00a0fc90:
          lVar20 = lVar20 + 0x18;
          lVar27 = lVar27 + 8;
        } while (lVar20 != 0x60);
        *(long **)(this + 0x418) = plVar24;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)(this + 0x3a8));
        *(float *)(this + 0x408) = fVar7;
        *(undefined8 *)(this + 0x440) = local_210[1];
        *(undefined8 *)(this + 0x438) = local_210[0];
        *(undefined8 *)(this + 0x450) = local_210[3];
        *(undefined8 *)(this + 0x448) = local_210[2];
        *(undefined8 *)(this + 0x460) = local_210[5];
        *(undefined8 *)(this + 0x458) = local_210[4];
        *(long **)(this + 0x420) = plVar4;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)(this + 0x3c0));
        *(float *)(this + 0x40c) = fVar8;
        *(undefined8 *)(this + 0x470) = local_210[7];
        *(undefined8 *)(this + 0x468) = local_210[6];
        *(undefined8 *)(this + 0x480) = local_210[9];
        *(undefined8 *)(this + 0x478) = local_210[8];
        *(undefined8 *)(this + 0x490) = local_210[11];
        *(undefined8 *)(this + 0x488) = local_210[10];
        *(long **)(this + 0x428) = plVar5;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)(this + 0x3d8));
        *(float *)(this + 0x410) = fVar9;
        *(undefined8 *)(this + 0x4a0) = local_210[13];
        *(undefined8 *)(this + 0x498) = local_210[12];
        *(undefined8 *)(this + 0x4b0) = local_210[15];
        *(undefined8 *)(this + 0x4a8) = local_210[14];
        *(undefined8 *)(this + 0x4c0) = local_210[17];
        *(undefined8 *)(this + 0x4b8) = local_210[16];
        *(long **)(this + 0x430) = plVar6;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)(this + 0x3f0));
        *(float *)(this + 0x414) = fVar10;
        *(undefined8 *)(this + 0x4d0) = uStack_178;
        *(undefined8 *)(this + 0x4c8) = local_210[18];
        *(undefined8 *)(this + 0x4e0) = uStack_168;
        *(undefined8 *)(this + 0x4d8) = local_170;
        *(undefined8 *)(this + 0x4f0) = uStack_158;
        *(undefined8 *)(this + 0x4e8) = local_160;
        this[0x541] = (EnvMapBlender)0x1;
        goto LAB_00a0fff8;
      }
      (**(code **)(*local_150[0] + 8))();
    }
    if (local_150[1] != (long *)0x0) {
      (**(code **)(*local_150[1] + 8))();
    }
    if (local_150[2] != (long *)0x0) {
      (**(code **)(*local_150[2] + 8))();
    }
    if (local_150[3] != (long *)0x0) {
      (**(code **)(*local_150[3] + 8))();
    }
  }
  else {
    if (*(long *)(this + 0xb78) == 0) {
      this_00 = (Thread *)operator_new(0x48);
                    /* try { // try from 00a0fe90 to 00a0fe93 has its CatchHandler @ 00a10038 */
      Thread::Thread(this_00);
      *(Thread **)(this + 0xb78) = this_00;
      Thread::start(this_00,fileProcessThread,this,0xffffffff,"EnvmapFileProcessor",2,0x80000);
      iVar11 = *(int *)(this + 0x3a0);
    }
    else {
      iVar11 = *(int *)(this + 0x3a0);
    }
    if (iVar11 == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)this);
      *(float *)(this + 0x60) = fVar7;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)(this + 0x18));
      *(float *)(this + 100) = fVar8;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)(this + 0x30));
      *(float *)(this + 0x68) = fVar9;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)(this + 0x48));
      *(float *)(this + 0x6c) = fVar10;
      startLoading();
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)(this + 0x70));
      *(float *)(this + 0xd0) = fVar7;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)(this + 0x88));
      *(float *)(this + 0xd4) = fVar8;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)(this + 0xa0));
      *(float *)(this + 0xd8) = fVar9;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)(this + 0xb8));
      *(float *)(this + 0xdc) = fVar10;
    }
  }
LAB_00a0fff8:
  if (*(long *)(lVar3 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


