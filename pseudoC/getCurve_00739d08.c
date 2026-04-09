// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCurve
// Entry Point: 00739d08
// Size: 2344 bytes
// Signature: undefined __cdecl getCurve(Vector2 * param_1, bool * param_2, FixedPoint16 * param_3, ushort * param_4, NodeId param_5)


/* VehicleNavigationAgent::getCurve(Vector2*, bool&, FixedPoint16&, unsigned short&, NodeId) const
    */

ulong VehicleNavigationAgent::getCurve
                (Vector2 *param_1,bool *param_2,FixedPoint16 *param_3,ushort *param_4,NodeId param_5
                )

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  ulong in_x5;
  short sVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ushort uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  void *__src;
  ulong uVar23;
  uint uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float in_s1;
  float fVar28;
  
  uVar6 = *(ushort *)(param_1 + 0x30);
  if (uVar6 <= (ushort)in_x5) {
    return 0;
  }
  if (uVar6 <= (ushort)(in_x5 >> 0x10)) {
    return 0;
  }
  uVar7 = in_x5 & 0xffffffffffff;
  uVar23 = in_x5 >> 0x20 & 0xffff;
  uVar11 = (uint)in_x5;
  if (((uVar11 - *(ushort *)(param_1 + 0x32) & 0xffff) < 0xe) &&
     (uVar17 = (int)(uVar7 >> 0x10) - (uint)*(ushort *)(param_1 + 0x34), (uVar17 & 0xffff) < 0xe)) {
    uVar12 = (ulong)uVar17 & 0xffff;
    uVar6 = (ushort)(uVar11 - *(ushort *)(param_1 + 0x32));
    sVar8 = *(short *)(param_1 + uVar23 * 2 + (ulong)uVar6 * 0x10 + uVar12 * 0xe0 + 0x36);
    uVar24 = (uint)(byte)param_1[uVar23 + (ulong)uVar6 * 8 + uVar12 * 0x70 + 0xc76];
  }
  else {
    lVar20 = *(long *)(param_1 + 0x28);
    lVar19 = (uVar7 >> 0x10 & 0xffff) * (ulong)uVar6 + (in_x5 & 0xffff);
    sVar8 = *(short *)(lVar20 + lVar19 * 6);
    if (sVar8 == -1) {
      return 0;
    }
    bVar4 = *(byte *)(lVar20 + lVar19 * 6 + 4);
    uVar24 = (uint)bVar4;
    uVar17 = (uint)(uVar7 >> 0x20);
    if (uVar17 != bVar4 >> 5) {
      sVar8 = *(short *)(lVar20 + lVar19 * 6 + 2);
      if (sVar8 == -1) {
        return 0;
      }
      bVar4 = *(byte *)(lVar20 + lVar19 * 6 + 5);
      uVar24 = (uint)bVar4;
      if (uVar17 != bVar4 >> 5) {
        return 0;
      }
    }
  }
  if ((uVar24 >> 4 & 1) != 0) {
    return 0;
  }
  uVar17 = uVar24 >> 1 & 7;
  *param_3 = (FixedPoint16)((byte)uVar24 & 1);
  *(ushort *)(ulong)param_5 = 0xffff;
  iVar9 = (int)(in_x5 >> 0x10);
  if (uVar17 == 4) {
    uVar11 = (uVar11 - *(ushort *)(param_1 + 0x1376)) + 4;
    if (((uVar11 & 0xffff) < 10) &&
       (uVar17 = (iVar9 - (uint)*(ushort *)(param_1 + 0x1378)) + 4, (uVar17 & 0xffff) < 10)) {
      lVar19 = (((ulong)uVar17 & 0xffff) * 10 + (ulong)(ushort)uVar11) * 8 +
               (in_x5 >> 0x20 & 0xffff);
      if (*(short *)(*(long *)(param_1 + 0x1298) + lVar19 * 0x30 + 0x28) == sVar8) {
        __src = (void *)(*(long *)(param_1 + 0x1298) + lVar19 * 0x30);
        memcpy(param_2,__src,(ulong)*(ushort *)((long)__src + 0x2c) << 3);
        *param_4 = *(ushort *)((long)__src + 0x2a);
        return (ulong)*(ushort *)((long)__src + 0x2c);
      }
    }
    uVar6 = VehicleNavigationGridAdapter::retrieveTeleportAtSource
                      (*(VehicleNavigationGridAdapter **)(param_1 + 0x12a0),(NodeId)uVar7);
    if (uVar6 == 0xffff) {
      return 0;
    }
    lVar19 = *(long *)(*(long *)(param_1 + 0x12a0) + 0x68) + (ulong)uVar6 * 0xe;
    uVar14 = *(ushort *)(param_1 + 0x30);
    uVar11 = *(uint *)(lVar19 + 8);
    if ((uint)uVar14 <= (uVar11 & 0xffff)) {
      return 0;
    }
    uVar5 = *(ushort *)(lVar19 + 0xc);
    if (uVar11 >> 0x10 < (uint)uVar14) {
      if (((uVar11 - *(ushort *)(param_1 + 0x32) & 0xffff) < 0xe) &&
         (uVar17 = (int)(CONCAT24(uVar5,uVar11) >> 0x10) - (uint)*(ushort *)(param_1 + 0x34),
         (uVar17 & 0xffff) < 0xe)) {
        uVar7 = (ulong)uVar17 & 0xffff;
        uVar1 = (ushort)(uVar11 - *(ushort *)(param_1 + 0x32));
        uVar14 = *(ushort *)(param_1 + (ulong)uVar5 * 2 + (ulong)uVar1 * 0x10 + uVar7 * 0xe0 + 0x36)
        ;
        uVar11 = (uint)(byte)param_1[(ulong)uVar5 + (ulong)uVar1 * 8 + uVar7 * 0x70 + 0xc76];
      }
      else {
        lVar20 = *(long *)(param_1 + 0x28);
        lVar19 = ((ulong)(CONCAT24(uVar5,uVar11) >> 0x10) & 0xffff) * (ulong)uVar14 +
                 ((ulong)uVar11 & 0xffff);
        uVar14 = *(ushort *)(lVar20 + lVar19 * 6);
        if (uVar14 == 0xffff) {
          return 0;
        }
        bVar4 = *(byte *)(lVar20 + lVar19 * 6 + 4);
        uVar11 = (uint)bVar4;
        if (uVar5 != bVar4 >> 5) {
          uVar14 = *(ushort *)(lVar20 + lVar19 * 6 + 2);
          if (uVar14 == 0xffff) {
            return 0;
          }
          bVar4 = *(byte *)(lVar20 + lVar19 * 6 + 5);
          uVar11 = (uint)bVar4;
          if (uVar5 != bVar4 >> 5) {
            return 0;
          }
        }
      }
      if ((uVar11 >> 4 & 1) != 0) {
        return 0;
      }
      *param_4 = uVar14;
      *(ushort *)(ulong)param_5 = uVar6;
      return 0xffffffff;
    }
    return 0;
  }
  uVar25 = VehicleNavigationGridAdapter::getNodePos
                     (*(VehicleNavigationGridAdapter **)(param_1 + 0x12a0),uVar11);
  *(undefined4 *)param_2 = uVar25;
  *(float *)(param_2 + 4) = in_s1;
  uVar7 = (ulong)(byte)*param_3 << 3 ^ uVar23 << 1;
  uVar6 = *(ushort *)(&DAT_004c3130 + uVar7);
  uVar14 = *(ushort *)(&DAT_004c3df0 + uVar7);
  uVar18 = (uint)uVar6 + iVar9;
  uVar15 = uVar14 + uVar11;
  uVar22 = uVar18 & 0xffff;
  uVar25 = VehicleNavigationGridAdapter::getNodePos
                     (*(VehicleNavigationGridAdapter **)(param_1 + 0x12a0),
                      uVar22 << 0x10 | (uint)((ulong)uVar15 & 0xffff));
  *(undefined4 *)(param_2 + 8) = uVar25;
  *(float *)(param_2 + 0xc) = in_s1;
  if (uVar17 == 0) {
    uVar6 = *(ushort *)(param_1 + 0x30);
    if ((uint)uVar6 <= (uVar15 & 0xffff)) {
      return 0;
    }
    if (uVar6 <= (ushort)uVar18) {
      return 0;
    }
    uVar7 = (in_x5 & 0xffff00000000) >> 0x20;
    if (((uVar15 - *(ushort *)(param_1 + 0x32) & 0xffff) < 0xe) &&
       ((uVar22 - *(ushort *)(param_1 + 0x34) & 0xffff) < 0xe)) {
      uVar23 = (ulong)(uVar22 - *(ushort *)(param_1 + 0x34)) & 0xffff;
      uVar14 = (ushort)(uVar15 - *(ushort *)(param_1 + 0x32));
      uVar6 = *(ushort *)(param_1 + uVar7 * 2 + (ulong)uVar14 * 0x10 + uVar23 * 0xe0 + 0x36);
      uVar17 = (uint)(byte)param_1[uVar7 + (ulong)uVar14 * 8 + uVar23 * 0x70 + 0xc76];
    }
    else {
      lVar20 = *(long *)(param_1 + 0x28);
      lVar19 = (ulong)uVar22 * (ulong)uVar6 + ((ulong)uVar15 & 0xffff);
      uVar6 = *(ushort *)(lVar20 + lVar19 * 6);
      if (uVar6 == 0xffff) {
        return 0;
      }
      bVar4 = *(byte *)(lVar20 + lVar19 * 6 + 4);
      uVar17 = (uint)bVar4;
      uVar11 = (uint)((in_x5 & 0xffff00000000) >> 0x20);
      if (uVar11 != bVar4 >> 5) {
        uVar6 = *(ushort *)(lVar20 + lVar19 * 6 + 2);
        if (uVar6 == 0xffff) {
          return 0;
        }
        bVar4 = *(byte *)(lVar20 + lVar19 * 6 + 5);
        uVar17 = (uint)bVar4;
        if (uVar11 != bVar4 >> 5) {
          return 0;
        }
      }
    }
    if ((uVar17 >> 4 & 1) != 0) {
      return 0;
    }
    *param_4 = uVar6;
    return 2;
  }
  iVar9 = 7;
  if ((uVar24 & 8) == 0) {
    iVar9 = 1;
  }
  uVar22 = (uint)(in_x5 >> 0x20);
  uVar17 = iVar9 + uVar22 & 7;
  uVar7 = (ulong)uVar17;
  uVar24 = uVar24 >> 1 & 3;
  lVar19 = (ulong)(uVar17 ^ ((byte)*param_3 & 0x3f) << 2) * 2;
  if (uVar24 == 3) {
    uVar14 = *(ushort *)(&DAT_004c3130 + lVar19);
    uVar23 = (ulong)(uVar14 + uVar18) & 0xffff;
    uVar15 = *(ushort *)(&DAT_004c3df0 + lVar19) + uVar15;
    uVar25 = VehicleNavigationGridAdapter::getNodePos
                       (*(VehicleNavigationGridAdapter **)(param_1 + 0x12a0),
                        (uint)(uVar23 << 0x10) | uVar15 & 0xffff);
    *(undefined4 *)(param_2 + 0x10) = uVar25;
    *(float *)(param_2 + 0x14) = in_s1;
    uVar6 = *(ushort *)(param_1 + 0x30);
    if ((uint)uVar6 <= (uVar15 & 0xffff)) {
      return 0;
    }
    if ((uint)uVar6 <= (uVar14 + uVar18 & 0xffff)) {
      return 0;
    }
    uVar11 = (int)((ulong)uVar15 & 0xffff) - (uint)*(ushort *)(param_1 + 0x32);
    if (((uVar11 & 0xffff) < 0xe) &&
       (uVar24 = (int)uVar23 - (uint)*(ushort *)(param_1 + 0x34), (uVar24 & 0xffff) < 0xe)) {
      uVar23 = (ulong)uVar24 & 0xffff;
      uVar14 = (ushort)uVar11;
      uVar6 = *(ushort *)(param_1 + uVar7 * 2 + (ulong)uVar14 * 0x10 + uVar23 * 0xe0 + 0x36);
      uVar11 = (uint)(byte)param_1[uVar7 + (ulong)uVar14 * 8 + uVar23 * 0x70 + 0xc76];
    }
    else {
      lVar19 = ((ulong)uVar15 & 0xffff) + uVar23 * uVar6;
      lVar20 = *(long *)(param_1 + 0x28);
      uVar6 = *(ushort *)(lVar20 + lVar19 * 6);
      if (uVar6 == 0xffff) {
        return 0;
      }
      bVar4 = *(byte *)(lVar20 + lVar19 * 6 + 4);
      uVar11 = (uint)bVar4;
      if (uVar17 != bVar4 >> 5) {
        uVar6 = *(ushort *)(lVar20 + lVar19 * 6 + 2);
        if (uVar6 == 0xffff) {
          return 0;
        }
        bVar4 = *(byte *)(lVar20 + lVar19 * 6 + 5);
        uVar11 = (uint)bVar4;
        if (uVar17 != bVar4 >> 5) {
          return 0;
        }
      }
    }
    if ((uVar11 >> 4 & 1) != 0) {
      return 0;
    }
    *param_4 = uVar6;
    return 3;
  }
  uVar5 = *(ushort *)(&DAT_004c3df0 + lVar19);
  uVar2 = (uint)uVar6 * 2 + (uVar11 >> 0x10);
  uVar1 = *(ushort *)(&DAT_004c3130 + lVar19);
  uVar3 = uVar2 & 0xffff;
  uVar11 = uVar11 + (uint)uVar14 * 2;
  uVar22 = uVar22 & 0xffff;
  fVar26 = (float)VehicleNavigationGridAdapter::getNodePos
                            (*(VehicleNavigationGridAdapter **)(param_1 + 0x12a0),
                             uVar3 << 0x10 | (uint)((ulong)uVar11 & 0xffff));
  uVar23 = (ulong)(uVar1 + uVar18) & 0xffff;
  uVar12 = (ulong)(uVar5 + uVar15) & 0xffff;
  fVar28 = in_s1;
  fVar27 = (float)VehicleNavigationGridAdapter::getNodePos
                            (*(VehicleNavigationGridAdapter **)(param_1 + 0x12a0),
                             (uint)(uVar23 << 0x10) | uVar5 + uVar15 & 0xffff);
  uVar6 = *(ushort *)(param_1 + 0x30);
  uVar15 = 0x10;
  uVar10 = 0xffff;
  *(float *)(param_2 + 0x10) = fVar26 + ((float)(ulong)uVar24 / 3.0) * (fVar27 - fVar26);
  *(float *)(param_2 + 0x14) = in_s1 + ((float)(ulong)uVar24 / 3.0) * (fVar28 - in_s1);
  uVar13 = (uint)uVar6;
  if (((uint)uVar6 <= (uVar11 & 0xffff)) || (uVar13 <= (uVar2 & 0xffff))) goto LAB_0073a4e0;
  if (((uVar11 - *(ushort *)(param_1 + 0x32) & 0xffff) < 0xe) &&
     ((uVar3 - *(ushort *)(param_1 + 0x34) & 0xffff) < 0xe)) {
    uVar16 = (ulong)(uVar3 - *(ushort *)(param_1 + 0x34)) & 0xffff;
    uVar21 = in_x5 >> 0x20 & 0xffff;
    uVar14 = (ushort)(uVar11 - *(ushort *)(param_1 + 0x32));
    uVar10 = (uint)*(ushort *)(param_1 + uVar21 * 2 + (ulong)uVar14 * 0x10 + uVar16 * 0xe0 + 0x36);
    uVar15 = (byte)param_1[uVar21 + (ulong)uVar14 * 8 + uVar16 * 0x70 + 0xc76] & 0x1f;
    goto LAB_0073a4e0;
  }
  lVar20 = *(long *)(param_1 + 0x28);
  lVar19 = (ulong)uVar3 * (ulong)uVar6 + ((ulong)uVar11 & 0xffff);
  uVar14 = *(ushort *)(lVar20 + lVar19 * 6);
  if (uVar14 == 0xffff) {
LAB_0073a4dc:
    uVar10 = 0xffff;
    uVar15 = 0x10;
  }
  else {
    bVar4 = *(byte *)(lVar20 + lVar19 * 6 + 4);
    if (uVar22 != bVar4 >> 5) {
      uVar14 = *(ushort *)(lVar20 + lVar19 * 6 + 2);
      if (uVar14 == 0xffff) goto LAB_0073a4dc;
      bVar4 = *(byte *)(lVar20 + lVar19 * 6 + 5);
      if (uVar22 != bVar4 >> 5) {
        uVar15 = 0x10;
        uVar10 = 0xffff;
        goto LAB_0073a4e0;
      }
    }
    uVar10 = (uint)uVar14;
    uVar15 = bVar4 & 0x1f;
  }
