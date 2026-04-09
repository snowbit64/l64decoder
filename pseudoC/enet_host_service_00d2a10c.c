// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_host_service
// Entry Point: 00d2a10c
// Size: 6092 bytes
// Signature: undefined enet_host_service(void)


/* WARNING: Type propagation algorithm not settling */

void enet_host_service(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined2 uVar7;
  ushort uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  ushort *puVar21;
  undefined4 uVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  code *pcVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  long lVar34;
  int *piVar35;
  long lVar36;
  ulong *puVar37;
  undefined8 *puVar38;
  ulong uVar39;
  ulong uVar40;
  undefined8 *puVar41;
  undefined4 *puVar42;
  long lVar43;
  ulong *puVar44;
  ulong uVar45;
  ulong uVar46;
  undefined4 local_b4;
  undefined4 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  
  lVar12 = tpidr_el0;
  local_70 = *(long *)(lVar12 + 0x28);
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    uVar19 = FUN_00d29f90(param_1,param_2);
    if (((int)uVar19 == 1) || ((int)uVar19 == -1)) goto LAB_00d2a174;
  }
  iVar14 = enet_time_get();
  puVar3 = param_1 + 0xab3;
  param_3 = iVar14 + param_3;
  param_1[0x10] = iVar14;
  puVar1 = param_1 + 0x12;
  while( true ) {
    uVar23 = iVar14 - param_1[5];
    uVar15 = param_1[5] - iVar14;
    if (uVar23 < 86400000) {
      uVar15 = uVar23;
    }
    if (999 < uVar15) {
      enet_host_bandwidth_throttle(param_1);
    }
    uVar19 = FUN_00d2982c(param_1,param_2,1);
    if (((int)uVar19 == -1) || ((int)uVar19 == 1)) break;
    iVar14 = 0;
    do {
      uStack_a8 = 0x1000;
      local_b0 = param_1 + 0x2b2;
      uVar15 = enet_socket_receive(*param_1,param_1 + 0xab2,&local_b0,1);
      if ((int)uVar15 < 0) goto LAB_00d2b898;
      if (uVar15 == 0) break;
      uVar24 = (ulong)uVar15;
      *(undefined4 **)(param_1 + 0xab4) = param_1 + 0x2b2;
      *(ulong *)(param_1 + 0xab6) = uVar24;
      *(ulong *)(param_1 + 0xaba) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0xaba) >> 0x20) + 1,
                    (int)*(undefined8 *)(param_1 + 0xaba) + uVar15);
      if (*(code **)(param_1 + 0xabc) == (code *)0x0) {
LAB_00d2a2b8:
        if (1 < uVar24) {
          puVar21 = *(ushort **)(param_1 + 0xab4);
          if ((*(char *)puVar21 == -1) && (*(char *)((long)puVar21 + 1) == -1)) {
            if (uVar24 < 0x34) goto LAB_00d2a244;
            puVar44 = (ulong *)(puVar21 + 1);
            puVar21 = puVar21 + 0x19;
            uVar24 = uVar24 - 0x32;
            *(ushort **)(param_1 + 0xab4) = puVar21;
            *(ulong *)(param_1 + 0xab6) = uVar24;
          }
          else {
            puVar44 = (ulong *)0x0;
          }
          uVar15 = (uint)(*puVar21 >> 8);
          uVar23 = (*puVar21 & 0xff00ff) << 8;
          uVar27 = (uVar15 | uVar23) << 0x10;
          pcVar28 = *(code **)(param_1 + 0x2a8);
          iVar16 = (int)uVar27 >> 0x10;
          lVar36 = 2;
          if (iVar16 < 0) {
            lVar36 = 4;
          }
          uVar15 = uVar15 | uVar23 & 0x1fff;
          uVar30 = (ulong)uVar15;
          if (pcVar28 != (code *)0x0) {
            lVar36 = lVar36 + 4;
          }
          if (uVar15 == 0x1ffe) {
            if (pcVar28 == (code *)0x0) {
              uVar39 = 0;
            }
            else {
              uVar39 = 0;
              iVar17 = 0;
              piVar35 = (int *)((long)puVar21 + lVar36 + -4);
              iVar18 = *piVar35;
LAB_00d2a338:
              *piVar35 = iVar17;
              local_a0 = puVar21;
              uStack_98 = uVar24;
              iVar17 = (*pcVar28)(&local_a0,1);
              if (iVar17 != iVar18) goto LAB_00d2a244;
              if (uVar39 == 0) {
                uVar24 = *(ulong *)(param_1 + 0xab6);
              }
              else {
                iVar17 = param_1[0xab2];
                uVar24 = *(ulong *)(param_1 + 0xab6);
LAB_00d2a374:
                *(int *)(uVar39 + 0x24) = iVar17;
                uVar7 = *(undefined2 *)puVar3;
                *(int *)(uVar39 + 0x60) = *(int *)(uVar39 + 0x60) + (int)uVar24;
                *(undefined2 *)(uVar39 + 0x28) = uVar7;
              }
            }
            if (lVar36 < (long)uVar24) {
              puVar20 = (undefined8 *)(*(long *)(param_1 + 0xab4) + uVar24);
              puVar41 = (undefined8 *)(*(long *)(param_1 + 0xab4) + lVar36);
LAB_00d2a484:
              puVar2 = (undefined8 *)((long)puVar41 + 4);
              if (((puVar20 < puVar2) ||
                  (uVar15 = *(byte *)puVar41 & 0xf, uVar15 - 0xd < 0xfffffff4)) ||
                 ((puVar38 = (undefined8 *)
                             ((long)puVar41 + *(long *)(&DAT_00546398 + (ulong)uVar15 * 8)),
                  puVar20 < puVar38 || ((uVar39 == 0 && (uVar15 != 2))))))
              goto switchD_00d2a4f8_caseD_c;
              uVar23 = (uint)(*(ushort *)((long)puVar41 + 2) >> 8) |
                       (*(ushort *)((long)puVar41 + 2) & 0xff00ff) << 8;
              *(short *)((long)puVar41 + 2) = (short)uVar23;
              switch(uVar15) {
              case 1:
                if ((*(int *)(uVar39 + 0x38) != 0) && (*(int *)(uVar39 + 0x38) != 9)) {
                  uVar15 = param_1[0x10];
                  uVar25 = (*(ushort *)((long)puVar41 + 6) & 0xff00ff) << 8;
                  uVar23 = uVar15 & 0xffff0000 | *(ushort *)((long)puVar41 + 6) >> 8 | uVar25;
                  uVar27 = uVar23 - 0x10000;
                  if ((uVar25 & 0x8000) <= (uVar15 & 0x8000)) {
                    uVar27 = uVar23;
                  }
                  uVar15 = uVar15 - uVar27;
                  if (86399999 < uVar15) break;
                  if (uVar15 < 2) {
                    uVar15 = 1;
                  }
                  if (*(int *)(uVar39 + 0x6c) == 0) {
                    uVar23 = uVar15 + 1 >> 1;
                    *(uint *)(uVar39 + 200) = uVar15;
                    *(uint *)(uVar39 + 0xcc) = uVar23;
                  }
                  else {
                    enet_peer_throttle(uVar39,uVar15);
                    uVar23 = *(uint *)(uVar39 + 200);
                    uVar27 = uVar15 - uVar23;
                    if (uVar15 < uVar23) {
                      uVar27 = uVar23 - uVar15;
                      uVar15 = -(uVar27 >> 3);
                    }
                    else {
                      uVar15 = uVar27 >> 3;
                    }
                    uVar15 = uVar23 + uVar15;
                    uVar23 = (*(uint *)(uVar39 + 0xcc) - (*(uint *)(uVar39 + 0xcc) >> 2)) +
                             (uVar27 >> 2);
                    *(uint *)(uVar39 + 200) = uVar15;
                    *(uint *)(uVar39 + 0xcc) = uVar23;
                  }
                  uVar27 = *(uint *)(uVar39 + 0xbc);
                  if (uVar15 < uVar27) {
                    *(uint *)(uVar39 + 0xbc) = uVar15;
                    uVar25 = *(uint *)(uVar39 + 0xc4);
                    uVar27 = uVar15;
                    if (uVar23 <= uVar25) goto LAB_00d2b4d8;
LAB_00d2b4f8:
                    *(uint *)(uVar39 + 0xc4) = uVar23;
                    iVar17 = *(int *)(uVar39 + 0x98);
                    uVar33 = param_1[0x10];
                    uVar25 = uVar23;
                    if (iVar17 != 0) goto LAB_00d2b510;
LAB_00d2b534:
                    *(uint *)(uVar39 + 0xb8) = uVar27;
                    *(uint *)(uVar39 + 0xbc) = uVar15;
                    if (uVar25 < 2) {
                      uVar25 = 1;
                    }
                    *(uint *)(uVar39 + 0x98) = uVar33;
                    *(uint *)(uVar39 + 0xc0) = uVar25;
                    *(uint *)(uVar39 + 0xc4) = uVar23;
                  }
                  else {
                    uVar25 = *(uint *)(uVar39 + 0xc4);
                    if (uVar25 < uVar23) goto LAB_00d2b4f8;
LAB_00d2b4d8:
                    iVar17 = *(int *)(uVar39 + 0x98);
                    uVar33 = param_1[0x10];
                    if (iVar17 == 0) goto LAB_00d2b534;
LAB_00d2b510:
                    uVar26 = iVar17 - uVar33;
                    if (uVar33 - iVar17 < 86400000) {
                      uVar26 = uVar33 - iVar17;
                    }
                    if (*(uint *)(uVar39 + 0xa4) <= uVar26) goto LAB_00d2b534;
                  }
                  *(undefined4 *)(uVar39 + 0x74) = 0;
                  if (uVar33 < 2) {
                    uVar33 = 1;
                  }
                  *(uint *)(uVar39 + 0x6c) = uVar33;
                  iVar18 = FUN_00d2be98(uVar39,(uint)(*(ushort *)((long)puVar41 + 4) >> 8) |
                                               (*(ushort *)((long)puVar41 + 4) & 0xff00ff) << 8,
                                        *(undefined *)((long)puVar41 + 1));
                  iVar17 = *(int *)(uVar39 + 0x38);
                  if (iVar17 == 7) {
                    if (iVar18 != 4) goto switchD_00d2a4f8_caseD_c;
                    param_1[8] = 1;
                    if (param_2 == (int *)0x0) {
                      *(undefined4 *)(uVar39 + 0x1b8) = 0;
                      enet_peer_on_disconnect(uVar39);
                      uVar8 = *(ushort *)(uVar39 + 0x130);
                      *(undefined4 *)(uVar39 + 0x38) = 9;
joined_r0x00d2b6c4:
                      if ((uVar8 & 1) == 0) {
                        enet_list_insert(puVar1,uVar39);
                        *(ushort *)(uVar39 + 0x130) = *(ushort *)(uVar39 + 0x130) | 1;
                      }
                    }
                    else {
                      *(ulong *)(param_2 + 2) = uVar39;
                      param_2[5] = 0;
                      *param_2 = 2;
                      enet_peer_reset(uVar39);
                    }
                  }
                  else if (iVar17 == 6) {
                    if ((*(long *)(uVar39 + 0x110) == uVar39 + 0x110) &&
                       (*(long **)(long *)(uVar39 + 0xf0) == (long *)(uVar39 + 0xf0))) {
                      enet_peer_disconnect(uVar39,*(undefined4 *)(uVar39 + 0x1b8));
                    }
                  }
                  else if (iVar17 == 2) {
                    if (iVar18 != 3) goto switchD_00d2a4f8_caseD_c;
                    param_1[8] = 1;
                    if (param_2 == (int *)0x0) {
                      enet_peer_on_disconnect(uVar39);
                      uVar8 = *(ushort *)(uVar39 + 0x130);
                      *(undefined4 *)(uVar39 + 0x38) = 3;
                      goto joined_r0x00d2b6c4;
                    }
                    enet_peer_on_connect();
                    *(undefined4 *)(uVar39 + 0x38) = 5;
                    *param_2 = 1;
                    *(ulong *)(param_2 + 2) = uVar39;
                    param_2[5] = *(int *)(uVar39 + 0x1b8);
                  }
                }
                break;
              case 2:
                if (((uVar39 == 0) && (uVar15 = *(uint *)(puVar41 + 2), uVar15 != 0)) &&
                   ((uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8,
                    uVar15 = uVar15 >> 0x10 | uVar15 << 0x10, uVar15 < 0x100 &&
                    (0 < *(long *)(param_1 + 0xc))))) {
                  uVar24 = *(ulong *)(param_1 + 10);
                  uVar40 = 0;
                  uVar31 = uVar24 + *(long *)(param_1 + 0xc) * 0x1d0;
                  uVar30 = 0;
                  if (puVar44 == (ulong *)0x0) {
                    do {
                      uVar39 = uVar40;
                      if (*(int *)(uVar24 + 0x38) != 1) {
                        if (*(int *)(uVar24 + 0x38) == 0) {
                          uVar39 = uVar24;
                          if (uVar40 != 0) {
                            uVar39 = uVar40;
                          }
                        }
                        else if (*(int *)(uVar24 + 0x24) == param_1[0xab2]) {
                          if (((*(short *)(uVar24 + 0x28) == *(short *)puVar3) &&
                              (*(uint *)(uVar24 + 0x1c) == *(uint *)(puVar41 + 5))) &&
                             (*(long *)(uVar24 + 0x1c8) == 0)) goto switchD_00d2a4f8_caseD_c;
                          uVar30 = uVar30 + 1;
                        }
                      }
                      uVar24 = uVar24 + 0x1d0;
                      uVar40 = uVar39;
                    } while (uVar24 < uVar31);
                  }
                  else {
                    do {
                      uVar39 = uVar40;
                      if (*(int *)(uVar24 + 0x38) != 1) {
                        if (*(int *)(uVar24 + 0x38) == 0) {
                          uVar39 = uVar24;
                          if (uVar40 != 0) {
                            uVar39 = uVar40;
                          }
                        }
                        else if (*(int *)(uVar24 + 0x24) == param_1[0xab2]) {
                          if ((((*(short *)(uVar24 + 0x28) == *(short *)puVar3) &&
                               (*(uint *)(uVar24 + 0x1c) == *(uint *)(puVar41 + 5))) &&
                              (puVar37 = *(ulong **)(uVar24 + 0x1c8), puVar37 != (ulong *)0x0)) &&
                             ((*puVar44 ^ *puVar37 | puVar44[1] ^ puVar37[1] |
                               puVar44[2] ^ puVar37[2] | puVar44[3] ^ puVar37[3] |
                              puVar44[4] ^ puVar37[4] | puVar44[5] ^ puVar37[5]) == 0))
                          goto switchD_00d2a4f8_caseD_c;
                          uVar30 = uVar30 + 1;
                        }
                      }
                      uVar24 = uVar24 + 0x1d0;
                      uVar40 = uVar39;
                    } while (uVar24 < uVar31);
                  }
                  if ((uVar39 != 0) && (uVar30 < *(ulong *)(param_1 + 0xac2))) {
                    uVar24 = *(ulong *)(param_1 + 0xe);
                    if ((ulong)uVar15 <= *(ulong *)(param_1 + 0xe)) {
                      uVar24 = (ulong)uVar15;
                    }
                    lVar36 = enet_malloc(uVar24 * 0x50);
                    *(long *)(uVar39 + 0x40) = lVar36;
                    if (lVar36 != 0) {
                      *(ulong *)(uVar39 + 0x48) = uVar24;
                      *(undefined4 *)(uVar39 + 0x38) = 2;
                      *(uint *)(uVar39 + 0x1c) = *(uint *)(puVar41 + 5);
                      *(undefined8 *)(uVar39 + 0x24) = *(undefined8 *)(param_1 + 0xab2);
                      *(ushort *)(uVar39 + 0x18) =
                           *(ushort *)((long)puVar41 + 4) >> 8 |
                           (ushort)((*(ushort *)((long)puVar41 + 4) & 0xff00ff) << 8);
                      uVar15 = (*(uint *)((long)puVar41 + 0x14) & 0xff00ff00) >> 8 |
                               (*(uint *)((long)puVar41 + 0x14) & 0xff00ff) << 8;
                      *(uint *)(uVar39 + 0x50) = uVar15 >> 0x10 | uVar15 << 0x10;
                      uVar15 = (*(uint *)(puVar41 + 3) & 0xff00ff00) >> 8 |
                               (*(uint *)(puVar41 + 3) & 0xff00ff) << 8;
                      *(uint *)(uVar39 + 0x54) = uVar15 >> 0x10 | uVar15 << 0x10;
                      uVar15 = (*(uint *)((long)puVar41 + 0x1c) & 0xff00ff00) >> 8 |
                               (*(uint *)((long)puVar41 + 0x1c) & 0xff00ff) << 8;
                      *(uint *)(uVar39 + 0xa4) = uVar15 >> 0x10 | uVar15 << 0x10;
                      uVar15 = (*(uint *)(puVar41 + 4) & 0xff00ff00) >> 8 |
                               (*(uint *)(puVar41 + 4) & 0xff00ff) << 8;
                      *(uint *)(uVar39 + 0x9c) = uVar15 >> 0x10 | uVar15 << 0x10;
                      uVar15 = (*(uint *)((long)puVar41 + 0x24) & 0xff00ff00) >> 8 |
                               (*(uint *)((long)puVar41 + 0x24) & 0xff00ff) << 8;
                      *(uint *)(uVar39 + 0xa0) = uVar15 >> 0x10 | uVar15 << 0x10;
                      uVar15 = (*(uint *)((long)puVar41 + 0x2c) & 0xff00ff00) >> 8 |
                               (*(uint *)((long)puVar41 + 0x2c) & 0xff00ff) << 8;
                      *(uint *)(uVar39 + 0x1b8) = uVar15 >> 0x10 | uVar15 << 0x10;
                      if (puVar44 == (ulong *)0x0) {
                        *(undefined8 *)(uVar39 + 0x1c8) = 0;
                      }
                      else {
                        puVar37 = (ulong *)enet_malloc(0x30);
                        *(ulong **)(uVar39 + 0x1c8) = puVar37;
                        uVar30 = *puVar44;
                        uVar31 = puVar44[3];
                        uVar40 = puVar44[2];
                        uVar46 = puVar44[5];
                        uVar45 = puVar44[4];
                        puVar37[1] = puVar44[1];
                        *puVar37 = uVar30;
                        puVar37[3] = uVar31;
                        puVar37[2] = uVar40;
                        puVar37[5] = uVar46;
                        puVar37[4] = uVar45;
                      }
                      bVar6 = *(byte *)(uVar39 + 0x20);
                      if (*(byte *)((long)puVar41 + 6) != 0xff) {
                        bVar6 = *(byte *)((long)puVar41 + 6);
                      }
                      bVar4 = bVar6 + 1 & 3;
                      bVar6 = bVar6 + 2 & 3;
                      if (bVar4 != *(byte *)(uVar39 + 0x20)) {
                        bVar6 = bVar4;
                      }
                      *(byte *)(uVar39 + 0x20) = bVar6;
                      bVar4 = *(byte *)(uVar39 + 0x21);
                      if (*(byte *)((long)puVar41 + 7) != 0xff) {
                        bVar4 = *(byte *)((long)puVar41 + 7);
                      }
                      bVar5 = bVar4 + 1 & 3;
                      bVar4 = bVar4 + 2 & 3;
                      if (bVar5 != *(byte *)(uVar39 + 0x21)) {
                        bVar4 = bVar5;
                      }
                      *(byte *)(uVar39 + 0x21) = bVar4;
                      if (0 < (long)uVar24) {
                        puVar42 = *(undefined4 **)(uVar39 + 0x40);
                        do {
                          *puVar42 = 0;
                          *(undefined4 *)((long)puVar42 + 0x26) = 0;
                          enet_list_clear(puVar42 + 0xc);
                          enet_list_clear(puVar42 + 0x10);
                          *(undefined2 *)(puVar42 + 1) = 0;
                          *(undefined8 *)((long)puVar42 + 0xe) = 0;
                          *(undefined8 *)((long)puVar42 + 6) = 0;
                          *(undefined8 *)((long)puVar42 + 0x1e) = 0;
                          *(undefined8 *)((long)puVar42 + 0x16) = 0;
                          puVar42 = puVar42 + 0x14;
                        } while (puVar42 < (undefined4 *)(*(long *)(uVar39 + 0x40) + uVar24 * 0x50))
                        ;
                      }
                      uVar23 = *(uint *)(uVar39 + 0x50);
                      uVar15 = (*(uint *)(puVar41 + 1) & 0xff00ff00) >> 8 |
                               (*(uint *)(puVar41 + 1) & 0xff00ff) << 8;
                      uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
                      if (0xfff < uVar15) {
                        uVar15 = 0x1000;
                      }
                      if (uVar15 < 0x241) {
                        uVar15 = 0x240;
                      }
                      *(uint *)(uVar39 + 0xd0) = uVar15;
                      uVar27 = param_1[4];
                      if (uVar27 == 0) {
                        if (uVar23 != 0) goto LAB_00d2b100;
LAB_00d2b1f4:
                        *(undefined4 *)(uVar39 + 0xd4) = 0x10000;
                      }
                      else {
                        if (uVar23 == 0) {
LAB_00d2b100:
                          uVar25 = uVar27;
                          if (uVar27 <= uVar23) {
                            uVar25 = uVar23;
                          }
                          uVar23 = uVar25 >> 4 & 0xffff000;
                          *(uint *)(uVar39 + 0xd4) = uVar23;
                        }
                        else {
                          uVar25 = uVar27;
                          if (uVar23 <= uVar27) {
                            uVar25 = uVar23;
                          }
                          uVar23 = uVar25 >> 4 & 0xffff000;
                          *(uint *)(uVar39 + 0xd4) = uVar23;
                        }
                        if (uVar23 == 0) {
                          *(undefined4 *)(uVar39 + 0xd4) = 0x1000;
                        }
                        else if (0x10000 < uVar23) goto LAB_00d2b1f4;
                      }
                      uVar33 = param_1[3];
                      uVar23 = (*(uint *)((long)puVar41 + 0xc) & 0xff00ff00) >> 8 |
                               (*(uint *)((long)puVar41 + 0xc) & 0xff00ff) << 8;
                      uVar25 = uVar23 >> 0x10 | uVar23 << 0x10;
                      uVar23 = 0x10000;
                      if (uVar33 != 0) {
                        uVar23 = uVar33 >> 4 & 0xffff000;
                      }
                      if (uVar23 <= uVar25) {
                        uVar25 = uVar23;
                      }
                      uVar23 = (uVar27 & 0xff00ff00) >> 8 | (uVar27 & 0xff00ff) << 8;
                      local_a0 = (ushort *)
                                 CONCAT26(CONCAT11(bVar4,bVar6),
                                          CONCAT24(*(ushort *)(uVar39 + 0x1a) >> 8 |
                                                   (ushort)((*(ushort *)(uVar39 + 0x1a) & 0xff00ff)
                                                           << 8),(undefined4)local_a0));
                      if (0xffff < uVar25) {
                        uVar25 = 0x10000;
                      }
                      uVar27 = (*(uint *)(uVar39 + 0xa4) & 0xff00ff00) >> 8 |
                               (*(uint *)(uVar39 + 0xa4) & 0xff00ff) << 8;
                      if (uVar25 < 0x1001) {
                        uVar25 = 0x1000;
                      }
                      uVar26 = (*(uint *)(uVar39 + 0x9c) & 0xff00ff00) >> 8 |
                               (*(uint *)(uVar39 + 0x9c) & 0xff00ff) << 8;
                      uVar11 = (*(uint *)(uVar39 + 0xa0) & 0xff00ff00) >> 8 |
                               (*(uint *)(uVar39 + 0xa0) & 0xff00ff) << 8;
                      uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
                      uStack_88 = CONCAT44(uVar27 >> 0x10 | uVar27 << 0x10,
                                           uVar23 >> 0x10 | uVar23 << 0x10);
                      uVar23 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
                      local_80 = CONCAT44(uVar11 >> 0x10 | uVar11 << 0x10,
                                          uVar26 >> 0x10 | uVar26 << 0x10);
                      uVar27 = ((uint)uVar24 & 0xff00ff00) >> 8 | ((uint)uVar24 & 0xff00ff) << 8;
                      uVar25 = (uVar33 & 0xff00ff00) >> 8 | (uVar33 & 0xff00ff) << 8;
                      uStack_98 = CONCAT44(uVar23 >> 0x10 | uVar23 << 0x10,
                                           uVar15 >> 0x10 | uVar15 << 0x10);
                      local_a0 = (ushort *)CONCAT62(local_a0._2_6_,0xff83);
                      local_90 = CONCAT44(uVar25 >> 0x10 | uVar25 << 0x10,
                                          uVar27 >> 0x10 | uVar27 << 0x10);
                      local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(uVar39 + 0x1c));
                      enet_peer_queue_outgoing_command(uVar39,&local_a0,0,0,0);
                      goto LAB_00d2b3cc;
                    }
                  }
                }
                goto switchD_00d2a4f8_caseD_c;
              case 3:
                if (*(int *)(uVar39 + 0x38) == 1) {
                  uVar15 = *(uint *)(puVar41 + 2);
                  if (((((uVar15 == 0) ||
                        (uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8,
                        uVar15 = uVar15 >> 0x10 | uVar15 << 0x10, 0xff < uVar15)) ||
                       (uVar23 = (*(uint *)((long)puVar41 + 0x1c) & 0xff00ff00) >> 8 |
                                 (*(uint *)((long)puVar41 + 0x1c) & 0xff00ff) << 8,
                       (uVar23 >> 0x10 | uVar23 << 0x10) != *(uint *)(uVar39 + 0xa4))) ||
                      ((uVar23 = (*(uint *)(puVar41 + 4) & 0xff00ff00) >> 8 |
                                 (*(uint *)(puVar41 + 4) & 0xff00ff) << 8,
                       (uVar23 >> 0x10 | uVar23 << 0x10) != *(uint *)(uVar39 + 0x9c) ||
                       (uVar23 = (*(uint *)((long)puVar41 + 0x24) & 0xff00ff00) >> 8 |
                                 (*(uint *)((long)puVar41 + 0x24) & 0xff00ff) << 8,
                       (uVar23 >> 0x10 | uVar23 << 0x10) != *(uint *)(uVar39 + 0xa0))))) ||
                     (*(uint *)(puVar41 + 5) != *(uint *)(uVar39 + 0x1c))) {
                    *(undefined4 *)(uVar39 + 0x1b8) = 0;
                    enet_peer_on_disconnect(uVar39);
                    *(undefined4 *)(uVar39 + 0x38) = 9;
                    if ((*(ushort *)(uVar39 + 0x130) & 1) == 0) {
                      enet_list_insert(puVar1,uVar39);
                      *(ushort *)(uVar39 + 0x130) = *(ushort *)(uVar39 + 0x130) | 1;
                    }
                    goto switchD_00d2a4f8_caseD_c;
                  }
                  FUN_00d2be98(uVar39,1,0xff);
                  if ((ulong)uVar15 < *(ulong *)(uVar39 + 0x48)) {
                    *(ulong *)(uVar39 + 0x48) = (ulong)uVar15;
                  }
                  *(ushort *)(uVar39 + 0x18) =
                       *(ushort *)((long)puVar41 + 4) >> 8 |
                       (ushort)((*(ushort *)((long)puVar41 + 4) & 0xff00ff) << 8);
                  *(undefined *)(uVar39 + 0x21) = *(undefined *)((long)puVar41 + 6);
                  *(undefined *)(uVar39 + 0x20) = *(undefined *)((long)puVar41 + 7);
                  uVar15 = (*(uint *)(puVar41 + 1) & 0xff00ff00) >> 8 |
                           (*(uint *)(puVar41 + 1) & 0xff00ff) << 8;
                  uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
                  if (0xfff < uVar15) {
                    uVar15 = 0x1000;
                  }
                  if (uVar15 < 0x241) {
                    uVar15 = 0x240;
                  }
                  if (uVar15 < *(uint *)(uVar39 + 0xd0)) {
                    *(uint *)(uVar39 + 0xd0) = uVar15;
                  }
                  uVar15 = (*(uint *)((long)puVar41 + 0xc) & 0xff00ff00) >> 8 |
                           (*(uint *)((long)puVar41 + 0xc) & 0xff00ff) << 8;
                  uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
                  if (uVar15 < 0x1001) {
                    uVar15 = 0x1000;
                  }
                  if (0xffff < uVar15) {
                    uVar15 = 0x10000;
                  }
                  if (uVar15 < *(uint *)(uVar39 + 0xd4)) {
                    *(uint *)(uVar39 + 0xd4) = uVar15;
                  }
                  uVar15 = (*(uint *)((long)puVar41 + 0x14) & 0xff00ff00) >> 8 |
                           (*(uint *)((long)puVar41 + 0x14) & 0xff00ff) << 8;
                  *(uint *)(uVar39 + 0x50) = uVar15 >> 0x10 | uVar15 << 0x10;
                  uVar15 = (*(uint *)(puVar41 + 3) & 0xff00ff00) >> 8 |
                           (*(uint *)(puVar41 + 3) & 0xff00ff) << 8;
                  *(uint *)(uVar39 + 0x54) = uVar15 >> 0x10 | uVar15 << 0x10;
                  param_1[8] = 1;
                  if (param_2 == (int *)0x0) {
                    uVar22 = 3;
                    if (*(int *)(uVar39 + 0x38) == 1) {
                      uVar22 = 4;
                    }
                    enet_peer_on_disconnect(uVar39);
                    *(undefined4 *)(uVar39 + 0x38) = uVar22;
                    if ((*(ushort *)(uVar39 + 0x130) & 1) == 0) {
                      enet_list_insert(puVar1,uVar39);
                      *(ushort *)(uVar39 + 0x130) = *(ushort *)(uVar39 + 0x130) | 1;
                    }
                  }
                  else {
                    enet_peer_on_connect(uVar39);
                    *(undefined4 *)(uVar39 + 0x38) = 5;
                    *param_2 = 1;
                    *(ulong *)(param_2 + 2) = uVar39;
                    param_2[5] = *(int *)(uVar39 + 0x1b8);
                  }
                }
                break;
              case 4:
                if ((9 < *(uint *)(uVar39 + 0x38)) ||
                   ((1 << (ulong)(*(uint *)(uVar39 + 0x38) & 0x1f) & 0x301U) == 0)) {
                  enet_peer_reset_queues(uVar39);
                  uVar15 = *(uint *)(uVar39 + 0x38);
                  if (uVar15 < 8) {
                    uVar23 = 1 << (ulong)(uVar15 & 0x1f);
                    if ((uVar23 & 0x92) == 0) {
                      if ((uVar23 & 0x60) == 0) {
                        if (uVar15 == 3) {
                          param_1[8] = 1;
                        }
                        goto LAB_00d2b438;
                      }
                      cVar9 = *(char *)puVar41;
                      enet_peer_on_disconnect(uVar39);
                      if (-1 < cVar9) goto LAB_00d2b2bc;
                      *(undefined4 *)(uVar39 + 0x38) = 8;
                    }
                    else {
                      enet_peer_on_disconnect(uVar39);
LAB_00d2b2bc:
                      *(undefined4 *)(uVar39 + 0x38) = 9;
                      if ((*(ushort *)(uVar39 + 0x130) & 1) == 0) {
                        enet_list_insert(puVar1,uVar39);
                        *(ushort *)(uVar39 + 0x130) = *(ushort *)(uVar39 + 0x130) | 1;
                        goto LAB_00d2b440;
                      }
                    }
                  }
                  else {
LAB_00d2b438:
                    enet_peer_reset(uVar39);
LAB_00d2b440:
                    if (*(int *)(uVar39 + 0x38) == 0) break;
                  }
                  uVar15 = (*(uint *)puVar2 & 0xff00ff00) >> 8 | (*(uint *)puVar2 & 0xff00ff) << 8;
                  *(uint *)(uVar39 + 0x1b8) = uVar15 >> 0x10 | uVar15 << 0x10;
                }
                break;
              case 5:
                if (*(int *)(uVar39 + 0x38) - 5U < 2) goto LAB_00d2b3cc;
                goto switchD_00d2a4f8_caseD_c;
              case 6:
                if ((((ulong)*(byte *)((long)puVar41 + 1) < *(ulong *)(uVar39 + 0x48)) &&
                    (*(int *)(uVar39 + 0x38) - 5U < 2)) &&
                   (uVar24 = (ulong)((uint)(*(ushort *)puVar2 >> 8) |
                                    (*(ushort *)puVar2 & 0xff00ff) << 8),
                   uVar24 <= *(ulong *)(param_1 + 0xac4))) {
                  puVar38 = (undefined8 *)((long)puVar38 + uVar24);
                  if ((*(undefined8 **)(param_1 + 0xab4) <= puVar38) &&
                     (puVar38 <=
                      (undefined8 *)
                      ((long)*(undefined8 **)(param_1 + 0xab4) + *(long *)(param_1 + 0xab6)))) {
                    puVar20 = (undefined8 *)((long)puVar41 + 6);
                    uVar19 = 1;
                    goto LAB_00d2add0;
                  }
                }
                goto switchD_00d2a4f8_caseD_c;
              case 7:
                if (((*(ulong *)(uVar39 + 0x48) <= (ulong)*(byte *)((long)puVar41 + 1)) ||
                    (1 < *(int *)(uVar39 + 0x38) - 5U)) ||
                   (uVar24 = (ulong)((uint)(*(ushort *)((long)puVar41 + 6) >> 8) |
                                    (*(ushort *)((long)puVar41 + 6) & 0xff00ff) << 8),
                   *(ulong *)(param_1 + 0xac4) < uVar24)) goto switchD_00d2a4f8_caseD_c;
                puVar38 = (undefined8 *)((long)puVar38 + uVar24);
                if ((puVar38 < *(undefined8 **)(param_1 + 0xab4)) ||
                   ((undefined8 *)
                    ((long)*(undefined8 **)(param_1 + 0xab4) + *(long *)(param_1 + 0xab6)) < puVar38
                   )) goto switchD_00d2a4f8_caseD_c;
                puVar20 = puVar41 + 1;
                uVar19 = 0;
LAB_00d2add0:
                lVar36 = enet_peer_queue_incoming_command(uVar39,puVar41,puVar20,uVar24,uVar19,0);
                if (lVar36 == 0) goto switchD_00d2a4f8_caseD_c;
                break;
              case 8:
                uVar24 = (ulong)*(byte *)((long)puVar41 + 1);
                if ((uVar24 < *(ulong *)(uVar39 + 0x48)) && (*(int *)(uVar39 + 0x38) - 5U < 2)) {
                  uVar15 = (uint)(*(ushort *)((long)puVar41 + 6) >> 8) |
                           (*(ushort *)((long)puVar41 + 6) & 0xff00ff) << 8;
                  if ((ulong)uVar15 <= *(ulong *)(param_1 + 0xac4)) {
                    puVar38 = (undefined8 *)((long)puVar38 + (ulong)uVar15);
                    if ((*(undefined8 **)(param_1 + 0xab4) <= puVar38) &&
                       (puVar38 <=
                        (undefined8 *)
                        ((long)*(undefined8 **)(param_1 + 0xab4) + *(long *)(param_1 + 0xab6)))) {
                      lVar36 = *(long *)(uVar39 + 0x40) + uVar24 * 0x50;
                      uVar27 = (uint)(*(ushort *)puVar2 >> 8) | (*(ushort *)puVar2 & 0xff00ff) << 8;
                      uVar8 = *(ushort *)(lVar36 + 0x26);
                      uVar23 = (uVar27 << 0x10) >> 0x1c | 0x10;
                      if (uVar8 <= uVar27) {
                        uVar23 = (uVar27 << 0x10) >> 0x1c;
                      }
                      if ((uVar23 < uVar8 >> 0xc) || ((uVar8 >> 0xc) + 7 <= uVar23)) break;
                      uVar23 = (*(uint *)(puVar41 + 1) & 0xff00ff00) >> 8 |
                               (*(uint *)(puVar41 + 1) & 0xff00ff) << 8;
                      uVar23 = uVar23 >> 0x10 | uVar23 << 0x10;
                      if (uVar23 < 0x100001) {
                        uVar33 = (*(uint *)((long)puVar41 + 0xc) & 0xff00ff00) >> 8;
                        uVar25 = uVar33 | (*(uint *)((long)puVar41 + 0xc) & 0xff00ff) << 8;
                        uVar25 = uVar25 >> 0x10 | uVar25 << 0x10;
                        if (uVar25 < uVar23) {
                          uVar26 = (*(uint *)(puVar41 + 2) & 0xff00ff00) >> 8 |
                                   (*(uint *)(puVar41 + 2) & 0xff00ff) << 8;
                          uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                          uVar30 = (ulong)uVar26;
                          if (((uVar30 <= *(ulong *)(param_1 + 0xac4)) &&
                              (uVar11 = (*(uint *)((long)puVar41 + 0x14) & 0xff00ff00) >> 8 |
                                        (*(uint *)((long)puVar41 + 0x14) & 0xff00ff) << 8,
                              uVar11 = uVar11 >> 0x10 | uVar11 << 0x10, uVar11 < uVar26)) &&
                             (uVar15 <= uVar26 - uVar11)) {
                            lVar34 = *(long *)(uVar39 + 0x40) + uVar24 * 0x50;
                            lVar43 = *(long *)(lVar34 + 0x38);
                            lVar34 = lVar34 + 0x30;
                            if (lVar43 != lVar34) {
                              uVar26 = (uint)uVar8;
                              if (uVar27 < uVar26) {
                                do {
                                  uVar8 = *(ushort *)(lVar43 + 0x10);
                                  if (uVar26 <= uVar8) break;
                                  if (uVar8 < uVar27 || uVar8 == uVar27) goto LAB_00d2b2ec;
                                  lVar43 = *(long *)(lVar43 + 8);
                                } while (lVar43 != lVar34);
                              }
                              else {
                                do {
                                  uVar8 = *(ushort *)(lVar43 + 0x10);
                                  uVar32 = (uint)uVar8;
                                  bVar13 = false;
                                  if (uVar26 <= uVar32) {
                                    bVar13 = uVar8 == uVar27;
                                  }
                                  if (uVar26 <= uVar32 && uVar32 < uVar27 || bVar13)
                                  goto LAB_00d2b2ec;
                                  lVar43 = *(long *)(lVar43 + 8);
                                } while (lVar43 != lVar34);
                              }
                            }
                            goto LAB_00d2b2f4;
                          }
                        }
                      }
                    }
                  }
                }
                goto switchD_00d2a4f8_caseD_c;
              case 9:
                if (((*(ulong *)(uVar39 + 0x48) <= (ulong)*(byte *)((long)puVar41 + 1)) ||
                    (1 < *(int *)(uVar39 + 0x38) - 5U)) ||
                   (uVar24 = (ulong)((uint)(*(ushort *)((long)puVar41 + 6) >> 8) |
                                    (*(ushort *)((long)puVar41 + 6) & 0xff00ff) << 8),
                   *(ulong *)(param_1 + 0xac4) < uVar24)) goto switchD_00d2a4f8_caseD_c;
                puVar38 = (undefined8 *)((long)puVar38 + uVar24);
                if ((puVar38 < *(undefined8 **)(param_1 + 0xab4)) ||
                   ((undefined8 *)
                    ((long)*(undefined8 **)(param_1 + 0xab4) + *(long *)(param_1 + 0xab6)) < puVar38
                   )) goto switchD_00d2a4f8_caseD_c;
                uVar27 = (uint)(*(ushort *)puVar2 >> 8);
                uVar25 = (*(ushort *)puVar2 & 0xff00ff) << 8;
                uVar23 = uVar27 | uVar25;
                uVar8 = *(ushort *)(uVar39 + 0x134);
                uVar15 = uVar23 | 0x10000;
                if (uVar8 <= uVar23) {
                  uVar15 = uVar23;
                }
                if (uVar15 < uVar8 + 0x8000) {
                  uVar23 = uVar27 | uVar25 & 0x3ff;
                  uVar15 = (uVar15 & 0xffff) - uVar23;
                  uVar23 = uVar23 >> 5;
                  if (uVar15 == uVar8) {
                    if ((*(uint *)(uVar39 + (ulong)uVar23 * 4 + 0x138) >> (ulong)(uVar27 & 0x1f) & 1
                        ) != 0) break;
                  }
                  else {
                    *(short *)(uVar39 + 0x134) = (short)uVar15;
                    *(undefined8 *)(uVar39 + 0x140) = 0;
                    *(undefined8 *)(uVar39 + 0x138) = 0;
                    *(undefined8 *)(uVar39 + 0x150) = 0;
                    *(undefined8 *)(uVar39 + 0x148) = 0;
                    *(undefined8 *)(uVar39 + 0x160) = 0;
                    *(undefined8 *)(uVar39 + 0x158) = 0;
                    *(undefined8 *)(uVar39 + 0x170) = 0;
                    *(undefined8 *)(uVar39 + 0x168) = 0;
                    *(undefined8 *)(uVar39 + 0x180) = 0;
                    *(undefined8 *)(uVar39 + 0x178) = 0;
                    *(undefined8 *)(uVar39 + 400) = 0;
                    *(undefined8 *)(uVar39 + 0x188) = 0;
                    *(undefined8 *)(uVar39 + 0x1a0) = 0;
                    *(undefined8 *)(uVar39 + 0x198) = 0;
                    *(undefined8 *)(uVar39 + 0x1b0) = 0;
                    *(undefined8 *)(uVar39 + 0x1a8) = 0;
                  }
                  lVar36 = enet_peer_queue_incoming_command(uVar39,puVar41,puVar41 + 1,uVar24,2,0);
                  if (lVar36 == 0) goto switchD_00d2a4f8_caseD_c;
                  lVar36 = uVar39 + (ulong)uVar23 * 4;
                  *(uint *)(lVar36 + 0x138) =
                       *(uint *)(lVar36 + 0x138) | 1 << (ulong)(uVar27 & 0x1f);
                }
                break;
              case 10:
                if (1 < *(int *)(uVar39 + 0x38) - 5U) goto switchD_00d2a4f8_caseD_c;
                if (*(int *)(uVar39 + 0x50) != 0) {
                  *(long *)(param_1 + 0xac0) = *(long *)(param_1 + 0xac0) + -1;
                }
                uVar23 = *(uint *)((long)puVar41 + 4);
                uVar15 = (uVar23 & 0xff00ff00) >> 8 | (uVar23 & 0xff00ff) << 8;
                uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
                *(uint *)(uVar39 + 0x50) = uVar15;
                uVar27 = (*(uint *)(puVar41 + 1) & 0xff00ff00) >> 8 |
                         (*(uint *)(puVar41 + 1) & 0xff00ff) << 8;
                *(uint *)(uVar39 + 0x54) = uVar27 >> 0x10 | uVar27 << 0x10;
                if (uVar23 == 0) {
                  uVar23 = param_1[4];
                  if (uVar23 != 0) goto LAB_00d2afac;
LAB_00d2afcc:
                  *(undefined4 *)(uVar39 + 0xd4) = 0x10000;
                }
                else {
                  uVar23 = param_1[4];
                  *(long *)(param_1 + 0xac0) = *(long *)(param_1 + 0xac0) + 1;
                  if (uVar23 == 0) {
LAB_00d2afac:
                    if (uVar15 <= uVar23) {
                      uVar15 = uVar23;
                    }
                    uVar15 = uVar15 >> 4 & 0xffff000;
                    *(uint *)(uVar39 + 0xd4) = uVar15;
                  }
                  else {
                    if (uVar23 <= uVar15) {
                      uVar15 = uVar23;
                    }
                    uVar15 = uVar15 >> 4 & 0xffff000;
                    *(uint *)(uVar39 + 0xd4) = uVar15;
                  }
                  if (uVar15 == 0) {
                    *(undefined4 *)(uVar39 + 0xd4) = 0x1000;
                  }
                  else if (0x10000 < uVar15) goto LAB_00d2afcc;
                }
                break;
              case 0xb:
                if (*(int *)(uVar39 + 0x38) - 5U < 2) {
                  uVar15 = (*(uint *)((long)puVar41 + 4) & 0xff00ff00) >> 8 |
                           (*(uint *)((long)puVar41 + 4) & 0xff00ff) << 8;
                  *(uint *)(uVar39 + 0xa4) = uVar15 >> 0x10 | uVar15 << 0x10;
                  uVar15 = (*(uint *)(puVar41 + 1) & 0xff00ff00) >> 8 |
                           (*(uint *)(puVar41 + 1) & 0xff00ff) << 8;
                  *(uint *)(uVar39 + 0x9c) = uVar15 >> 0x10 | uVar15 << 0x10;
                  uVar15 = (*(uint *)((long)puVar41 + 0xc) & 0xff00ff00) >> 8 |
                           (*(uint *)((long)puVar41 + 0xc) & 0xff00ff) << 8;
                  *(uint *)(uVar39 + 0xa0) = uVar15 >> 0x10 | uVar15 << 0x10;
                  goto LAB_00d2b3cc;
                }
                goto switchD_00d2a4f8_caseD_c;
              case 0xc:
                uVar24 = (ulong)*(byte *)((long)puVar41 + 1);
                if ((uVar24 < *(ulong *)(uVar39 + 0x48)) && (*(int *)(uVar39 + 0x38) - 5U < 2)) {
                  uVar15 = (uint)(*(ushort *)((long)puVar41 + 6) >> 8) |
                           (*(ushort *)((long)puVar41 + 6) & 0xff00ff) << 8;
                  if ((ulong)uVar15 <= *(ulong *)(param_1 + 0xac4)) {
                    puVar38 = (undefined8 *)((long)puVar38 + (ulong)uVar15);
                    if ((*(undefined8 **)(param_1 + 0xab4) <= puVar38) &&
                       (puVar38 <=
                        (undefined8 *)
                        ((long)*(undefined8 **)(param_1 + 0xab4) + *(long *)(param_1 + 0xab6)))) {
                      lVar36 = *(long *)(uVar39 + 0x40);
                      uVar25 = (uVar23 << 0x10) >> 0x1c;
                      lVar34 = lVar36 + uVar24 * 0x50;
                      uVar8 = *(ushort *)(lVar34 + 0x26);
                      uVar27 = uVar25 | 0x10;
                      if (uVar8 <= uVar23) {
                        uVar27 = uVar25;
                      }
                      if ((uVar27 < uVar8 >> 0xc) || ((uVar8 >> 0xc) + 7 <= uVar27)) break;
                      uVar25 = (uint)uVar8;
                      uVar27 = (uint)(*(ushort *)puVar2 >> 8) | (*(ushort *)puVar2 & 0xff00ff) << 8;
                      if ((uVar23 == uVar25) &&
                         (uVar27 <= *(ushort *)(lVar36 + uVar24 * 0x50 + 0x28))) break;
                      uVar33 = (*(uint *)(puVar41 + 1) & 0xff00ff00) >> 8 |
                               (*(uint *)(puVar41 + 1) & 0xff00ff) << 8;
                      uVar33 = uVar33 >> 0x10 | uVar33 << 0x10;
                      if (uVar33 < 0x100001) {
                        uVar11 = (*(uint *)((long)puVar41 + 0xc) & 0xff00ff00) >> 8;
                        uVar26 = uVar11 | (*(uint *)((long)puVar41 + 0xc) & 0xff00ff) << 8;
                        uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                        if (uVar26 < uVar33) {
                          uVar32 = (*(uint *)(puVar41 + 2) & 0xff00ff00) >> 8 |
                                   (*(uint *)(puVar41 + 2) & 0xff00ff) << 8;
                          uVar32 = uVar32 >> 0x10 | uVar32 << 0x10;
                          uVar30 = (ulong)uVar32;
                          if (((uVar30 <= *(ulong *)(param_1 + 0xac4)) &&
                              (uVar10 = (*(uint *)((long)puVar41 + 0x14) & 0xff00ff00) >> 8 |
                                        (*(uint *)((long)puVar41 + 0x14) & 0xff00ff) << 8,
                              uVar10 = uVar10 >> 0x10 | uVar10 << 0x10, uVar10 < uVar32)) &&
                             (uVar15 <= uVar32 - uVar10)) {
                            lVar36 = lVar36 + uVar24 * 0x50;
                            lVar43 = *(long *)(lVar36 + 0x48);
                            lVar36 = lVar36 + 0x40;
                            if (lVar43 != lVar36) {
                              if (uVar23 < uVar25) {
                                do {
                                  uVar8 = *(ushort *)(lVar43 + 0x10);
                                  if (uVar25 <= uVar8 || uVar8 < uVar23) break;
                                  if ((uVar8 <= uVar23) &&
                                     (uVar8 = *(ushort *)(lVar43 + 0x12), uVar8 <= uVar27))
                                  goto LAB_00d2a720;
                                  lVar43 = *(long *)(lVar43 + 8);
                                } while (lVar43 != lVar36);
                              }
                              else {
                                do {
                                  uVar8 = *(ushort *)(lVar43 + 0x10);
                                  uVar32 = (uint)uVar8;
                                  if (uVar25 <= uVar32) {
                                    if (uVar32 < uVar23) break;
                                    if ((uVar32 < uVar23 || uVar8 == uVar23) &&
                                       (uVar8 = *(ushort *)(lVar43 + 0x12), uVar8 <= uVar27))
                                    goto LAB_00d2a720;
                                  }
                                  lVar43 = *(long *)(lVar43 + 8);
                                } while (lVar43 != lVar36);
                              }
                            }
                            goto LAB_00d2a728;
                          }
                        }
                      }
                    }
                  }
                }
              default:
                goto switchD_00d2a4f8_caseD_c;
              }
              goto joined_r0x00d2b468;
            }
switchD_00d2a4f8_caseD_c:
            if (param_2 != (int *)0x0) goto LAB_00d2a23c;
          }
          else if (uVar30 < *(ulong *)(param_1 + 0xc)) {
            lVar34 = *(long *)(param_1 + 10);
            uVar39 = lVar34 + uVar30 * 0x1d0;
            if ((*(int *)(uVar39 + 0x38) != 0) && (*(int *)(uVar39 + 0x38) != 9)) {
              iVar17 = param_1[0xab2];
              iVar18 = *(int *)(lVar34 + uVar30 * 0x1d0 + 0x24);
              if ((((iVar17 == iVar18) &&
                   (iVar18 = iVar17, *(short *)puVar3 == *(short *)(lVar34 + uVar30 * 0x1d0 + 0x28))
                   ) || (iVar18 == -1)) &&
                 ((((0xffe < *(ushort *)(lVar34 + uVar30 * 0x1d0 + 0x18) >> 1 ||
                    ((uVar27 >> 0x1d & 3) == (uint)*(byte *)(lVar34 + uVar30 * 0x1d0 + 0x21))) &&
                   (puVar37 = *(ulong **)(lVar34 + uVar30 * 0x1d0 + 0x1c8),
                   (puVar44 == (ulong *)0x0) != (puVar37 != (ulong *)0x0))) &&
                  ((puVar44 == (ulong *)0x0 ||
                   ((*puVar44 ^ *puVar37 | puVar44[1] ^ puVar37[1] |
                     puVar44[2] ^ puVar37[2] | puVar44[3] ^ puVar37[3] |
                    puVar44[4] ^ puVar37[4] | puVar44[5] ^ puVar37[5]) == 0)))))) {
                if (pcVar28 != (code *)0x0) {
                  piVar35 = (int *)((long)puVar21 + lVar36 + -4);
                  iVar18 = *piVar35;
                  iVar17 = *(int *)(lVar34 + uVar30 * 0x1d0 + 0x1c);
                  goto LAB_00d2a338;
                }
                goto LAB_00d2a374;
              }
            }
          }
        }
      }
      else {
        iVar16 = (**(code **)(param_1 + 0xabc))(param_1,param_2);
        if (iVar16 != 1) {
          if (iVar16 != -1) {
            uVar24 = *(ulong *)(param_1 + 0xab6);
            goto LAB_00d2a2b8;
          }
          goto LAB_00d2b898;
        }
        if (param_2 == (int *)0x0) goto LAB_00d2a244;
LAB_00d2a23c:
        if (*param_2 != 0) {
          uVar19 = 1;
          goto LAB_00d2a174;
        }
      }
