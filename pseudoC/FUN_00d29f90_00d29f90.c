// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d29f90
// Entry Point: 00d29f90
// Size: 380 bytes
// Signature: undefined FUN_00d29f90(void)


undefined8 FUN_00d29f90(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long **pplVar5;
  
  pplVar5 = (long **)(param_1 + 0x48);
  if ((long **)*pplVar5 != pplVar5) {
    do {
      lVar3 = enet_list_remove();
      iVar1 = *(int *)(lVar3 + 0x38);
      *(ushort *)(lVar3 + 0x130) = *(ushort *)(lVar3 + 0x130) & 0xfffe;
      if (iVar1 == 5) {
        if (*(long *)(lVar3 + 0x120) != lVar3 + 0x120) {
          lVar4 = enet_peer_receive(lVar3,param_2 + 4);
          *(long *)(param_2 + 6) = lVar4;
          if (lVar4 != 0) {
            lVar4 = *(long *)(lVar3 + 0x120);
            *(long *)(param_2 + 2) = lVar3;
            *param_2 = 3;
            if (lVar4 != lVar3 + 0x120) {
              *(ushort *)(lVar3 + 0x130) = *(ushort *)(lVar3 + 0x130) | 1;
              enet_list_insert(pplVar5,lVar3);
            }
            return 1;
          }
        }
      }
      else {
        if (iVar1 - 3U < 2) {
          enet_peer_on_connect(lVar3);
          uVar2 = *(undefined4 *)(lVar3 + 0x1b8);
          *(long *)(param_2 + 2) = lVar3;
          *(undefined4 *)(lVar3 + 0x38) = 5;
          *param_2 = 1;
          param_2[5] = uVar2;
          return 1;
        }
        if (iVar1 == 9) {
          uVar2 = *(undefined4 *)(lVar3 + 0x1b8);
          *(long *)(param_2 + 2) = lVar3;
          *(undefined4 *)(param_1 + 0x20) = 1;
          *param_2 = 2;
          param_2[5] = uVar2;
          enet_peer_reset(lVar3);
          return 1;
        }
      }
    } while ((long **)*pplVar5 != pplVar5);
  }
  return 0;
}


