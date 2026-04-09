// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dtCreateNavMeshData
// Entry Point: 00dd14e4
// Size: 3504 bytes
// Signature: undefined __cdecl dtCreateNavMeshData(dtNavMeshCreateParams * param_1, uchar * * param_2, int * param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* dtCreateNavMeshData(dtNavMeshCreateParams*, unsigned char**, int*) */

bool dtCreateNavMeshData(dtNavMeshCreateParams *param_1,uchar **param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  void *__dest;
  byte bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  dtNavMeshCreateParams dVar7;
  undefined2 uVar8;
  float fVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  byte bVar20;
  char *pcVar21;
  undefined8 *__s;
  uint uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  int iVar26;
  long lVar27;
  undefined4 *puVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  ulong uVar34;
  long lVar35;
  int iVar36;
  float *pfVar37;
  ushort *puVar38;
  long lVar39;
  int iVar40;
  int iVar41;
  ulong uVar42;
  ulong uVar43;
  long lVar44;
  long lVar45;
  undefined4 *puVar46;
  ulong uVar47;
  char *pcVar48;
  long lVar49;
  long lVar50;
  byte *pbVar51;
  uint uVar52;
  ulong uVar53;
  short sVar54;
  int iVar55;
  undefined *puVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  ushort uVar60;
  float fVar61;
  undefined auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  char cVar88;
  char cVar90;
  char cVar91;
  char cVar92;
  char cVar93;
  char cVar94;
  char cVar95;
  char cVar96;
  undefined8 uVar89;
  char cVar97;
  char cVar99;
  char cVar100;
  char cVar101;
  char cVar102;
  char cVar103;
  char cVar104;
  char cVar105;
  undefined8 uVar98;
  undefined auVar106 [16];
  undefined auVar107 [16];
  undefined auVar108 [16];
  undefined auVar109 [16];
  undefined auVar110 [16];
  undefined auVar111 [16];
  undefined auVar112 [16];
  long *local_78;
  
  uVar5 = *(uint *)(param_1 + 0x2c);
  uVar53 = (ulong)uVar5;
  if (6 < (int)uVar5) {
    return false;
  }
  if (0xfffe < *(int *)(param_1 + 8)) {
    return false;
  }
  if (*(int *)(param_1 + 8) == 0) {
    return false;
  }
  if (*(long *)param_1 == 0) {
    return false;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return false;
  }
  if (*(int *)(param_1 + 0x88) < 1) {
    iVar36 = 0;
    iVar55 = 0;
    pcVar21 = (char *)0x0;
  }
  else {
    pcVar21 = (char *)dtAlloc(*(int *)(param_1 + 0x88) << 1,1);
    if (pcVar21 == (char *)0x0) {
      return false;
    }
    if (*(long *)(param_1 + 0x38) == 0) {
LAB_00dd15f8:
      uVar34 = (ulong)*(uint *)(param_1 + 8);
      if ((int)*(uint *)(param_1 + 8) < 1) {
LAB_00dd164c:
        fVar61 = 3.402823e+38;
        fVar59 = -3.402823e+38;
      }
      else {
        fVar59 = -3.402823e+38;
        fVar61 = 3.402823e+38;
        puVar38 = (ushort *)(*(long *)param_1 + 2);
        do {
          fVar57 = (float)NEON_fmadd((float)(ulong)*puVar38,*(undefined4 *)(param_1 + 0xc4),
                                     *(undefined4 *)(param_1 + 0xa0));
          if (fVar57 <= fVar61) {
            fVar61 = fVar57;
          }
          if (fVar59 <= fVar57) {
            fVar59 = fVar57;
          }
          uVar34 = uVar34 - 1;
          puVar38 = puVar38 + 3;
        } while (uVar34 != 0);
      }
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x40);
      uVar34 = (ulong)uVar6;
      if (uVar6 == 0) goto LAB_00dd15f8;
      if ((int)uVar6 < 1) goto LAB_00dd164c;
      fVar59 = -3.402823e+38;
      fVar61 = 3.402823e+38;
      pfVar37 = (float *)(*(long *)(param_1 + 0x38) + 4);
      do {
        fVar57 = *pfVar37;
        if (fVar57 <= fVar61) {
          fVar61 = fVar57;
        }
        if (fVar59 <= fVar57) {
          fVar59 = fVar57;
        }
        uVar34 = uVar34 - 1;
        pfVar37 = pfVar37 + 3;
      } while (uVar34 != 0);
    }
    if (*(int *)(param_1 + 0x88) < 1) {
      iVar36 = 0;
      iVar55 = 0;
    }
    else {
      fVar64 = *(float *)(param_1 + 0xbc);
      lVar35 = 0;
      lVar39 = 0;
      fVar63 = *(float *)(param_1 + 0xa4);
      fVar65 = *(float *)(param_1 + 0xa8);
      iVar55 = 0;
      iVar36 = 0;
      fVar57 = *(float *)(param_1 + 0x9c);
      fVar66 = *(float *)(param_1 + 0xb0);
      pcVar48 = pcVar21;
      do {
        lVar45 = *(long *)(param_1 + 0x58);
        pfVar37 = (float *)(lVar45 + lVar35);
        bVar1 = false;
        cVar88 = '\0';
        switch((uint)(*pfVar37 < fVar57) << 2 | (uint)(pfVar37[2] < fVar63) << 3 |
               (uint)(fVar65 <= *pfVar37) | (uint)(fVar66 <= pfVar37[2]) << 1) {
        case 1:
          break;
        case 2:
          bVar1 = false;
          cVar88 = '\x02';
          break;
        case 3:
          bVar1 = false;
          cVar88 = '\x01';
          break;
        case 4:
          bVar1 = false;
          cVar88 = '\x04';
          break;
        default:
          cVar88 = -1;
          bVar1 = true;
          break;
        case 6:
          bVar1 = false;
          cVar88 = '\x03';
          break;
        case 8:
          bVar1 = false;
          cVar88 = '\x06';
          break;
        case 9:
          bVar1 = false;
          cVar88 = '\a';
          break;
        case 0xc:
          bVar1 = false;
          cVar88 = '\x05';
        }
        *pcVar48 = cVar88;
        fVar9 = *(float *)(lVar45 + lVar35 + 0x14);
        uVar34 = (ulong)((uint)(pfVar37[3] < fVar57) << 2 | (uint)(fVar9 < fVar63) << 3 |
                        (uint)(fVar65 <= pfVar37[3]) | (uint)(fVar66 <= fVar9) << 1);
        lVar24 = uVar34 - 1;
        if ((uint)lVar24 < 0xc) {
          iVar26 = *(int *)(&DAT_0054a1b4 + lVar24 * 4);
          pcVar48[1] = (&UNK_0054a1e3)[uVar34];
        }
        else {
          iVar26 = 1;
          pcVar48[1] = -1;
        }
        if ((bVar1) &&
           ((fVar9 = *(float *)(lVar45 + lVar35 + 4), fVar9 < fVar61 - fVar64 ||
            (fVar59 + fVar64 < fVar9)))) {
          cVar88 = '\0';
          *pcVar48 = '\0';
        }
        if (cVar88 == -1) {
          iVar36 = iVar36 + 1;
        }
        lVar39 = lVar39 + 1;
        if (cVar88 == -1) {
          iVar55 = iVar55 + 1;
        }
        iVar36 = iVar36 + iVar26;
        pcVar48 = pcVar48 + 2;
        lVar35 = lVar35 + 0x18;
      } while (lVar39 < *(int *)(param_1 + 0x88));
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  uVar34 = (ulong)uVar6;
  iVar29 = uVar5 * 2;
  iVar26 = *(int *)(param_1 + 8) + iVar55 * 2;
  if ((int)uVar6 < 1) {
    iVar40 = iVar36 << 1;
    if (*(long *)(param_1 + 0x30) == 0) {
LAB_00dd1a18:
      iVar36 = 0;
    }
    else {
      iVar36 = *(int *)(param_1 + 0x50);
    }
  }
  else {
    if ((int)uVar5 < 1) {
      iVar40 = iVar36 << 1;
      lVar39 = *(long *)(param_1 + 0x30);
      if (lVar39 == 0) {
LAB_00dd2288:
        iVar72 = 0;
        iVar36 = uVar6 * -2;
        goto LAB_00dd1a20;
      }
      bVar1 = false;
      iVar36 = *(int *)(param_1 + 0x50);
LAB_00dd1950:
      iVar41 = 0;
      uVar43 = 0;
      iVar72 = 0;
      do {
        if (bVar1) {
          uVar42 = 0;
          do {
            if (*(short *)(*(long *)(param_1 + 0x10) + (long)iVar41 * 2 + uVar42 * 2) == -1)
            goto LAB_00dd1968;
            uVar42 = uVar42 + 1;
          } while (uVar53 != uVar42);
          uVar42 = (ulong)uVar5;
        }
        else {
          uVar42 = 0;
        }
LAB_00dd1968:
        lVar35 = uVar43 * 0x10;
        uVar43 = uVar43 + 1;
        iVar41 = iVar41 + iVar29;
        iVar72 = (*(int *)(lVar39 + lVar35 + 4) + iVar72) - (int)uVar42;
      } while (uVar43 != uVar34);
      goto LAB_00dd1a20;
    }
    uVar42 = 0;
    uVar43 = 0;
    iVar40 = 0;
    iVar72 = 0;
    do {
      uVar25 = -(uVar42 >> 0x1f) & 0xfffffffe00000000 | uVar42 << 1;
      uVar47 = 0;
      do {
        if (*(short *)(*(long *)(param_1 + 0x10) + uVar25 + uVar47 * 2) == -1) {
          uVar52 = (uint)uVar47;
          break;
        }
        uVar60 = *(ushort *)(*(long *)(param_1 + 0x10) + uVar53 * 2 + uVar25 + uVar47 * 2);
        uVar47 = uVar47 + 1;
        iVar72 = iVar72 + (uint)((short)uVar60 < 0 && ((uVar60 ^ 0xffff) & 0xf) != 0);
        uVar52 = uVar5;
      } while (uVar53 != uVar47);
      uVar42 = (ulong)(uint)((int)uVar42 + iVar29);
      uVar43 = uVar43 + 1;
      iVar40 = iVar40 + uVar52;
    } while (uVar43 != uVar34);
    iVar40 = iVar40 + (iVar72 + iVar36) * 2;
    lVar39 = *(long *)(param_1 + 0x30);
    if (lVar39 == 0) {
      if ((int)uVar6 < 1) goto LAB_00dd1a18;
      if ((int)uVar5 < 1) goto LAB_00dd2288;
      iVar72 = 0;
      uVar43 = 0;
      iVar36 = 0;
      do {
        uVar42 = 0;
        do {
          if (*(short *)(*(long *)(param_1 + 0x10) + (long)iVar72 * 2 + uVar42 * 2) == -1)
          goto LAB_00dd19d8;
          uVar42 = uVar42 + 1;
        } while (uVar53 != uVar42);
        uVar42 = (ulong)uVar5;
LAB_00dd19d8:
        uVar43 = uVar43 + 1;
        iVar36 = iVar36 + (int)uVar42 + -2;
        iVar72 = iVar72 + iVar29;
      } while (uVar43 != uVar34);
    }
    else {
      iVar36 = *(int *)(param_1 + 0x50);
      bVar1 = 0 < (int)uVar5;
      if (0 < (int)uVar6) goto LAB_00dd1950;
    }
  }
  iVar72 = 0;
LAB_00dd1a20:
  local_78 = (long *)(param_1 + 0x30);
  iVar73 = iVar26 * 0xc;
  iVar74 = uVar6 * 0xc;
  iVar75 = (uVar6 + iVar55) * 0x20;
  iVar76 = iVar72 * 0xc;
  iVar41 = 0;
  if (param_1[200] != (dtNavMeshCreateParams)0x0) {
    iVar41 = uVar6 << 5;
  }
  iVar2 = iVar74 + iVar55 * 0x24 + iVar75 + iVar73 + iVar40 * 0xc + iVar36 * 4 + iVar76 + iVar41 +
          100;
  __s = (undefined8 *)dtAlloc(iVar2,0);
  if (__s == (undefined8 *)0x0) {
    dtFree(pcVar21);
  }
  else {
    memset(__s,0,(long)iVar2);
    dVar7 = param_1[200];
    lVar39 = (long)iVar73;
    *(undefined4 *)(__s + 9) = *(undefined4 *)(param_1 + 0x9c);
    lVar24 = (long)iVar75;
    lVar45 = (long)(iVar40 * 0xc);
    *(undefined4 *)((long)__s + 0x4c) = *(undefined4 *)(param_1 + 0xa0);
    uVar58 = *(undefined4 *)(param_1 + 0xa4);
    *__s = 0x7444e4156;
    auVar67 = *(undefined (*) [16])(param_1 + 0x8c);
    auVar62 = *(undefined (*) [16])(param_1 + 0x8c);
    *(int *)(__s + 5) = iVar72;
    *(int *)((long)__s + 0x2c) = iVar36;
    *(uint *)(__s + 3) = uVar6 + iVar55;
    *(int *)((long)__s + 0x1c) = iVar26;
    lVar35 = lVar39 + 100;
    *(undefined4 *)(__s + 10) = uVar58;
    *(undefined4 *)((long)__s + 0x54) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined4 *)(__s + 0xb) = *(undefined4 *)(param_1 + 0xac);
    *(undefined4 *)((long)__s + 0x5c) = *(undefined4 *)(param_1 + 0xb0);
    fVar59 = *(float *)(param_1 + 0xc0);
    *(float *)(__s + 0xc) = 1.0 / fVar59;
    auVar62 = NEON_ext(auVar62,auVar67,4,1);
    __s[2] = auVar62._8_8_;
    __s[1] = auVar62._0_8_;
    uVar6 = *(uint *)(param_1 + 0x28);
    uVar52 = *(uint *)(param_1 + 8);
    uVar34 = (ulong)uVar52;
    *(undefined8 *)((long)__s + 0x3c) = *(undefined8 *)(param_1 + 0xb4);
    *(int *)(__s + 4) = iVar40;
    *(uint *)((long)__s + 0x24) = uVar6;
    uVar58 = *(undefined4 *)(param_1 + 0xbc);
    iVar26 = 0;
    if (dVar7 != (dtNavMeshCreateParams)0x0) {
      iVar26 = uVar6 << 1;
    }
    *(int *)((long)__s + 0x34) = iVar55;
    *(uint *)(__s + 7) = uVar6;
    *(undefined4 *)((long)__s + 0x44) = uVar58;
    *(int *)(__s + 6) = iVar26;
    if (0 < (int)uVar52) {
      puVar38 = (ushort *)(*(long *)param_1 + 4);
      puVar28 = (undefined4 *)((long)__s + 0x6c);
      while( true ) {
        uVar34 = uVar34 - 1;
        uVar58 = NEON_ucvtf((uint)puVar38[-2]);
        uVar58 = NEON_fmadd(uVar58,fVar59,*(undefined4 *)(param_1 + 0x9c));
        uVar60 = puVar38[-1];
        puVar28[-2] = uVar58;
        uVar58 = NEON_ucvtf((uint)uVar60);
        uVar58 = NEON_fmadd(uVar58,*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 0xa0));
        uVar60 = *puVar38;
        puVar28[-1] = uVar58;
        uVar58 = NEON_ucvtf((uint)uVar60);
        uVar58 = NEON_fmadd(uVar58,*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xa4));
        *puVar28 = uVar58;
        if (uVar34 == 0) break;
        fVar59 = *(float *)(param_1 + 0xc0);
        puVar38 = puVar38 + 3;
        puVar28 = puVar28 + 3;
      }
    }
    lVar49 = lVar45 + lVar24 + lVar35;
    uVar33 = *(uint *)(param_1 + 0x88);
    if (0 < (int)uVar33) {
      uVar34 = 0;
      iVar55 = 0;
      pcVar48 = pcVar21;
      do {
        if (*pcVar48 == -1) {
          iVar26 = iVar55 * 2;
          iVar55 = iVar55 + 1;
          puVar46 = (undefined4 *)(*(long *)(param_1 + 0x58) + (uVar34 & 0xfffffffe) * 4);
          puVar28 = (undefined4 *)((long)__s + (long)(int)((uVar52 + iVar26) * 3) * 4 + 100);
          *puVar28 = *puVar46;
          puVar28[1] = puVar46[1];
          puVar28[2] = puVar46[2];
          puVar28[3] = puVar46[3];
          puVar28[4] = puVar46[4];
          puVar28[5] = puVar46[5];
        }
        uVar34 = uVar34 + 6;
        pcVar48 = pcVar48 + 2;
      } while ((ulong)uVar33 * 6 - uVar34 != 0);
    }
    lVar32 = iVar74 + lVar49;
    if (0 < (int)uVar6) {
      lVar31 = *(long *)(param_1 + 0x10);
      lVar4 = *(long *)(param_1 + 0x18);
      uVar34 = 0;
      lVar27 = *(long *)(param_1 + 0x20);
      lVar44 = lVar31 + (long)(int)uVar5 * 2;
      lVar30 = (long)__s + lVar39 + 0x68;
      do {
        uVar8 = *(undefined2 *)(lVar4 + uVar34 * 2);
        lVar50 = uVar34 * 0x20 + lVar35;
        pcVar48 = (char *)((long)__s + lVar50 + 0x1e);
        *pcVar48 = '\0';
        *(undefined2 *)((long)__s + lVar50 + 0x1c) = uVar8;
        *(byte *)((long)__s + lVar50 + 0x1f) = *(byte *)(lVar27 + uVar34) & 0x3f;
        if (0 < (int)uVar5) {
          lVar50 = 0;
          cVar88 = '\0';
          do {
            if (*(short *)(lVar31 + lVar50) == -1) break;
            *(short *)(lVar30 + lVar50) = *(short *)(lVar31 + lVar50);
            sVar54 = *(short *)(lVar44 + lVar50);
            if (sVar54 < 0) {
              uVar22 = (int)sVar54 + 1;
              if ((uVar22 & 0xf) < 5) {
                sVar54 = *(short *)(&DAT_0054a1f0 + ((long)((ulong)uVar22 << 0x3c) >> 0x3c) * 2);
                goto LAB_00dd1d2c;
              }
            }
            else {
              sVar54 = sVar54 + 1;
LAB_00dd1d2c:
              *(short *)(lVar30 + lVar50 + 0xc) = sVar54;
            }
            cVar88 = cVar88 + '\x01';
            lVar50 = lVar50 + 2;
            *pcVar48 = cVar88;
          } while (uVar53 * 2 - lVar50 != 0);
        }
        uVar34 = uVar34 + 1;
        lVar44 = lVar44 + (long)iVar29 * 2;
        lVar31 = lVar31 + (long)iVar29 * 2;
        lVar30 = lVar30 + 0x20;
      } while (uVar34 != uVar6);
    }
    __dest = (void *)((long)__s + iVar76 + lVar32);
    if (0 < (int)uVar33) {
      uVar53 = 0;
      iVar55 = 0;
      pcVar48 = pcVar21;
      do {
        if (*pcVar48 == -1) {
          lVar44 = (long)iVar55;
          sVar54 = (short)uVar52 + (short)iVar55 * 2;
          iVar55 = iVar55 + 1;
          lVar44 = ((int)uVar6 + lVar44) * 0x20 + lVar35;
          *(short *)((long)__s + lVar44 + 4) = sVar54;
          lVar30 = *(long *)(param_1 + 0x68);
          *(short *)((long)__s + lVar44 + 6) = sVar54 + 1;
          lVar31 = *(long *)(param_1 + 0x70);
          uVar8 = *(undefined2 *)(lVar30 + uVar53 * 2);
          *(undefined *)((long)__s + lVar44 + 0x1e) = 2;
          *(undefined2 *)((long)__s + lVar44 + 0x1c) = uVar8;
          *(byte *)((long)__s + lVar44 + 0x1f) = *(byte *)(lVar31 + uVar53) & 0x3f | 0x40;
        }
        uVar53 = uVar53 + 1;
        pcVar48 = pcVar48 + 2;
      } while (uVar33 != uVar53);
    }
    auVar62 = _DAT_004c4ec0;
    lVar44 = *local_78;
    if (lVar44 == 0) {
      if (0 < (int)uVar6) {
        lVar39 = lVar24 + iVar76 + (long)iVar74 + lVar45 + lVar39;
        lVar45 = 0;
        iVar55 = 0;
        lVar24 = lVar39 + 0x65;
        uVar52 = uVar6;
        do {
          puVar28 = (undefined4 *)((long)__s + lVar45 * 0xc + lVar49);
          bVar20 = *(byte *)((long)__s + lVar45 * 0x20 + lVar35 + 0x1e);
          *(undefined *)(puVar28 + 2) = 0;
          *puVar28 = 0;
          puVar28[1] = iVar55;
          uVar22 = (uint)bVar20;
          uVar33 = uVar22 - 3;
          *(byte *)((long)puVar28 + 9) = bVar20 - 2;
          if (2 < uVar22) {
            uVar23 = (uint)bVar20;
            iVar26 = iVar55;
            if (uVar33 < 0xf) {
LAB_00dd2100:
              uVar52 = 2;
LAB_00dd2104:
              iVar26 = iVar26 << 2;
              do {
                puVar56 = (undefined *)((long)__dest + (long)iVar26);
                bVar20 = 4;
                if (uVar52 == 2) {
                  bVar20 = 5;
                }
                cVar88 = (char)uVar52;
                puVar56[2] = cVar88;
                bVar3 = bVar20 | 0x10;
                if (uVar52 - uVar23 != -1) {
                  bVar3 = bVar20;
                }
                uVar52 = uVar52 + 1;
                iVar26 = iVar26 + 4;
                *puVar56 = 0;
                puVar56[1] = cVar88 + -1;
                puVar56[3] = bVar3;
              } while (uVar52 != uVar23);
            }
            else {
              uVar53 = (ulong)uVar33 * 4;
              iVar29 = iVar55 * 4;
              uVar52 = 2;
              iVar40 = iVar29 + (int)uVar53;
              if ((((iVar40 + iVar55 * -4 < 0 != SBORROW4(iVar40,iVar29)) ||
                   ((uVar53 & 0xffffffff00000000) != 0)) ||
                  (lVar32 = (long)iVar29, uVar34 = (long)__s + lVar32 + lVar39 + 0x66,
                  uVar34 + uVar53 < uVar34)) ||
                 ((uVar34 = (long)__s + lVar32 + lVar39 + 0x67, uVar34 + uVar53 < uVar34 ||
                  (uVar34 = (long)__s + lVar32 + lVar24, uVar34 + uVar53 < uVar34))))
              goto LAB_00dd2104;
              lVar44 = (long)iVar29;
              lVar32 = lVar44 + (ulong)uVar33 * 4;
              if (((ulong)((long)__s + lVar44 + lVar39 + 100) <
                   (ulong)((long)__s + lVar32 + lVar39 + 0x68)) &&
                 ((ulong)((long)__s + lVar44 + lVar24) < (ulong)((long)__s + lVar32 + lVar24)))
              goto LAB_00dd2100;
              uVar53 = (ulong)uVar33 + 1;
              iVar40 = uVar22 - 1;
              uVar43 = uVar53 & 0x1fffffff0;
              iVar74 = 4;
              iVar75 = 5;
              iVar72 = 2;
              iVar73 = 3;
              iVar26 = (uint)uVar43 + iVar55;
              iVar78 = 8;
              iVar79 = 9;
              iVar76 = 6;
              iVar77 = 7;
              uVar52 = (uint)uVar43 | 2;
              iVar82 = auVar62._8_4_;
              iVar83 = auVar62._12_4_;
              iVar80 = auVar62._0_4_;
              iVar81 = auVar62._4_4_;
              iVar86 = 0x10;
              iVar87 = 0x11;
              iVar84 = 0xe;
              iVar85 = 0xf;
              uVar34 = uVar43;
              uVar89 = 0x908070605040302;
              uVar98 = 0x11100f0e0d0c0b0a;
              do {
                auVar67._8_4_ = 2;
                auVar67._0_8_ = 0x200000002;
                auVar67._12_4_ = 2;
                auVar110._4_4_ = iVar73;
                auVar110._0_4_ = iVar72;
                auVar110._8_4_ = iVar74;
                auVar110._12_4_ = iVar75;
                auVar106 = NEON_cmeq(auVar110,auVar67,4);
                puVar56 = (undefined *)((long)__dest + (long)iVar29);
                auVar68._8_4_ = 2;
                auVar68._0_8_ = 0x200000002;
                auVar68._12_4_ = 2;
                auVar10._4_4_ = iVar77;
                auVar10._0_4_ = iVar76;
                auVar10._8_4_ = iVar78;
                auVar10._12_4_ = iVar79;
                auVar108 = NEON_cmeq(auVar10,auVar68,4);
                iVar29 = iVar29 + 0x40;
                auVar69._8_4_ = 2;
                auVar69._0_8_ = 0x200000002;
                auVar69._12_4_ = 2;
                auVar12._4_4_ = iVar81;
                auVar12._0_4_ = iVar80;
                auVar12._8_4_ = iVar82;
                auVar12._12_4_ = iVar83;
                auVar110 = NEON_cmeq(auVar12,auVar69,4);
                uVar34 = uVar34 - 0x10;
                auVar70._8_4_ = 2;
                auVar70._0_8_ = 0x200000002;
                auVar70._12_4_ = 2;
                auVar14._4_4_ = iVar85;
                auVar14._0_4_ = iVar84;
                auVar14._8_4_ = iVar86;
                auVar14._12_4_ = iVar87;
                auVar67 = NEON_cmeq(auVar14,auVar70,4);
                auVar13._4_4_ = iVar81;
                auVar13._0_4_ = iVar80;
                auVar13._8_4_ = iVar82;
                auVar13._12_4_ = iVar83;
                auVar16._4_4_ = iVar40;
                auVar16._0_4_ = iVar40;
                auVar16._8_4_ = iVar40;
                auVar16._12_4_ = iVar40;
                auVar69 = NEON_cmeq(auVar13,auVar16,4);
                auVar15._4_4_ = iVar85;
                auVar15._0_4_ = iVar84;
                auVar15._8_4_ = iVar86;
                auVar15._12_4_ = iVar87;
                auVar17._4_4_ = iVar40;
                auVar17._0_4_ = iVar40;
                auVar17._8_4_ = iVar40;
                auVar17._12_4_ = iVar40;
                auVar70 = NEON_cmeq(auVar15,auVar17,4);
                auVar111._4_4_ = iVar73;
                auVar111._0_4_ = iVar72;
                auVar111._8_4_ = iVar74;
                auVar111._12_4_ = iVar75;
                auVar18._4_4_ = iVar40;
                auVar18._0_4_ = iVar40;
                auVar18._8_4_ = iVar40;
                auVar18._12_4_ = iVar40;
                auVar111 = NEON_cmeq(auVar111,auVar18,4);
                auVar11._4_4_ = iVar77;
                auVar11._0_4_ = iVar76;
                auVar11._8_4_ = iVar78;
                auVar11._12_4_ = iVar79;
                auVar19._4_4_ = iVar40;
                auVar19._0_4_ = iVar40;
                auVar19._8_4_ = iVar40;
                auVar19._12_4_ = iVar40;
                auVar68 = NEON_cmeq(auVar11,auVar19,4);
                cVar88 = (char)uVar89;
                cVar90 = (char)((ulong)uVar89 >> 8);
                cVar91 = (char)((ulong)uVar89 >> 0x10);
                cVar92 = (char)((ulong)uVar89 >> 0x18);
                cVar93 = (char)((ulong)uVar89 >> 0x20);
                cVar94 = (char)((ulong)uVar89 >> 0x28);
                cVar95 = (char)((ulong)uVar89 >> 0x30);
                cVar96 = (char)((ulong)uVar89 >> 0x38);
                cVar97 = (char)uVar98;
                cVar99 = (char)((ulong)uVar98 >> 8);
                cVar100 = (char)((ulong)uVar98 >> 0x10);
                cVar101 = (char)((ulong)uVar98 >> 0x18);
                cVar102 = (char)((ulong)uVar98 >> 0x20);
                cVar103 = (char)((ulong)uVar98 >> 0x28);
                cVar104 = (char)((ulong)uVar98 >> 0x30);
                cVar105 = (char)((ulong)uVar98 >> 0x38);
                auVar107[1] = auVar106[4];
                auVar107[0] = auVar106[0];
                auVar107[2] = auVar106[8];
                auVar107[3] = auVar106[12];
                auVar107[4] = auVar108[0];
                auVar107[5] = auVar108[4];
                auVar107[6] = auVar108[8];
                auVar107[7] = auVar108[12];
                auVar107[8] = auVar110[0];
                auVar107[9] = auVar110[4];
                auVar107[10] = auVar110[8];
                auVar107[11] = auVar110[12];
                auVar107[12] = auVar67[0];
                auVar107[13] = auVar67[4];
                auVar107[14] = auVar67[8];
                auVar107[15] = auVar67[12];
                iVar72 = iVar72 + 0x10;
                iVar73 = iVar73 + 0x10;
                iVar74 = iVar74 + 0x10;
                iVar75 = iVar75 + 0x10;
                auVar106[8] = 4;
                auVar106._0_8_ = 0x404040404040404;
                auVar106[9] = 4;
                auVar106[10] = 4;
                auVar106[11] = 4;
                auVar106[12] = 4;
                auVar106[13] = 4;
                auVar106[14] = 4;
                auVar106[15] = 4;
                auVar108[8] = 5;
                auVar108._0_8_ = 0x505050505050505;
                auVar108[9] = 5;
                auVar108[10] = 5;
                auVar108[11] = 5;
                auVar108[12] = 5;
                auVar108[13] = 5;
                auVar108[14] = 5;
                auVar108[15] = 5;
                auVar67 = NEON_bsl(auVar107,auVar108,auVar106,1);
                iVar76 = iVar76 + 0x10;
                iVar77 = iVar77 + 0x10;
                iVar78 = iVar78 + 0x10;
                iVar79 = iVar79 + 0x10;
                iVar80 = iVar80 + 0x10;
                iVar81 = iVar81 + 0x10;
                iVar82 = iVar82 + 0x10;
                iVar83 = iVar83 + 0x10;
                auVar109._0_8_ =
                     CONCAT17(auVar68[12],
                              CONCAT16(auVar68[8],
                                       CONCAT15(auVar68[4],
                                                CONCAT14(auVar68[0],
                                                         CONCAT13(auVar111[12],
                                                                  CONCAT12(auVar111[8],
                                                                           CONCAT11(auVar111[4],
                                                                                    auVar111[0])))))
                                      ));
                auVar109[8] = auVar69[0];
                auVar109[9] = auVar69[4];
                auVar109[10] = auVar69[8];
                auVar109[11] = auVar69[12];
                auVar109[12] = auVar70[0];
                auVar109[13] = auVar70[4];
                auVar109[14] = auVar70[8];
                auVar109[15] = auVar70[12];
                auVar112._0_8_ = auVar67._0_8_ | 0x1010101010101010;
                auVar112[8] = auVar67[8] | 0x10;
                auVar112[9] = auVar67[9] | 0x10;
                auVar112[10] = auVar67[10] | 0x10;
                auVar112[11] = auVar67[11] | 0x10;
                auVar112[12] = auVar67[12] | 0x10;
                auVar112[13] = auVar67[13] | 0x10;
                auVar112[14] = auVar67[14] | 0x10;
                auVar112[15] = auVar67[15] | 0x10;
                iVar84 = iVar84 + 0x10;
                iVar85 = iVar85 + 0x10;
                iVar86 = iVar86 + 0x10;
                iVar87 = iVar87 + 0x10;
                auVar71._8_8_ = auVar109._8_8_;
                auVar71._0_8_ = auVar109._0_8_;
                auVar67 = NEON_bsl(auVar71,auVar112,auVar67,1);
                uVar89 = CONCAT17(cVar96 + '\x10',
                                  CONCAT16(cVar95 + '\x10',
                                           CONCAT15(cVar94 + '\x10',
                                                    CONCAT14(cVar93 + '\x10',
                                                             CONCAT13(cVar92 + '\x10',
                                                                      CONCAT12(cVar91 + '\x10',
                                                                               CONCAT11(cVar90 + 
                                                  '\x10',cVar88 + '\x10')))))));
                uVar98 = CONCAT17(cVar105 + '\x10',
                                  CONCAT16(cVar104 + '\x10',
                                           CONCAT15(cVar103 + '\x10',
                                                    CONCAT14(cVar102 + '\x10',
                                                             CONCAT13(cVar101 + '\x10',
                                                                      CONCAT12(cVar100 + '\x10',
                                                                               CONCAT11(cVar99 + 
                                                  '\x10',cVar97 + '\x10')))))));
                *puVar56 = 0;
                puVar56[1] = cVar88 + -1;
                puVar56[2] = cVar88;
                puVar56[3] = auVar67[0];
                puVar56[4] = 0;
                puVar56[5] = cVar90 + -1;
                puVar56[6] = cVar90;
                puVar56[7] = auVar67[1];
                puVar56[8] = 0;
                puVar56[9] = cVar91 + -1;
                puVar56[10] = cVar91;
                puVar56[0xb] = auVar67[2];
                puVar56[0xc] = 0;
                puVar56[0xd] = cVar92 + -1;
                puVar56[0xe] = cVar92;
                puVar56[0xf] = auVar67[3];
                puVar56[0x10] = 0;
                puVar56[0x11] = cVar93 + -1;
                puVar56[0x12] = cVar93;
                puVar56[0x13] = auVar67[4];
                puVar56[0x14] = 0;
                puVar56[0x15] = cVar94 + -1;
                puVar56[0x16] = cVar94;
                puVar56[0x17] = auVar67[5];
                puVar56[0x18] = 0;
                puVar56[0x19] = cVar95 + -1;
                puVar56[0x1a] = cVar95;
                puVar56[0x1b] = auVar67[6];
                puVar56[0x1c] = 0;
                puVar56[0x1d] = cVar96 + -1;
                puVar56[0x1e] = cVar96;
                puVar56[0x1f] = auVar67[7];
                puVar56[0x20] = 0;
                puVar56[0x21] = cVar97 + -1;
                puVar56[0x22] = cVar97;
                puVar56[0x23] = auVar67[8];
                puVar56[0x24] = 0;
                puVar56[0x25] = cVar99 + -1;
                puVar56[0x26] = cVar99;
                puVar56[0x27] = auVar67[9];
                puVar56[0x28] = 0;
                puVar56[0x29] = cVar100 + -1;
                puVar56[0x2a] = cVar100;
                puVar56[0x2b] = auVar67[10];
                puVar56[0x2c] = 0;
                puVar56[0x2d] = cVar101 + -1;
                puVar56[0x2e] = cVar101;
                puVar56[0x2f] = auVar67[11];
                puVar56[0x30] = 0;
                puVar56[0x31] = cVar102 + -1;
                puVar56[0x32] = cVar102;
                puVar56[0x33] = auVar67[12];
                puVar56[0x34] = 0;
                puVar56[0x35] = cVar103 + -1;
                puVar56[0x36] = cVar103;
                puVar56[0x37] = auVar67[13];
                puVar56[0x38] = 0;
                puVar56[0x39] = cVar104 + -1;
                puVar56[0x3a] = cVar104;
                puVar56[0x3b] = auVar67[14];
                puVar56[0x3c] = 0;
                puVar56[0x3d] = cVar105 + -1;
                puVar56[0x3e] = cVar105;
                puVar56[0x3f] = auVar67[15];
              } while (uVar34 != 0);
              if (uVar53 != uVar43) goto LAB_00dd2104;
            }
            uVar52 = *(uint *)(param_1 + 0x28);
            iVar55 = iVar55 + uVar23 + -2;
          }
          lVar45 = lVar45 + 1;
        } while (lVar45 < (int)uVar52);
      }
    }
    else {
      if (0 < (int)uVar6) {
        uVar52 = 0;
        lVar35 = 1;
        lVar49 = 0xc;
        pbVar51 = (byte *)((long)__s + lVar39 + 0x82);
        puVar56 = (undefined *)((long)__s + lVar24 + lVar45 + lVar39 + 0x6d);
        uVar33 = uVar6;
        while( true ) {
          puVar28 = (undefined4 *)(lVar44 + lVar49);
          bVar20 = *pbVar51;
          iVar55 = puVar28[-3];
          iVar26 = puVar28[-2];
          *(uint *)(puVar56 + -9) = uVar52 & 0xffff;
          lVar39 = (long)iVar26 - (ulong)bVar20;
          *(undefined4 *)(puVar56 + -5) = puVar28[-1];
          uVar58 = *puVar28;
          puVar56[-1] = (char)lVar39;
          *puVar56 = (char)uVar58;
          if ((int)lVar39 != 0) {
            memcpy((void *)((long)__s + (ulong)((uVar52 & 0xffff) * 3) * 4 + lVar32),
                   (void *)(*(long *)(param_1 + 0x38) + (long)(int)((iVar55 + (uint)bVar20) * 3) * 4
                           ),lVar39 * 0xc);
            uVar52 = uVar52 + (int)lVar39;
            uVar33 = *(uint *)(param_1 + 0x28);
          }
          if ((int)uVar33 <= lVar35) break;
          pbVar51 = pbVar51 + 0x20;
          lVar35 = lVar35 + 1;
          lVar49 = lVar49 + 0x10;
          puVar56 = puVar56 + 0xc;
          lVar44 = *local_78;
        }
      }
      memcpy(__dest,*(void **)(param_1 + 0x48),(long)*(int *)(param_1 + 0x50) << 2);
    }
    lVar39 = (long)__dest + (long)(iVar36 * 4);
    if (param_1[200] != (dtNavMeshCreateParams)0x0) {
      FUN_00dd2294(*(undefined4 *)(param_1 + 0xc0),*(undefined8 *)param_1,
                   *(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x28),uVar5,lVar39);
    }
    uVar5 = *(uint *)(param_1 + 0x88);
    if (0 < (int)uVar5) {
      uVar53 = 0;
      iVar36 = 0;
      lVar39 = lVar39 + iVar41;
      do {
        if (pcVar21[uVar53 * 2] == -1) {
          lVar35 = *(long *)(param_1 + 0x60);
          puVar28 = (undefined4 *)(*(long *)(param_1 + 0x58) + (ulong)(uint)((int)uVar53 * 6) * 4);
          puVar46 = (undefined4 *)(lVar39 + (long)iVar36 * 0x24);
          *puVar46 = *puVar28;
          puVar46[1] = puVar28[1];
          puVar46[2] = puVar28[2];
          puVar46[3] = puVar28[3];
          puVar46[4] = puVar28[4];
          puVar46[5] = puVar28[5];
          uVar58 = *(undefined4 *)(lVar35 + uVar53 * 4);
          *(short *)(puVar46 + 7) = (short)iVar36 + (short)uVar6;
          lVar35 = *(long *)(param_1 + 0x78);
          lVar45 = *(long *)(param_1 + 0x80);
          puVar46[6] = uVar58;
          *(bool *)((long)puVar46 + 0x1e) = *(char *)(lVar35 + uVar53) != '\0';
          *(char *)((long)puVar46 + 0x1f) = pcVar21[uVar53 * 2 | 1];
          if (lVar45 != 0) {
            *(undefined4 *)(lVar39 + (long)iVar36 * 0x24 + 0x20) =
                 *(undefined4 *)(lVar45 + uVar53 * 4);
          }
          iVar36 = iVar36 + 1;
        }
        uVar53 = uVar53 + 1;
      } while (uVar53 != uVar5);
    }
    dtFree(pcVar21);
    *param_2 = (uchar *)__s;
    *param_3 = iVar2;
  }
                    /* WARNING: Read-only address (ram,0x004c4ec0) is written */
  return __s != (undefined8 *)0x0;
}


