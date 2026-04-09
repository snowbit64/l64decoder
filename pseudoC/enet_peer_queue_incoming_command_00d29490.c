// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_peer_queue_incoming_command
// Entry Point: 00d29490
// Size: 852 bytes
// Signature: undefined enet_peer_queue_incoming_command(void)


undefined *
enet_peer_queue_incoming_command
          (long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5
          ,uint param_6)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  long *plVar7;
  void *__s;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong __n;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  if (*(int *)(param_1 + 0x38) != 6) {
    lVar13 = *(long *)(param_1 + 0x40);
    uVar14 = (ulong)*(byte *)((long)param_2 + 1);
    if ((*(byte *)param_2 & 0xf) == 9) {
switchD_00d2964c_caseD_9:
      uVar15 = 0;
      puVar10 = (undefined8 *)(lVar13 + uVar14 * 0x50 + 0x40);
      goto LAB_00d294fc;
    }
    uVar3 = *(ushort *)((long)param_2 + 2);
    uVar4 = *(ushort *)(lVar13 + uVar14 * 0x50 + 0x26);
    uVar5 = uVar3 >> 0xc | 0x10;
    if (uVar4 <= uVar3) {
      uVar5 = uVar3 >> 0xc;
    }
    if ((uVar4 >> 0xc <= uVar5) && (uVar5 < (ushort)((uVar4 >> 0xc) + 7))) {
      switch(*(byte *)param_2 & 0xf) {
      case 6:
      case 8:
        if (uVar3 != uVar4) {
          lVar9 = lVar13 + uVar14 * 0x50;
          puVar1 = (undefined8 *)(lVar9 + 0x30);
          puVar10 = *(undefined8 **)(lVar9 + 0x38);
          if (puVar10 != puVar1) {
            if (uVar3 < uVar4) {
              do {
                uVar5 = *(ushort *)(puVar10 + 2);
                if (uVar4 <= uVar5) goto LAB_00d297d8;
                if (uVar5 <= uVar3) goto LAB_00d297d0;
                puVar10 = (undefined8 *)puVar10[1];
              } while (puVar10 != puVar1);
            }
            else {
              do {
                uVar5 = *(ushort *)(puVar10 + 2);
                if (uVar4 <= uVar5 && uVar5 <= uVar3) goto LAB_00d297d0;
                puVar10 = (undefined8 *)puVar10[1];
              } while (puVar10 != puVar1);
            }
          }
          uVar15 = 0;
          puVar10 = puVar1;
          goto LAB_00d294fc;
        }
        break;
      case 7:
      case 0xc:
        uVar6 = (uint)(*(ushort *)((long)param_2 + 4) >> 8) |
                (*(ushort *)((long)param_2 + 4) & 0xff00ff) << 8;
        uVar15 = (undefined2)uVar6;
        if ((uVar3 != uVar4) || (*(ushort *)(lVar13 + uVar14 * 0x50 + 0x28) < uVar6)) {
          lVar9 = lVar13 + uVar14 * 0x50;
          puVar1 = (undefined8 *)(lVar9 + 0x40);
          puVar11 = *(undefined8 **)(lVar9 + 0x48);
          puVar10 = puVar1;
          if (puVar11 != puVar1) {
            if (uVar3 < uVar4) {
              do {
                uVar5 = *(ushort *)(puVar11 + 2);
                puVar10 = puVar11;
                if ((uVar4 <= uVar5 || uVar5 <= uVar3) && (uVar4 <= uVar5 || uVar3 != uVar5)) break;
                if ((uVar5 <= uVar3) && (uVar5 = *(ushort *)((long)puVar11 + 0x12), uVar5 <= uVar6))
                goto LAB_00d29770;
                puVar11 = (undefined8 *)puVar11[1];
                puVar10 = puVar1;
              } while (puVar11 != puVar1);
            }
            else {
              do {
                uVar5 = *(ushort *)(puVar11 + 2);
                if (uVar4 <= uVar5) {
                  puVar10 = puVar11;
                  if (uVar5 < uVar3) break;
                  if ((uVar5 <= uVar3) &&
                     (uVar5 = *(ushort *)((long)puVar11 + 0x12), uVar5 <= uVar6)) goto LAB_00d29770;
                }
                puVar11 = (undefined8 *)puVar11[1];
                puVar10 = puVar1;
              } while (puVar11 != puVar1);
            }
          }
          goto LAB_00d294fc;
        }
        break;
      case 9:
        goto switchD_00d2964c_caseD_9;
      }
    }
  }
  goto switchD_00d2964c_caseD_a;