LAB_00d2a244:
      iVar14 = iVar14 + 1;
    } while (iVar14 != 0x100);
    uVar19 = FUN_00d2982c(param_1,param_2,1);
    if (((int)uVar19 == -1) || ((int)uVar19 == 1)) break;
    if (param_2 != (int *)0x0) {
      uVar19 = FUN_00d29f90(param_1,param_2);
      if (((int)uVar19 == -1) || ((int)uVar19 == 1)) break;
    }
    if ((uint)(param_1[0x10] - param_3) < 86400000) {
LAB_00d2b8b4:
      uVar19 = 0;
      if (*(long *)(lVar12 + 0x28) == local_70) {
        return;
      }
      goto LAB_00d2b8b0;
    }
    do {
      iVar14 = enet_time_get();
      param_1[0x10] = iVar14;
      if ((uint)(iVar14 - param_3) < 86400000) goto LAB_00d2b8b4;
      uVar15 = iVar14 - param_3;
      if ((uint)(param_3 - iVar14) < 86400000) {
        uVar15 = param_3 - iVar14;
      }
      local_b4 = 6;
      iVar14 = enet_socket_wait(*param_1,&local_b4,uVar15);
      if (iVar14 != 0) goto LAB_00d2b898;
    } while (((byte)local_b4 >> 2 & 1) != 0);
    iVar14 = enet_time_get();
    uVar19 = 0;
    param_1[0x10] = iVar14;
    if (((byte)local_b4 >> 1 & 1) == 0) break;
  }
