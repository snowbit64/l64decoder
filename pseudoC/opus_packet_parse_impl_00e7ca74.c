// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_packet_parse_impl
// Entry Point: 00e7ca74
// Size: 1112 bytes
// Signature: undefined opus_packet_parse_impl(void)


uint opus_packet_parse_impl
               (byte *param_1,uint param_2,int param_3,byte *param_4,byte **param_5,
               undefined8 *param_6,int *param_7,int *param_8)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ushort uVar5;
  ushort *puVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  
  if ((int)param_2 < 0) {
    return 0xffffffff;
  }
  if (param_6 == (undefined8 *)0x0) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    return 0xfffffffc;
  }
  bVar1 = *param_1;
  if ((char)bVar1 < '\0') {
    uVar17 = (uint)(48000 << (ulong)(bVar1 >> 3 & 3)) / 400;
  }
  else if ((~bVar1 & 0x60) == 0) {
    uVar17 = 0x1e0;
    if ((bVar1 & 8) != 0) {
      uVar17 = 0x3c0;
    }
  }
  else {
    uVar17 = bVar1 >> 3 & 3;
    if (uVar17 == 3) {
      uVar17 = 0xb40;
    }
    else {
      uVar17 = (uint)(48000 << (ulong)uVar17) / 100;
    }
  }
  pbVar9 = param_1 + 1;
  uVar12 = param_2 - 1;
  uVar11 = bVar1 & 3;
  uVar13 = uVar12;
  if ((bVar1 & 3) == 0) {
    bVar3 = false;
    uVar18 = 1;
LAB_00e7cb48:
    uVar10 = (uint)uVar18;
    if (param_3 != 0) {
      puVar6 = (ushort *)((long)param_6 + uVar18 * 2);
      if ((int)uVar12 < 1) {
LAB_00e7cbf4:
        iVar20 = -1;
        uVar18 = (ulong)(uVar10 - 1);
        puVar6[-1] = 0xffff;
        uVar5 = *(ushort *)((long)param_6 + uVar18 * 2);
      }
      else {
LAB_00e7cb64:
        bVar2 = *pbVar9;
        if (bVar2 < 0xfc) {
          iVar20 = 1;
          uVar18 = (ulong)(uVar10 - 1);
          puVar6[-1] = (ushort)bVar2;
          uVar5 = *(ushort *)((long)param_6 + uVar18 * 2);
        }
        else {
          if (uVar12 < 2) goto LAB_00e7cbf4;
          iVar20 = 2;
          uVar18 = (ulong)(uVar10 - 1);
          puVar6[-1] = (ushort)bVar2 + (ushort)pbVar9[1] * 4;
          uVar5 = *(ushort *)((long)param_6 + uVar18 * 2);
        }
      }
      if ((short)uVar5 < 0) {
        return 0xfffffffc;
      }
      iVar4 = (int)(short)uVar5;
      if ((int)(uVar12 - iVar20) < iVar4) {
        return 0xfffffffc;
      }
      pbVar9 = pbVar9 + iVar20;
      if (bVar3) {
        if ((int)(uVar12 - iVar20) < (int)(uVar10 * iVar4)) {
          return 0xfffffffc;
        }
        if ((1 < uVar10) && (*(ushort *)param_6 = uVar5, (int)uVar18 != 1)) {
          lVar7 = uVar18 - 1;
          puVar6 = (ushort *)((long)param_6 + 2);
          do {
            lVar7 = lVar7 + -1;
            *puVar6 = *(ushort *)((long)param_6 + uVar18 * 2);
            puVar6 = puVar6 + 1;
          } while (lVar7 != 0);
        }
      }
      else if ((int)uVar13 < iVar20 + iVar4) {
        return 0xfffffffc;
      }
      goto LAB_00e7ccd0;
    }
  }
  else {
    if (uVar11 == 2) {
      if (uVar12 == 0) {
LAB_00e7cc44:
        *(ushort *)param_6 = 0xffff;
        return 0xfffffffc;
      }
      bVar2 = *pbVar9;
      if (bVar2 < 0xfc) {
        lVar7 = 1;
        uVar12 = param_2 - 2;
        *(ushort *)param_6 = (ushort)bVar2;
        uVar13 = uVar12 - bVar2;
        if ((int)uVar12 < (int)(uint)bVar2) {
          return 0xfffffffc;
        }
      }
      else {
        if (uVar12 < 2) goto LAB_00e7cc44;
        iVar20 = (uint)bVar2 + (uint)param_1[2] * 4;
        lVar7 = 2;
        uVar12 = param_2 - 3;
        *(ushort *)param_6 = (ushort)iVar20;
        uVar13 = uVar12 - iVar20;
        if ((int)uVar12 < iVar20) {
          return 0xfffffffc;
        }
      }
      bVar3 = false;
      uVar11 = 0;
      pbVar9 = pbVar9 + lVar7;
      uVar18 = 2;
      goto LAB_00e7cb48;
    }
    if (uVar11 != 1) {
      uVar12 = param_2 - 2;
      if (param_2 < 2) {
        return 0xfffffffc;
      }
      bVar2 = param_1[1];
      uVar10 = bVar2 & 0x3f;
      uVar18 = (ulong)uVar10;
      if ((bVar2 & 0x3f) == 0) {
        return 0xfffffffc;
      }
      if (0x1680 < uVar10 * uVar17) {
        return 0xfffffffc;
      }
      pbVar9 = param_1 + 2;
      if ((bVar2 >> 6 & 1) == 0) {
        uVar11 = 0;
      }
      else {
        iVar20 = -0xfe;
        pbVar8 = pbVar9;
        do {
          if ((int)uVar12 < 1) {
            return 0xfffffffc;
          }
          pbVar9 = pbVar8 + 1;
          iVar20 = iVar20 + 0xfe;
          uVar17 = (uint)*pbVar8;
          uVar11 = 0xfe;
          if (uVar17 != 0xff) {
            uVar11 = uVar17;
          }
          uVar12 = uVar12 + ~uVar11;
          pbVar8 = pbVar9;
        } while (uVar17 == 0xff);
        if ((int)uVar12 < 0) {
          return 0xfffffffc;
        }
        uVar11 = uVar11 + iVar20;
      }
      if ((char)bVar2 < '\0') {
        uVar13 = uVar12;
        if (uVar10 < 2) {
          bVar3 = false;
        }
        else {
          uVar14 = (ulong)(uVar10 - 1);
          puVar15 = param_6;
          do {
            if ((int)uVar12 < 1) {
LAB_00e7ce6c:
              *(ushort *)puVar15 = 0xffff;
              return 0xfffffffc;
            }
            bVar2 = *pbVar9;
            uVar17 = (uint)bVar2;
            if (bVar2 < 0xfc) {
              uVar10 = 1;
            }
            else {
              if (uVar12 < 2) goto LAB_00e7ce6c;
              uVar17 = (uint)bVar2 + (uint)pbVar9[1] * 4;
              uVar10 = 2;
            }
            uVar12 = uVar12 - uVar10;
            *(ushort *)puVar15 = (ushort)uVar17;
            if ((int)uVar12 < (int)uVar17) {
              return 0xfffffffc;
            }
            pbVar9 = pbVar9 + uVar10;
            uVar13 = uVar13 - (uVar10 + uVar17);
            puVar15 = (undefined8 *)((long)puVar15 + 2);
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
          if ((int)uVar13 < 0) {
            return 0xfffffffc;
          }
          bVar3 = false;
        }
        goto LAB_00e7cb48;
      }
      if (param_3 != 0) {
        puVar6 = (ushort *)((long)param_6 + (ulong)uVar10 * 2);
        goto joined_r0x00e7cdac;
      }
      uVar13 = 0;
      if ((bVar2 & 0x3f) != 0) {
        uVar13 = (int)uVar12 / (int)uVar10;
      }
      if (uVar13 * uVar10 != uVar12) {
        return 0xfffffffc;
      }
      if (uVar10 < 2) goto LAB_00e7cc28;
      uVar14 = (ulong)(uVar10 - 1);
      uVar5 = (ushort)uVar13;
      if (uVar10 - 1 < 8) {
        uVar16 = 0;
LAB_00e7cea8:
        lVar7 = uVar14 - uVar16;
        puVar6 = (ushort *)((long)param_6 + uVar16 * 2);
        do {
          lVar7 = lVar7 + -1;
          *puVar6 = uVar5;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      else {
        uVar16 = uVar14 & 0xfffffff8;
        uVar19 = uVar16;
        puVar15 = param_6;
        do {
          uVar19 = uVar19 - 8;
          puVar15[1] = CONCAT26(uVar5,CONCAT24(uVar5,CONCAT22(uVar5,uVar5)));
          *puVar15 = CONCAT26(uVar5,CONCAT24(uVar5,CONCAT22(uVar5,uVar5)));
          puVar15 = puVar15 + 2;
        } while (uVar19 != 0);
        if (uVar16 != uVar14) goto LAB_00e7cea8;
      }
      bVar3 = true;
      goto LAB_00e7cb48;
    }
    if (param_3 != 0) {
      uVar11 = 0;
      uVar10 = 2;
      puVar6 = (ushort *)((long)param_6 + 4);
joined_r0x00e7cdac:
      bVar3 = true;
      if (0 < (int)uVar12) goto LAB_00e7cb64;
      goto LAB_00e7cbf4;
    }
    if ((uVar12 & 1) != 0) {
      return 0xfffffffc;
    }
    uVar11 = 0;
    uVar13 = uVar12 >> 1;
    uVar10 = 2;
    *(ushort *)param_6 = (ushort)uVar13;
  }
LAB_00e7cc28:
  if (0x4fb < (int)uVar13) {
    return 0xfffffffc;
  }
  *(ushort *)((long)param_6 + (ulong)(uVar10 - 1) * 2) = (ushort)uVar13;
LAB_00e7ccd0:
  if (param_7 != (int *)0x0) {
    *param_7 = (int)pbVar9 - (int)param_1;
  }
  if (uVar10 != 0) {
    uVar18 = (ulong)uVar10;
    if (param_5 == (byte **)0x0) {
      do {
        uVar18 = uVar18 - 1;
        pbVar9 = pbVar9 + (short)*(ushort *)param_6;
        param_6 = (undefined8 *)((long)param_6 + 2);
      } while (uVar18 != 0);
    }
    else {
      do {
        uVar5 = *(ushort *)param_6;
        *param_5 = pbVar9;
        uVar18 = uVar18 - 1;
        pbVar9 = pbVar9 + (short)uVar5;
        param_5 = param_5 + 1;
        param_6 = (undefined8 *)((long)param_6 + 2);
      } while (uVar18 != 0);
    }
  }
  if (param_8 != (int *)0x0) {
    *param_8 = uVar11 + ((int)pbVar9 - (int)param_1);
  }
  if (param_4 != (byte *)0x0) {
    *param_4 = bVar1;
  }
  return uVar10;
}


