// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeWhiteSpaces
// Entry Point: 00b9da74
// Size: 416 bytes
// Signature: undefined __cdecl decodeWhiteSpaces(basic_string * param_1)


/* WARNING: Type propagation algorithm not settling */
/* StringUtil::decodeWhiteSpaces(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

undefined8 * StringUtil::decodeWhiteSpaces(basic_string *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  double *in_x2;
  undefined8 *in_x8;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *extraout_x11;
  undefined8 *puVar16;
  int iVar17;
  undefined8 *extraout_x12;
  undefined8 *extraout_x12_00;
  undefined8 *extraout_x12_01;
  undefined8 *extraout_x12_02;
  undefined8 *extraout_x12_03;
  undefined8 *extraout_x12_04;
  undefined8 *extraout_x12_05;
  undefined8 *extraout_x12_06;
  undefined8 *puVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined8 *extraout_x13;
  undefined8 *extraout_x13_00;
  undefined8 *extraout_x13_01;
  undefined8 *extraout_x13_02;
  undefined8 *extraout_x13_03;
  undefined8 *extraout_x13_04;
  undefined8 *extraout_x13_05;
  undefined8 *extraout_x13_06;
  undefined8 *puVar22;
  undefined8 *extraout_x14;
  undefined8 *extraout_x14_00;
  undefined8 *extraout_x14_01;
  undefined8 *extraout_x14_02;
  undefined8 *extraout_x14_03;
  undefined8 *extraout_x14_04;
  undefined8 *extraout_x14_05;
  undefined8 *extraout_x14_06;
  undefined8 *puVar23;
  ulong extraout_x15;
  ulong extraout_x15_00;
  ulong extraout_x15_01;
  ulong extraout_x15_02;
  ulong extraout_x15_03;
  ulong extraout_x15_04;
  ulong extraout_x15_05;
  ulong extraout_x15_06;
  ulong uVar24;
  ulong extraout_x16;
  ulong extraout_x16_00;
  ulong extraout_x16_01;
  ulong extraout_x16_02;
  ulong extraout_x16_03;
  ulong extraout_x16_04;
  ulong extraout_x16_05;
  ulong extraout_x16_06;
  ulong uVar25;
  float fVar26;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  double extraout_d0_03;
  double extraout_d0_04;
  double extraout_d0_05;
  double extraout_d0_06;
  double dVar27;
  float fVar28;
  double in_d1;
  double dVar29;
  double in_d2;
  double in_d3;
  double in_d4;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
                    /* try { // try from 00b9daac to 00b9dab3 has its CatchHandler @ 00b9dc14 */
  puVar8 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::reserve
                     ((ulong)in_x8);
  bVar6 = (*(byte *)param_1 & 1) == 0;
  uVar24 = (ulong)(*(byte *)param_1 >> 1);
  if (!bVar6) {
    uVar24 = *(ulong *)(param_1 + 2);
  }
  cVar7 = (char)in_x8;
  if (uVar24 != 1) {
    puVar13 = (undefined8 *)0x0;
    uVar19 = 0;
    puVar16 = extraout_x11;
    puVar18 = extraout_x12;
    puVar22 = extraout_x13;
    puVar23 = extraout_x14;
    uVar24 = extraout_x15;
    uVar25 = extraout_x16;
    dVar27 = extraout_d0;
    do {
      lVar15 = (long)param_1 + 1;
      if (!bVar6) {
        lVar15 = *(long *)(param_1 + 4);
      }
      puVar10 = (undefined8 *)(ulong)*(byte *)(lVar15 + (long)puVar13);
      if (*(byte *)(lVar15 + (long)puVar13) != 0x5c) {
                    /* try { // try from 00b9daec to 00b9dbd7 has its CatchHandler @ 00b9dc18 */
        puVar8 = (undefined8 *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 push_back(cVar7);
        puVar18 = extraout_x12_00;
        puVar22 = extraout_x13_00;
        puVar23 = extraout_x14_00;
        uVar24 = extraout_x15_00;
        uVar25 = extraout_x16_00;
        dVar27 = extraout_d0_00;
        goto LAB_00b9daf4;
      }
      uVar21 = uVar19 + 1;
      uVar2 = *(byte *)(lVar15 + (ulong)uVar21) - 0x66;
      uVar3 = uVar2 >> 1 & 0x7f;
      uVar2 = uVar2 * 0x80;
      uVar4 = uVar3 | uVar2 & 0xff;
      bVar5 = 7 < uVar4;
      bVar6 = uVar4 == 8;
      if (8 < uVar4) {
switchD_00b9db68_caseD_1:
        puVar8 = in_x8;
switchD_00b9db68_caseD_fe:
        puVar8 = (undefined8 *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 push_back((char)puVar8);
        puVar18 = extraout_x12_02;
        puVar22 = extraout_x13_02;
        puVar23 = extraout_x14_02;
        uVar24 = extraout_x15_02;
        uVar25 = extraout_x16_02;
        dVar27 = extraout_d0_02;
        goto LAB_00b9daf4;
      }
      puVar13 = (undefined8 *)((ulong)(uVar3 | uVar2) & 0xff);
      uVar14 = (ulong)*(byte *)((long)puVar13 + 0x5259fc);
      uVar12 = uVar14 * 4 + 0xb9db6c;
      puVar9 = puVar8;
      switch(puVar13) {
      default:
        puVar8 = in_x8;
      case (undefined8 *)0xf8:
        puVar8 = (undefined8 *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 push_back((char)puVar8);
        puVar18 = extraout_x12_01;
        puVar22 = extraout_x13_01;
        puVar23 = extraout_x14_01;
        uVar24 = extraout_x15_01;
        uVar25 = extraout_x16_01;
        dVar27 = extraout_d0_01;
switchD_00b9db68_caseD_75:
        uVar19 = uVar21;
        break;
      case (undefined8 *)0x1:
      case (undefined8 *)0x2:
      case (undefined8 *)0x3:
      case (undefined8 *)0x5:
      case (undefined8 *)0xfa:
        goto switchD_00b9db68_caseD_1;
      case (undefined8 *)0x4:
        puVar8 = (undefined8 *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 push_back(cVar7);
        puVar18 = extraout_x12_03;
        puVar22 = extraout_x13_03;
        puVar23 = extraout_x14_03;
        uVar24 = extraout_x15_03;
        uVar25 = extraout_x16_03;
        dVar27 = extraout_d0_03;
        uVar19 = uVar21;
        break;
      case (undefined8 *)0x6:
        puVar8 = (undefined8 *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 push_back(cVar7);
        puVar18 = extraout_x12_04;
        puVar22 = extraout_x13_04;
        puVar23 = extraout_x14_04;
        uVar24 = extraout_x15_04;
        uVar25 = extraout_x16_04;
        dVar27 = extraout_d0_04;
        uVar19 = uVar21;
        break;
      case (undefined8 *)0x7:
        puVar8 = (undefined8 *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 push_back(cVar7);
        puVar18 = extraout_x12_05;
        puVar22 = extraout_x13_05;
        puVar23 = extraout_x14_05;
        uVar24 = extraout_x15_05;
        uVar25 = extraout_x16_05;
        dVar27 = extraout_d0_05;
        uVar19 = uVar21;
        break;
      case (undefined8 *)0x8:
        puVar8 = (undefined8 *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 push_back(cVar7);
        puVar18 = extraout_x12_06;
        puVar22 = extraout_x13_06;
        puVar23 = extraout_x14_06;
        uVar24 = extraout_x15_06;
        uVar25 = extraout_x16_06;
        dVar27 = extraout_d0_06;
        uVar19 = uVar21;
        break;
      case (undefined8 *)0xa:
        goto switchD_00b9db68_caseD_a;
      case (undefined8 *)0xc:
        uVar12 = (ulong)bVar6;
      case (undefined8 *)0x10:
        if (bVar6) {
          puVar13 = (undefined8 *)((long)puVar13 + 1);
        }
switchD_00b9db68_caseD_14:
        dVar27 = 0.0;
switchD_00b9db68_caseD_18:
        bVar5 = puVar10 <= puVar13;
switchD_00b9db68_caseD_1c:
        if (!bVar5) {
switchD_00b9db68_caseD_20:
          puVar22 = (undefined8 *)(ulong)*(byte *)puVar13;
switchD_00b9db68_caseD_24:
          uVar14 = (ulong)((int)puVar22 - 0x30);
switchD_00b9db68_caseD_28:
          bVar5 = 8 < (uint)uVar14;
          bVar6 = (uint)uVar14 == 9;
switchD_00b9db68_caseD_2c:
          if (!bVar5 || bVar6) {
switchD_00b9db68_caseD_30:
            puVar23 = (undefined8 *)~(ulong)puVar13;
switchD_00b9db68_caseD_34:
            puVar16 = (undefined8 *)0x0;
switchD_00b9db68_caseD_38:
            puVar18 = (undefined8 *)0x0;
switchD_00b9db68_caseD_3c:
            uVar14 = (long)puVar10 - 1;
switchD_00b9db68_caseD_40:
            puVar23 = (undefined8 *)((long)puVar23 + (long)puVar10);
switchD_00b9db68_caseD_44:
            uVar24 = 10;
            goto switchD_00b9db68_caseD_48;
          }
        }
switchD_00b9db68_caseD_6a:
        puVar8 = puVar13;
switchD_00b9db68_caseD_6e:
        *(int *)in_x2 = SUB84(dVar27,0);
        return puVar8;
      case (undefined8 *)0xe:
        goto switchD_00b9db68_caseD_e;
      case (undefined8 *)0x12:
        goto switchD_00b9db68_caseD_12;
      case (undefined8 *)0x14:
        goto switchD_00b9db68_caseD_14;
      case (undefined8 *)0x16:
        goto switchD_00b9db68_caseD_16;
      case (undefined8 *)0x18:
        goto switchD_00b9db68_caseD_18;
      case (undefined8 *)0x1a:
        goto switchD_00b9db68_caseD_1a;
      case (undefined8 *)0x1c:
        goto switchD_00b9db68_caseD_1c;
      case (undefined8 *)0x1e:
        goto switchD_00b9db68_caseD_1e;
      case (undefined8 *)0x20:
        goto switchD_00b9db68_caseD_20;
      case (undefined8 *)0x22:
        goto switchD_00b9db68_caseD_22;
      case (undefined8 *)0x24:
        goto switchD_00b9db68_caseD_24;
      case (undefined8 *)0x26:
        goto switchD_00b9db68_caseD_26;
      case (undefined8 *)0x28:
        goto switchD_00b9db68_caseD_28;
      case (undefined8 *)0x2a:
        goto switchD_00b9db68_caseD_2a;
      case (undefined8 *)0x2c:
        goto switchD_00b9db68_caseD_2c;
      case (undefined8 *)0x2e:
        goto switchD_00b9db68_caseD_2e;
      case (undefined8 *)0x30:
        goto switchD_00b9db68_caseD_30;
      case (undefined8 *)0x32:
        goto switchD_00b9db68_caseD_32;
      case (undefined8 *)0x34:
        goto switchD_00b9db68_caseD_34;
      case (undefined8 *)0x36:
        goto switchD_00b9db68_caseD_36;
      case (undefined8 *)0x38:
        goto switchD_00b9db68_caseD_38;
      case (undefined8 *)0x3a:
        goto switchD_00b9db68_caseD_3a;
      case (undefined8 *)0x3c:
        goto switchD_00b9db68_caseD_3c;
      case (undefined8 *)0x3e:
        goto switchD_00b9db68_caseD_3e;
      case (undefined8 *)0x40:
        goto switchD_00b9db68_caseD_40;
      case (undefined8 *)0x42:
        goto switchD_00b9db68_caseD_42;
      case (undefined8 *)0x44:
        goto switchD_00b9db68_caseD_44;
      case (undefined8 *)0x46:
        goto switchD_00b9db68_caseD_46;
      case (undefined8 *)0x48:
        goto switchD_00b9db68_caseD_48;
      case (undefined8 *)0x4a:
        goto switchD_00b9db68_caseD_4a;
      case (undefined8 *)0x4c:
        goto switchD_00b9db68_caseD_4c;
      case (undefined8 *)0x4e:
        goto switchD_00b9db68_caseD_4e;
      case (undefined8 *)0x50:
        goto switchD_00b9db68_caseD_50;
      case (undefined8 *)0x52:
        goto switchD_00b9db68_caseD_52;
      case (undefined8 *)0x54:
        goto switchD_00b9db68_caseD_54;
      case (undefined8 *)0x56:
        goto switchD_00b9db68_caseD_56;
      case (undefined8 *)0x58:
        goto switchD_00b9db68_caseD_58;
      case (undefined8 *)0x5a:
        goto switchD_00b9db68_caseD_5a;
      case (undefined8 *)0x5c:
        goto switchD_00b9db68_caseD_5c;
      case (undefined8 *)0x5e:
        goto switchD_00b9db68_caseD_5e;
      case (undefined8 *)0x60:
        goto switchD_00b9db68_caseD_60;
      case (undefined8 *)0x62:
        goto switchD_00b9db68_caseD_62;
      case (undefined8 *)0x64:
        goto switchD_00b9db68_caseD_64;
      case (undefined8 *)0x66:
      case (undefined8 *)0xf0:
        goto switchD_00b9db68_caseD_66;
      case (undefined8 *)0x68:
        goto switchD_00b9db68_caseD_68;
      case (undefined8 *)0x6a:
        goto switchD_00b9db68_caseD_6a;
      case (undefined8 *)0x6c:
        goto switchD_00b9db68_caseD_6c;
      case (undefined8 *)0x6e:
        goto switchD_00b9db68_caseD_6e;
      case (undefined8 *)0x70:
        goto switchD_00b9db68_caseD_70;
      case (undefined8 *)0x72:
        goto switchD_00b9db68_caseD_72;
      case (undefined8 *)0x74:
        goto switchD_00b9db68_caseD_74;
      case (undefined8 *)0x75:
      case (undefined8 *)0xf6:
        goto switchD_00b9db68_caseD_75;
      case (undefined8 *)0x76:
        goto switchD_00b9db68_caseD_76;
      case (undefined8 *)0x78:
        goto switchD_00b9db68_caseD_78;
      case (undefined8 *)0x7a:
        goto switchD_00b9db68_caseD_7a;
      case (undefined8 *)0x7c:
        puVar13 = puVar8;
      case (undefined8 *)0x80:
        bVar5 = puVar10 <= puVar8;
switchD_00b9db68_caseD_84:
        if (bVar5) {
switchD_00b9db68_caseD_ac:
          uVar12 = 0;
          goto switchD_00b9db68_caseD_c0;
        }
switchD_00b9db68_caseD_88:
        uVar12 = (long)puVar10 - (long)puVar13;
        goto switchD_00b9db68_caseD_8c;
      case (undefined8 *)0x7e:
        goto switchD_00b9db68_caseD_7e;
      case (undefined8 *)0x82:
        goto switchD_00b9db68_caseD_82;
      case (undefined8 *)0x84:
        goto switchD_00b9db68_caseD_84;
      case (undefined8 *)0x86:
        goto switchD_00b9db68_caseD_86;
      case (undefined8 *)0x88:
        goto switchD_00b9db68_caseD_88;
      case (undefined8 *)0x8a:
        goto switchD_00b9db68_caseD_8a;
      case (undefined8 *)0x8c:
        goto switchD_00b9db68_caseD_8c;
      case (undefined8 *)0x8e:
        goto switchD_00b9db68_caseD_8e;
      case (undefined8 *)0x90:
        goto switchD_00b9db68_caseD_90;
      case (undefined8 *)0x92:
        goto switchD_00b9db68_caseD_92;
      case (undefined8 *)0x94:
        goto switchD_00b9db68_caseD_94;
      case (undefined8 *)0x96:
        goto switchD_00b9db68_caseD_96;
      case (undefined8 *)0x98:
        goto switchD_00b9db68_caseD_98;
      case (undefined8 *)0x9a:
        goto switchD_00b9db68_caseD_9a;
      case (undefined8 *)0x9c:
        goto switchD_00b9db68_caseD_9c;
      case (undefined8 *)0x9e:
        goto switchD_00b9db68_caseD_9e;
      case (undefined8 *)0xa0:
        goto switchD_00b9db68_caseD_a0;
      case (undefined8 *)0xa2:
        goto switchD_00b9db68_caseD_a2;
      case (undefined8 *)0xa4:
        goto switchD_00b9db68_caseD_a4;
      case (undefined8 *)0xa6:
        goto switchD_00b9db68_caseD_a6;
      case (undefined8 *)0xaa:
        goto switchD_00b9db68_caseD_aa;
      case (undefined8 *)0xac:
        goto switchD_00b9db68_caseD_ac;
      case (undefined8 *)0xae:
        goto switchD_00b9db68_caseD_ae;
      case (undefined8 *)0xb2:
        goto switchD_00b9db68_caseD_b2;
      case (undefined8 *)0xb4:
        goto switchD_00b9db68_caseD_b4;
      case (undefined8 *)0xb6:
        goto switchD_00b9db68_caseD_b6;
      case (undefined8 *)0xb8:
        goto switchD_00b9db68_caseD_b8;
      case (undefined8 *)0xba:
        goto switchD_00b9db68_caseD_ba;
      case (undefined8 *)0xbc:
        goto switchD_00b9db68_caseD_bc;
      case (undefined8 *)0xbe:
        goto switchD_00b9db68_caseD_be;
      case (undefined8 *)0xc0:
        goto switchD_00b9db68_caseD_c0;
      case (undefined8 *)0xc2:
        goto switchD_00b9db68_caseD_c2;
      case (undefined8 *)0xc4:
        goto switchD_00b9db68_caseD_c4;
      case (undefined8 *)0xc6:
        goto switchD_00b9db68_caseD_c6;
      case (undefined8 *)0xc8:
        goto switchD_00b9db68_caseD_c8;
      case (undefined8 *)0xca:
        goto switchD_00b9db68_caseD_ca;
      case (undefined8 *)0xcc:
        goto switchD_00b9db68_caseD_cc;
      case (undefined8 *)0xce:
        goto switchD_00b9db68_caseD_ce;
      case (undefined8 *)0xd0:
        goto switchD_00b9db68_caseD_d0;
      case (undefined8 *)0xd2:
        goto switchD_00b9db68_caseD_d2;
      case (undefined8 *)0xd4:
        goto switchD_00b9db68_caseD_d4;
      case (undefined8 *)0xd6:
        goto switchD_00b9db68_caseD_d6;
      case (undefined8 *)0xd8:
        goto switchD_00b9db68_caseD_d8;
      case (undefined8 *)0xda:
        goto switchD_00b9db68_caseD_da;
      case (undefined8 *)0xdc:
        goto switchD_00b9db68_caseD_dc;
      case (undefined8 *)0xde:
        goto switchD_00b9db68_caseD_de;
      case (undefined8 *)0xe0:
        goto switchD_00b9db68_caseD_e0;
      case (undefined8 *)0xe2:
        goto switchD_00b9db68_caseD_e2;
      case (undefined8 *)0xe4:
        goto switchD_00b9db68_caseD_e4;
      case (undefined8 *)0xe6:
        goto switchD_00b9db68_caseD_e6;
      case (undefined8 *)0xe8:
        goto switchD_00b9db68_caseD_e8;
      case (undefined8 *)0xea:
        goto switchD_00b9db68_caseD_ea;
      case (undefined8 *)0xec:
        goto switchD_00b9db68_caseD_ec;
      case (undefined8 *)0xee:
        goto switchD_00b9db68_caseD_ee;
      case (undefined8 *)0xfc:
        break;
      case (undefined8 *)0xfe:
        goto switchD_00b9db68_caseD_fe;
      }
LAB_00b9daf4:
      uVar19 = uVar19 + 1;
      puVar13 = (undefined8 *)(ulong)uVar19;
      bVar6 = (*(byte *)param_1 & 1) == 0;
      uVar12 = (ulong)(*(byte *)param_1 >> 1);
      if (!bVar6) {
        uVar12 = *(ulong *)(param_1 + 2);
      }
      puVar16 = (undefined8 *)(uVar12 - 1);
    } while (puVar13 < puVar16);
    if (uVar12 == 0) {
      return puVar8;
    }
  }
                    /* try { // try from 00b9dbf8 to 00b9dbff has its CatchHandler @ 00b9dc14 */
  puVar8 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                     (cVar7);
  return puVar8;
switchD_00b9db68_caseD_b4:
  bVar6 = (int)uVar14 == 0x2d;
switchD_00b9db68_caseD_b8:
  uVar12 = (ulong)bVar6;
switchD_00b9db68_caseD_bc:
  if (bVar6) {
    puVar13 = (undefined8 *)((long)puVar13 + 1);
  }
  goto switchD_00b9db68_caseD_c0;
switchD_00b9db68_caseD_76:
  bVar6 = puVar23 == puVar16;
switchD_00b9db68_caseD_7a:
  puVar18 = (undefined8 *)(ulong)((int)puVar18 - 0x30);
switchD_00b9db68_caseD_7e:
  iVar11 = (int)uVar12;
  if (bVar6) {
    dVar27 = (double)((ulong)puVar18 & 0xffffffff);
    puVar8 = puVar10;
    goto joined_r0x00b9dfb0;
  }
switchD_00b9db68_caseD_82:
  puVar22 = (undefined8 *)((long)puVar13 + (long)puVar16);
switchD_00b9db68_caseD_86:
  puVar16 = (undefined8 *)((long)puVar16 + 1);
switchD_00b9db68_caseD_8a:
  puVar22 = (undefined8 *)(ulong)*(byte *)((long)puVar22 + 1);
switchD_00b9db68_caseD_8e:
  uVar25 = (ulong)((int)puVar22 - 0x30);
switchD_00b9db68_caseD_92:
  bVar5 = 9 < (uint)uVar25;
switchD_00b9db68_caseD_96:
  iVar20 = (int)puVar22;
  iVar11 = (int)puVar18;
  if (bVar5) goto switchD_00b9db68_caseD_9a;
LAB_00b9dee8:
  puVar18 = (undefined8 *)(ulong)(uint)(iVar20 + iVar11 * (int)uVar24);
  goto switchD_00b9db68_caseD_76;
switchD_00b9db68_caseD_9a:
  dVar27 = (double)((ulong)puVar18 & 0xffffffff);
switchD_00b9db68_caseD_9e:
  puVar8 = (undefined8 *)((long)puVar13 + (long)puVar16);
switchD_00b9db68_caseD_a2:
  bVar6 = (int)puVar22 == 0x2e;
switchD_00b9db68_caseD_a6:
  iVar11 = (int)uVar12;
  if (bVar6) {
switchD_00b9db68_caseD_aa:
    puVar18 = (undefined8 *)((long)puVar8 + 1);
switchD_00b9db68_caseD_ae:
    bVar5 = puVar10 <= puVar18;
    puVar9 = puVar8;
switchD_00b9db68_caseD_b2:
    puVar8 = puVar18;
    iVar11 = (int)uVar12;
    puVar18 = puVar8;
    if (bVar5) {
      in_d1 = 0.0;
LAB_00b9e050:
      dVar27 = in_d1 + dVar27;
    }
    else {
switchD_00b9db68_caseD_b6:
      puVar22 = &DAT_004c6000;
switchD_00b9db68_caseD_ba:
      puVar13 = (undefined8 *)((long)puVar10 - (long)puVar13);
switchD_00b9db68_caseD_be:
      puVar23 = (undefined8 *)~(ulong)puVar16;
switchD_00b9db68_caseD_c2:
      uVar24 = (long)puVar9 - 1;
switchD_00b9db68_caseD_c6:
      uVar25 = (long)puVar13 - (long)puVar16;
switchD_00b9db68_caseD_ca:
      puVar16 = (undefined8 *)((long)puVar23 + (long)puVar13);
switchD_00b9db68_caseD_ce:
      in_d2 = (double)puVar22[0x141];
      puVar13 = (undefined8 *)(uVar25 + uVar24);
switchD_00b9db68_caseD_d2:
      in_d1 = 0.0;
switchD_00b9db68_caseD_d6:
      puVar13 = (undefined8 *)((long)puVar13 + 1);
switchD_00b9db68_caseD_da:
      puVar8 = puVar18;
switchD_00b9db68_caseD_de:
      in_d3 = in_d2;
switchD_00b9db68_caseD_e2:
      do {
        puVar18 = (undefined8 *)(ulong)*(byte *)puVar8;
switchD_00b9db68_caseD_e6:
        puVar18 = (undefined8 *)(ulong)((int)puVar18 - 0x30);
switchD_00b9db68_caseD_ea:
        bVar5 = 9 < (uint)puVar18;
switchD_00b9db68_caseD_ee:
        iVar11 = (int)uVar12;
        if (bVar5) goto LAB_00b9e050;
        puVar8 = (undefined8 *)((long)puVar8 + 1);
        puVar16 = (undefined8 *)((long)puVar16 + -1);
        in_d1 = (double)NEON_fmadd(in_d3,(double)(int)puVar18,in_d1);
        in_d3 = in_d3 * in_d2;
      } while (puVar16 != (undefined8 *)0x0);
      dVar27 = in_d1 + dVar27;
      puVar8 = puVar13;
    }
  }
joined_r0x00b9dfb0:
  if ((puVar8 < puVar10) && (*(char *)puVar8 == 'e')) {
    puVar16 = (undefined8 *)((long)puVar8 + 1);
    cVar7 = *(char *)puVar16;
    bVar6 = puVar10 <= puVar16;
    if (!bVar6 && cVar7 == '-' || cVar7 == '+') {
      puVar16 = (undefined8 *)((long)puVar8 + 2);
    }
    if ((puVar16 < puVar10) && (*(byte *)puVar16 - 0x30 < 10)) {
      lVar15 = uVar14 - (long)puVar16;
      iVar20 = 0;
      uVar19 = (uint)*(byte *)puVar16;
      do {
        uVar21 = uVar19;
        iVar17 = iVar20;
        iVar20 = uVar21 + iVar17 * 10 + -0x30;
        puVar8 = puVar10;
        if (lVar15 == 0) break;
        pbVar1 = (byte *)((long)puVar16 + 1);
        puVar8 = (undefined8 *)((long)puVar16 + 1);
        lVar15 = lVar15 + -1;
        puVar16 = puVar8;
        uVar19 = (uint)*pbVar1;
      } while (*pbVar1 - 0x30 < 10);
      if (iVar20 == 0) {
        dVar29 = 1.0;
      }
      else {
        dVar29 = 1.0;
        iVar20 = uVar21 + iVar17 * 10 + -0x30;
        do {
          dVar29 = dVar29 * 10.0;
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
      }
      if (bVar6 || cVar7 != '-') {
        dVar27 = dVar27 * dVar29;
      }
      else {
        dVar27 = dVar27 / dVar29;
      }
    }
  }
  dVar29 = -dVar27;
  if (iVar11 == 0) {
    dVar29 = dVar27;
  }
  *in_x2 = dVar29;
  return puVar8;
switchD_00b9db68_caseD_58:
  while( true ) {
    puVar22 = (undefined8 *)((long)puVar13 + (long)puVar16);
switchD_00b9db68_caseD_5c:
    puVar16 = (undefined8 *)((long)puVar16 + 1);
switchD_00b9db68_caseD_60:
    puVar22 = (undefined8 *)(ulong)*(byte *)((long)puVar22 + 1);
switchD_00b9db68_caseD_64:
    uVar25 = (ulong)((int)puVar22 - 0x30);
switchD_00b9db68_caseD_68:
    bVar5 = 9 < (uint)uVar25;
switchD_00b9db68_caseD_6c:
    if (bVar5) break;
switchD_00b9db68_caseD_48:
    puVar18 = (undefined8 *)(ulong)(uint)((int)puVar22 + (int)puVar18 * (int)uVar24);
switchD_00b9db68_caseD_4c:
    bVar6 = puVar23 == puVar16;
switchD_00b9db68_caseD_50:
    puVar18 = (undefined8 *)(ulong)((int)puVar18 - 0x30);
switchD_00b9db68_caseD_54:
    if (bVar6) {
      dVar27 = (double)(ulong)(uint)(float)((ulong)puVar18 & 0xffffffff);
      puVar8 = puVar10;
      goto LAB_00b9dd64;
    }
  }
switchD_00b9db68_caseD_70:
  fVar26 = (float)((ulong)puVar18 & 0xffffffff);
  dVar27 = (double)(ulong)(uint)fVar26;
  puVar9 = (undefined8 *)((long)puVar13 + (long)puVar16);
  puVar8 = puVar9;
  if ((int)puVar22 == 0x2e) {
    puVar8 = (undefined8 *)((long)puVar9 + 1);
    puVar18 = puVar8;
    if (puVar8 < puVar10) {
switchD_00b9db68_caseD_a:
      puVar22 = &DAT_004c6000;
switchD_00b9db68_caseD_e:
      puVar13 = (undefined8 *)((long)puVar10 - (long)puVar13);
switchD_00b9db68_caseD_12:
      puVar23 = (undefined8 *)~(ulong)puVar16;
switchD_00b9db68_caseD_16:
      uVar24 = (long)puVar9 - 1;
switchD_00b9db68_caseD_1a:
      uVar25 = (long)puVar13 - (long)puVar16;
switchD_00b9db68_caseD_1e:
      puVar16 = (undefined8 *)((long)puVar23 + (long)puVar13);
switchD_00b9db68_caseD_22:
      in_d2 = (double)puVar22[0x141];
switchD_00b9db68_caseD_26:
      puVar13 = (undefined8 *)(uVar25 + uVar24);
switchD_00b9db68_caseD_2a:
      in_d1 = 0.0;
switchD_00b9db68_caseD_2e:
      puVar13 = (undefined8 *)((long)puVar13 + 1);
switchD_00b9db68_caseD_32:
      puVar8 = puVar18;
switchD_00b9db68_caseD_36:
      in_d3 = in_d2;
switchD_00b9db68_caseD_3a:
      do {
        puVar18 = (undefined8 *)(ulong)*(byte *)puVar8;
switchD_00b9db68_caseD_3e:
        puVar18 = (undefined8 *)(ulong)((int)puVar18 - 0x30);
switchD_00b9db68_caseD_42:
        bVar5 = 9 < (uint)puVar18;
switchD_00b9db68_caseD_46:
        fVar26 = SUB84(dVar27,0);
        if (bVar5) goto LAB_00b9de08;
switchD_00b9db68_caseD_4a:
        in_d4 = (double)(int)puVar18;
switchD_00b9db68_caseD_4e:
        puVar8 = (undefined8 *)((long)puVar8 + 1);
switchD_00b9db68_caseD_52:
        puVar16 = (undefined8 *)((long)puVar16 + -1);
        bVar6 = puVar16 == (undefined8 *)0x0;
switchD_00b9db68_caseD_56:
        in_d1 = (double)NEON_fmadd(in_d3,in_d4,in_d1);
switchD_00b9db68_caseD_5a:
        in_d3 = in_d3 * in_d2;
switchD_00b9db68_caseD_5e:
      } while (!bVar6);
switchD_00b9db68_caseD_62:
      puVar8 = puVar13;
switchD_00b9db68_caseD_66:
      fVar26 = SUB84(dVar27,0);
    }
    else {
      in_d1 = 0.0;
    }
LAB_00b9de08:
    iVar11 = (int)uVar12;
    fVar26 = fVar26 + (float)in_d1;
    dVar27 = (double)(ulong)(uint)fVar26;
  }
  else {
LAB_00b9dd64:
    iVar11 = (int)uVar12;
    fVar26 = SUB84(dVar27,0);
  }
  if (puVar8 < puVar10) {
    iVar11 = (int)uVar12;
    fVar26 = SUB84(dVar27,0);
    if (*(char *)puVar8 == 'e') {
      puVar16 = (undefined8 *)((long)puVar8 + 1);
      cVar7 = *(char *)puVar16;
      puVar13 = (undefined8 *)(ulong)(puVar16 < puVar10 && cVar7 == '-');
      if (puVar16 < puVar10 && cVar7 == '-' || cVar7 == '+') {
        puVar16 = (undefined8 *)((long)puVar8 + 2);
      }
      if ((puVar16 < puVar10) && (uVar19 = (uint)*(byte *)puVar16, *(byte *)puVar16 - 0x30 < 10)) {
        puVar18 = (undefined8 *)0x0;
        uVar14 = uVar14 - (long)puVar16;
        uVar25 = 10;
        puVar8 = puVar16;
        do {
          puVar23 = (undefined8 *)((ulong)puVar18 & 0xffffffff);
          uVar24 = (ulong)uVar19;
          puVar18 = (undefined8 *)(ulong)((uVar19 + (int)puVar18 * (int)uVar25) - 0x30);
          puVar16 = puVar8;
switchD_00b9db68_caseD_74:
          fVar26 = SUB84(dVar27,0);
          puVar8 = puVar10;
          if (uVar14 == 0) break;
          uVar19 = (uint)*(byte *)((long)puVar16 + 1);
          puVar8 = (undefined8 *)((long)puVar16 + 1);
          uVar14 = uVar14 - 1;
        } while (uVar19 - 0x30 < 10);
        if ((int)puVar18 == 0) {
          fVar28 = 1.0;
        }
        else {
          uVar14 = 10;
          in_d1 = 5.26354424712089e-315;
          in_d2 = 5.398241245570834e-315;
switchD_00b9db68_caseD_72:
          fVar26 = SUB84(dVar27,0);
          iVar11 = (int)uVar24 + (int)puVar23 * (int)uVar14 + -0x30;
          do {
            fVar28 = SUB84(in_d1,0) * SUB84(in_d2,0);
            in_d1 = (double)(ulong)(uint)fVar28;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        iVar11 = (int)uVar12;
        if (((ulong)puVar13 & 1) == 0) {
          dVar27 = (double)(ulong)(uint)(fVar26 * fVar28);
switchD_00b9db68_caseD_78:
          iVar11 = (int)uVar12;
          fVar26 = SUB84(dVar27,0);
        }
        else {
          fVar26 = fVar26 / fVar28;
        }
      }
    }
  }
  fVar28 = -fVar26;
  if (iVar11 == 0) {
    fVar28 = fVar26;
  }
  *(float *)in_x2 = fVar28;
  return puVar8;
switchD_00b9db68_caseD_98:
  while( true ) {
    puVar13 = (undefined8 *)((long)puVar13 + 1);
switchD_00b9db68_caseD_9c:
    uVar12 = uVar12 - 1;
    bVar6 = uVar12 == 0;
switchD_00b9db68_caseD_a0:
    if (bVar6) break;
switchD_00b9db68_caseD_8c:
    uVar14 = (ulong)*(byte *)puVar13;
switchD_00b9db68_caseD_90:
    bVar6 = (int)uVar14 == 0x20;
switchD_00b9db68_caseD_94:
    if (!bVar6) goto switchD_00b9db68_caseD_b4;
  }
switchD_00b9db68_caseD_a4:
  puVar13 = puVar10;
switchD_00b9db68_caseD_c0:
  dVar27 = 0.0;
switchD_00b9db68_caseD_c4:
  bVar5 = puVar10 <= puVar13;
switchD_00b9db68_caseD_c8:
  if (!bVar5) {
switchD_00b9db68_caseD_cc:
    puVar22 = (undefined8 *)(ulong)*(byte *)puVar13;
switchD_00b9db68_caseD_d0:
    uVar19 = (int)puVar22 - 0x30;
    bVar5 = 8 < uVar19;
    bVar6 = uVar19 == 9;
switchD_00b9db68_caseD_d4:
    if (!bVar5 || bVar6) {
switchD_00b9db68_caseD_d8:
      puVar23 = (undefined8 *)~(ulong)puVar13;
switchD_00b9db68_caseD_dc:
      puVar16 = (undefined8 *)0x0;
switchD_00b9db68_caseD_e0:
      puVar18 = (undefined8 *)0x0;
switchD_00b9db68_caseD_e4:
      uVar14 = (long)puVar10 - 1;
switchD_00b9db68_caseD_e8:
      puVar23 = (undefined8 *)((long)puVar23 + (long)puVar10);
switchD_00b9db68_caseD_ec:
      iVar20 = (int)puVar22;
      iVar11 = (int)puVar18;
      uVar24 = 10;
      goto LAB_00b9dee8;
    }
  }
  *in_x2 = dVar27;
  return puVar13;
}


