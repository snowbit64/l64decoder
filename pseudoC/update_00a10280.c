// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00a10280
// Size: 2556 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EnvMapBlender::update() */

void EnvMapBlender::update(void)

{
  size_t sVar1;
  char *pcVar2;
  byte bVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  size_t sVar8;
  int iVar9;
  basic_string bVar10;
  basic_string *in_x0;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  basic_string *pbVar15;
  undefined8 *puVar16;
  byte bVar17;
  ulong uVar18;
  undefined8 *puVar19;
  byte *__s2;
  byte *pbVar20;
  void **ppvVar21;
  basic_string *this;
  basic_string *this_00;
  basic_string *pbVar22;
  basic_string *pbVar23;
  basic_string *pbVar24;
  basic_string *pbVar25;
  long lVar26;
  long *plVar27;
  float fVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *local_1c0 [28];
  undefined8 local_e0;
  undefined local_d8;
  undefined local_d7;
  basic_string local_d4;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined4 local_94;
  char *local_90;
  long local_88;
  
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  (**(code **)(**(long **)(in_x0 + 0x152) + 0x138))();
  if (*(char *)((long)in_x0 + 0x541) != '\0') {
    if (*(char *)(in_x0 + 0x150) == '\0') {
      *(undefined8 *)(in_x0 + 0x13e) = *(undefined8 *)(in_x0 + 0x106);
      fVar28 = (float)in_x0[0x102];
      if ((float)in_x0[0x102] < (float)in_x0[0x103]) {
        *(undefined8 *)(in_x0 + 0x13e) = *(undefined8 *)(in_x0 + 0x108);
        fVar28 = (float)in_x0[0x103];
      }
      if (fVar28 < (float)in_x0[0x104]) {
        *(undefined8 *)(in_x0 + 0x13e) = *(undefined8 *)(in_x0 + 0x10a);
        fVar28 = (float)in_x0[0x104];
      }
      if (fVar28 < (float)in_x0[0x105]) {
        *(undefined8 *)(in_x0 + 0x13e) = *(undefined8 *)(in_x0 + 0x10c);
      }
    }
    else {
      envMapBlend();
    }
    blendSH();
    *(undefined *)((long)in_x0 + 0x541) = 0;
    goto LAB_00a105c0;
  }
  if (in_x0[0xe8] != 2) goto LAB_00a105c0;
  uVar18 = (ulong)(*(byte *)in_x0 >> 1);
  if ((*(byte *)in_x0 & 1) != 0) {
    uVar18 = *(ulong *)(in_x0 + 2);
  }
  if (uVar18 != 0) {
    bVar17 = *(byte *)(in_x0 + 6);
    uVar18 = (ulong)(bVar17 >> 1);
    if ((bVar17 & 1) != 0) {
      uVar18 = *(ulong *)(in_x0 + 8);
    }
    if (uVar18 != 0) {
      bVar17 = *(byte *)(in_x0 + 0xc);
      uVar18 = (ulong)(bVar17 >> 1);
      if ((bVar17 & 1) != 0) {
        uVar18 = *(ulong *)(in_x0 + 0xe);
      }
      if (uVar18 != 0) {
        bVar17 = *(byte *)(in_x0 + 0x12);
        uVar18 = (ulong)(bVar17 >> 1);
        if ((bVar17 & 1) != 0) {
          uVar18 = *(ulong *)(in_x0 + 0x14);
        }
        if (uVar18 != 0) {
          uVar13 = in_x0[0x38];
          puVar19 = (undefined8 *)(in_x0 + 0x39);
          if (4 < (ulong)uVar13) {
            puVar19 = *(undefined8 **)(in_x0 + 0xe2);
          }
          if (uVar13 != 0) {
            lVar14 = (ulong)uVar13 * 0xa8;
            bVar17 = 1;
            puVar19 = puVar19 + 0x14;
            do {
              lVar14 = lVar14 + -0xa8;
              bVar17 = bVar17 & *(byte *)puVar19;
              puVar19 = puVar19 + 0x15;
            } while (lVar14 != 0);
            if (bVar17 == 0) goto LAB_00a109e0;
          }
          local_1c0[25] = (long *)0x0;
          local_1c0[24] = (long *)0x0;
          local_1c0[27] = (long *)0x0;
          local_1c0[26] = (long *)0x0;
          SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)local_1c0);
          SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(local_1c0 + 2));
          SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(local_1c0 + 4));
          SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(local_1c0 + 6));
          SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(local_1c0 + 8));
          SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(local_1c0 + 10));
          SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(local_1c0 + 0xc));
          SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(local_1c0 + 0xe));
          SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(local_1c0 + 0x10));
          SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(local_1c0 + 0x12));
          SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(local_1c0 + 0x14));
          SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(local_1c0 + 0x16));
          lVar14 = 0;
          do {
            pbVar15 = in_x0 + lVar14 * 6;
            lVar26 = 0;
            bVar17 = *(byte *)pbVar15;
            sVar1 = (ulong)(bVar17 >> 1);
            if ((bVar17 & 1) != 0) {
              sVar1 = *(size_t *)(pbVar15 + 2);
            }
            do {
              bVar3 = *(byte *)(in_x0 + lVar26 * 6 + 0xea);
              sVar4 = (ulong)(bVar3 >> 1);
              if ((bVar3 & 1) != 0) {
                sVar4 = *(size_t *)(in_x0 + lVar26 * 6 + 0xec);
              }
              if (sVar1 == sVar4) {
                pbVar20 = (byte *)((long)pbVar15 + 1);
                if ((bVar17 & 1) != 0) {
                  pbVar20 = *(byte **)(pbVar15 + 4);
                }
                __s2 = *(byte **)(in_x0 + lVar26 * 6 + 0xee);
                if ((bVar3 & 1) == 0) {
                  __s2 = (byte *)((long)in_x0 + lVar26 * 0x18 + 0x3a9);
                }
                pbVar7 = (byte *)((long)pbVar15 + 1);
                sVar4 = (ulong)(bVar17 >> 1);
                sVar8 = sVar1;
                if ((bVar17 & 1) == 0) {
                  while (sVar8 != 0) {
                    if (*pbVar7 != *__s2) goto LAB_00a104b4;
                    __s2 = __s2 + 1;
                    sVar4 = sVar4 - 1;
                    pbVar7 = pbVar7 + 1;
                    sVar8 = sVar4;
                  }
                }
                else if ((sVar1 != 0) && (iVar9 = memcmp(pbVar20,__s2,sVar1), iVar9 != 0))
                goto LAB_00a104b4;
                plVar29 = *(long **)(in_x0 + lVar26 * 0xc + 0x110);
                plVar27 = *(long **)(in_x0 + lVar26 * 0xc + 0x10e);
                plVar31 = *(long **)(in_x0 + lVar26 * 0xc + 0x114);
                plVar30 = *(long **)(in_x0 + lVar26 * 0xc + 0x112);
                local_1c0[lVar14 + 0x18] = *(long **)(in_x0 + lVar26 * 2 + 0x106);
                local_1c0[lVar14 * 6 + 1] = plVar29;
                local_1c0[lVar14 * 6] = plVar27;
                plVar29 = *(long **)(in_x0 + lVar26 * 0xc + 0x118);
                plVar27 = *(long **)(in_x0 + lVar26 * 0xc + 0x116);
                local_1c0[lVar14 * 6 + 3] = plVar31;
                local_1c0[lVar14 * 6 + 2] = plVar30;
                local_1c0[lVar14 * 6 + 5] = plVar29;
                local_1c0[lVar14 * 6 + 4] = plVar27;
              }
LAB_00a104b4:
              plVar31 = local_1c0[27];
              plVar30 = local_1c0[26];
              plVar29 = local_1c0[25];
              plVar27 = local_1c0[24];
              lVar26 = lVar26 + 1;
            } while (lVar26 != 4);
            lVar14 = lVar14 + 1;
          } while (lVar14 != 4);
          lVar14 = 0x418;
          do {
            plVar11 = *(long **)((long)in_x0 + lVar14);
            if ((((plVar11 != (long *)0x0 && plVar11 != plVar27) && plVar11 != plVar29) &&
                plVar11 != plVar30) && plVar11 != plVar31) {
              if (*(long **)(in_x0 + 0x106) == plVar11) {
                *(undefined8 *)(in_x0 + 0x106) = 0;
              }
              if (*(long **)(in_x0 + 0x108) == plVar11) {
                *(undefined8 *)(in_x0 + 0x108) = 0;
              }
              if (*(long **)(in_x0 + 0x10a) == plVar11) {
                *(undefined8 *)(in_x0 + 0x10a) = 0;
              }
              if (*(long **)(in_x0 + 0x10c) == plVar11) {
                *(undefined8 *)(in_x0 + 0x10c) = 0;
              }
              (**(code **)(*plVar11 + 8))();
            }
            lVar14 = lVar14 + 8;
          } while (lVar14 != 0x438);
          uVar13 = in_x0[0x38];
          puVar19 = (undefined8 *)(in_x0 + 0x39);
          if (4 < (ulong)uVar13) {
            puVar19 = *(undefined8 **)(in_x0 + 0xe2);
          }
          if (uVar13 != 0) {
            puVar16 = puVar19 + (ulong)uVar13 * 0x15;
            do {
              pcVar2 = (char *)((long)puVar19 + 0x59);
              if ((*(byte *)(puVar19 + 0xb) & 1) != 0) {
                pcVar2 = (char *)puVar19[0xd];
              }
              local_b4 = PixelFormatUtil::getPixelFormat
                                   (*(uint *)((long)puVar19 + 0x14),*(FORMAT *)(puVar19 + 8),
                                    *(TYPE *)(puVar19 + 3),true,pcVar2);
              local_d7 = 0;
              local_94 = 0;
              plVar27 = *(long **)(in_x0 + 0x152);
              local_bc = 0x200000000;
              local_c4 = 0x100000001;
              local_ac = 0x100000001;
              uStack_9c = 0x3f80000000000000;
              local_a4 = 0;
              local_d0 = 0xffffffff;
              local_cc = *puVar19;
              local_d8 = *(undefined *)(puVar19 + 9);
              local_d4 = *(basic_string *)(puVar19 + 2);
              local_b0 = 0;
              local_e0 = puVar19[5];
              local_90 = pcVar2;
              uVar12 = (**(code **)(*plVar27 + 0x138))(plVar27);
              plVar27 = (long *)(**(code **)(*plVar27 + 0x100))(plVar27,uVar12,&local_e0);
              lVar14 = 0;
              do {
                pbVar15 = in_x0 + lVar14 * 6;
                bVar17 = *(byte *)(puVar19 + 0xb);
                bVar3 = *(byte *)pbVar15;
                sVar1 = (ulong)(bVar17 >> 1);
                if ((bVar17 & 1) != 0) {
                  sVar1 = puVar19[0xc];
                }
                sVar4 = (ulong)(bVar3 >> 1);
                if ((bVar3 & 1) != 0) {
                  sVar4 = *(size_t *)(pbVar15 + 2);
                }
                if (sVar1 == sVar4) {
                  pcVar2 = (char *)((long)puVar19 + 0x59);
                  if ((bVar17 & 1) != 0) {
                    pcVar2 = (char *)puVar19[0xd];
                  }
                  pbVar20 = *(byte **)(in_x0 + lVar14 * 6 + 4);
                  if ((bVar3 & 1) == 0) {
                    pbVar20 = (byte *)((long)pbVar15 + 1);
                  }
                  if ((bVar17 & 1) == 0) {
                    if (sVar1 != 0) {
                      uVar18 = 0;
                      do {
                        if (*(byte *)((long)puVar19 + uVar18 + 0x59) != pbVar20[uVar18])
                        goto LAB_00a107c0;
                        uVar18 = uVar18 + 1;
                      } while (bVar17 >> 1 != uVar18);
                    }
                  }
                  else if ((sVar1 != 0) && (iVar9 = memcmp(pcVar2,pbVar20,sVar1), iVar9 != 0))
                  goto LAB_00a107c0;
                  plVar30 = (long *)puVar19[0xf];
                  plVar29 = (long *)puVar19[0xe];
                  local_1c0[lVar14 + 0x18] = plVar27;
                  local_1c0[lVar14 * 6 + 1] = plVar30;
                  local_1c0[lVar14 * 6] = plVar29;
                  plVar29 = (long *)puVar19[0x10];
                  local_1c0[lVar14 * 6 + 3] = (long *)puVar19[0x11];
                  local_1c0[lVar14 * 6 + 2] = plVar29;
                  plVar29 = (long *)puVar19[0x12];
                  local_1c0[lVar14 * 6 + 5] = (long *)puVar19[0x13];
                  local_1c0[lVar14 * 6 + 4] = plVar29;
                }
LAB_00a107c0:
                lVar14 = lVar14 + 1;
              } while (lVar14 != 4);
              if (*(char *)(in_x0 + 0x14c) == '\0') {
                *(undefined *)(in_x0 + 0x14c) = 1;
                bVar10 = PixelFormatUtil::getPixelFormat
                                   (*(uint *)((long)puVar19 + 0x14),*(FORMAT *)(puVar19 + 8),
                                    *(TYPE *)(puVar19 + 3),true,"EnvBlendOuput");
                in_x0[0x14d] = bVar10;
                in_x0[0x14e] = *(basic_string *)puVar19;
                in_x0[0x14f] = *(basic_string *)(puVar19 + 2);
              }
              puVar19 = puVar19 + 0x15;
            } while (puVar19 != puVar16);
          }
          *(long **)(in_x0 + 0x106) = local_1c0[24];
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(in_x0 + 0xea),in_x0);
          in_x0[0x102] = in_x0[0x18];
          *(long **)(in_x0 + 0x110) = local_1c0[1];
          *(long **)(in_x0 + 0x10e) = local_1c0[0];
          *(long **)(in_x0 + 0x114) = local_1c0[3];
          *(long **)(in_x0 + 0x112) = local_1c0[2];
          *(long **)(in_x0 + 0x118) = local_1c0[5];
          *(long **)(in_x0 + 0x116) = local_1c0[4];
          *(long **)(in_x0 + 0x108) = local_1c0[25];
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(in_x0 + 0xf0),in_x0 + 6);
          in_x0[0x103] = in_x0[0x19];
          *(long **)(in_x0 + 0x11c) = local_1c0[7];
          *(long **)(in_x0 + 0x11a) = local_1c0[6];
          *(long **)(in_x0 + 0x120) = local_1c0[9];
          *(long **)(in_x0 + 0x11e) = local_1c0[8];
          *(long **)(in_x0 + 0x124) = local_1c0[11];
          *(long **)(in_x0 + 0x122) = local_1c0[10];
          *(long **)(in_x0 + 0x10a) = local_1c0[26];
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(in_x0 + 0xf6),in_x0 + 0xc);
          in_x0[0x104] = in_x0[0x1a];
          *(long **)(in_x0 + 0x128) = local_1c0[13];
          *(long **)(in_x0 + 0x126) = local_1c0[12];
          *(long **)(in_x0 + 300) = local_1c0[15];
          *(long **)(in_x0 + 0x12a) = local_1c0[14];
          *(long **)(in_x0 + 0x130) = local_1c0[17];
          *(long **)(in_x0 + 0x12e) = local_1c0[16];
          *(long **)(in_x0 + 0x10c) = local_1c0[27];
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(in_x0 + 0xfc),in_x0 + 0x12);
          in_x0[0x105] = in_x0[0x1b];
          *(long **)(in_x0 + 0x134) = local_1c0[19];
          *(long **)(in_x0 + 0x132) = local_1c0[18];
          *(long **)(in_x0 + 0x138) = local_1c0[21];
          *(long **)(in_x0 + 0x136) = local_1c0[20];
          *(long **)(in_x0 + 0x13c) = local_1c0[23];
          *(long **)(in_x0 + 0x13a) = local_1c0[22];
          if (*(char *)(in_x0 + 0x150) == '\0') {
            *(undefined8 *)(in_x0 + 0x13e) = *(undefined8 *)(in_x0 + 0x106);
            fVar28 = (float)in_x0[0x102];
            if ((float)in_x0[0x102] < (float)in_x0[0x103]) {
              *(undefined8 *)(in_x0 + 0x13e) = *(undefined8 *)(in_x0 + 0x108);
              fVar28 = (float)in_x0[0x103];
            }
            if (fVar28 < (float)in_x0[0x104]) {
              *(undefined8 *)(in_x0 + 0x13e) = *(undefined8 *)(in_x0 + 0x10a);
              fVar28 = (float)in_x0[0x104];
            }
            if (fVar28 < (float)in_x0[0x1b]) {
              *(undefined8 *)(in_x0 + 0x13e) = *(undefined8 *)(in_x0 + 0x10c);
            }
          }
          else {
            envMapBlend();
          }
          blendSH();
        }
      }
    }
  }
