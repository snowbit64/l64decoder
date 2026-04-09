// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d2982c
// Entry Point: 00d2982c
// Size: 1864 bytes
// Signature: undefined FUN_00d2982c(void)


void FUN_00d2982c(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 *__src;
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  long lVar7;
  int iVar8;
  undefined4 uVar9;
  long *plVar10;
  long **pplVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  undefined8 *puVar17;
  code *pcVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long **pplVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long *__ptr;
  long **pplVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined2 local_b4 [26];
  ushort local_80;
  ushort local_7e;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  lVar15 = *(long *)(param_1 + 0xc);
  param_1[0x16] = 1;
  if (lVar15 < 1) {
    uVar13 = 0;
    param_1[0x16] = 0;
  }
  else {
    __src = param_1 + 0x19e;
    uVar25 = *(ulong *)(param_1 + 10);
    puVar17 = (undefined8 *)((ulong)local_b4 | 2);
    do {
      param_1[0x16] = 0;
      uVar26 = uVar25;
      if (lVar15 < 1) break;
      do {
        if ((*(int *)(uVar26 + 0x38) != 0) && (*(int *)(uVar26 + 0x38) != 9)) {
          *(undefined2 *)(param_1 + 0x1a) = 0;
          *(undefined8 *)(param_1 + 0x19c) = 0;
          *(undefined8 *)(param_1 + 0x2a6) = 1;
          *(undefined8 *)(param_1 + 0x18) = 4;
          pplVar23 = (long **)(uVar26 + 0xe0);
          if ((long **)*pplVar23 != pplVar23) {
            lVar15 = 0;
            lVar3 = 0;
            pplVar11 = (long **)*pplVar23;
            do {
              lVar24 = lVar3;
              lVar3 = (long)param_1 + lVar15;
              uVar25 = (long)param_1 + lVar24 + 0x6a;
              if ((((long)param_1 + 0x66aU <= uVar25) ||
                  (param_1 + 0x2a6 <= (undefined4 *)(lVar3 + 0x698U))) ||
                 (lVar22 = *(long *)(param_1 + 0x18), (ulong)*(uint *)(uVar26 + 0xd0) - lVar22 < 8))
              {
                param_1[0x16] = 1;
                goto LAB_00d29a84;
              }
              pplVar27 = (long **)*pplVar11;
              *(long *)((long)param_1 + lVar15 + 0x688) = (long)param_1 + lVar24 + 0x6a;
              *(undefined8 *)((long)param_1 + lVar15 + 0x690) = 8;
              *(long *)(param_1 + 0x18) = lVar22 + 8;
              uVar6 = *(ushort *)((long)pplVar11 + 0x16);
              *(undefined *)((long)param_1 + lVar24 + 0x6a) = 1;
              uVar6 = uVar6 >> 8 | (ushort)((uVar6 & 0xff00ff) << 8);
              *(undefined *)((long)param_1 + lVar24 + 0x6b) = *(undefined *)((long)pplVar11 + 0x15);
              *(ushort *)((long)param_1 + lVar24 + 0x6c) = uVar6;
              *(ushort *)((long)param_1 + lVar24 + 0x6e) = uVar6;
              *(ushort *)((long)param_1 + lVar24 + 0x70) =
                   *(ushort *)(pplVar11 + 2) >> 8 |
                   (ushort)((*(ushort *)(pplVar11 + 2) & 0xff00ff) << 8);
              if ((*(byte *)((long)pplVar11 + 0x14) & 0xf) == 4) {
                enet_peer_on_disconnect(uVar26);
                *(undefined4 *)(uVar26 + 0x38) = 9;
                if ((*(ushort *)(uVar26 + 0x130) & 1) == 0) {
                  enet_list_insert(param_1 + 0x12,uVar26);
                  *(ushort *)(uVar26 + 0x130) = *(ushort *)(uVar26 + 0x130) | 1;
                }
              }
              enet_list_remove(pplVar11);
              enet_free(pplVar11);
              lVar15 = lVar15 + 0x10;
              lVar3 = lVar24 + 0x30;
              pplVar11 = pplVar27;
            } while (pplVar27 != pplVar23);
            lVar3 = (long)param_1 + lVar15;
            uVar25 = (long)param_1 + lVar24 + 0x9a;
LAB_00d29a84:
            *(long *)(param_1 + 0x2a6) = (lVar3 + 0x688) - (long)__src >> 4;
            *(long *)(param_1 + 0x19c) =
                 ((long)(uVar25 - ((long)param_1 + 0x6a)) >> 4) * -0x5555555555555555;
          }
          if (param_3 != 0) {
            pplVar23 = (long **)(uVar26 + 0xf0);
            if (((long **)*pplVar23 != pplVar23) &&
               (iVar8 = param_1[0x10], (uint)(iVar8 - *(int *)(uVar26 + 0x70)) < 86400000)) {
              uVar13 = *(undefined8 *)(uVar26 + 0x110);
              pplVar11 = (long **)*pplVar23;
              do {
                iVar4 = *(int *)((long)pplVar11 + 0x14);
                uVar21 = *(uint *)(pplVar11 + 3);
                pplVar27 = (long **)*pplVar11;
                uVar20 = iVar8 - iVar4;
                uVar16 = iVar4 - iVar8;
                uVar14 = uVar16;
                if (uVar20 < 86400000) {
                  uVar14 = uVar20;
                }
                if (uVar21 <= uVar14) {
                  iVar5 = *(int *)(uVar26 + 0x74);
                  if ((iVar5 == 0) || (86399999 < (uint)(iVar4 - iVar5))) {
                    *(int *)(uVar26 + 0x74) = iVar4;
                    if (iVar4 != 0) goto LAB_00d29e0c;
                  }
                  else {
                    uVar20 = iVar8 - iVar5;
                    uVar16 = iVar5 - iVar8;
LAB_00d29e0c:
                    if (uVar20 < 86400000) {
                      uVar16 = uVar20;
                    }
                    if ((*(uint *)(uVar26 + 0xb4) <= uVar16) ||
                       ((*(uint *)((long)pplVar11 + 0x1c) <= uVar21 &&
                        (*(uint *)(uVar26 + 0xb0) <= uVar16)))) {
                      uVar14 = *(uint *)(uVar26 + 0x38);
                      if (2 < uVar14) {
                        param_1[8] = 1;
                      }
                      if ((uVar14 == 1) || (3 < uVar14)) {
                        if (param_2 == (int *)0x0) {
                          *(undefined4 *)(uVar26 + 0x1b8) = 0;
                          enet_peer_on_disconnect(uVar26);
                          *(undefined4 *)(uVar26 + 0x38) = 9;
                          if ((*(ushort *)(uVar26 + 0x130) & 1) == 0) {
                            enet_list_insert(param_1 + 0x12,uVar26);
                            *(ushort *)(uVar26 + 0x130) = *(ushort *)(uVar26 + 0x130) | 1;
                          }
                          goto LAB_00d29918;
                        }
                        *(ulong *)(param_2 + 2) = uVar26;
                        param_2[5] = 0;
                        *param_2 = 2;
                        enet_peer_reset(uVar26);
                      }
                      else {
                        enet_peer_reset(uVar26);
                        if (param_2 == (int *)0x0) goto LAB_00d29918;
                      }
                      if (*param_2 == 0) goto LAB_00d29918;
                      uVar13 = 1;
                      goto LAB_00d29f34;
                    }
                  }
                  if (pplVar11[0xb] != (long *)0x0) {
                    *(uint *)(uVar26 + 0xd8) =
                         *(int *)(uVar26 + 0xd8) - (uint)*(ushort *)((long)pplVar11 + 0x24);
                  }
                  *(int *)(uVar26 + 0x80) = *(int *)(uVar26 + 0x80) + 1;
                  *(uint *)(pplVar11 + 3) = uVar21 << 1;
                  uVar12 = enet_list_remove();
                  enet_list_insert(uVar13,uVar12);
                  if ((pplVar27 == *(long ***)(uVar26 + 0xf0)) &&
                     (*(long ***)(uVar26 + 0xf0) != pplVar23)) {
                    *(int *)(uVar26 + 0x70) =
                         *(int *)(pplVar27 + 3) + *(int *)((long)pplVar27 + 0x14);
                  }
                }
                if (pplVar27 == pplVar23) break;
                iVar8 = param_1[0x10];
                pplVar11 = pplVar27;
              } while( true );
            }
          }
          plVar1 = (long *)(uVar26 + 0x110);
          if (((*(long **)(uVar26 + 0x110) == plVar1) ||
              (iVar8 = FUN_00d2b8d8(param_1,uVar26), iVar8 != 0)) &&
             (*(long **)(long *)(uVar26 + 0xf0) == (long *)(uVar26 + 0xf0))) {
            uVar16 = param_1[0x10] - *(int *)(uVar26 + 0x6c);
            uVar14 = *(int *)(uVar26 + 0x6c) - param_1[0x10];
            if (uVar16 < 86400000) {
              uVar14 = uVar16;
            }
            if ((*(uint *)(uVar26 + 0xa8) <= uVar14) &&
               (3 < (ulong)*(uint *)(uVar26 + 0xd0) - *(long *)(param_1 + 0x18))) {
              enet_peer_ping(uVar26);
              FUN_00d2b8d8(param_1,uVar26);
            }
          }
          if (*(long *)(param_1 + 0x19c) != 0) {
            iVar8 = *(int *)(uVar26 + 0x78);
            uVar14 = param_1[0x10];
            if (iVar8 == 0) {
              *(uint *)(uVar26 + 0x78) = uVar14;
              uVar16 = (uint)*(short *)(param_1 + 0x1a);
              *(ushort **)(param_1 + 0x19e) = &local_80;
              if (-1 < *(short *)(param_1 + 0x1a)) goto LAB_00d29be0;
LAB_00d29c38:
              local_7e = (ushort)(uVar14 >> 8) & 0xff | (ushort)((uVar14 & 0xff00ff) << 8);
              lVar15 = 4;
              *(undefined8 *)(param_1 + 0x1a0) = 4;
              uVar6 = *(ushort *)(uVar26 + 0x18);
              uVar20 = (uint)uVar6;
              uVar21 = (uint)uVar6;
              if (uVar6 >> 1 < 0xfff) goto LAB_00d29bf8;
LAB_00d29c5c:
              local_80 = (ushort)((uVar16 | uVar20) >> 8) & 0xff |
                         (ushort)(((uVar16 | uVar20) & 0xff00ff) << 8);
              pcVar18 = *(code **)(param_1 + 0x2a8);
              if (pcVar18 != (code *)0x0) {
                uVar9 = 0;
                goto LAB_00d29c78;
              }
            }
            else {
              uVar16 = iVar8 - uVar14;
              if (uVar14 - iVar8 < 86400000) {
                uVar16 = uVar14 - iVar8;
              }
              if ((0x270 < uVar16 >> 4) && (uVar16 = *(uint *)(uVar26 + 0x7c), uVar16 != 0)) {
                iVar8 = *(int *)(uVar26 + 0x80);
                *(uint *)(uVar26 + 0x78) = uVar14;
                *(undefined4 *)(uVar26 + 0x7c) = 0;
                *(undefined4 *)(uVar26 + 0x80) = 0;
                uVar21 = 0;
                if (uVar16 != 0) {
                  uVar21 = (uint)(iVar8 << 0x10) / uVar16;
                }
                uVar16 = (uint)*(undefined8 *)(uVar26 + 0x84);
                iVar8 = uVar16 - uVar21;
                if (uVar16 <= uVar21) {
                  iVar8 = uVar21 - uVar16;
                }
                uVar13 = NEON_ushl(CONCAT44(iVar8 + (int)((ulong)*(undefined8 *)(uVar26 + 0x84) >>
                                                         0x20) * 3,uVar21 + uVar16 * 7),
                                   0xfffffffefffffffd,4);
                *(undefined8 *)(uVar26 + 0x84) = uVar13;
              }
              uVar16 = (uint)*(short *)(param_1 + 0x1a);
              *(ushort **)(param_1 + 0x19e) = &local_80;
              if (*(short *)(param_1 + 0x1a) < 0) goto LAB_00d29c38;
LAB_00d29be0:
              lVar15 = 2;
              *(undefined8 *)(param_1 + 0x1a0) = 2;
              uVar21 = (uint)*(ushort *)(uVar26 + 0x18);
              uVar20 = uVar21;
              if (0xffe < *(ushort *)(uVar26 + 0x18) >> 1) goto LAB_00d29c5c;
LAB_00d29bf8:
              uVar16 = uVar16 | (uint)*(byte *)(uVar26 + 0x20) << 0xd;
              uVar21 = uVar16 | uVar21;
              local_80 = (ushort)(uVar21 >> 8) & 0xff | (ushort)((uVar21 & 0xff00ff) << 8);
              pcVar18 = *(code **)(param_1 + 0x2a8);
              *(short *)(param_1 + 0x1a) = (short)uVar16;
              if (pcVar18 != (code *)0x0) {
                uVar9 = *(undefined4 *)(uVar26 + 0x1c);
LAB_00d29c78:
                uVar13 = *(undefined8 *)(param_1 + 0x2a6);
                *(undefined4 *)((long)&local_80 + lVar15) = uVar9;
                *(long *)(param_1 + 0x1a0) = lVar15 + 4;
                uVar9 = (*pcVar18)(__src,uVar13);
                uVar14 = param_1[0x10];
                *(undefined4 *)((long)&local_80 + lVar15) = uVar9;
              }
            }
            puVar19 = *(undefined8 **)(uVar26 + 0x1c8);
            *(uint *)(uVar26 + 0x68) = uVar14;
            if (puVar19 == (undefined8 *)0x0) {
              lVar15 = *(long *)(param_1 + 0x2a6);
            }
            else {
              local_b4[0] = 0xffff;
              lVar15 = *(long *)(param_1 + 0x2a6);
              uVar28 = puVar19[2];
              uVar12 = puVar19[5];
              uVar13 = puVar19[4];
              uVar30 = puVar19[1];
              uVar29 = *puVar19;
              puVar17[3] = puVar19[3];
              puVar17[2] = uVar28;
              puVar17[5] = uVar12;
              puVar17[4] = uVar13;
              puVar17[1] = uVar30;
              *puVar17 = uVar29;
              memmove(param_1 + 0x1a2,__src,lVar15 << 4);
              lVar15 = *(long *)(param_1 + 0x2a6) + 1;
              *(undefined2 **)(param_1 + 0x19e) = local_b4;
              *(long *)(param_1 + 0x2a6) = lVar15;
              *(undefined8 *)(param_1 + 0x1a0) = 0x32;
            }
            iVar8 = enet_socket_send(*param_1,uVar26 + 0x24,__src,lVar15);
            __ptr = *(long **)(uVar26 + 0x100);
            plVar2 = (long *)(uVar26 + 0x100);
            if (__ptr != plVar2) {
              do {
                enet_list_remove(__ptr);
                plVar10 = (long *)__ptr[0xb];
                if ((plVar10 != (long *)0x0) &&
                   (lVar15 = *plVar10, *plVar10 = lVar15 + -1, lVar15 + -1 == 0)) {
                  *(uint *)(plVar10 + 1) = *(uint *)(plVar10 + 1) | 0x100;
                  enet_packet_destroy();
                }
                enet_free(__ptr);
                __ptr = (long *)*plVar2;
              } while (__ptr != plVar2);
              if (((*(int *)(uVar26 + 0x38) == 6) && ((long *)*plVar1 == plVar1)) &&
                 (*(long **)(long *)(uVar26 + 0xf0) == (long *)(uVar26 + 0xf0))) {
                enet_peer_disconnect(uVar26,*(undefined4 *)(uVar26 + 0x1b8));
              }
            }
            if (iVar8 < 0) {
              uVar13 = 0xffffffff;
              goto LAB_00d29f34;
            }
            *(ulong *)(param_1 + 0xab8) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0xab8) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_1 + 0xab8) + iVar8);
          }
        }
LAB_00d29918:
        uVar25 = *(ulong *)(param_1 + 10);
        lVar15 = *(long *)(param_1 + 0xc);
        uVar26 = uVar26 + 0x1d0;
      } while (uVar26 < uVar25 + lVar15 * 0x1d0);
    } while (param_1[0x16] != 0);
    uVar13 = 0;
  }
LAB_00d29f34:
  if (*(long *)(lVar7 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}


