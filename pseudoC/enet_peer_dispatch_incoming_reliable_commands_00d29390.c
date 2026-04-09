// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_peer_dispatch_incoming_reliable_commands
// Entry Point: 00d29390
// Size: 256 bytes
// Signature: undefined enet_peer_dispatch_incoming_reliable_commands(void)


void enet_peer_dispatch_incoming_reliable_commands(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  short sVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)(param_2 + 0x30);
  plVar4 = (long *)*plVar6;
  for (plVar7 = plVar4;
      (plVar3 = plVar6, plVar7 != plVar6 && (plVar3 = plVar7, *(int *)(plVar7 + 9) == 0));
      plVar7 = (long *)*plVar7) {
    sVar2 = *(short *)(plVar7 + 2);
    if (sVar2 != (short)(*(short *)(param_2 + 0x26) + 1)) {
      if (plVar7 == plVar4) {
        return;
      }
      goto LAB_00d29414;
    }
    iVar1 = *(int *)((long)plVar7 + 0x44);
    *(short *)(param_2 + 0x26) = sVar2;
    if (iVar1 != 0) {
      *(short *)(param_2 + 0x26) = sVar2 + (short)iVar1 + -1;
    }
  }
  plVar7 = plVar3;
  if (plVar7 != plVar4) {
LAB_00d29414:
    lVar5 = plVar7[1];
    *(undefined2 *)(param_2 + 0x28) = 0;
    enet_list_move(param_1 + 0x120,plVar4,lVar5);
    if ((*(ushort *)(param_1 + 0x130) & 1) == 0) {
      enet_list_insert(*(long *)(param_1 + 0x10) + 0x48,param_1);
      *(ushort *)(param_1 + 0x130) = *(ushort *)(param_1 + 0x130) | 1;
    }
    if (*(long **)(long *)(param_2 + 0x40) != (long *)(param_2 + 0x40)) {
      enet_peer_dispatch_incoming_unreliable_commands(param_1,param_2,param_3);
      return;
    }
  }
  return;
}


