// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_peer_queue_acknowledgement
// Entry Point: 00d2909c
// Size: 216 bytes
// Signature: undefined enet_peer_queue_acknowledgement(void)


long enet_peer_queue_acknowledgement(long param_1,undefined8 *param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((ulong)*(byte *)((long)param_2 + 1) < *(ulong *)(param_1 + 0x48)) {
    uVar4 = *(ushort *)((long)param_2 + 2) >> 0xc;
    uVar3 = *(ushort *)
             (*(long *)(param_1 + 0x40) + (ulong)*(byte *)((long)param_2 + 1) * 0x50 + 0x26);
    uVar5 = uVar3 >> 0xc;
    uVar1 = uVar4 | 0x10;
    if (uVar3 <= *(ushort *)((long)param_2 + 2)) {
      uVar1 = uVar4;
    }
    uVar3 = uVar5 + 7;
    uVar5 = uVar5 + 8;
    if (uVar3 <= uVar1 && uVar1 < uVar5 || uVar3 <= uVar1 && uVar1 == uVar5) {
      return 0;
    }
  }
  lVar6 = enet_malloc(0x48);
  if (lVar6 != 0) {
    iVar2 = *(int *)(param_1 + 100);
    *(uint *)(lVar6 + 0x10) = param_3 & 0xffff;
    *(int *)(param_1 + 100) = iVar2 + 8;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    uVar7 = param_2[4];
    uVar11 = param_2[1];
    uVar10 = *param_2;
    *(undefined8 *)(lVar6 + 0x3c) = param_2[5];
    *(undefined8 *)(lVar6 + 0x34) = uVar7;
    *(undefined8 *)(lVar6 + 0x2c) = uVar9;
    *(undefined8 *)(lVar6 + 0x24) = uVar8;
    *(undefined8 *)(lVar6 + 0x1c) = uVar11;
    *(undefined8 *)(lVar6 + 0x14) = uVar10;
    enet_list_insert(param_1 + 0xe0,lVar6);
  }
  return lVar6;
}


