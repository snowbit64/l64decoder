// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_peer_reset_queues
// Entry Point: 00d289f0
// Size: 720 bytes
// Signature: undefined enet_peer_reset_queues(void)


void enet_peer_reset_queues(long param_1)

{
  void **ppvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  void **ppvVar8;
  
  if ((*(ushort *)(param_1 + 0x130) & 1) != 0) {
    enet_list_remove(param_1);
    *(ushort *)(param_1 + 0x130) = *(ushort *)(param_1 + 0x130) & 0xfffe;
  }
  puVar7 = (undefined8 *)(param_1 + 0xe0);
  puVar2 = (undefined8 *)*puVar7;
  while (puVar2 != puVar7) {
    pvVar3 = (void *)enet_list_remove();
    enet_free(pvVar3);
    puVar2 = (undefined8 *)*puVar7;
  }
  puVar7 = (undefined8 *)(param_1 + 0xf0);
  puVar2 = (undefined8 *)*puVar7;
  while (puVar2 != puVar7) {
    pvVar3 = (void *)enet_list_remove();
    plVar4 = *(long **)((long)pvVar3 + 0x58);
    if ((plVar4 != (long *)0x0) && (lVar6 = *plVar4, *plVar4 = lVar6 + -1, lVar6 + -1 == 0)) {
      enet_packet_destroy();
    }
    enet_free(pvVar3);
    puVar2 = (undefined8 *)*puVar7;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x100);
  while (puVar2 != (undefined8 *)(param_1 + 0x100)) {
    pvVar3 = (void *)enet_list_remove();
    plVar4 = *(long **)((long)pvVar3 + 0x58);
    if ((plVar4 != (long *)0x0) && (lVar6 = *plVar4, *plVar4 = lVar6 + -1, lVar6 + -1 == 0)) {
      enet_packet_destroy();
    }
    enet_free(pvVar3);
    puVar2 = *(undefined8 **)(undefined8 *)(param_1 + 0x100);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x110);
  while (puVar2 != (undefined8 *)(param_1 + 0x110)) {
    pvVar3 = (void *)enet_list_remove();
    plVar4 = *(long **)((long)pvVar3 + 0x58);
    if ((plVar4 != (long *)0x0) && (lVar6 = *plVar4, *plVar4 = lVar6 + -1, lVar6 + -1 == 0)) {
      enet_packet_destroy();
    }
    enet_free(pvVar3);
    puVar2 = *(undefined8 **)(undefined8 *)(param_1 + 0x110);
  }
  ppvVar1 = (void **)*(void **)(param_1 + 0x120);
  while (ppvVar1 != (void **)(param_1 + 0x120)) {
    pvVar3 = *ppvVar1;
    enet_list_remove(ppvVar1);
    plVar4 = (long *)ppvVar1[0xb];
    if ((plVar4 == (long *)0x0) || (lVar6 = *plVar4, *plVar4 = lVar6 + -1, lVar6 + -1 != 0)) {
      pvVar5 = ppvVar1[10];
    }
    else {
      enet_packet_destroy();
      pvVar5 = ppvVar1[10];
    }
    if (pvVar5 != (void *)0x0) {
      enet_free(pvVar5);
    }
    enet_free(ppvVar1);
    ppvVar1 = (void **)pvVar3;
  }
  pvVar3 = *(void **)(param_1 + 0x40);
  if ((pvVar3 != (void *)0x0) && (*(long *)(param_1 + 0x48) != 0)) {
    pvVar5 = pvVar3;
    if (0 < *(long *)(param_1 + 0x48)) {
      do {
        ppvVar1 = (void **)*(void **)((long)pvVar5 + 0x30U);
        while (ppvVar1 != (void **)((long)pvVar5 + 0x30U)) {
          ppvVar8 = (void **)*ppvVar1;
          enet_list_remove(ppvVar1);
          plVar4 = (long *)ppvVar1[0xb];
          if ((plVar4 == (long *)0x0) || (lVar6 = *plVar4, *plVar4 = lVar6 + -1, lVar6 + -1 != 0)) {
            pvVar3 = ppvVar1[10];
          }
          else {
            enet_packet_destroy();
            pvVar3 = ppvVar1[10];
          }
          if (pvVar3 != (void *)0x0) {
            enet_free(pvVar3);
          }
          enet_free(ppvVar1);
          ppvVar1 = ppvVar8;
        }
        ppvVar1 = (void **)*(void **)((long)pvVar5 + 0x40U);
        while (ppvVar1 != (void **)((long)pvVar5 + 0x40U)) {
          ppvVar8 = (void **)*ppvVar1;
          enet_list_remove(ppvVar1);
          plVar4 = (long *)ppvVar1[0xb];
          if ((plVar4 == (long *)0x0) || (lVar6 = *plVar4, *plVar4 = lVar6 + -1, lVar6 + -1 != 0)) {
            pvVar3 = ppvVar1[10];
          }
          else {
            enet_packet_destroy();
            pvVar3 = ppvVar1[10];
          }
          if (pvVar3 != (void *)0x0) {
            enet_free(pvVar3);
          }
          enet_free(ppvVar1);
          ppvVar1 = ppvVar8;
        }
        pvVar3 = *(void **)(param_1 + 0x40);
        pvVar5 = (void *)((long)pvVar5 + 0x50);
      } while (pvVar5 < (void *)((long)pvVar3 + *(long *)(param_1 + 0x48) * 0x50));
    }
    enet_free(pvVar3);
  }
  *(void **)(param_1 + 0x40) = (void *)0x0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}