LAB_0073a4e0:
  uVar11 = (uint)uVar12;
  if (uVar13 <= uVar11) {
    return 0;
  }
  if (uVar13 <= (uVar1 + uVar18 & 0xffff)) {
    return 0;
  }
  uVar11 = uVar11 - *(ushort *)(param_1 + 0x32);
  if (((uVar11 & 0xffff) < 0xe) &&
     (uVar18 = (int)uVar23 - (uint)*(ushort *)(param_1 + 0x34), (uVar18 & 0xffff) < 0xe)) {
    uVar23 = (ulong)uVar18 & 0xffff;
    uVar6 = (ushort)uVar11;
    uVar11 = (uint)*(ushort *)(param_1 + uVar7 * 2 + (ulong)uVar6 * 0x10 + uVar23 * 0xe0 + 0x36);
    uVar18 = (uint)(byte)param_1[uVar7 + (ulong)uVar6 * 8 + uVar23 * 0x70 + 0xc76];
  }
  else {
    lVar20 = *(long *)(param_1 + 0x28);
    lVar19 = uVar12 + uVar23 * uVar6;
    uVar11 = (uint)*(ushort *)(lVar20 + lVar19 * 6);
    if ((uVar11 == 0xffff) ||
       ((bVar4 = *(byte *)(lVar20 + lVar19 * 6 + 4), uVar18 = (uint)bVar4, uVar17 != bVar4 >> 5 &&
        ((uVar11 = (uint)*(ushort *)(lVar20 + lVar19 * 6 + 2), uVar11 == 0xffff ||
         (bVar4 = *(byte *)(lVar20 + lVar19 * 6 + 5), uVar18 = (uint)bVar4, uVar17 != bVar4 >> 5))))
       )) {
      return 0;
    }
  }
  if (uVar15 >> 4 != 0) {
    return 0;
  }
  if ((uVar18 >> 4 & 1) == 0) {
    lVar19 = (long)(int)((uVar11 - uVar10) * uVar24) * 0x55555556;
    *param_4 = (short)uVar10 + ((short)((ulong)lVar19 >> 0x20) - (short)(lVar19 >> 0x3f));
    return 3;
  }
  return 0;
}


