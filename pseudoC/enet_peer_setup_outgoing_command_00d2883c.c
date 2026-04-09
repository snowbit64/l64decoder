// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_peer_setup_outgoing_command
// Entry Point: 00d2883c
// Size: 284 bytes
// Signature: undefined enet_peer_setup_outgoing_command(void)


void enet_peer_setup_outgoing_command(long param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ushort *puVar7;
  ushort *puVar8;
  long lVar9;
  
  iVar3 = enet_protocol_command_size(*(undefined *)(param_2 + 0x28));
  *(uint *)(param_1 + 100) = *(int *)(param_1 + 100) + iVar3 + (uint)*(ushort *)(param_2 + 0x24);
  uVar6 = (ulong)*(byte *)(param_2 + 0x29);
  if (uVar6 == 0xff) {
    uVar5 = *(ushort *)(param_1 + 0xdc) + 1;
    uVar4 = 0;
    *(short *)(param_1 + 0xdc) = (short)uVar5;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x40);
    puVar8 = (ushort *)(lVar9 + uVar6 * 0x50);
    if ((char)*(byte *)(param_2 + 0x28) < '\0') {
      uVar4 = 0;
      uVar5 = *puVar8 + 1;
      *puVar8 = (ushort)uVar5;
      *(undefined2 *)(lVar9 + uVar6 * 0x50 + 2) = 0;
    }
    else if ((*(byte *)(param_2 + 0x28) >> 6 & 1) == 0) {
      puVar7 = (ushort *)(lVar9 + uVar6 * 0x50 + 2);
      uVar2 = *puVar7;
      uVar4 = (uint)uVar2;
      if (*(int *)(param_2 + 0x20) == 0) {
        uVar4 = uVar2 + 1;
        *puVar7 = (ushort)uVar4;
      }
      uVar5 = (uint)*puVar8;
    }
    else {
      uVar5 = 0;
      uVar4 = 0;
      *(short *)(param_1 + 0x136) = *(short *)(param_1 + 0x136) + 1;
    }
  }
  *(short *)(param_2 + 0x10) = (short)uVar5;
  *(short *)(param_2 + 0x12) = (short)uVar4;
  *(undefined2 *)(param_2 + 0x26) = 0;
  bVar1 = *(byte *)(param_2 + 0x28) & 0xf;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(ushort *)(param_2 + 0x2a) = (ushort)(uVar5 >> 8) & 0xff | (ushort)((uVar5 & 0xff00ff) << 8);
  if (bVar1 != 7) {
    if (bVar1 != 9) goto LAB_00d28944;
    uVar4 = (uint)*(ushort *)(param_1 + 0x136);
  }
  *(ushort *)(param_2 + 0x2c) = (ushort)(uVar4 >> 8) & 0xff | (ushort)((uVar4 & 0xff00ff) << 8);
LAB_00d28944:
  enet_list_insert(param_1 + 0x110,param_2);
  return;
}


