// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_peer_queue_outgoing_command
// Entry Point: 00d2842c
// Size: 140 bytes
// Signature: undefined enet_peer_queue_outgoing_command(void)


long enet_peer_queue_outgoing_command
               (undefined8 param_1,undefined8 *param_2,long *param_3,undefined4 param_4,
               undefined2 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = enet_malloc(0x60);
  if (lVar1 != 0) {
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    uVar3 = param_2[5];
    uVar2 = param_2[4];
    uVar7 = param_2[1];
    uVar6 = *param_2;
    *(undefined4 *)(lVar1 + 0x20) = param_4;
    *(undefined8 *)(lVar1 + 0x50) = uVar3;
    *(undefined8 *)(lVar1 + 0x48) = uVar2;
    *(undefined8 *)(lVar1 + 0x40) = uVar5;
    *(undefined8 *)(lVar1 + 0x38) = uVar4;
    *(undefined8 *)(lVar1 + 0x30) = uVar7;
    *(undefined8 *)(lVar1 + 0x28) = uVar6;
    *(undefined2 *)(lVar1 + 0x24) = param_5;
    *(long **)(lVar1 + 0x58) = param_3;
    if (param_3 != (long *)0x0) {
      *param_3 = *param_3 + 1;
    }
    enet_peer_setup_outgoing_command(param_1,lVar1);
  }
  return lVar1;
}