LAB_00d2a174:
  if (*(long *)(lVar12 + 0x28) == local_70) {
    return;
  }
LAB_00d2b8b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar19);
LAB_00d2a720:
  if (uVar8 < uVar27) {
LAB_00d2a728:
    lVar43 = enet_peer_queue_incoming_command(uVar39,puVar41,0,uVar30,8);
    if (lVar43 == 0) goto switchD_00d2a4f8_caseD_c;
  }
  else if ((((*(byte *)(lVar43 + 0x14) & 0xf) != 0xc) ||
           (*(ulong *)(*(long *)(lVar43 + 0x58) + 0x18) != uVar30)) ||
          (uVar33 != *(uint *)(lVar43 + 0x44))) goto switchD_00d2a4f8_caseD_c;
  lVar36 = *(long *)(lVar43 + 0x50);
  uVar24 = (ulong)(uVar26 >> 5);
  uVar23 = 1 << (ulong)((uVar11 & 0x1f0000) >> 0x10);
  if ((*(uint *)(lVar36 + uVar24 * 4) & uVar23) == 0) {
    lVar29 = uVar24 * 4;
    *(int *)(lVar43 + 0x48) = *(int *)(lVar43 + 0x48) + -1;
    *(uint *)(lVar36 + lVar29) = *(uint *)(lVar36 + lVar29) | uVar23;
    uVar24 = *(ulong *)(*(long *)(lVar43 + 0x58) + 0x18);
    uVar23 = (int)uVar24 - uVar10;
    if (uVar10 + uVar15 <= uVar24) {
      uVar23 = uVar15;
    }
    memcpy((void *)(*(long *)(*(long *)(lVar43 + 0x58) + 0x10) + (ulong)uVar10),puVar41 + 3,
           (ulong)uVar23);
    if (*(int *)(lVar43 + 0x48) == 0) {
      enet_peer_dispatch_incoming_unreliable_commands(uVar39,lVar34,0);
    }
  }
  goto joined_r0x00d2b468;
