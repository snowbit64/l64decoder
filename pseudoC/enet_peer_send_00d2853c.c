// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_peer_send
// Entry Point: 00d2853c
// Size: 768 bytes
// Signature: undefined enet_peer_send(void)


/* WARNING: Type propagation algorithm not settling */

void enet_peer_send(long param_1,byte param_2,long *param_3)

{
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  void *__ptr;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ushort unaff_w25;
  uint uVar14;
  undefined uVar15;
  uint uVar16;
  ulong uVar17;
  ushort unaff_w27;
  undefined8 *******local_78 [2];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if ((*(int *)(param_1 + 0x38) == 5) &&
     (uVar9 = (ulong)param_2, uVar9 < *(ulong *)(param_1 + 0x48))) {
    uVar13 = param_3[3];
    if (uVar13 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x2b10)) {
      lVar7 = -0x1c;
      if (*(long *)(*(long *)(param_1 + 0x10) + 0xaa0) != 0) {
        lVar7 = -0x20;
      }
      lVar10 = *(long *)(param_1 + 0x40);
      uVar11 = lVar7 + (ulong)*(uint *)(param_1 + 0xd0);
      if (uVar13 <= uVar11) {
        uVar12 = (uint)uVar13;
        uVar2 = (ushort)(uVar13 >> 8);
        if ((*(uint *)(param_3 + 1) & 3) == 2) {
          unaff_w25 = uVar2 & 0xff | (ushort)((uVar12 & 0xff00ff) << 8);
          uVar15 = 0x49;
          lVar7 = enet_malloc(0x60);
        }
        else if (((*(uint *)(param_3 + 1) & 1) == 0) &&
                (*(short *)(lVar10 + uVar9 * 0x50 + 2) != -1)) {
          unaff_w25 = uVar2 & 0xff | (ushort)((uVar12 & 0xff00ff) << 8);
          uVar15 = 7;
          lVar7 = enet_malloc(0x60);
        }
        else {
          unaff_w27 = uVar2 & 0xff | (ushort)((uVar12 & 0xff00ff) << 8);
          uVar15 = 0x86;
          lVar7 = enet_malloc(0x60);
        }
        if (lVar7 != 0) {
          *(undefined *)(lVar7 + 0x28) = uVar15;
          *(byte *)(lVar7 + 0x29) = param_2;
          *(ushort *)(lVar7 + 0x2c) = unaff_w27;
          *(ushort *)(lVar7 + 0x2e) = unaff_w25;
          *(undefined4 *)(lVar7 + 0x20) = 0;
          *(short *)(lVar7 + 0x24) = (short)uVar13;
          *(long **)(lVar7 + 0x58) = param_3;
          *param_3 = *param_3 + 1;
          enet_peer_setup_outgoing_command(param_1,lVar7);
        }
        iVar6 = -(uint)(lVar7 == 0);
        goto LAB_00d285a8;
      }
      uVar12 = 0;
      if (uVar11 != 0) {
        uVar12 = (uint)(((uVar13 + uVar11) - 1) / uVar11);
      }
      if (uVar12 < 0x100001) {
        if (((*(uint *)(param_3 + 1) & 9) == 8) &&
           (uVar2 = *(ushort *)(lVar10 + uVar9 * 0x50 + 2), uVar2 != 0xffff)) {
          uVar15 = 0xc;
        }
        else {
          uVar15 = 0x88;
          uVar2 = *(ushort *)(lVar10 + uVar9 * 0x50);
        }
        enet_list_clear(local_78);
        uVar9 = param_3[3];
        if (uVar9 != 0) {
          uVar13 = 0;
          uVar14 = 0;
          uVar17 = 0;
          uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
LAB_00d2872c:
          uVar1 = uVar9 - uVar13;
          if (uVar11 <= uVar9 - uVar13) {
            uVar1 = uVar11;
          }
          lVar7 = enet_malloc(0x60);
          if (lVar7 != 0) goto code_r0x00d28744;
          while ((undefined8 ********)local_78[0] != local_78) {
            __ptr = (void *)enet_list_remove();
            enet_free(__ptr);
          }
          goto LAB_00d285a4;
        }
        uVar17 = 0;
LAB_00d287d0:
        *param_3 = *param_3 + uVar17;
        if ((undefined8 ********)local_78[0] != local_78) {
          do {
            uVar8 = enet_list_remove();
            enet_peer_setup_outgoing_command(param_1,uVar8);
          } while ((undefined8 ********)local_78[0] != local_78);
        }
        iVar6 = 0;
        goto LAB_00d285a8;
      }
    }
  }
LAB_00d285a4:
  iVar6 = -1;
LAB_00d285a8:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar6);
code_r0x00d28744:
  uVar16 = (uint)uVar17;
  uVar3 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
  *(uint *)(lVar7 + 0x20) = uVar14;
  *(short *)(lVar7 + 0x24) = (short)uVar1;
  *(long **)(lVar7 + 0x58) = param_3;
  *(undefined *)(lVar7 + 0x28) = uVar15;
  *(byte *)(lVar7 + 0x29) = param_2;
  *(ushort *)(lVar7 + 0x2c) =
       (ushort)(uVar2 + 1 >> 8) & 0xff | (ushort)((uVar2 + 1 & 0xff00ff) << 8);
  *(ushort *)(lVar7 + 0x2e) = (ushort)(uVar1 >> 8) & 0xff | (ushort)(((uint)uVar1 & 0xff00ff) << 8);
  *(uint *)(lVar7 + 0x30) = uVar12 >> 0x10 | uVar12 << 0x10;
  *(uint *)(lVar7 + 0x34) = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
  uVar4 = (*(uint *)(param_3 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_3 + 3) & 0xff00ff) << 8;
  *(uint *)(lVar7 + 0x38) = uVar4 >> 0x10 | uVar4 << 0x10;
  *(uint *)(lVar7 + 0x3c) = uVar3 >> 0x10 | uVar3 << 0x10;
  enet_list_insert(local_78,lVar7);
  uVar14 = uVar14 + (uint)uVar1;
  uVar13 = (ulong)uVar14;
  uVar9 = param_3[3];
  uVar17 = (ulong)(uVar16 + 1);
  uVar11 = uVar1;
  if (uVar9 <= uVar13) goto LAB_00d287d0;
  goto LAB_00d2872c;
}


