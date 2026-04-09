// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_peer_dispatch_incoming_unreliable_commands
// Entry Point: 00d29174
// Size: 540 bytes
// Signature: undefined enet_peer_dispatch_incoming_unreliable_commands(void)


void enet_peer_dispatch_incoming_unreliable_commands(long param_1,long param_2,long **param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  long *plVar4;
  long **pplVar5;
  long lVar6;
  long **pplVar7;
  long **pplVar8;
  long **pplVar9;
  long **pplVar10;
  
  pplVar9 = (long **)(param_2 + 0x40);
  pplVar5 = (long **)*pplVar9;
  pplVar7 = pplVar9;
  if (pplVar5 != pplVar9) {
    lVar6 = param_1 + 0x120;
    pplVar7 = pplVar5;
    pplVar10 = pplVar5;
    do {
      if ((*(byte *)((long)pplVar10 + 0x14) & 0xf) != 9) {
        uVar2 = *(ushort *)(pplVar10 + 2);
        uVar3 = *(ushort *)(param_2 + 0x26);
        if (uVar2 == uVar3) {
          if (*(int *)(pplVar10 + 9) == 0) {
            *(undefined2 *)(param_2 + 0x28) = *(undefined2 *)((long)pplVar10 + 0x12);
            goto LAB_00d291c4;
          }
          if (pplVar5 == pplVar10) {
            if (pplVar7 != pplVar5) {
              pplVar7 = (long **)pplVar5[1];
            }
          }
          else {
            enet_list_move(lVar6,pplVar5,pplVar10[1]);
            pplVar7 = pplVar10;
            if ((*(ushort *)(param_1 + 0x130) & 1) == 0) {
              enet_list_insert(*(long *)(param_1 + 0x10) + 0x48,param_1);
              uVar2 = *(ushort *)(param_1 + 0x130);
              goto LAB_00d291bc;
            }
          }
        }
        else {
          uVar1 = uVar2 >> 0xc | 0x10;
          if (uVar3 <= uVar2) {
            uVar1 = uVar2 >> 0xc;
          }
          if ((uVar3 >> 0xc <= uVar1) && (pplVar8 = pplVar10, uVar1 < (ushort)((uVar3 >> 0xc) + 7)))
          break;
          pplVar7 = (long **)*pplVar10;
          if ((pplVar5 != pplVar10) &&
             (enet_list_move(lVar6,pplVar5,pplVar10[1]), (*(ushort *)(param_1 + 0x130) & 1) == 0)) {
            enet_list_insert(*(long *)(param_1 + 0x10) + 0x48,param_1);
            uVar2 = *(ushort *)(param_1 + 0x130);
LAB_00d291bc:
            *(ushort *)(param_1 + 0x130) = uVar2 | 1;
          }
        }
        pplVar5 = (long **)*pplVar10;
      }
LAB_00d291c4:
      pplVar10 = (long **)*pplVar10;
      pplVar8 = pplVar9;
    } while (pplVar10 != pplVar9);
    if (pplVar5 != pplVar8) {
      enet_list_move(lVar6,pplVar5,pplVar8[1]);
      if ((*(ushort *)(param_1 + 0x130) & 1) != 0) {
        pplVar7 = (long **)*pplVar9;
        if (pplVar7 == pplVar8) {
          return;
        }
        goto LAB_00d29344;
      }
      enet_list_insert(*(long *)(param_1 + 0x10) + 0x48,param_1);
      *(ushort *)(param_1 + 0x130) = *(ushort *)(param_1 + 0x130) | 1;
      pplVar7 = pplVar8;
    }
  }
  pplVar8 = pplVar7;
  pplVar7 = (long **)*pplVar9;
  if ((long **)*pplVar9 == pplVar8) {
    return;
  }
LAB_00d29344:
  do {
    pplVar5 = (long **)*pplVar7;
    if (pplVar7 != param_3) {
      enet_list_remove(pplVar7);
      plVar4 = pplVar7[0xb];
      if ((plVar4 == (long *)0x0) || (lVar6 = *plVar4, *plVar4 = lVar6 + -1, lVar6 + -1 != 0)) {
        plVar4 = pplVar7[10];
      }
      else {
        enet_packet_destroy();
        plVar4 = pplVar7[10];
      }
      if (plVar4 != (long *)0x0) {
        enet_free(plVar4);
      }
      enet_free(pplVar7);
    }
    pplVar7 = pplVar5;
  } while (pplVar5 != pplVar8);
  return;
}


