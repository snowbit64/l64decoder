// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_host_bandwidth_throttle
// Entry Point: 00d27b28
// Size: 1148 bytes
// Signature: undefined enet_host_bandwidth_throttle(void)


void enet_host_bandwidth_throttle(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  undefined2 local_88 [2];
  uint local_84;
  uint local_80;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar5 = enet_time_get();
  uVar14 = iVar5 - *(int *)(param_1 + 0x14);
  if (uVar14 < 1000) goto LAB_00d27f74;
  uVar13 = *(uint *)(param_1 + 11000);
  *(int *)(param_1 + 0x14) = iVar5;
  if (uVar13 == 0) goto LAB_00d27f74;
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar18 = 0xffffffff;
    uVar16 = 0xffffffff;
  }
  else {
    lVar21 = *(long *)(param_1 + 0x30);
    uVar16 = (ulong)(*(int *)(param_1 + 0x10) * uVar14) / 1000;
    if (lVar21 < 1) {
      uVar18 = 0;
    }
    else {
      uVar22 = *(ulong *)(param_1 + 0x28);
      uVar19 = uVar22 + lVar21 * 0x1d0;
      if (uVar19 <= uVar22 + 0x1d0) {
        uVar19 = uVar22 + 0x1d0;
      }
      lVar1 = (uVar19 - uVar22) + -0x1d0;
      uVar19 = (lVar1 - (ulong)(lVar1 != 0)) / 0x1d0;
      if (lVar1 != 0) {
        uVar19 = uVar19 + 1;
      }
      if (uVar19 == 0) {
        uVar18 = 0;
        uVar23 = uVar22;
      }
      else {
        uVar25 = uVar19 + 1 & 0x3fffffffffffffe;
        iVar17 = 0;
        iVar6 = 0;
        uVar23 = uVar22 + uVar25 * 0x1d0;
        uVar9 = uVar25;
        uVar10 = uVar22;
        do {
          while (uVar18 = *(int *)(uVar10 + 0x208) - 5, *(int *)(uVar10 + 0x38) - 5U < 2) {
            iVar11 = *(int *)(uVar10 + 100);
            iVar12 = iVar11;
            if (uVar18 < 2) goto LAB_00d27c10;
LAB_00d27c5c:
            iVar17 = iVar17 + iVar12;
            uVar10 = uVar10 + 0x3a0;
            uVar9 = uVar9 - 2;
            if (uVar9 == 0) goto LAB_00d27c74;
          }
          iVar11 = 0;
          iVar12 = 0;
          if (1 < uVar18) goto LAB_00d27c5c;
LAB_00d27c10:
          iVar17 = iVar17 + iVar11;
          iVar6 = iVar6 + *(int *)(uVar10 + 0x234);
          uVar10 = uVar10 + 0x3a0;
          uVar9 = uVar9 - 2;
        } while (uVar9 != 0);
LAB_00d27c74:
        uVar18 = iVar6 + iVar17;
        if (uVar19 + 1 == uVar25) goto LAB_00d27c94;
      }
      do {
        if (*(int *)(uVar23 + 0x38) - 5U < 2) {
          uVar18 = *(int *)(uVar23 + 100) + uVar18;
        }
        uVar23 = uVar23 + 0x1d0;
      } while (uVar23 < uVar22 + lVar21 * 0x1d0);
    }
  }
