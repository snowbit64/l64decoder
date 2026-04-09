// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FixEndpointPBits
// Entry Point: 00a834bc
// Size: 1872 bytes
// Signature: undefined __thiscall FixEndpointPBits(D3DX_BC7 * this, EncodeParams * param_1, LDREndPntPair * param_2, LDREndPntPair * param_3)


/* BC6BC7Util::D3DX_BC7::FixEndpointPBits(BC6BC7Util::D3DX_BC7::EncodeParams const*,
   BC6BC7Util::LDREndPntPair const*, BC6BC7Util::LDREndPntPair*) */

void __thiscall
BC6BC7Util::D3DX_BC7::FixEndpointPBits
          (D3DX_BC7 *this,EncodeParams *param_1,LDREndPntPair *param_2,LDREndPntPair *param_3)

{
  unkbyte9 *pVar1;
  uint uVar2;
  EncodeParams EVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  LDREndPntPair LVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  unkbyte9 Var16;
  bool bVar17;
  long lVar18;
  D3DX_BC7 DVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  byte *pbVar25;
  unkbyte9 *pVar26;
  undefined8 *puVar27;
  uint *puVar28;
  undefined (*pauVar29) [16];
  undefined8 *puVar30;
  byte *pbVar31;
  ulong *puVar32;
  LDREndPntPair *pLVar33;
  D3DX_BC7 *pDVar34;
  long lVar35;
  long lVar36;
  int iVar37;
  ulong uVar38;
  char cVar39;
  LDREndPntPair *pLVar40;
  char cVar41;
  undefined auVar43 [13];
  undefined auVar44 [13];
  undefined8 uVar42;
  undefined auVar45 [13];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [13];
  undefined auVar49 [13];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined4 local_90;
  undefined2 uStack_8c;
  undefined4 uStack_88;
  undefined2 uStack_84;
  ulong local_80;
  undefined auStack_78 [16];
  long local_68;
  
  lVar14 = tpidr_el0;
  local_68 = *(long *)(lVar14 + 0x28);
  EVar3 = *param_1;
  *(undefined8 *)param_3 = *(undefined8 *)param_2;
  *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  if ((0x34UL >> ((ulong)(byte)*param_1 & 0x3f) & 1) != 0) goto LAB_00a83bd8;
  lVar36 = (ulong)(byte)*param_1 * 0xf;
  uVar20 = (ulong)(byte)(&ms_aInfo)[(ulong)(byte)EVar3 * 0xf];
  uStack_84 = 0;
  uVar23 = (ulong)(byte)(&DAT_0051f9a2)[lVar36];
  uVar24 = uVar20 * 2 + 2;
  cVar4 = (&DAT_0051f9a7)[lVar36];
  cVar5 = (&DAT_0051f9a8)[lVar36];
  uStack_88 = 0;
  cVar6 = (&DAT_0051f9a9)[lVar36];
  uStack_8c = 0;
  cVar7 = (&DAT_0051f9aa)[lVar36];
  cVar8 = (&DAT_0051f9ab)[lVar36];
  local_90 = 0;
  cVar9 = (&DAT_0051f9ac)[lVar36];
  cVar10 = (&DAT_0051f9ad)[lVar36];
  cVar11 = (&DAT_0051f9ae)[lVar36];
  uVar22 = 0;
  do {
    lVar35 = 0;
    lVar36 = 0;
    uVar38 = 0;
    uVar2 = uVar22 & 0x7f;
    do {
      if (uVar2 == 3) {
        if (cVar7 != cVar11) goto code_r0x00a83688;
code_r0x00a83640:
        switch(uVar2) {
        case 0:
          pLVar33 = param_2 + lVar36 * 8 + 4;
          pLVar40 = param_3 + lVar36 * 8 + 4;
          param_3[lVar35] = param_2[lVar35];
          break;
        case 1:
          pLVar33 = param_2 + lVar36 * 8 + 5;
          pLVar40 = param_3 + lVar36 * 8 + 5;
          param_3[lVar35 + 1] = param_2[lVar35 + 1];
          break;
        case 2:
          pLVar33 = param_2 + lVar36 * 8 + 6;
          pLVar40 = param_3 + lVar36 * 8 + 6;
          param_3[lVar35 + 2] = param_2[lVar35 + 2];
          break;
        case 3:
          pLVar33 = param_2 + lVar35 + 7;
          pLVar40 = param_3 + lVar35 + 7;
          param_3[lVar35 + 3] = param_2[lVar35 + 3];
          break;
        default:
          pLVar33 = param_2 + lVar36 * 8 + 4;
          pLVar40 = param_3 + lVar36 * 8 + 4;
          param_3[lVar35] = param_2[lVar35];
        }
        *pLVar40 = *pLVar33;
        goto LAB_00a835f0;
      }
      cVar39 = cVar6;
      cVar41 = cVar10;
      if ((uVar2 != 2) && (cVar39 = cVar4, cVar41 = cVar8, uVar2 == 1)) {
        cVar39 = cVar5;
        cVar41 = cVar9;
      }
      if (cVar39 == cVar41) goto code_r0x00a83640;
code_r0x00a83688:
      switch(uVar2) {
      case 0:
        pLVar33 = param_2 + lVar35;
        pLVar40 = param_2 + lVar36 * 8 + 4;
        param_3[lVar35] = (LDREndPntPair)((byte)*pLVar33 >> 1);
        LVar12 = pLVar33[4];
        goto LAB_00a837cc;
      case 1:
        param_3[lVar35 + 1] = (LDREndPntPair)((byte)param_2[lVar35 + 1] >> 1);
        pLVar33 = param_2 + lVar36 * 8 + 1;
        pLVar40 = param_2 + lVar36 * 8 + 5;
        param_3[lVar35 + 5] = (LDREndPntPair)((byte)param_2[lVar35 + 5] >> 1);
        break;
      case 2:
        param_3[lVar35 + 2] = (LDREndPntPair)((byte)param_2[lVar35 + 2] >> 1);
        pLVar33 = param_2 + lVar36 * 8 + 2;
        pLVar40 = param_2 + lVar36 * 8 + 6;
        param_3[lVar35 + 6] = (LDREndPntPair)((byte)param_2[lVar35 + 6] >> 1);
        break;
      case 3:
        param_3[lVar35 + 3] = (LDREndPntPair)((byte)param_2[lVar35 + 3] >> 1);
        pLVar33 = param_2 + lVar36 * 8 + 3;
        pLVar40 = param_2 + lVar36 * 8 + 7;
        param_3[lVar35 + 7] = (LDREndPntPair)((byte)param_2[lVar35 + 7] >> 1);
        break;
      default:
        pLVar33 = param_2 + lVar36 * 8;
        param_3[lVar35] = (LDREndPntPair)((byte)param_2[lVar35] >> 1);
        pLVar40 = param_2 + lVar35 + 4;
        LVar12 = *pLVar40;
LAB_00a837cc:
        param_3[lVar35 + 4] = (LDREndPntPair)((byte)LVar12 >> 1);
      }
      uVar21 = uVar38 & 0xff;
      iVar37 = (int)uVar38;
      LVar12 = *pLVar40;
      uVar38 = (ulong)(iVar37 + 2);
      uVar13 = 0;
      if (uVar24 != 0) {
        uVar13 = (uVar21 * uVar23) / uVar24;
      }
      uVar21 = 0;
      if (uVar24 != 0) {
        uVar21 = (((ulong)(iVar37 + 1) & 0xff) * uVar23) / uVar24;
      }
      *(byte *)((long)&uStack_88 + uVar13) =
           *(char *)((long)&uStack_88 + uVar13) + ((byte)*pLVar33 & 1);
      *(char *)((long)&local_90 + uVar13) = *(char *)((long)&local_90 + uVar13) + '\x01';
      *(byte *)((long)&uStack_88 + uVar21) =
           *(char *)((long)&uStack_88 + uVar21) + ((byte)LVar12 & 1);
      *(char *)((long)&local_90 + uVar21) = *(char *)((long)&local_90 + uVar21) + '\x01';
LAB_00a835f0:
      lVar36 = lVar36 + 1;
      lVar35 = lVar35 + 8;
    } while (uVar20 * 8 + 8 != lVar35);
    bVar17 = uVar22 < 3;
    uVar22 = uVar22 + 1;
  } while (bVar17);
  if (uVar23 < 2) {
    uVar23 = 1;
  }
  if (uVar23 < 8) {
    uVar38 = 0;
LAB_00a8397c:
    lVar36 = uVar23 - uVar38;
    pbVar25 = (byte *)((long)&uStack_88 + uVar38);
    puVar28 = (uint *)(auStack_78 + uVar38 * 4 + -8);
    pbVar31 = (byte *)((long)&local_90 + uVar38);
    do {
      lVar36 = lVar36 + -1;
      *puVar28 = (uint)(*pbVar31 >> 1 < *pbVar25);
      pbVar25 = pbVar25 + 1;
      puVar28 = puVar28 + 1;
      pbVar31 = pbVar31 + 1;
    } while (lVar36 != 0);
  }
  else if (uVar23 < 0x20) {
    uVar24 = 0;
LAB_00a8391c:
    uVar38 = uVar23 & 0xf8;
    lVar36 = uVar24 - uVar38;
    puVar27 = (undefined8 *)((long)&uStack_88 + uVar24);
    puVar30 = (undefined8 *)((long)&local_90 + uVar24);
    puVar32 = (ulong *)(auStack_78 + uVar24 * 4 + -8);
    do {
      uVar42 = *puVar30;
      lVar36 = lVar36 + 8;
      uVar42 = NEON_cmhi(*puVar27,CONCAT17((byte)((ulong)uVar42 >> 0x39),
                                           CONCAT16((byte)((ulong)uVar42 >> 0x30) >> 1,
                                                    CONCAT15((byte)((ulong)uVar42 >> 0x28) >> 1,
                                                             CONCAT14((byte)((ulong)uVar42 >> 0x20)
                                                                      >> 1,CONCAT13((byte)((ulong)
                                                  uVar42 >> 0x18) >> 1,
                                                  CONCAT12((byte)((ulong)uVar42 >> 0x10) >> 1,
                                                           CONCAT11((byte)((ulong)uVar42 >> 8) >> 1,
                                                                    (byte)uVar42 >> 1))))))),1);
      auVar49._0_8_ =
           CONCAT35(0,CONCAT14((char)((ulong)uVar42 >> 0x28),
                               (uint)((byte)((ulong)uVar42 >> 0x20) & 1)) & 0x1ffffffff);
      auVar49[8] = (byte)((ulong)uVar42 >> 0x30) & 1;
      auVar49._9_3_ = 0;
      auVar49[12] = (byte)((ulong)uVar42 >> 0x38) & 1;
      auVar45._0_8_ =
           CONCAT35(0,CONCAT14((char)((ulong)uVar42 >> 8),(uint)((byte)uVar42 & 1)) & 0x1ffffffff);
      auVar45[8] = (byte)((ulong)uVar42 >> 0x10) & 1;
      auVar45._9_3_ = 0;
      auVar45[12] = (byte)((ulong)uVar42 >> 0x18) & 1;
      puVar32[1] = (ulong)auVar45._8_5_;
      *puVar32 = auVar45._0_8_;
      puVar32[3] = (ulong)auVar49._8_5_;
      puVar32[2] = auVar49._0_8_;
      puVar27 = puVar27 + 1;
      puVar30 = puVar30 + 1;
      puVar32 = puVar32 + 4;
    } while (lVar36 != 0);
    if (uVar23 != uVar38) goto LAB_00a8397c;
  }
  else {
    uVar38 = uVar23 & 0xe0;
    pVar26 = (unkbyte9 *)auStack_78;
    pauVar29 = (undefined (*) [16])&local_80;
    puVar32 = (ulong *)&stack0xffffffffffffffc0;
    uVar24 = uVar38;
    do {
      auVar47 = pauVar29[-1];
      auVar51 = *pauVar29;
      pauVar29 = pauVar29 + 2;
      uVar24 = uVar24 - 0x20;
      auVar46[0] = auVar47[0] >> 1;
      auVar46[1] = auVar47[1] >> 1;
      auVar46[2] = auVar47[2] >> 1;
      auVar46[3] = auVar47[3] >> 1;
      auVar46[4] = auVar47[4] >> 1;
      auVar46[5] = auVar47[5] >> 1;
      auVar46[6] = auVar47[6] >> 1;
      auVar46[7] = auVar47[7] >> 1;
      auVar46[8] = auVar47[8] >> 1;
      auVar46[9] = auVar47[9] >> 1;
      auVar46[10] = auVar47[10] >> 1;
      auVar46[11] = auVar47[11] >> 1;
      auVar46[12] = auVar47[12] >> 1;
      auVar46[13] = auVar47[13] >> 1;
      auVar46[14] = auVar47[14] >> 1;
      auVar46[15] = auVar47[15] >> 1;
      pVar1 = pVar26 + -1;
      uVar42 = *(undefined8 *)((long)pVar26 + -8);
      uVar15 = *(undefined8 *)((long)pVar26 + 8);
      Var16 = *pVar26;
      auVar50[0] = auVar51[0] >> 1;
      auVar50[1] = auVar51[1] >> 1;
      auVar50[2] = auVar51[2] >> 1;
      auVar50[3] = auVar51[3] >> 1;
      auVar50[4] = auVar51[4] >> 1;
      auVar50[5] = auVar51[5] >> 1;
      auVar50[6] = auVar51[6] >> 1;
      auVar50[7] = auVar51[7] >> 1;
      auVar50[8] = auVar51[8] >> 1;
      auVar50[9] = auVar51[9] >> 1;
      auVar50[10] = auVar51[10] >> 1;
      auVar50[11] = auVar51[11] >> 1;
      auVar50[12] = auVar51[12] >> 1;
      auVar50[13] = auVar51[13] >> 1;
      auVar50[14] = auVar51[14] >> 1;
      auVar50[15] = auVar51[15] >> 1;
      pVar26 = pVar26 + 2;
      auVar47[9] = (char)((ulong)uVar42 >> 8);
      auVar47._0_9_ = *pVar1;
      auVar47[10] = (char)((ulong)uVar42 >> 0x10);
      auVar47[11] = (char)((ulong)uVar42 >> 0x18);
      auVar47[12] = (char)((ulong)uVar42 >> 0x20);
      auVar47[13] = (char)((ulong)uVar42 >> 0x28);
      auVar47[14] = (char)((ulong)uVar42 >> 0x30);
      auVar47[15] = (char)((ulong)uVar42 >> 0x38);
      auVar47 = NEON_cmhi(auVar47,auVar46,1);
      auVar51[9] = (char)((ulong)uVar15 >> 8);
      auVar51._0_9_ = Var16;
      auVar51[10] = (char)((ulong)uVar15 >> 0x10);
      auVar51[11] = (char)((ulong)uVar15 >> 0x18);
      auVar51[12] = (char)((ulong)uVar15 >> 0x20);
      auVar51[13] = (char)((ulong)uVar15 >> 0x28);
      auVar51[14] = (char)((ulong)uVar15 >> 0x30);
      auVar51[15] = (char)((ulong)uVar15 >> 0x38);
      auVar51 = NEON_cmhi(auVar51,auVar50,1);
      auVar43._0_8_ = CONCAT35(0,CONCAT14(auVar47[9],(uint)(auVar47[8] & 1)) & 0x1ffffffff);
      auVar43[8] = auVar47[10] & 1;
      auVar43._9_3_ = 0;
      auVar43[12] = auVar47[11] & 1;
      auVar48._0_8_ = CONCAT35(0,CONCAT14(auVar51[13],(uint)(auVar51[12] & 1)) & 0x1ffffffff);
      auVar48[8] = auVar51[14] & 1;
      auVar48._9_3_ = 0;
      auVar48[12] = auVar51[15] & 1;
      puVar32[-3] = (ulong)auVar43._8_5_;
      puVar32[-4] = auVar43._0_8_;
      puVar32[-1] = (ulong)(CONCAT14(auVar47[15],(uint)(auVar47[14] & 1)) & 0x1ffffffff);
      puVar32[-2] = (ulong)(CONCAT14(auVar47[13],(uint)(auVar47[12] & 1)) & 0x1ffffffff);
      auVar44._0_8_ = CONCAT35(0,CONCAT14(auVar51[5],(uint)(auVar51[4] & 1)) & 0x1ffffffff);
      auVar44[8] = auVar51[6] & 1;
      auVar44._9_3_ = 0;
      auVar44[12] = auVar51[7] & 1;
      puVar32[-7] = (ulong)(CONCAT14(auVar47[3],(uint)(auVar47[2] & 1)) & 0x1ffffffff);
      puVar32[-8] = (ulong)(CONCAT14(auVar47[1],(uint)(auVar47[0] & 1)) & 0x1ffffffff);
      puVar32[-5] = (ulong)(CONCAT14(auVar47[7],(uint)(auVar47[6] & 1)) & 0x1ffffffff);
      puVar32[-6] = (ulong)(CONCAT14(auVar47[5],(uint)(auVar47[4] & 1)) & 0x1ffffffff);
      puVar32[5] = (ulong)(CONCAT14(auVar51[11],(uint)(auVar51[10] & 1)) & 0x1ffffffff);
      puVar32[4] = (ulong)(CONCAT14(auVar51[9],(uint)(auVar51[8] & 1)) & 0x1ffffffff);
      puVar32[7] = (ulong)auVar48._8_5_;
      puVar32[6] = auVar48._0_8_;
      puVar32[1] = (ulong)(CONCAT14(auVar51[3],(uint)(auVar51[2] & 1)) & 0x1ffffffff);
      *puVar32 = (ulong)(CONCAT14(auVar51[1],(uint)(auVar51[0] & 1)) & 0x1ffffffff);
      puVar32[3] = (ulong)auVar44._8_5_;
      puVar32[2] = auVar44._0_8_;
      puVar32 = puVar32 + 0x10;
    } while (uVar24 != 0);
    if (uVar23 != uVar38) {
      uVar24 = uVar38;
      if ((uVar23 & 0x18) == 0) goto LAB_00a8397c;
      goto LAB_00a8391c;
    }
  }
  if (*param_1 == (EncodeParams)0x1) {
    uVar22 = 0;
    do {
      lVar36 = 0;
      puVar32 = &local_80;
      lVar35 = uVar20 + 1;
      pLVar33 = param_3 + 4;
      do {
        switch(uVar22 & 0x7f) {
        case 0:
          LVar12 = pLVar33[-4];
          uVar2 = *(uint *)puVar32;
          pLVar40 = param_3 + lVar36 * 8 + 4;
          goto LAB_00a83aac;
        case 1:
          this = (D3DX_BC7 *)(ulong)*(uint *)puVar32;
          pLVar40 = param_3 + lVar36 * 8 + 5;
          pLVar33[-3] = (LDREndPntPair)((byte)*(uint *)puVar32 | (char)pLVar33[-3] << 1);
          break;
        case 2:
          this = (D3DX_BC7 *)(ulong)*(uint *)puVar32;
          pLVar40 = param_3 + lVar36 * 8 + 6;
          pLVar33[-2] = (LDREndPntPair)((byte)*(uint *)puVar32 | (char)pLVar33[-2] << 1);
          break;
        case 3:
          this = (D3DX_BC7 *)(ulong)*(uint *)puVar32;
          pLVar40 = param_3 + lVar36 * 8 + 7;
          pLVar33[-1] = (LDREndPntPair)((byte)*(uint *)puVar32 | (char)pLVar33[-1] << 1);
          break;
        default:
          LVar12 = pLVar33[-4];
          uVar2 = *(uint *)puVar32;
          pLVar40 = pLVar33;
LAB_00a83aac:
          this = (D3DX_BC7 *)(ulong)uVar2;
          pLVar33[-4] = (LDREndPntPair)((byte)uVar2 | (char)LVar12 << 1);
        }
        lVar36 = lVar36 + 1;
        pLVar33 = pLVar33 + 8;
        lVar35 = lVar35 + -1;
        puVar32 = (ulong *)((long)puVar32 + 4);
        *pLVar40 = (LDREndPntPair)((byte)this | (char)*pLVar40 << 1);
      } while (lVar35 != 0);
      bVar17 = uVar22 < 3;
      uVar22 = uVar22 + 1;
    } while (bVar17);
  }
  else {
    uVar22 = 0;
    do {
      lVar35 = 0;
      lVar36 = 0;
      pDVar34 = (D3DX_BC7 *)(param_3 + 4);
      do {
        switch(uVar22 & 0x7f) {
        case 0:
          lVar18 = lVar36 << 1;
          DVar19 = (D3DX_BC7)
                   ((byte)*(undefined4 *)(auStack_78 + lVar35 * 4 + -8) | (char)pDVar34[-4] << 1);
          this = (D3DX_BC7 *)(param_3 + lVar36 * 8 + 4);
          goto LAB_00a83bcc;
        case 1:
          lVar18 = lVar36 << 1;
          this = (D3DX_BC7 *)(param_3 + lVar36 * 8 + 5);
          pDVar34[-3] = (D3DX_BC7)
                        ((byte)*(undefined4 *)(auStack_78 + lVar35 * 4 + -8) |
                        (char)pDVar34[-3] << 1);
          break;
        case 2:
          lVar18 = lVar36 << 1;
          this = (D3DX_BC7 *)(param_3 + lVar36 * 8 + 6);
          pDVar34[-2] = (D3DX_BC7)
                        ((byte)*(undefined4 *)(auStack_78 + lVar35 * 4 + -8) |
                        (char)pDVar34[-2] << 1);
          break;
        case 3:
          lVar18 = lVar36 << 1;
          this = (D3DX_BC7 *)(param_3 + lVar36 * 8 + 7);
          pDVar34[-1] = (D3DX_BC7)
                        ((byte)*(undefined4 *)(auStack_78 + lVar35 * 4 + -8) |
                        (char)pDVar34[-1] << 1);
          break;
        default:
          DVar19 = (D3DX_BC7)
                   ((byte)*(undefined4 *)(auStack_78 + lVar35 * 4 + -8) | (char)pDVar34[-4] << 1);
          this = pDVar34;
          lVar18 = lVar35;
LAB_00a83bcc:
          pDVar34[-4] = DVar19;
        }
        lVar36 = lVar36 + 1;
        pDVar34 = pDVar34 + 8;
        lVar35 = lVar35 + 2;
        *this = (D3DX_BC7)
                ((byte)*(undefined4 *)(auStack_78 + ((lVar18 << 2 | 4U) - 8)) | (char)*this << 1);
      } while (uVar20 * 2 + 2 != lVar35);
      bVar17 = uVar22 < 3;
      uVar22 = uVar22 + 1;
    } while (bVar17);
  }
LAB_00a83bd8:
  if (*(long *)(lVar14 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


