// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_host_connect
// Entry Point: 00d277d0
// Size: 652 bytes
// Signature: undefined enet_host_connect(void)


ulong enet_host_connect(long param_1,undefined8 *param_2,ulong param_3,uint param_4,
                       undefined8 *param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined2 local_88 [2];
  ushort local_84;
  undefined local_82;
  undefined local_81;
  uint local_80;
  uint uStack_7c;
  int local_78;
  uint uStack_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  uint uStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = param_3;
  if (0xfe < param_3) {
    uVar1 = 0xff;
  }
  if (param_3 == 0) {
    uVar1 = 1;
  }
  if (0 < *(long *)(param_1 + 0x30)) {
    uVar7 = *(ulong *)(param_1 + 0x28);
    uVar6 = uVar7 + *(long *)(param_1 + 0x30) * 0x1d0;
    do {
      if (*(int *)(uVar7 + 0x38) == 0) {
        lVar3 = enet_malloc(uVar1 * 0x50);
        *(long *)(uVar7 + 0x40) = lVar3;
        if (lVar3 != 0) {
          *(ulong *)(uVar7 + 0x48) = uVar1;
          *(undefined4 *)(uVar7 + 0x38) = 1;
          *(undefined8 *)(uVar7 + 0x24) = *param_2;
          uVar5 = *(int *)(param_1 + 0x1c) + 0x6d2b79f5;
          *(uint *)(param_1 + 0x1c) = uVar5;
          uVar5 = (uVar5 ^ uVar5 >> 0xf) * (uVar5 | 1);
          uVar5 = uVar5 + (uVar5 ^ uVar5 >> 7) * (uVar5 | 0x3d) ^ uVar5;
          *(uint *)(uVar7 + 0x1c) = uVar5 ^ uVar5 >> 0xe;
          if (param_5 == (undefined8 *)0x0) {
            *(undefined8 *)(uVar7 + 0x1c8) = 0;
            uVar5 = *(uint *)(param_1 + 0x10);
            if (uVar5 == 0) goto LAB_00d2793c;
LAB_00d278d8:
            uVar5 = uVar5 >> 4 & 0xffff000;
            *(uint *)(uVar7 + 0xd4) = uVar5;
            if (uVar5 == 0) {
              uVar5 = 0x1000;
            }
            else {
              if (uVar5 < 0x10001) goto joined_r0x00d27960;
              uVar5 = 0x10000;
            }
            *(uint *)(uVar7 + 0xd4) = uVar5;
          }
          else {
            puVar4 = (undefined8 *)enet_malloc(0x30);
            *(undefined8 **)(uVar7 + 0x1c8) = puVar4;
            uVar9 = *param_5;
            uVar11 = param_5[3];
            uVar10 = param_5[2];
            uVar13 = param_5[5];
            uVar12 = param_5[4];
            puVar4[1] = param_5[1];
            *puVar4 = uVar9;
            puVar4[3] = uVar11;
            puVar4[2] = uVar10;
            puVar4[5] = uVar13;
            puVar4[4] = uVar12;
            uVar5 = *(uint *)(param_1 + 0x10);
            if (uVar5 != 0) goto LAB_00d278d8;
LAB_00d2793c:
            uVar5 = 0x10000;
            *(undefined4 *)(uVar7 + 0xd4) = 0x10000;
          }
joined_r0x00d27960:
          if (0 < (long)uVar1) {
            puVar8 = *(undefined4 **)(uVar7 + 0x40);
            do {
              *puVar8 = 0;
              *(undefined4 *)((long)puVar8 + 0x26) = 0;
              enet_list_clear(puVar8 + 0xc);
              enet_list_clear(puVar8 + 0x10);
              *(undefined2 *)(puVar8 + 1) = 0;
              *(undefined8 *)((long)puVar8 + 0xe) = 0;
              *(undefined8 *)((long)puVar8 + 6) = 0;
              *(undefined8 *)((long)puVar8 + 0x1e) = 0;
              *(undefined8 *)((long)puVar8 + 0x16) = 0;
              puVar8 = puVar8 + 0x14;
            } while (puVar8 < (undefined4 *)(*(long *)(uVar7 + 0x40) + uVar1 * 0x50));
            uVar5 = *(uint *)(uVar7 + 0xd4);
          }
          uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
          uStack_7c = uVar5 >> 0x10 | uVar5 << 0x10;
          local_88[0] = 0xff82;
          uVar5 = (*(uint *)(param_1 + 0xc) & 0xff00ff00) >> 8 |
                  (*(uint *)(param_1 + 0xc) & 0xff00ff) << 8;
          uStack_74 = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar5 = (*(uint *)(param_1 + 0x10) & 0xff00ff00) >> 8 |
                  (*(uint *)(param_1 + 0x10) & 0xff00ff) << 8;
          local_70 = uVar5 >> 0x10 | uVar5 << 0x10;
          local_84 = *(ushort *)(uVar7 + 0x1a) >> 8 |
                     (ushort)((*(ushort *)(uVar7 + 0x1a) & 0xff00ff) << 8);
          local_82 = *(undefined *)(uVar7 + 0x21);
          local_81 = *(undefined *)(uVar7 + 0x20);
          local_78 = (int)uVar1 << 0x18;
          uVar5 = (param_4 & 0xff00ff00) >> 8 | (param_4 & 0xff00ff) << 8;
          uStack_5c = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar5 = (*(uint *)(uVar7 + 0xd0) & 0xff00ff00) >> 8 |
                  (*(uint *)(uVar7 + 0xd0) & 0xff00ff) << 8;
          local_80 = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar5 = (*(uint *)(uVar7 + 0xa4) & 0xff00ff00) >> 8 |
                  (*(uint *)(uVar7 + 0xa4) & 0xff00ff) << 8;
          local_6c = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar5 = (*(uint *)(uVar7 + 0x9c) & 0xff00ff00) >> 8 |
                  (*(uint *)(uVar7 + 0x9c) & 0xff00ff) << 8;
          local_68 = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar5 = (*(uint *)(uVar7 + 0xa0) & 0xff00ff00) >> 8 |
                  (*(uint *)(uVar7 + 0xa0) & 0xff00ff) << 8;
          local_64 = uVar5 >> 0x10 | uVar5 << 0x10;
          local_60 = *(undefined4 *)(uVar7 + 0x1c);
          enet_peer_queue_outgoing_command(uVar7,local_88,0,0,0);
          if (*(long *)(lVar2 + 0x28) == local_58) {
            return uVar7;
          }
          goto LAB_00d27a58;
        }
        break;
      }
      uVar7 = uVar7 + 0x1d0;
    } while (uVar7 < uVar6);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return 0;
  }
LAB_00d27a58:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