LAB_00d2b2ec:
  if (uVar8 < uVar27) {
LAB_00d2b2f4:
    uStack_88 = puVar41[3];
    local_90 = puVar41[2];
    local_78 = puVar41[5];
    local_80 = puVar41[4];
    uStack_98 = puVar41[1];
    local_a0._0_4_ = CONCAT22((short)uVar27,(short)*puVar41);
    lVar43 = enet_peer_queue_incoming_command(uVar39,&local_a0,0,uVar30,1);
    if (lVar43 == 0) goto switchD_00d2a4f8_caseD_c;
  }
  else if ((((*(byte *)(lVar43 + 0x14) & 0xf) != 8) ||
           (*(ulong *)(*(long *)(lVar43 + 0x58) + 0x18) != uVar30)) ||
          (uVar23 != *(uint *)(lVar43 + 0x44))) goto switchD_00d2a4f8_caseD_c;
  uVar24 = (ulong)(uVar25 >> 5);
  lVar34 = *(long *)(lVar43 + 0x50);
  uVar23 = 1 << (ulong)((uVar33 & 0x1f0000) >> 0x10);
  if ((*(uint *)(lVar34 + uVar24 * 4) & uVar23) == 0) {
    lVar29 = uVar24 * 4;
    *(int *)(lVar43 + 0x48) = *(int *)(lVar43 + 0x48) + -1;
    *(uint *)(lVar34 + lVar29) = *(uint *)(lVar34 + lVar29) | uVar23;
    uVar24 = *(ulong *)(*(long *)(lVar43 + 0x58) + 0x18);
    uVar23 = (int)uVar24 - uVar11;
    if (uVar11 + uVar15 <= uVar24) {
      uVar23 = uVar15;
    }
    memcpy((void *)(*(long *)(*(long *)(lVar43 + 0x58) + 0x10) + (ulong)uVar11),puVar41 + 3,
           (ulong)uVar23);
    if (*(int *)(lVar43 + 0x48) == 0) {
      enet_peer_dispatch_incoming_reliable_commands(uVar39,lVar36,0);
    }
  }
joined_r0x00d2b468:
  if (uVar39 != 0) {
LAB_00d2b3cc:
    if ((char)*(byte *)puVar41 < '\0') {
      if (-1 < iVar16) goto switchD_00d2a4f8_caseD_c;
      uVar15 = *(uint *)(uVar39 + 0x38);
      if ((9 < uVar15) ||
         (((1 << (ulong)(uVar15 & 0x1f) & 0x285U) == 0 &&
          ((uVar15 != 8 || ((*(byte *)puVar41 & 0xf) == 4)))))) {
        enet_peer_queue_acknowledgement
                  (uVar39,puVar41,(uint)(puVar21[1] >> 8) | (puVar21[1] & 0xff00ff) << 8);
      }
    }
  }
  puVar20 = (undefined8 *)(*(long *)(param_1 + 0xab4) + *(long *)(param_1 + 0xab6));
  puVar41 = puVar38;
  if (puVar20 <= puVar38) goto switchD_00d2a4f8_caseD_c;
  goto LAB_00d2a484;
LAB_00d2b898:
  uVar19 = 0xffffffff;
  if (*(long *)(lVar12 + 0x28) == local_70) {
    return;
  }
  goto LAB_00d2b8b0;
}