LAB_00a109e0:
  uVar13 = in_x0[0x38];
  pbVar15 = in_x0 + 0x39;
  if (4 < (ulong)uVar13) {
    pbVar15 = *(basic_string **)(in_x0 + 0xe2);
  }
  if (uVar13 != 0) {
    ppvVar21 = (void **)(pbVar15 + 10);
    lVar14 = (ulong)uVar13 * 0xa8;
    do {
      if (*ppvVar21 != (void *)0x0) {
        operator_delete__(*ppvVar21);
      }
      *ppvVar21 = (void *)0x0;
      lVar14 = lVar14 + -0xa8;
      *(undefined4 *)(ppvVar21 + -1) = 0;
      ppvVar21 = ppvVar21 + 0x15;
    } while (lVar14 != 0);
  }
  if ((*(byte *)in_x0 & 1) == 0) {
    *(undefined2 *)in_x0 = 0;
  }
  else {
    **(undefined **)(in_x0 + 4) = 0;
    *(undefined8 *)(in_x0 + 2) = 0;
  }
  pbVar15 = in_x0 + 6;
  in_x0[0x18] = 0;
  if ((*(byte *)pbVar15 & 1) == 0) {
    *(undefined2 *)pbVar15 = 0;
  }
  else {
    **(undefined **)(in_x0 + 10) = 0;
    *(undefined8 *)(in_x0 + 8) = 0;
  }
  this = in_x0 + 0xc;
  in_x0[0x19] = 0;
  if ((*(byte *)this & 1) == 0) {
    *(undefined2 *)this = 0;
  }
  else {
    **(undefined **)(in_x0 + 0x10) = 0;
    *(undefined8 *)(in_x0 + 0xe) = 0;
  }
  this_00 = in_x0 + 0x12;
  in_x0[0x1a] = 0;
  if ((*(byte *)this_00 & 1) == 0) {
    *(undefined2 *)this_00 = 0;
  }
  else {
    **(undefined **)(in_x0 + 0x16) = 0;
    *(undefined8 *)(in_x0 + 0x14) = 0;
  }
  uVar13 = in_x0[0x38];
  in_x0[0x1b] = 0;
  if (uVar13 < 5) {
    if (uVar13 != 0) {
      uVar18 = 0;
      ppvVar21 = (void **)(in_x0 + 0x53);
      do {
        if ((*(byte *)(ppvVar21 + -2) & 1) != 0) {
          operator_delete(*ppvVar21);
          uVar13 = in_x0[0x38];
        }
        uVar18 = uVar18 + 1;
        ppvVar21 = ppvVar21 + 0x15;
      } while (uVar18 < uVar13);
    }
    in_x0[0x38] = 0;
  }
  else {
    lVar26 = *(long *)(in_x0 + 0xe2);
    in_x0[0x38] = 0;
    lVar14 = *(long *)(in_x0 + 0xe4);
    while (lVar6 = lVar14, lVar6 != lVar26) {
      lVar14 = lVar6 + -0xa8;
      if ((*(byte *)(lVar6 + -0x50) & 1) != 0) {
        operator_delete(*(void **)(lVar6 + -0x40));
      }
    }
    *(long *)(in_x0 + 0xe4) = lVar26;
  }
  pbVar25 = in_x0 + 0x1c;
  in_x0[0xe8] = 0;
  uVar18 = (ulong)(*(byte *)pbVar25 >> 1);
  if ((*(byte *)pbVar25 & 1) != 0) {
    uVar18 = *(ulong *)(in_x0 + 0x1e);
  }
  if (uVar18 != 0) {
    pbVar24 = in_x0 + 0x22;
    uVar18 = (ulong)(*(byte *)pbVar24 >> 1);
    if ((*(byte *)pbVar24 & 1) != 0) {
      uVar18 = *(ulong *)(in_x0 + 0x24);
    }
    if (uVar18 != 0) {
      pbVar23 = in_x0 + 0x28;
      uVar18 = (ulong)(*(byte *)pbVar23 >> 1);
      if ((*(byte *)pbVar23 & 1) != 0) {
        uVar18 = *(ulong *)(in_x0 + 0x2a);
      }
      if (uVar18 != 0) {
        pbVar22 = in_x0 + 0x2e;
        uVar18 = (ulong)(*(byte *)pbVar22 >> 1);
        if ((*(byte *)pbVar22 & 1) != 0) {
          uVar18 = *(ulong *)(in_x0 + 0x30);
        }
        if (uVar18 != 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)in_x0,pbVar25);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)pbVar15,pbVar24);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)this,pbVar23);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)this_00,pbVar22);
          *(undefined8 *)(in_x0 + 0x1a) = *(undefined8 *)(in_x0 + 0x36);
          *(undefined8 *)(in_x0 + 0x18) = *(undefined8 *)(in_x0 + 0x34);
          if ((*(byte *)(in_x0 + 0x1c) & 1) == 0) {
            *(undefined2 *)pbVar25 = 0;
          }
          else {
            **(undefined **)(in_x0 + 0x20) = 0;
            *(undefined8 *)(in_x0 + 0x1e) = 0;
          }
          in_x0[0x34] = 0;
          if ((*(byte *)(in_x0 + 0x22) & 1) == 0) {
            *(undefined2 *)pbVar24 = 0;
          }
          else {
            **(undefined **)(in_x0 + 0x26) = 0;
            *(undefined8 *)(in_x0 + 0x24) = 0;
          }
          in_x0[0x35] = 0;
          if ((*(byte *)(in_x0 + 0x28) & 1) == 0) {
            *(undefined2 *)pbVar23 = 0;
          }
          else {
            **(undefined **)(in_x0 + 0x2c) = 0;
            *(undefined8 *)(in_x0 + 0x2a) = 0;
          }
          in_x0[0x36] = 0;
          if ((*(byte *)(in_x0 + 0x2e) & 1) == 0) {
            *(undefined2 *)pbVar22 = 0;
          }
          else {
            **(undefined **)(in_x0 + 0x32) = 0;
            *(undefined8 *)(in_x0 + 0x30) = 0;
          }
          in_x0[0x37] = 0;
          startLoading();
        }
      }
    }
  }
LAB_00a105c0:
  if (*(long *)(lVar5 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


