// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_control_encoder
// Entry Point: 00e85318
// Size: 1548 bytes
// Signature: undefined silk_control_encoder(void)


ulong silk_control_encoder
                (long param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,uint param_5
                )

{
  short sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  undefined3 *puVar16;
  int iVar17;
  undefined8 uVar18;
  
  uVar12 = *(undefined4 *)((long)param_2 + 0x34);
  iVar9 = *(int *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x17d0) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 0x1244) = uVar12;
  *(int *)(param_1 + 0x11cc) = iVar9;
  *(undefined8 *)(param_1 + 0x11d4) = *(undefined8 *)((long)param_2 + 0xc);
  uVar12 = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)(param_1 + 0x11dc) = *(undefined4 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x17dc) = uVar12;
  uVar18 = *param_2;
  *(undefined4 *)(param_1 + 0x11b8) = param_3;
  *(undefined4 *)(param_1 + 0x1690) = param_4;
  *(undefined8 *)(param_1 + 0x1688) = uVar18;
  if ((*(int *)(param_1 + 0x123c) != 0) && (*(int *)(param_1 + 0x1248) == 0)) {
    if ((iVar9 != *(int *)(param_1 + 0x11d0)) && (0 < *(int *)(param_1 + 0x11e0))) {
      uVar10 = FUN_00e85924(param_1);
      return uVar10;
    }
    return 0;
  }
  uVar8 = silk_control_audio_bandwidth(param_1,param_2);
  if (param_5 != 0) {
    uVar8 = param_5;
  }
  iVar9 = FUN_00e85924(param_1,uVar8);
  uVar4 = *(uint *)(param_2 + 3);
  sVar1 = (short)uVar8;
  if (*(uint *)(param_1 + 0x1204) == uVar4) {
    uVar5 = *(uint *)(param_1 + 0x11e0);
    iVar17 = 0;
joined_r0x00e853d0:
    if (uVar5 != uVar8) goto LAB_00e85624;
LAB_00e853d4:
    uVar4 = *(uint *)((long)param_2 + 0x24);
  }
  else {
    if ((uVar4 < 0x3d) && ((1L << ((ulong)uVar4 & 0x3f) & 0x1000010000100400U) != 0)) {
      iVar17 = 0;
    }
    else {
      iVar17 = -0x67;
    }
    if (10 < (int)uVar4) {
      uVar5 = *(uint *)(param_1 + 0x11e0);
      *(undefined4 *)(param_1 + 0x11e4) = 4;
      *(int *)(param_1 + 0x11e8) = ((int)sVar1 + sVar1 * 4) * 4;
      *(uint *)(param_1 + 0x1680) = uVar4 / 0x14;
      *(int *)(param_1 + 0x11c4) = ((int)sVar1 + sVar1 * 2) * 8;
      if (uVar5 != 8) {
        *(undefined1 **)(param_1 + 0x1258) = silk_pitch_contour_iCDF;
        *(uint *)(param_1 + 0x1204) = uVar4;
        *(undefined4 *)(param_1 + 0x1200) = 0;
        goto joined_r0x00e853d0;
      }
      *(undefined1 **)(param_1 + 0x1258) = silk_pitch_contour_NB_iCDF;
      *(uint *)(param_1 + 0x1204) = uVar4;
      *(undefined4 *)(param_1 + 0x1200) = 0;
      if (uVar8 != 8) goto LAB_00e85624;
      goto LAB_00e853d4;
    }
    uVar5 = *(uint *)(param_1 + 0x11e0);
    uVar12 = 1;
    if (uVar4 == 10) {
      uVar12 = 2;
    }
    *(undefined4 *)(param_1 + 0x1680) = 1;
    *(undefined4 *)(param_1 + 0x11e4) = uVar12;
    *(int *)(param_1 + 0x11e8) = (int)(short)uVar4 * (int)sVar1;
    *(int *)(param_1 + 0x11c4) = sVar1 * 0xe;
    if (uVar5 != 8) {
      *(undefined1 **)(param_1 + 0x1258) = silk_pitch_contour_10_ms_iCDF;
      *(uint *)(param_1 + 0x1204) = uVar4;
      *(undefined4 *)(param_1 + 0x1200) = 0;
      goto joined_r0x00e853d0;
    }
    *(undefined3 **)(param_1 + 0x1258) = &silk_pitch_contour_10_ms_NB_iCDF;
    *(uint *)(param_1 + 0x1204) = uVar4;
    *(undefined4 *)(param_1 + 0x1200) = 0;
    if (uVar8 == 8) goto LAB_00e853d4;
LAB_00e85624:
    *(undefined8 *)(param_1 + 0x1c20) = 0;
    *(undefined8 *)(param_1 + 0x1c18) = 0;
    memset((void *)(param_1 + 0x94),0,0x1100);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x167c) = 0;
    *(undefined8 *)(param_1 + 0x119c) = 0;
    *(undefined8 *)(param_1 + 0x1194) = 0;
    *(undefined8 *)(param_1 + 0x11ac) = 0;
    *(undefined8 *)(param_1 + 0x11a4) = 0;
    *(undefined4 *)(param_1 + 0x1684) = 0;
    *(undefined4 *)(param_1 + 0x11c0) = 100;
    *(undefined4 *)(param_1 + 0x1238) = 1;
    *(undefined4 *)(param_1 + 0x117c) = 100;
    *(undefined4 *)(param_1 + 0x1200) = 0;
    *(undefined4 *)(param_1 + 0x118c) = 0x10000;
    iVar15 = *(int *)(param_1 + 0x11e4);
    uVar12 = 10;
    *(undefined *)(param_1 + 0x1c18) = 10;
    *(undefined *)(param_1 + 0x11bd) = 0;
    *(uint *)(param_1 + 0x11e0) = uVar8;
    if (uVar8 == 8) {
      puVar16 = (undefined3 *)silk_pitch_contour_NB_iCDF;
      if (iVar15 != 4) {
        puVar16 = &silk_pitch_contour_10_ms_NB_iCDF;
      }
      uVar12 = 10;
      puVar13 = silk_NLSF_CB_NB_MB;
    }
    else {
      puVar16 = (undefined3 *)silk_pitch_contour_iCDF;
      if (iVar15 != 4) {
        puVar16 = (undefined3 *)silk_pitch_contour_10_ms_iCDF;
      }
      puVar13 = silk_NLSF_CB_NB_MB;
      if (uVar8 != 0xc) {
        uVar12 = 0x10;
        puVar13 = silk_NLSF_CB_WB;
      }
    }
    *(undefined3 **)(param_1 + 0x1258) = puVar16;
    *(undefined4 *)(param_1 + 0x1220) = uVar12;
    *(undefined1 **)(param_1 + 0x1260) = puVar13;
    iVar14 = (int)sVar1;
    iVar11 = 0x18;
    if (iVar15 != 4) {
      iVar11 = 0xe;
    }
    *(uint *)(param_1 + 0x11ec) = uVar8 * 5;
    *(int *)(param_1 + 0x11e8) = (int)(short)iVar15 * (int)(short)(uVar8 * 5);
    *(int *)(param_1 + 0x11f0) = (iVar14 + sVar1 * 4) * 4;
    *(uint *)(param_1 + 0x11f4) = -(uVar8 >> 0xf & 1) & 0xfffe0000 | (uVar8 & 0xffff) << 1;
    puVar2 = (undefined8 *)&silk_uniform6_iCDF;
    if (uVar8 != 0xc) {
      puVar2 = (undefined8 *)&silk_uniform4_iCDF;
    }
    puVar3 = &silk_uniform8_iCDF;
    if (uVar8 != 0x10) {
      puVar3 = puVar2;
    }
    *(ulong *)(param_1 + 0x11c4) = CONCAT44(iVar14 * 0x12,iVar11 * iVar14);
    *(undefined8 **)(param_1 + 0x1250) = puVar3;
    uVar4 = *(uint *)((long)param_2 + 0x24);
  }
  if ((int)uVar4 < 1) {
    iVar14 = uVar8 * 3;
    iVar11 = 0;
    *(undefined4 *)(param_1 + 0x1224) = 0;
    *(undefined4 *)(param_1 + 0x122c) = 0xcccd;
    iVar15 = 6;
    *(undefined4 *)(param_1 + 0x121c) = 0xc;
    *(int *)(param_1 + 0x11f8) = iVar14;
    *(undefined8 *)(param_1 + 0x1214) = 1;
    *(undefined4 *)(param_1 + 0x1234) = 2;
  }
  else {
    if (uVar4 == 1) {
      iVar11 = 0;
      *(undefined4 *)(param_1 + 0x1224) = 1;
      iVar14 = uVar8 * 5;
      *(undefined4 *)(param_1 + 0x122c) = 0xc28f;
      *(undefined4 *)(param_1 + 0x121c) = 0xe;
      iVar15 = 8;
      *(undefined4 *)(param_1 + 0x1234) = 3;
      *(undefined8 *)(param_1 + 0x1214) = 1;
    }
    else {
      if (uVar4 < 3) {
        iVar11 = 0;
        uVar12 = 2;
        *(undefined4 *)(param_1 + 0x121c) = 0xc;
        *(undefined8 *)(param_1 + 0x1224) = 0x600000000;
        uVar18 = 2;
        *(undefined4 *)(param_1 + 0x122c) = 0xcccd;
        iVar14 = uVar8 * 3;
        iVar15 = 6;
      }
      else if (uVar4 == 3) {
        iVar11 = 0;
        uVar12 = 4;
        *(undefined4 *)(param_1 + 0x121c) = 0xe;
        *(undefined8 *)(param_1 + 0x1224) = 0x800000001;
        uVar18 = 2;
        *(undefined4 *)(param_1 + 0x122c) = 0xc28f;
        iVar14 = uVar8 * 5;
        iVar15 = 8;
      }
      else if (uVar4 < 6) {
        uVar12 = 6;
        *(undefined4 *)(param_1 + 0x122c) = 0xbd71;
        iVar14 = uVar8 * 5;
        *(undefined8 *)(param_1 + 0x1224) = 0xa00000001;
        uVar18 = 0x100000002;
        *(undefined4 *)(param_1 + 0x121c) = 0x10;
        iVar11 = uVar8 * 0x3d7;
        iVar15 = 10;
      }
      else {
        if (7 < uVar4) {
          *(undefined4 *)(param_1 + 0x122c) = 0xb333;
          iVar14 = uVar8 * 5;
          *(undefined4 *)(param_1 + 0x121c) = 0x18;
          iVar11 = uVar8 * 0x3d7;
          *(undefined8 *)(param_1 + 0x1224) = 0x1000000002;
          *(int *)(param_1 + 0x11f8) = iVar14;
          *(undefined8 *)(param_1 + 0x1214) = 0x100000004;
          iVar15 = 0x10;
          *(undefined4 *)(param_1 + 0x1234) = 0x10;
          goto LAB_00e8585c;
        }
        uVar12 = 8;
        *(undefined4 *)(param_1 + 0x122c) = 0xb852;
        iVar14 = uVar8 * 5;
        *(undefined8 *)(param_1 + 0x1224) = 0xc00000001;
        uVar18 = 0x100000003;
        *(undefined4 *)(param_1 + 0x121c) = 0x14;
        iVar11 = uVar8 * 0x3d7;
        iVar15 = 0xc;
      }
      *(undefined8 *)(param_1 + 0x1214) = uVar18;
      *(undefined4 *)(param_1 + 0x1234) = uVar12;
    }
    *(int *)(param_1 + 0x11f8) = iVar14;
  }
LAB_00e8585c:
  *(int *)(param_1 + 0x1240) = iVar11;
  iVar11 = *(int *)(param_2 + 4);
  *(uint *)(param_1 + 0x1210) = uVar4;
  if (*(int *)(param_1 + 0x1220) <= iVar15) {
    iVar15 = *(int *)(param_1 + 0x1220);
  }
  iVar6 = *(int *)((long)param_2 + 0x2c);
  iVar7 = *(int *)(param_1 + 0x17e0);
  *(int *)(param_1 + 0x1208) = iVar11;
  *(uint *)(param_1 + 0x11fc) = uVar8 * 5 + iVar14 * 2;
  *(int *)(param_1 + 0x1228) = iVar15;
  *(int *)(param_1 + 0x17e0) = iVar6;
  if (iVar6 != 0) {
    iVar15 = 7;
    if ((iVar7 != 0) && (iVar15 = 7 - (int)((ulong)((long)iVar11 * 0x6666) >> 0x10), iVar15 < 3)) {
      iVar15 = 2;
    }
    *(int *)(param_1 + 0x17e4) = iVar15;
  }
  *(undefined4 *)(param_1 + 0x123c) = 1;
  return (ulong)(uint)(iVar17 + iVar9);
}


