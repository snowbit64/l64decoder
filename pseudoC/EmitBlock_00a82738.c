// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EmitBlock
// Entry Point: 00a82738
// Size: 3460 bytes
// Signature: undefined __thiscall EmitBlock(D3DX_BC7 * this, EncodeParams * param_1, ulong param_2, ulong param_3, ulong param_4, LDREndPntPair * param_5, ulong * param_6, ulong * param_7)


/* BC6BC7Util::D3DX_BC7::EmitBlock(BC6BC7Util::D3DX_BC7::EncodeParams const*, unsigned long,
   unsigned long, unsigned long, BC6BC7Util::LDREndPntPair const*, unsigned long const*, unsigned
   long const*) */

void __thiscall
BC6BC7Util::D3DX_BC7::EmitBlock
          (D3DX_BC7 *this,EncodeParams *param_1,ulong param_2,ulong param_3,ulong param_4,
          LDREndPntPair *param_5,ulong *param_6,ulong *param_7)

{
  ulong *puVar1;
  EncodeParams EVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  LDREndPntPair LVar8;
  char cVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  LDREndPntPair *pLVar16;
  long lVar17;
  int iVar18;
  char cVar19;
  uint uVar20;
  undefined4 *puVar21;
  ulong uVar22;
  long lVar23;
  undefined4 *puVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  ulong uVar29;
  ulong uVar30;
  LDREndPntPair *pLVar31;
  byte bVar32;
  ulong uVar33;
  byte bVar34;
  byte bVar35;
  D3DX_BC7 *pDVar36;
  byte bVar37;
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  uint uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  long lVar46;
  undefined4 local_78;
  undefined2 local_74;
  undefined4 local_70;
  undefined2 local_6c;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  EVar2 = *param_1;
  uVar43 = (ulong)(byte)EVar2;
  if (EVar2 == (EncodeParams)0x0) {
    uVar41 = 0;
    uVar22 = 0;
  }
  else {
    uVar41 = (uint)(byte)EVar2;
    pDVar36 = this;
    uVar38 = uVar41;
    if (8 < (byte)EVar2) {
      *this = (D3DX_BC7)0x0;
      pDVar36 = this + 1;
      uVar38 = uVar41 - 8;
    }
    uVar22 = (ulong)((byte)EVar2 >> 3);
    uVar41 = uVar41 & 7;
    *pDVar36 = (D3DX_BC7)((byte)*pDVar36 & (byte)(-1 << (ulong)(uVar38 & 0x1f)));
  }
  lVar23 = uVar43 * 0xf;
  this[uVar22] = (D3DX_BC7)((byte)this[uVar22] | (byte)(1 << (ulong)uVar41));
  uVar22 = uVar43 + 1;
  uVar29 = (ulong)(byte)*param_1;
  if (((byte)*param_1 & 0xfe) == 4) {
    uVar33 = uVar22 >> 3;
    uVar30 = uVar22 & 7;
    bVar28 = (&DAT_0051f9a3)[uVar29 * 0xf];
    uVar41 = (uint)param_3;
    if (uVar30 + bVar28 < 9) {
      pDVar36 = this + uVar33;
      bVar25 = (byte)((uVar41 & 0xff) << uVar30);
      bVar37 = (byte)*pDVar36 & ((byte)(~(-1 << (ulong)(bVar28 & 0x1f)) << uVar30) ^ 0xff);
    }
    else {
      uVar38 = 8 - (int)uVar30;
      pDVar36 = this + uVar33 + 1;
      bVar25 = (byte)((uVar41 & 0xff) >> (ulong)(uVar38 & 0x1f));
      bVar37 = (byte)*pDVar36 & (byte)(-1 << (ulong)(bVar28 - uVar38 & 0x1f));
      this[uVar33] = (D3DX_BC7)
                     ((byte)this[uVar33] &
                      ((byte)(~(-1 << (ulong)(uVar38 & 0x1f)) << uVar30) ^ 0xff) |
                     (byte)(uVar41 << uVar30));
    }
    uVar22 = uVar22 + bVar28;
    *pDVar36 = (D3DX_BC7)(bVar37 | bVar25);
    uVar29 = (ulong)(byte)*param_1;
  }
  if ((int)uVar29 == 4) {
    uVar33 = uVar22 >> 3;
    uVar30 = uVar22 & 7;
    bVar28 = (&DAT_0051f9a4)[uVar29 * 0xf];
    uVar41 = (uint)param_4;
    if (uVar30 + bVar28 < 9) {
      pDVar36 = this + uVar33;
      bVar25 = (byte)((uVar41 & 0xff) << uVar30);
      bVar37 = (byte)*pDVar36 & ((byte)(~(-1 << (ulong)(bVar28 & 0x1f)) << uVar30) ^ 0xff);
    }
    else {
      uVar38 = 8 - (int)uVar30;
      pDVar36 = this + uVar33 + 1;
      bVar25 = (byte)((uVar41 & 0xff) >> (ulong)(uVar38 & 0x1f));
      bVar37 = (byte)*pDVar36 & (byte)(-1 << (ulong)(bVar28 - uVar38 & 0x1f));
      this[uVar33] = (D3DX_BC7)
                     ((byte)this[uVar33] &
                      ((byte)(~(-1 << (ulong)(uVar38 & 0x1f)) << uVar30) ^ 0xff) |
                     (byte)(uVar41 << uVar30));
    }
    uVar22 = uVar22 + bVar28;
    *pDVar36 = (D3DX_BC7)(bVar37 | bVar25);
    uVar29 = (ulong)(byte)*param_1;
  }
  uVar30 = (ulong)(byte)(&ms_aInfo)[lVar23];
  bVar28 = (&DAT_0051f9a5)[lVar23];
  uVar45 = (ulong)bVar28;
  bVar37 = (&DAT_0051f9a7)[lVar23];
  uVar42 = (ulong)bVar37;
  bVar25 = (&DAT_0051f9a8)[lVar23];
  uVar33 = (ulong)bVar25;
  bVar3 = (&DAT_0051f9a9)[lVar23];
  uVar39 = (ulong)bVar3;
  bVar4 = (&DAT_0051f9aa)[lVar23];
  uVar40 = (ulong)bVar4;
  if (2 < uVar29 - 4) {
    uVar44 = uVar22 & 7;
    uVar15 = uVar22 >> 3;
    bVar5 = (&DAT_0051f9a1)[uVar29 * 0xf];
    uVar41 = (uint)param_2;
    if (uVar44 + bVar5 < 9) {
      pDVar36 = this + uVar15;
      bVar32 = (byte)*pDVar36 & ((byte)(~(-1 << (ulong)(bVar5 & 0x1f)) << uVar44) ^ 0xff);
      bVar34 = (byte)((uVar41 & 0xff) << uVar44);
    }
    else {
      uVar38 = 8 - (int)uVar44;
      pDVar36 = this + uVar15 + 1;
      bVar32 = (byte)*pDVar36 & (byte)(-1 << (ulong)(bVar5 - uVar38 & 0x1f));
      bVar34 = (byte)((uVar41 & 0xff) >> (ulong)(uVar38 & 0x1f));
      this[uVar15] = (D3DX_BC7)
                     ((byte)this[uVar15] &
                      ((byte)(~(-1 << (ulong)(uVar38 & 0x1f)) << uVar44) ^ 0xff) |
                     (byte)(uVar41 << uVar44));
    }
    uVar22 = uVar22 + bVar5;
    *pDVar36 = (D3DX_BC7)(bVar32 | bVar34);
  }
  bVar5 = (&DAT_0051f9a6)[lVar23];
  if ((0x34UL >> (uVar43 & 0x3f) & 1) == 0) {
    uVar29 = (ulong)(byte)(&DAT_0051f9a2)[lVar23];
    bVar32 = (&DAT_0051f9ab)[lVar23];
    bVar34 = (&DAT_0051f9ac)[lVar23];
    bVar6 = (&DAT_0051f9ad)[lVar23];
    uVar43 = uVar30 * 2 + 2;
    bVar7 = (&DAT_0051f9ae)[lVar23];
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    local_78 = 0;
    uVar41 = 0;
    do {
      lVar23 = 0;
      uVar15 = 0;
      uVar38 = uVar41 & 0x7f;
      pLVar16 = param_5;
      lVar17 = uVar30 + 1;
      do {
        if (uVar38 == 3) {
          if (bVar4 != bVar7) goto LAB_00a82b5c;
LAB_00a82b20:
          if (uVar38 == 3) {
            lVar46 = lVar23 * 8 + 3;
            uVar44 = uVar40;
            bVar35 = bVar4;
joined_r0x00a82bbc:
            pLVar31 = param_5 + lVar46;
          }
          else if (uVar38 == 2) {
            uVar44 = uVar39;
            pLVar31 = param_5 + lVar23 * 8 + 2;
            bVar35 = bVar3;
          }
          else {
            uVar44 = uVar42;
            pLVar31 = pLVar16;
            bVar35 = bVar37;
            if (uVar38 == 1) {
              lVar46 = lVar23 * 8 + 1;
              uVar44 = uVar33;
              bVar35 = bVar25;
              goto joined_r0x00a82bbc;
            }
          }
          if (bVar35 != 0) {
            LVar8 = *pLVar31;
            uVar14 = uVar22 & 7;
            uVar13 = uVar22 >> 3;
            if (uVar14 + uVar44 < 9) {
              pDVar36 = this + uVar13;
              bVar26 = (char)LVar8 << uVar14;
              bVar35 = (byte)*pDVar36 &
                       ((byte)(~(-1 << (ulong)((uint)uVar44 & 0x1f)) << uVar14) ^ 0xff);
            }
            else {
              uVar20 = 8 - (int)uVar14;
              pDVar36 = this + uVar13 + 1;
              bVar26 = (byte)LVar8 >> (ulong)(uVar20 & 0x1f);
              bVar35 = (byte)*pDVar36 & (byte)(-1 << (ulong)((uint)uVar44 - uVar20 & 0x1f));
              this[uVar13] = (D3DX_BC7)
                             ((byte)this[uVar13] &
                              ((byte)(~(-1 << (ulong)(uVar20 & 0x1f)) << uVar14) ^ 0xff) |
                             (char)LVar8 << uVar14);
            }
            uVar22 = uVar22 + uVar44;
            *pDVar36 = (D3DX_BC7)(bVar35 | bVar26);
          }
          if (uVar38 == 3) {
            lVar46 = lVar23 * 8 + 7;
            uVar44 = uVar40;
            bVar35 = bVar4;
joined_r0x00a82cb8:
            pLVar31 = param_5 + lVar46;
          }
          else if (uVar38 == 2) {
            pLVar31 = param_5 + lVar23 * 8 + 6;
            uVar44 = uVar39;
            bVar35 = bVar3;
          }
          else {
            if (uVar38 == 1) {
              lVar46 = lVar23 * 8 + 5;
              uVar44 = uVar33;
              bVar35 = bVar25;
              goto joined_r0x00a82cb8;
            }
            pLVar31 = pLVar16 + 4;
            uVar44 = uVar42;
            bVar35 = bVar37;
          }
          if (bVar35 != 0) {
            LVar8 = *pLVar31;
            uVar14 = uVar22 & 7;
            uVar13 = uVar22 >> 3;
            if (uVar14 + uVar44 < 9) {
              pDVar36 = this + uVar13;
              bVar26 = (char)LVar8 << uVar14;
              bVar35 = (byte)*pDVar36 &
                       ((byte)(~(-1 << (ulong)((uint)uVar44 & 0x1f)) << uVar14) ^ 0xff);
            }
            else {
              uVar20 = 8 - (int)uVar14;
              pDVar36 = this + uVar13 + 1;
              bVar26 = (byte)LVar8 >> (ulong)(uVar20 & 0x1f);
              bVar35 = (byte)*pDVar36 & (byte)(-1 << (ulong)((uint)uVar44 - uVar20 & 0x1f));
              this[uVar13] = (D3DX_BC7)
                             ((byte)this[uVar13] &
                              ((byte)(~(-1 << (ulong)(uVar20 & 0x1f)) << uVar14) ^ 0xff) |
                             (char)LVar8 << uVar14);
            }
            uVar22 = uVar22 + uVar44;
            *pDVar36 = (D3DX_BC7)(bVar35 | bVar26);
          }
        }
        else {
          bVar35 = bVar6;
          bVar26 = bVar3;
          if ((uVar38 != 2) && (bVar35 = bVar32, bVar26 = bVar37, uVar38 == 1)) {
            bVar35 = bVar34;
            bVar26 = bVar25;
          }
          if (bVar26 == bVar35) goto LAB_00a82b20;
LAB_00a82b5c:
          if (uVar38 == 3) {
            lVar46 = lVar23 * 8 + 3;
            uVar44 = uVar40;
            bVar35 = bVar4;
joined_r0x00a82bd0:
            pLVar31 = param_5 + lVar46;
          }
          else if (uVar38 == 2) {
            uVar44 = uVar39;
            pLVar31 = param_5 + lVar23 * 8 + 2;
            bVar35 = bVar3;
          }
          else {
            uVar44 = uVar42;
            pLVar31 = pLVar16;
            bVar35 = bVar37;
            if (uVar38 == 1) {
              lVar46 = lVar23 * 8 + 1;
              uVar44 = uVar33;
              bVar35 = bVar25;
              goto joined_r0x00a82bd0;
            }
          }
          if (bVar35 != 0) {
            uVar14 = uVar22 & 7;
            uVar13 = uVar22 >> 3;
            bVar35 = (byte)*pLVar31 >> 1;
            if (uVar14 + uVar44 < 9) {
              pDVar36 = this + uVar13;
              bVar27 = bVar35 << uVar14;
              bVar26 = (byte)*pDVar36 &
                       ((byte)(~(-1 << (ulong)((uint)uVar44 & 0x1f)) << uVar14) ^ 0xff);
            }
            else {
              uVar20 = 8 - (int)uVar14;
              pDVar36 = this + uVar13 + 1;
              bVar27 = bVar35 >> (ulong)(uVar20 & 0x1f);
              bVar26 = (byte)*pDVar36 & (byte)(-1 << (ulong)((uint)uVar44 - uVar20 & 0x1f));
              this[uVar13] = (D3DX_BC7)
                             ((byte)this[uVar13] &
                              ((byte)(~(-1 << (ulong)(uVar20 & 0x1f)) << uVar14) ^ 0xff) |
                             bVar35 << uVar14);
            }
            uVar22 = uVar22 + uVar44;
            *pDVar36 = (D3DX_BC7)(bVar26 | bVar27);
          }
          if (uVar38 == 3) {
            lVar46 = lVar23 * 8 + 7;
            uVar44 = uVar40;
            bVar35 = bVar4;
joined_r0x00a82da4:
            pLVar31 = param_5 + lVar46;
          }
          else if (uVar38 == 2) {
            pLVar31 = param_5 + lVar23 * 8 + 6;
            uVar44 = uVar39;
            bVar35 = bVar3;
          }
          else {
            if (uVar38 == 1) {
              lVar46 = lVar23 * 8 + 5;
              uVar44 = uVar33;
              bVar35 = bVar25;
              goto joined_r0x00a82da4;
            }
            pLVar31 = pLVar16 + 4;
            uVar44 = uVar42;
            bVar35 = bVar37;
          }
          if (bVar35 != 0) {
            uVar14 = uVar22 & 7;
            uVar13 = uVar22 >> 3;
            bVar35 = (byte)*pLVar31 >> 1;
            if (uVar14 + uVar44 < 9) {
              pDVar36 = this + uVar13;
              bVar27 = bVar35 << uVar14;
              bVar26 = (byte)*pDVar36 &
                       ((byte)(~(-1 << (ulong)((uint)uVar44 & 0x1f)) << uVar14) ^ 0xff);
            }
            else {
              uVar20 = 8 - (int)uVar14;
              pDVar36 = this + uVar13 + 1;
              bVar27 = bVar35 >> (ulong)(uVar20 & 0x1f);
              bVar26 = (byte)*pDVar36 & (byte)(-1 << (ulong)((uint)uVar44 - uVar20 & 0x1f));
              this[uVar13] = (D3DX_BC7)
                             ((byte)this[uVar13] &
                              ((byte)(~(-1 << (ulong)(uVar20 & 0x1f)) << uVar14) ^ 0xff) |
                             bVar35 << uVar14);
            }
            uVar22 = uVar22 + uVar44;
            *pDVar36 = (D3DX_BC7)(bVar26 | bVar27);
          }
          uVar44 = 0;
          if (uVar43 != 0) {
            uVar44 = ((uVar15 & 0xff) * uVar29) / uVar43;
          }
          switch(uVar38) {
          case 0:
            cVar9 = *(char *)((long)&local_78 + uVar44);
            cVar19 = *(char *)((long)&local_70 + uVar44) + ((byte)*pLVar16 & 1);
            pLVar31 = param_5 + lVar23 * 8 + 4;
            break;
          case 1:
            cVar9 = *(char *)((long)&local_78 + uVar44);
            cVar19 = *(char *)((long)&local_70 + uVar44) + ((byte)pLVar16[1] & 1);
            pLVar31 = param_5 + lVar23 * 8 + 5;
            break;
          case 2:
            cVar9 = *(char *)((long)&local_78 + uVar44);
            cVar19 = *(char *)((long)&local_70 + uVar44) + ((byte)pLVar16[2] & 1);
            pLVar31 = param_5 + lVar23 * 8 + 6;
            break;
          case 3:
            cVar9 = *(char *)((long)&local_78 + uVar44);
            cVar19 = *(char *)((long)&local_70 + uVar44) + ((byte)pLVar16[3] & 1);
            pLVar31 = param_5 + lVar23 * 8 + 7;
            break;
          default:
            cVar9 = *(char *)((long)&local_78 + uVar44);
            pLVar31 = pLVar16 + 4;
            cVar19 = *(char *)((long)&local_70 + uVar44) + ((byte)*pLVar16 & 1);
          }
          *(char *)((long)&local_70 + uVar44) = cVar19;
          iVar18 = (int)uVar15;
          *(char *)((long)&local_78 + uVar44) = cVar9 + '\x01';
          uVar15 = (ulong)(iVar18 + 2);
          uVar44 = 0;
          if (uVar43 != 0) {
            uVar44 = (((ulong)(iVar18 + 1) & 0xff) * uVar29) / uVar43;
          }
          *(byte *)((long)&local_70 + uVar44) =
               *(char *)((long)&local_70 + uVar44) + ((byte)*pLVar31 & 1);
          *(char *)((long)&local_78 + uVar44) = *(char *)((long)&local_78 + uVar44) + '\x01';
        }
        lVar23 = lVar23 + 1;
        pLVar16 = pLVar16 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      bVar12 = uVar41 < 3;
      uVar41 = uVar41 + 1;
    } while (bVar12);
    if (uVar29 < 2) {
      uVar29 = 1;
    }
    puVar21 = &local_78;
    puVar24 = &local_70;
    do {
      uVar43 = uVar22 >> 3;
      uVar41 = (uint)uVar22 & 7;
      uVar22 = uVar22 + 1;
      uVar29 = uVar29 - 1;
      this[uVar43] = (D3DX_BC7)
                     ((byte)this[uVar43] & ((byte)(1 << (ulong)uVar41) ^ 0xff) |
                     (*(byte *)puVar21 >> 1 < *(byte *)puVar24) << (ulong)uVar41);
      puVar21 = (undefined4 *)((long)puVar21 + 1);
      puVar24 = (undefined4 *)((long)puVar24 + 1);
    } while (uVar29 != 0);
  }
  else {
    lVar23 = 0;
    do {
      lVar17 = 0;
      pLVar16 = param_5;
      lVar46 = uVar30 + 1;
      do {
        if (lVar23 == 3) {
          lVar11 = lVar17 * 8 + 3;
          uVar43 = uVar40;
          bVar32 = bVar4;
joined_r0x00a83070:
          pLVar31 = param_5 + lVar11;
        }
        else if (lVar23 == 2) {
          uVar43 = uVar39;
          pLVar31 = param_5 + lVar17 * 8 + 2;
          bVar32 = bVar3;
        }
        else {
          uVar43 = uVar42;
          pLVar31 = pLVar16;
          bVar32 = bVar37;
          if (lVar23 == 1) {
            lVar11 = lVar17 * 8 + 1;
            uVar43 = uVar33;
            bVar32 = bVar25;
            goto joined_r0x00a83070;
          }
        }
        if (bVar32 != 0) {
          LVar8 = *pLVar31;
          uVar15 = uVar22 & 7;
          uVar29 = uVar22 >> 3;
          if (uVar15 + uVar43 < 9) {
            pDVar36 = this + uVar29;
            bVar34 = (char)LVar8 << uVar15;
            bVar32 = (byte)*pDVar36 &
                     ((byte)(~(-1 << (ulong)((uint)uVar43 & 0x1f)) << uVar15) ^ 0xff);
          }
          else {
            uVar41 = 8 - (int)uVar15;
            pDVar36 = this + uVar29 + 1;
            bVar34 = (byte)LVar8 >> (ulong)(uVar41 & 0x1f);
            bVar32 = (byte)*pDVar36 & (byte)(-1 << (ulong)((uint)uVar43 - uVar41 & 0x1f));
            this[uVar29] = (D3DX_BC7)
                           ((byte)this[uVar29] &
                            ((byte)(~(-1 << (ulong)(uVar41 & 0x1f)) << uVar15) ^ 0xff) |
                           (char)LVar8 << uVar15);
          }
          uVar22 = uVar22 + uVar43;
          *pDVar36 = (D3DX_BC7)(bVar32 | bVar34);
        }
        if (lVar23 == 3) {
          lVar11 = lVar17 * 8 + 7;
          uVar43 = uVar40;
          bVar32 = bVar4;
joined_r0x00a83154:
          pLVar31 = param_5 + lVar11;
        }
        else if (lVar23 == 2) {
          pLVar31 = param_5 + lVar17 * 8 + 6;
          uVar43 = uVar39;
          bVar32 = bVar3;
        }
        else {
          if (lVar23 == 1) {
            lVar11 = lVar17 * 8 + 5;
            uVar43 = uVar33;
            bVar32 = bVar25;
            goto joined_r0x00a83154;
          }
          pLVar31 = pLVar16 + 4;
          uVar43 = uVar42;
          bVar32 = bVar37;
        }
        if (bVar32 != 0) {
          LVar8 = *pLVar31;
          uVar29 = uVar22 & 7;
          uVar15 = uVar22 >> 3;
          if (uVar29 + uVar43 < 9) {
            pDVar36 = this + uVar15;
            bVar34 = (char)LVar8 << uVar29;
            bVar32 = (byte)*pDVar36 &
                     ((byte)(~(-1 << (ulong)((uint)uVar43 & 0x1f)) << uVar29) ^ 0xff);
          }
          else {
            uVar41 = 8 - (int)uVar29;
            pDVar36 = this + uVar15 + 1;
            bVar34 = (byte)LVar8 >> (ulong)(uVar41 & 0x1f);
            bVar32 = (byte)*pDVar36 & (byte)(-1 << (ulong)((uint)uVar43 - uVar41 & 0x1f));
            this[uVar15] = (D3DX_BC7)
                           ((byte)this[uVar15] &
                            ((byte)(~(-1 << (ulong)(uVar41 & 0x1f)) << uVar29) ^ 0xff) |
                           (char)LVar8 << uVar29);
          }
          uVar22 = uVar22 + uVar43;
          *pDVar36 = (D3DX_BC7)(bVar32 | bVar34);
        }
        lVar17 = lVar17 + 1;
        pLVar16 = pLVar16 + 8;
        lVar46 = lVar46 + -1;
      } while (lVar46 != 0);
      lVar23 = lVar23 + 1;
    } while (lVar23 != 4);
  }
  uVar43 = 0;
  uVar29 = uVar45 - 1;
  puVar1 = param_6;
  if (param_4 != 0) {
    puVar1 = param_7;
  }
  do {
    uVar30 = 0;
    do {
      lVar23 = uVar30 + (ulong)(byte)(&ms_aInfo)[(ulong)(byte)*param_1 * 0xf] * 0xc0 + param_2 * 3;
      bVar12 = uVar30 < (byte)(&ms_aInfo)[(ulong)(byte)*param_1 * 0xf];
      uVar30 = uVar30 + 1;
    } while (uVar43 != (byte)s_aFixUp[lVar23] && bVar12);
    uVar41 = (uint)puVar1[uVar43];
    if (uVar43 == (byte)s_aFixUp[lVar23]) {
      if (uVar29 != 0) {
        uVar33 = uVar22 & 7;
        uVar39 = uVar22 >> 3;
        uVar30 = uVar29;
        if (uVar33 + uVar29 < 9) {
          bVar37 = (byte)(~(-1 << (ulong)((uint)uVar29 & 0x1f)) << uVar33);
          bVar25 = (byte)((uVar41 & 0xff) << uVar33);
          goto LAB_00a833b0;
        }
        uVar38 = 8 - (int)uVar33;
        pDVar36 = this + uVar39 + 1;
        bVar37 = (byte)*pDVar36 & (byte)(-1 << (ulong)((uint)uVar29 - uVar38 & 0x1f));
        bVar25 = (byte)((uVar41 & 0xff) >> (ulong)(uVar38 & 0x1f));
        this[uVar39] = (D3DX_BC7)
                       ((byte)this[uVar39] &
                        ((byte)(~(-1 << (ulong)(uVar38 & 0x1f)) << uVar33) ^ 0xff) |
                       (byte)(uVar41 << uVar33));
        goto LAB_00a832b8;
      }
    }
    else {
      uVar33 = uVar22 & 7;
      uVar39 = uVar22 >> 3;
      uVar30 = uVar45;
      if (uVar33 + uVar45 < 9) {
        bVar37 = (byte)(~(-1 << (ulong)(bVar28 & 0x1f)) << uVar33);
        bVar25 = (byte)((uVar41 & 0xff) << uVar33);
LAB_00a833b0:
        pDVar36 = this + (uVar22 >> 3);
        bVar37 = (byte)*pDVar36 & (bVar37 ^ 0xff);
      }
      else {
        uVar38 = 8 - (int)uVar33;
        pDVar36 = this + uVar39 + 1;
        bVar37 = (byte)*pDVar36 & (byte)(-1 << (ulong)(bVar28 - uVar38 & 0x1f));
        bVar25 = (byte)((uVar41 & 0xff) >> (ulong)(uVar38 & 0x1f));
        this[uVar39] = (D3DX_BC7)
                       ((byte)this[uVar39] &
                        ((byte)(~(-1 << (ulong)(uVar38 & 0x1f)) << uVar33) ^ 0xff) |
                       (byte)(uVar41 << uVar33));
      }
LAB_00a832b8:
      uVar22 = uVar22 + uVar30;
      *pDVar36 = (D3DX_BC7)(bVar37 | bVar25);
    }
    uVar43 = uVar43 + 1;
    if (uVar43 == 0x10) {
      if (param_4 != 0) {
        param_7 = param_6;
      }
      if (((byte)EVar2 & 0xfe) == 4) {
        lVar23 = 0;
        do {
          lVar17 = (ulong)bVar5 - (ulong)(lVar23 == 0);
          if (lVar17 != 0) {
            uVar41 = *(uint *)((long)param_7 + lVar23);
            uVar43 = uVar22 & 7;
            uVar29 = uVar22 >> 3;
            if (lVar17 + uVar43 < 9) {
              pDVar36 = this + uVar29;
              bVar37 = (byte)((uVar41 & 0xff) << uVar43);
              bVar28 = (byte)*pDVar36 &
                       ((byte)(~(-1 << (ulong)((uint)lVar17 & 0x1f)) << uVar43) ^ 0xff);
            }
            else {
              uVar38 = 8 - (int)uVar43;
              pDVar36 = this + uVar29 + 1;
              bVar37 = (byte)((uVar41 & 0xff) >> (ulong)(uVar38 & 0x1f));
              bVar28 = (byte)*pDVar36 & (byte)(-1 << (ulong)((uint)lVar17 - uVar38 & 0x1f));
              this[uVar29] = (D3DX_BC7)
                             ((byte)this[uVar29] &
                              ((byte)(~(-1 << (ulong)(uVar38 & 0x1f)) << uVar43) ^ 0xff) |
                             (byte)(uVar41 << uVar43));
            }
            uVar22 = lVar17 + uVar22;
            *pDVar36 = (D3DX_BC7)(bVar28 | bVar37);
          }
          lVar23 = lVar23 + 8;
        } while (lVar23 != 0x80);
      }
      if (*(long *)(lVar10 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


