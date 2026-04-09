// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d2b8d8
// Entry Point: 00d2b8d8
// Size: 1472 bytes
// Signature: undefined FUN_00d2b8d8(void)


undefined4 FUN_00d2b8d8(long param_1,long param_2)

{
  long **pplVar1;
  long **pplVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  ushort uVar8;
  char cVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  long **pplVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long **pplVar21;
  ulong uVar22;
  long **pplVar23;
  long *plVar24;
  long **__ptr;
  long **pplVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long local_88;
  undefined4 local_7c;
  
  __ptr = *(long ***)(param_2 + 0x110);
  pplVar21 = (long **)(param_1 + 0x6a + *(long *)(param_1 + 0x670) * 0x30);
  pplVar17 = (long **)(param_1 + 0x678 + *(long *)(param_1 + 0xa98) * 0x10);
  pplVar1 = (long **)(param_2 + 0x110);
  pplVar2 = (long **)(param_2 + 0xf0);
  plVar3 = (long *)(param_2 + 0x100);
  if (__ptr == pplVar1) {
    local_7c = 1;
  }
  else {
    bVar12 = false;
    uVar22 = 0;
    bVar11 = *(long *)(param_1 + 0x670) < 0x20 && pplVar17 + 4 < (long **)(param_1 + 0xa98U);
    local_7c = 1;
    bVar13 = false;
    local_88 = 0;
    do {
      pplVar23 = __ptr + 5;
      cVar9 = *(char *)pplVar23;
      uVar18 = (ulong)cVar9;
      uVar15 = (uint)~(int)cVar9 >> 0x1f;
      if (cVar9 < 0) {
LAB_00d2b9b0:
        do {
          uVar20 = (ulong)*(byte *)((long)pplVar23 + 1);
          if (uVar20 < *(ulong *)(param_2 + 0x48)) {
            local_88 = *(long *)(param_2 + 0x40);
            uVar8 = *(ushort *)(__ptr + 2) >> 0xc;
            uVar22 = (ulong)uVar8;
            if (local_88 != 0) {
              if (!bVar12) {
                if (((*(short *)((long)__ptr + 0x26) != 0) ||
                    ((*(ushort *)(__ptr + 2) & 0xfff) != 0)) ||
                   ((*(ushort *)(local_88 + uVar20 * 0x50 + ((ulong)(uVar8 - 1) & 0xf) * 2 + 6) <
                     0x1000 &&
                    (((0x3ffU >> (ulong)(0x10 - uVar8 & 0x1f) | 0x3ff << uVar22) &
                     (uint)*(ushort *)(local_88 + uVar20 * 0x50 + 4)) == 0)))) {
                  local_88 = local_88 + uVar20 * 0x50;
                  bVar12 = false;
                  plVar19 = __ptr[0xb];
                  goto joined_r0x00d2ba64;
                }
                bVar12 = true;
              }
              __ptr = (long **)*__ptr;
              if (__ptr == pplVar1) goto LAB_00d2be10;
              pplVar23 = __ptr + 5;
              cVar9 = *(char *)pplVar23;
              uVar18 = (ulong)cVar9;
              uVar15 = (uint)~(int)cVar9 >> 0x1f;
              if (-1 < cVar9) {
                local_88 = local_88 + uVar20 * 0x50;
                break;
              }
              goto LAB_00d2b9b0;
            }
            local_88 = 0;
            plVar19 = __ptr[0xb];
          }
          else {
            local_88 = 0;
            uVar22 = (ulong)(*(ushort *)(__ptr + 2) >> 0xc);
            plVar19 = __ptr[0xb];
          }
joined_r0x00d2ba64:
          if (plVar19 == (long *)0x0) {
            local_7c = 0;
            break;
          }
          if (!bVar13) {
            uVar10 = (uint)(*(int *)(param_2 + 0xd4) * *(int *)(param_2 + 0x8c)) >> 5;
            if (uVar10 <= *(uint *)(param_2 + 0xd0)) {
              uVar10 = *(uint *)(param_2 + 0xd0);
            }
            if (*(int *)(param_2 + 0xd8) + (uint)*(ushort *)((long)__ptr + 0x24) <= uVar10) {
              bVar13 = false;
              local_7c = 0;
              break;
            }
            bVar13 = true;
          }
          __ptr = (long **)*__ptr;
          if (__ptr == pplVar1) goto LAB_00d2be10;
          pplVar23 = __ptr + 5;
          cVar9 = *(char *)pplVar23;
          uVar18 = (ulong)cVar9;
          uVar15 = (uint)~(int)cVar9 >> 0x1f;
        } while (cVar9 < 0);
      }
      if (!bVar11) {
LAB_00d2bdf4:
        *(undefined4 *)(param_1 + 0x58) = 1;
        break;
      }
      plVar24 = *(long **)(&DAT_00546398 + (uVar18 & 0xf) * 8);
      plVar19 = (long *)((ulong)*(uint *)(param_2 + 0xd0) - *(long *)(param_1 + 0x60));
      if (plVar19 < plVar24) goto LAB_00d2bdf4;
      if (__ptr[0xb] == (long *)0x0) {
        pplVar25 = (long **)*__ptr;
        if (uVar15 == 0) {
LAB_00d2bc40:
          if ((local_88 != 0) && (*(short *)((long)__ptr + 0x26) == 0)) {
            lVar16 = local_88 + uVar22 * 2;
            sVar6 = *(short *)(lVar16 + 6);
            *(ushort *)(local_88 + 4) = *(ushort *)(local_88 + 4) | (ushort)(1 << uVar22);
            *(short *)(lVar16 + 6) = sVar6 + 1;
          }
          iVar5 = *(int *)(__ptr + 3);
          *(short *)((long)__ptr + 0x26) = *(short *)((long)__ptr + 0x26) + 1;
          if (iVar5 == 0) {
            iVar4 = *(int *)(param_2 + 0xac);
            iVar5 = *(int *)(param_2 + 200) + *(int *)(param_2 + 0xcc) * 4;
            *(int *)(__ptr + 3) = iVar5;
            *(int *)((long)__ptr + 0x1c) = iVar4 * iVar5;
          }
          if ((long **)*pplVar2 == pplVar2) {
            *(int *)(param_2 + 0x70) = iVar5 + *(int *)(param_1 + 0x40);
          }
          uVar14 = enet_list_remove(__ptr);
          enet_list_insert(pplVar2,uVar14);
          iVar5 = *(int *)(param_2 + 0xd8);
          uVar8 = *(ushort *)(param_1 + 0x68);
          *(undefined4 *)((long)__ptr + 0x14) = *(undefined4 *)(param_1 + 0x40);
          *(uint *)(param_2 + 0xd8) = iVar5 + (uint)*(ushort *)((long)__ptr + 0x24);
          *(ushort *)(param_1 + 0x68) = uVar8 | 0x8000;
        }
        else {
LAB_00d2bc10:
          enet_list_remove(__ptr);
          if (__ptr[0xb] != (long *)0x0) {
            enet_list_insert(plVar3,__ptr);
          }
        }
        lVar16 = *(long *)(param_1 + 0x60);
        *pplVar17 = (long *)pplVar21;
        pplVar17[1] = plVar24;
        *(long *)(param_1 + 0x60) = lVar16 + (long)plVar24;
        plVar26 = pplVar23[2];
        plVar24 = pplVar23[5];
        plVar19 = pplVar23[4];
        plVar28 = pplVar23[1];
        plVar27 = *pplVar23;
        pplVar21[3] = pplVar23[3];
        pplVar21[2] = plVar26;
        pplVar21[5] = plVar24;
        pplVar21[4] = plVar19;
        pplVar21[1] = plVar28;
        *pplVar21 = plVar27;
        if (__ptr[0xb] == (long *)0x0) {
          if (-1 < *(char *)pplVar23) {
            enet_free(__ptr);
          }
        }
        else {
          uVar8 = *(ushort *)((long)__ptr + 0x24);
          lVar16 = *(long *)(param_1 + 0x60);
          pplVar17[2] = (long *)(__ptr[0xb][2] + (ulong)*(uint *)(__ptr + 4));
          pplVar17[3] = (long *)(ulong)uVar8;
          *(long *)(param_1 + 0x60) = lVar16 + (long)(long *)(ulong)uVar8;
          pplVar17 = pplVar17 + 2;
        }
        pplVar21 = pplVar21 + 6;
        bVar11 = pplVar21 < (long **)(param_1 + 0x66aU) &&
                 pplVar17 + 6 < (long **)(param_1 + 0xa98U);
        *(int *)(param_2 + 0x7c) = *(int *)(param_2 + 0x7c) + 1;
        pplVar17 = pplVar17 + 2;
        __ptr = pplVar25;
      }
      else {
        if (((uint)plVar19 & 0xffff) <
            ((uint)*(ushort *)((long)__ptr + 0x24) + (int)plVar24 & 0xffff)) goto LAB_00d2bdf4;
        pplVar25 = (long **)*__ptr;
        if (uVar15 == 0) goto LAB_00d2bc40;
        if ((*(int *)(__ptr + 4) != 0) ||
           (uVar15 = *(int *)(param_2 + 0x94) + 7U & 0x1f, *(uint *)(param_2 + 0x94) = uVar15,
           uVar15 <= *(uint *)(param_2 + 0x8c))) goto LAB_00d2bc10;
        sVar6 = *(short *)(__ptr + 2);
        sVar7 = *(short *)((long)__ptr + 0x12);
        lVar16 = *__ptr[0xb] + -1;
        *__ptr[0xb] = lVar16;
        pplVar23 = __ptr;
        while( true ) {
          __ptr = pplVar25;
          if (lVar16 == 0) {
            enet_packet_destroy();
          }
          enet_list_remove(pplVar23);
          enet_free(pplVar23);
          if (__ptr == pplVar1) goto LAB_00d2be10;
          if ((*(short *)(__ptr + 2) != sVar6) || (*(short *)((long)__ptr + 0x12) != sVar7)) break;
          pplVar25 = (long **)*__ptr;
          lVar16 = *__ptr[0xb] + -1;
          *__ptr[0xb] = lVar16;
          pplVar23 = __ptr;
        }
      }
    } while (__ptr != pplVar1);
  }
LAB_00d2be10:
  iVar5 = *(int *)(param_2 + 0x38);
  *(long *)(param_1 + 0x670) = ((long)pplVar21 - (param_1 + 0x6a) >> 4) * -0x5555555555555555;
  *(long *)(param_1 + 0xa98) = (long)pplVar17 - (param_1 + 0x678) >> 4;
  if ((((iVar5 == 6) && ((long **)*pplVar1 == pplVar1)) && ((long **)*pplVar2 == pplVar2)) &&
     ((long *)*plVar3 == plVar3)) {
    enet_peer_disconnect(param_2,*(undefined4 *)(param_2 + 0x1b8));
  }
  return local_7c;
}