LAB_00d27c94:
  uVar15 = (uint)uVar16;
  if ((*(long *)(param_1 + 0x2b00) == 0) || (lVar21 = *(long *)(param_1 + 0x30), lVar21 < 1)) {
LAB_00d27d78:
    if (uVar15 < uVar18) {
      uVar14 = 0;
      if (uVar18 != 0) {
        uVar14 = (uVar15 << 5) / uVar18;
      }
      lVar21 = *(long *)(param_1 + 0x30);
    }
    else {
      uVar14 = 0x20;
      lVar21 = *(long *)(param_1 + 0x30);
    }
    if (0 < lVar21) {
      uVar16 = *(ulong *)(param_1 + 0x28);
      uVar19 = uVar16 + lVar21 * 0x1d0;
      do {
        if ((*(int *)(uVar16 + 0x38) - 5U < 2) && (*(int *)(uVar16 + 0x5c) != iVar5)) {
          *(uint *)(uVar16 + 0x90) = uVar14;
          if (uVar14 < *(uint *)(uVar16 + 0x8c)) {
            *(uint *)(uVar16 + 0x8c) = uVar14;
          }
          *(undefined8 *)(uVar16 + 0x60) = 0;
        }
        uVar16 = uVar16 + 0x1d0;
      } while (uVar16 < uVar19);
    }
  }
  else {
    uVar19 = *(ulong *)(param_1 + 0x28);
    uVar20 = uVar13;
    do {
      if ((uint)uVar16 < uVar18) {
        uVar24 = 0;
        if (uVar18 != 0) {
          uVar24 = ((uint)uVar16 << 5) / uVar18;
        }
      }
      else {
        uVar24 = 0x20;
      }
      bVar4 = false;
      uVar22 = uVar19;
      do {
        if (((*(int *)(uVar22 + 0x38) - 5U < 2) && (*(int *)(uVar22 + 0x50) != 0)) &&
           (*(int *)(uVar22 + 0x5c) != iVar5)) {
          uVar7 = *(int *)(uVar22 + 0x50) * uVar14;
          uVar15 = *(uint *)(uVar22 + 100);
          uVar8 = uVar7 / 1000;
          if (uVar8 < uVar15 * uVar24 >> 5) {
            uVar8 = uVar8 * 0x20;
            uVar2 = 0;
            if (uVar15 != 0) {
              uVar2 = uVar8 / uVar15;
            }
            if (uVar8 < uVar15) {
              uVar2 = 1;
            }
            *(uint *)(uVar22 + 0x90) = uVar2;
            if (uVar2 < *(uint *)(uVar22 + 0x8c)) {
              *(uint *)(uVar22 + 0x8c) = uVar2;
            }
            uVar20 = uVar20 - 1;
            uVar7 = uVar7 / 1000;
            uVar16 = (ulong)((int)uVar16 - uVar7);
            uVar18 = uVar18 - uVar7;
            bVar4 = true;
            *(undefined8 *)(uVar22 + 0x60) = 0;
            *(int *)(uVar22 + 0x5c) = iVar5;
          }
        }
        uVar15 = (uint)uVar16;
        uVar22 = uVar22 + 0x1d0;
      } while (uVar22 < uVar19 + lVar21 * 0x1d0);
    } while ((uVar20 != 0) && (bVar4));
    if (uVar20 != 0) goto LAB_00d27d78;
  }
  if (*(int *)(param_1 + 0x20) == 0) goto LAB_00d27f74;
  uVar14 = *(uint *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (uVar14 == 0) {
    uVar18 = 0;
LAB_00d27e94:
    lVar21 = *(long *)(param_1 + 0x30);
  }
  else {
    lVar21 = *(long *)(param_1 + 0x30);
    if (0 < lVar21) {
      uVar16 = *(ulong *)(param_1 + 0x28);
      do {
        uVar18 = 0;
        if (uVar13 != 0) {
          uVar18 = uVar14 / uVar13;
        }
        bVar4 = false;
        uVar19 = uVar16;
        do {
          if (((*(int *)(uVar19 + 0x38) - 5U < 2) && (*(int *)(uVar19 + 0x58) != iVar5)) &&
             ((uVar15 = *(uint *)(uVar19 + 0x54), uVar15 == 0 || (uVar15 < uVar18)))) {
            uVar13 = uVar13 - 1;
            uVar14 = uVar14 - uVar15;
            bVar4 = true;
            *(int *)(uVar19 + 0x58) = iVar5;
          }
          uVar19 = uVar19 + 0x1d0;
        } while (uVar19 < uVar16 + lVar21 * 0x1d0);
      } while ((uVar13 != 0) && (bVar4));
      goto LAB_00d27e94;
    }
    uVar18 = 0;
    if (uVar13 != 0) {
      uVar18 = uVar14 / uVar13;
    }
    lVar21 = *(long *)(param_1 + 0x30);
  }
  if (0 < lVar21) {
    uVar19 = *(ulong *)(param_1 + 0x28);
    uVar14 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    uVar16 = uVar19;
    do {
      if (*(int *)(uVar16 + 0x38) - 5U < 2) {
        local_88[0] = 0xff8a;
        uVar13 = (*(uint *)(param_1 + 0x10) & 0xff00ff00) >> 8 |
                 (*(uint *)(param_1 + 0x10) & 0xff00ff) << 8;
        local_80 = uVar13 >> 0x10 | uVar13 << 0x10;
        local_84 = uVar14 >> 0x10 | uVar14 << 0x10;
        if (*(int *)(uVar16 + 0x58) == iVar5) {
          uVar13 = (*(uint *)(uVar16 + 0x54) & 0xff00ff00) >> 8 |
                   (*(uint *)(uVar16 + 0x54) & 0xff00ff) << 8;
          local_84 = uVar13 >> 0x10 | uVar13 << 0x10;
        }
        enet_peer_queue_outgoing_command(uVar16,local_88,0,0,0);
        uVar19 = *(ulong *)(param_1 + 0x28);
        lVar21 = *(long *)(param_1 + 0x30);
      }
      uVar16 = uVar16 + 0x1d0;
    } while (uVar16 < uVar19 + lVar21 * 0x1d0);
  }
LAB_00d27f74:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