LAB_00d297d0:
  if (uVar3 <= uVar5) goto switchD_00d2964c_caseD_a;
LAB_00d297d8:
  uVar15 = 0;
LAB_00d294fc:
  if ((*(ulong *)(param_1 + 0x1c0) < *(ulong *)(*(long *)(param_1 + 0x10) + 0x2b18)) &&
     (plVar7 = (long *)enet_packet_create(param_3,param_4,param_5), plVar7 != (long *)0x0)) {
    puVar12 = (undefined *)enet_malloc(0x60);
    if (puVar12 != (undefined *)0x0) {
      uVar2 = *(undefined2 *)((long)param_2 + 2);
      *(undefined2 *)(puVar12 + 0x12) = uVar15;
      *(undefined2 *)(puVar12 + 0x10) = uVar2;
      uVar20 = param_2[3];
      uVar19 = param_2[2];
      uVar16 = param_2[5];
      uVar8 = param_2[4];
      uVar18 = param_2[1];
      uVar17 = *param_2;
      *(uint *)(puVar12 + 0x44) = param_6;
      *(uint *)(puVar12 + 0x48) = param_6;
      *(undefined8 *)(puVar12 + 0x3c) = uVar16;
      *(undefined8 *)(puVar12 + 0x34) = uVar8;
      *(undefined8 *)(puVar12 + 0x2c) = uVar20;
      *(undefined8 *)(puVar12 + 0x24) = uVar19;
      *(undefined8 *)(puVar12 + 0x1c) = uVar18;
      *(undefined8 *)(puVar12 + 0x14) = uVar17;
      *(undefined8 *)(puVar12 + 0x50) = 0;
      *(long **)(puVar12 + 0x58) = plVar7;
      if (param_6 == 0) {
LAB_00d29594:
        lVar9 = *(long *)(param_1 + 0x1c0);
        uVar8 = *puVar10;
        lVar13 = lVar13 + uVar14 * 0x50;
        *plVar7 = *plVar7 + 1;
        *(long *)(param_1 + 0x1c0) = lVar9 + plVar7[3];
        enet_list_insert(uVar8,puVar12);
        if (((*(byte *)param_2 & 0xf) != 8) && ((*(byte *)param_2 & 0xf) != 6)) {
          enet_peer_dispatch_incoming_unreliable_commands(param_1,lVar13,puVar12);
          return puVar12;
        }
        enet_peer_dispatch_incoming_reliable_commands(param_1,lVar13,puVar12);
        return puVar12;
      }
      if (param_6 < 0x100001) {
        __n = (ulong)(param_6 + 0x1f >> 3 & 0x1ffffffc);
        __s = (void *)enet_malloc(__n);
        *(void **)(puVar12 + 0x50) = __s;
        if (__s != (void *)0x0) {
          memset(__s,0,__n);
          goto LAB_00d29594;
        }
      }
      enet_free(puVar12);
    }
    if (*plVar7 == 0) {
      enet_packet_destroy(plVar7);
    }
  }
  goto LAB_00d29798;
LAB_00d29770:
  puVar10 = puVar11;
  if (uVar5 < uVar6) goto LAB_00d294fc;
switchD_00d2964c_caseD_a:
  if (param_6 == 0) {
    puVar12 = &DAT_02122e40;
  }
  else {
LAB_00d29798:
    puVar12 = (undefined *)0x0;
  }
  return puVar12;
}


