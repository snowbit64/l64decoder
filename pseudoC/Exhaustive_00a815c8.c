// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Exhaustive
// Entry Point: 00a815c8
// Size: 1452 bytes
// Signature: undefined __thiscall Exhaustive(D3DX_BC7 * this, EncodeParams * param_1, LDRColorA * param_2, ulong param_3, ulong param_4, ulong param_5, float * param_6, LDREndPntPair * param_7)


/* BC6BC7Util::D3DX_BC7::Exhaustive(BC6BC7Util::D3DX_BC7::EncodeParams const*, BC6BC7Util::LDRColorA
   const*, unsigned long, unsigned long, unsigned long, float&, BC6BC7Util::LDREndPntPair&) const */

void __thiscall
BC6BC7Util::D3DX_BC7::Exhaustive
          (D3DX_BC7 *this,EncodeParams *param_1,LDRColorA *param_2,ulong param_3,ulong param_4,
          ulong param_5,float *param_6,LDREndPntPair *param_7)

{
  int iVar1;
  uchar *puVar2;
  EncodeParams EVar3;
  uchar uVar4;
  uchar uVar5;
  undefined uVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  uchar *puVar10;
  uint uVar11;
  undefined8 uVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  undefined *puVar17;
  undefined *puVar18;
  uint uVar19;
  LDREndPntPair *pLVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  LDREndPntPair *pLVar24;
  uint uVar25;
  ulong uVar26;
  LDREndPntPair LVar27;
  uint uVar28;
  LDREndPntPair LVar29;
  uint uVar30;
  LDRColorA *pLVar31;
  float extraout_s0;
  float extraout_s0_00;
  float fVar32;
  float fVar33;
  uint local_f0;
  uint local_ec;
  undefined8 local_c8;
  LDRColorA aLStack_c0 [64];
  long local_80;
  
  lVar7 = tpidr_el0;
  local_80 = *(long *)(lVar7 + 0x28);
  lVar8 = (ulong)(byte)*param_1 * 0xf;
  pbVar16 = &DAT_0051f9ab + lVar8;
  switch(param_5) {
  case 1:
    pbVar16 = &DAT_0051f9ac + lVar8;
    break;
  case 2:
    pbVar16 = &DAT_0051f9ad + lVar8;
    break;
  case 3:
    pbVar16 = &DAT_0051f9ae + lVar8;
  }
  fVar32 = *param_6;
  if (fVar32 == 0.0) goto LAB_00a81b3c;
  local_c8 = *(undefined8 *)param_7;
  uVar14 = (uint)*pbVar16;
  local_ec = (uint)local_c8;
  uVar19 = (uint)((ulong)local_c8 >> 0x20);
  switch(param_5) {
  default:
    local_ec = local_ec & 0xff;
    uVar14 = -1 << (ulong)(uVar14 & 0x1f);
    uVar15 = local_ec;
    if (local_ec < 6) {
      uVar15 = 5;
    }
    local_ec = local_ec + 5;
    uVar19 = uVar19 & 0xff;
    if ((int)~uVar14 <= (int)local_ec) {
      local_ec = ~uVar14;
    }
    local_f0 = uVar19 + 5;
    if (uVar19 < 6) {
      uVar19 = 5;
    }
    pLVar20 = param_7 + 4;
    pLVar24 = param_7;
    if ((int)~uVar14 <= (int)local_f0) {
      local_f0 = ~uVar14;
    }
    break;
  case 1:
    uVar15 = local_ec >> 8 & 0xff;
    uVar14 = -1 << (ulong)(uVar14 & 0x1f);
    uVar28 = ~uVar14;
    local_ec = uVar15 + 5;
    if (uVar15 < 6) {
      uVar15 = 5;
    }
    uVar19 = uVar19 >> 8 & 0xff;
    if ((int)uVar28 <= (int)local_ec) {
      local_ec = ~uVar14;
    }
    pLVar24 = param_7 + 1;
    local_f0 = uVar19 + 5;
    if (uVar19 < 6) {
      uVar19 = 5;
    }
    bVar13 = SBORROW4(local_f0,uVar28);
    iVar1 = local_f0 - uVar28;
    pLVar20 = param_7 + 5;
    goto LAB_00a817f0;
  case 2:
    uVar15 = local_ec >> 0x10 & 0xff;
    uVar14 = -1 << (ulong)(uVar14 & 0x1f);
    uVar28 = ~uVar14;
    local_ec = uVar15 + 5;
    if (uVar15 < 6) {
      uVar15 = 5;
    }
    uVar19 = (ushort)((ulong)local_c8 >> 0x30) & 0xff;
    if ((int)uVar28 <= (int)local_ec) {
      local_ec = ~uVar14;
    }
    local_f0 = uVar19 + 5;
    pLVar24 = param_7 + 2;
    if (uVar19 < 6) {
      uVar19 = 5;
    }
    bVar13 = SBORROW4(local_f0,uVar28);
    iVar1 = local_f0 - uVar28;
    pLVar20 = param_7 + 6;
LAB_00a817f0:
    if (iVar1 < 0 == bVar13) {
      local_f0 = ~uVar14;
    }
    break;
  case 3:
    uVar15 = (uint)((ulong)local_c8 >> 0x18) & 0xff;
    uVar14 = -1 << (ulong)(uVar14 & 0x1f);
    local_ec = uVar15 + 5;
    if (uVar15 < 6) {
      uVar15 = 5;
    }
    if ((int)~uVar14 <= (int)local_ec) {
      local_ec = ~uVar14;
    }
    bVar9 = (byte)((ulong)local_c8 >> 0x38);
    uVar19 = (uint)bVar9;
    local_f0 = uVar19 + 5;
    if (bVar9 < 6) {
      uVar19 = 5;
    }
    if ((int)~uVar14 <= (int)local_f0) {
      local_f0 = ~uVar14;
    }
    pLVar20 = param_7 + 7;
    pLVar24 = param_7 + 3;
  }
  uVar15 = uVar15 - 5;
  uVar19 = uVar19 - 5;
  puVar21 = (undefined *)((ulong)&local_c8 | 7);
  puVar23 = (undefined *)((ulong)&local_c8 | 6);
  puVar22 = (undefined *)((ulong)&local_c8 | 4);
  puVar18 = (undefined *)((ulong)&local_c8 | 5);
  if ((byte)*pLVar20 < (byte)*pLVar24) {
    if ((int)uVar19 < (int)local_f0) {
      uVar28 = 0;
      uVar14 = 0;
      do {
        uVar25 = uVar15;
        if (uVar15 <= uVar19) {
          uVar25 = uVar19;
        }
        uVar30 = uVar14;
        if ((int)uVar25 <= (int)local_ec) {
          do {
            uVar6 = (undefined)uVar25;
            switch(param_5) {
            default:
              local_c8 = CONCAT71(local_c8._1_7_,uVar6);
              puVar17 = puVar22;
              break;
            case 1:
              local_c8._0_2_ = CONCAT11(uVar6,(undefined)local_c8);
              puVar17 = puVar18;
              break;
            case 2:
              local_c8._0_3_ = CONCAT12(uVar6,(undefined2)local_c8);
              puVar17 = puVar23;
              break;
            case 3:
              local_c8._0_4_ = CONCAT13(uVar6,(undefined3)local_c8);
              puVar17 = puVar21;
            }
            EVar3 = *param_1;
            *puVar17 = (char)uVar19;
            puVar2 = &DAT_0051f9a6 + (ulong)(byte)EVar3 * 0xf;
            puVar10 = &DAT_0051f9a5 + (ulong)(byte)EVar3 * 0xf;
            if (param_4 != 0) {
              puVar2 = &DAT_0051f9a5 + (ulong)(byte)EVar3 * 0xf;
              puVar10 = &DAT_0051f9a6 + (ulong)(byte)EVar3 * 0xf;
            }
            uVar4 = *puVar10;
            uVar5 = *puVar2;
            this = (D3DX_BC7 *)
                   GeneratePaletteQuantized
                             (this,param_1,param_4,(LDREndPntPair *)&local_c8,aLStack_c0);
            fVar33 = 0.0;
            uVar26 = param_3;
            pLVar31 = param_2;
            if (param_3 != 0) {
              do {
                this = (D3DX_BC7 *)
                       ComputeError(pLVar31,aLStack_c0,uVar4,uVar5,(ulong *)0x0,(ulong *)0x0);
                fVar33 = fVar33 + extraout_s0;
                if (fVar32 < fVar33) {
                  fVar33 = 3.402823e+38;
                  break;
                }
                uVar26 = uVar26 - 1;
                pLVar31 = pLVar31 + 4;
              } while (uVar26 != 0);
            }
            uVar14 = uVar19;
            uVar11 = uVar25;
            if (fVar32 <= fVar33) {
              uVar14 = uVar30;
              fVar33 = fVar32;
              uVar11 = uVar28;
            }
            uVar28 = uVar11;
            fVar32 = fVar33;
            bVar13 = (int)uVar25 < (int)local_ec;
            uVar30 = uVar14;
            uVar25 = uVar25 + 1;
          } while (bVar13);
        }
        LVar29 = SUB41(uVar14,0);
        LVar27 = SUB41(uVar28,0);
        uVar19 = uVar19 + 1;
      } while (uVar19 != local_f0);
    }
    else {
LAB_00a81990:
      LVar29 = (LDREndPntPair)0x0;
      LVar27 = (LDREndPntPair)0x0;
    }
  }
  else {
    if ((int)local_ec < (int)uVar15) goto LAB_00a81990;
    uVar14 = 0;
    uVar28 = 0;
    do {
      uVar25 = uVar19;
      uVar12 = local_c8;
      if (uVar19 <= uVar15) {
        uVar25 = uVar15;
      }
      for (; (int)uVar25 < (int)local_f0; uVar25 = uVar25 + 1) {
        uVar6 = (undefined)uVar15;
        switch(param_5) {
        default:
          local_c8._1_7_ = (undefined7)((ulong)uVar12 >> 8);
          local_c8 = CONCAT71(local_c8._1_7_,uVar6);
          puVar17 = puVar22;
          break;
        case 1:
          local_c8._2_6_ = (undefined6)((ulong)uVar12 >> 0x10);
          local_c8._0_1_ = (undefined)uVar12;
          local_c8._0_2_ = CONCAT11(uVar6,(undefined)local_c8);
          puVar17 = puVar18;
          break;
        case 2:
          local_c8._3_5_ = (undefined5)((ulong)uVar12 >> 0x18);
          local_c8._0_2_ = (undefined2)uVar12;
          local_c8._0_3_ = CONCAT12(uVar6,(undefined2)local_c8);
          puVar17 = puVar23;
          break;
        case 3:
          local_c8._4_4_ = (undefined4)((ulong)uVar12 >> 0x20);
          local_c8._0_3_ = (undefined3)uVar12;
          local_c8._0_4_ = CONCAT13(uVar6,(undefined3)local_c8);
          puVar17 = puVar21;
        }
        EVar3 = *param_1;
        *puVar17 = (char)uVar25;
        puVar2 = &DAT_0051f9a6 + (ulong)(byte)EVar3 * 0xf;
        puVar10 = &DAT_0051f9a5 + (ulong)(byte)EVar3 * 0xf;
        if (param_4 != 0) {
          puVar2 = &DAT_0051f9a5 + (ulong)(byte)EVar3 * 0xf;
          puVar10 = &DAT_0051f9a6 + (ulong)(byte)EVar3 * 0xf;
        }
        uVar4 = *puVar10;
        uVar5 = *puVar2;
        this = (D3DX_BC7 *)
               GeneratePaletteQuantized(this,param_1,param_4,(LDREndPntPair *)&local_c8,aLStack_c0);
        fVar33 = 0.0;
        uVar26 = param_3;
        pLVar31 = param_2;
        if (param_3 != 0) {
          do {
            this = (D3DX_BC7 *)
                   ComputeError(pLVar31,aLStack_c0,uVar4,uVar5,(ulong *)0x0,(ulong *)0x0);
            fVar33 = fVar33 + extraout_s0_00;
            if (fVar32 < fVar33) {
              fVar33 = 3.402823e+38;
              break;
            }
            uVar26 = uVar26 - 1;
            pLVar31 = pLVar31 + 4;
          } while (uVar26 != 0);
        }
        uVar30 = uVar15;
        uVar11 = uVar25;
        if (fVar32 <= fVar33) {
          uVar30 = uVar14;
          fVar33 = fVar32;
          uVar11 = uVar28;
        }
        fVar32 = fVar33;
        uVar14 = uVar30;
        uVar28 = uVar11;
        uVar12 = local_c8;
      }
      LVar29 = SUB41(uVar28,0);
      LVar27 = SUB41(uVar14,0);
      bVar13 = (int)uVar15 < (int)local_ec;
      uVar15 = uVar15 + 1;
      local_c8 = uVar12;
    } while (bVar13);
  }
  if (fVar32 < *param_6) {
    switch(param_5) {
    default:
      pLVar24 = param_7 + 4;
      *param_7 = LVar27;
      break;
    case 1:
      param_7[1] = LVar27;
      pLVar24 = param_7 + 5;
      break;
    case 2:
      param_7[2] = LVar27;
      pLVar24 = param_7 + 6;
      break;
    case 3:
      param_7[3] = LVar27;
      pLVar24 = param_7 + 7;
    }
    *pLVar24 = LVar29;
    *param_6 = fVar32;
  }
LAB_00a81b3c:
  if (*(long *)(lVar7 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


