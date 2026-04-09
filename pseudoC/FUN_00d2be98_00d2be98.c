// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d2be98
// Entry Point: 00d2be98
// Size: 412 bytes
// Signature: undefined FUN_00d2be98(void)


byte FUN_00d2be98(long param_1,uint param_2,uint param_3)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  short *psVar8;
  void **ppvVar9;
  void **ppvVar10;
  
  param_3 = param_3 & 0xff;
  uVar5 = (ulong)param_3;
  param_2 = param_2 & 0xffff;
  ppvVar10 = (void **)(param_1 + 0xf0);
  for (ppvVar9 = (void **)*ppvVar10; ppvVar9 != ppvVar10; ppvVar9 = (void **)*ppvVar9) {
    if ((*(ushort *)(ppvVar9 + 2) == param_2) && (*(byte *)((long)ppvVar9 + 0x29) == param_3)) {
      bVar3 = false;
      uVar7 = *(ulong *)(param_1 + 0x48);
      goto joined_r0x00d2bef4;
    }
  }
  ppvVar9 = *(void ***)(param_1 + 0x110);
  do {
    if (ppvVar9 == (void **)(param_1 + 0x110)) {
      return 0;
    }
    if (*(char *)(ppvVar9 + 5) < '\0') {
      if (*(short *)((long)ppvVar9 + 0x26) == 0) {
        return 0;
      }
      if ((*(ushort *)(ppvVar9 + 2) == param_2) && (*(byte *)((long)ppvVar9 + 0x29) == param_3)) {
        bVar3 = true;
        uVar7 = *(ulong *)(param_1 + 0x48);
joined_r0x00d2bef4:
        if (uVar5 < uVar7) {
          lVar6 = *(long *)(param_1 + 0x40);
          psVar8 = (short *)(lVar6 + uVar5 * 0x50 + (ulong)(param_2 >> 0xc) * 2 + 6);
          sVar2 = *psVar8;
          if ((sVar2 != 0) && (*psVar8 = sVar2 + -1, sVar2 == 1)) {
            lVar6 = lVar6 + uVar5 * 0x50;
            *(ushort *)(lVar6 + 4) =
                 *(ushort *)(lVar6 + 4) & ((ushort)(1 << (ulong)(param_2 >> 0xc)) ^ 0xffff);
          }
        }
        bVar1 = *(byte *)(ppvVar9 + 5);
        enet_list_remove(ppvVar9);
        plVar4 = (long *)ppvVar9[0xb];
        if (plVar4 != (long *)0x0) {
          if (!bVar3) {
            *(uint *)(param_1 + 0xd8) =
                 *(int *)(param_1 + 0xd8) - (uint)*(ushort *)((long)ppvVar9 + 0x24);
          }
          lVar6 = *plVar4;
          *plVar4 = lVar6 + -1;
          if (lVar6 + -1 == 0) {
            *(uint *)(plVar4 + 1) = *(uint *)(plVar4 + 1) | 0x100;
            enet_packet_destroy();
          }
        }
        enet_free(ppvVar9);
        ppvVar9 = (void **)*ppvVar10;
        if (ppvVar9 != ppvVar10) {
          *(int *)(param_1 + 0x70) = *(int *)(ppvVar9 + 3) + *(int *)((long)ppvVar9 + 0x14);
        }
        return bVar1 & 0xf;
      }
    }
    ppvVar9 = (void **)*ppvVar9;
  } while( true );
}


