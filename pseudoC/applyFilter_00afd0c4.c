// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyFilter
// Entry Point: 00afd0c4
// Size: 248 bytes
// Signature: undefined applyFilter(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GiantsNotificationManager::applyFilter() */

void GiantsNotificationManager::applyFilter(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  long in_x0;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  long *plVar13;
  
  if (*(char *)(in_x0 + 1) != '\0') {
    plVar7 = (long *)(in_x0 + 0x28);
    plVar8 = (long *)*plVar7;
    lVar1 = *(long *)(in_x0 + 0x40);
    *(undefined4 *)(in_x0 + 0x38) = 0;
    lVar4 = *(long *)(in_x0 + 0x48) - lVar1;
    if (lVar4 != 0) {
      iVar9 = 0;
      uVar10 = 0;
      uVar11 = (lVar4 >> 4) * -0x71c71c71c71c71c7;
      do {
        puVar12 = (undefined *)(lVar1 + uVar10 * 0x90 + 0x88);
        *puVar12 = 1;
        if (plVar8 == (long *)0x0) {
LAB_00afd110:
          if (*(char *)(lVar1 + uVar10 * 0x90 + 8) == '\0') {
LAB_00afd1a8:
            iVar9 = iVar9 + 1;
            *(int *)(in_x0 + 0x38) = iVar9;
          }
          else {
LAB_00afd11c:
            *puVar12 = 0;
          }
        }
        else {
          uVar3 = *(uint *)(lVar1 + uVar10 * 0x90);
          plVar6 = plVar8;
          plVar13 = plVar7;
          do {
            bVar5 = *(uint *)((long)plVar6 + 0x1c) < uVar3;
            if (!bVar5) {
              plVar13 = plVar6;
            }
            plVar6 = (long *)plVar6[bVar5];
          } while (plVar6 != (long *)0x0);
          if ((plVar13 == plVar7) || (uVar3 < *(uint *)((long)plVar13 + 0x1c))) goto LAB_00afd110;
          if (*(char *)(lVar1 + uVar10 * 0x90 + 8) == '\0' || *(char *)(in_x0 + 3) == '\0')
          goto LAB_00afd11c;
          uVar3 = *(uint *)(plVar13 + 4);
          uVar2 = *(uint *)(lVar1 + uVar10 * 0x90 + 4);
          *puVar12 = uVar3 < uVar2;
          if (uVar3 < uVar2) goto LAB_00afd1a8;
        }
        uVar10 = (ulong)((int)uVar10 + 1);
      } while (uVar10 <= uVar11 && uVar11 - uVar10 != 0);
    }
    *(undefined *)(in_x0 + 1) = 0;
  }
  return;
}


