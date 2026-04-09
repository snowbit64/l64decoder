// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: moveToPosition
// Entry Point: 006f586c
// Size: 340 bytes
// Signature: undefined __thiscall moveToPosition(StatsOverlayManager * this, char * param_1, uint param_2)


/* StatsOverlayManager::moveToPosition(char const*, unsigned int) */

void __thiscall
StatsOverlayManager::moveToPosition(StatsOverlayManager *this,char *param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  char *__s2;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar4 = tpidr_el0;
  uVar1 = param_2 - 1;
  uVar9 = (ulong)uVar1;
  lVar6 = *(long *)(lVar4 + 0x28);
  lVar8 = *(long *)this;
  if (uVar9 < (ulong)(*(long *)(this + 8) - lVar8 >> 4) && *(long *)(this + 8) != lVar8) {
    uVar11 = 0;
    do {
      lVar12 = uVar11 * 0x10;
      __s2 = (char *)(**(code **)(**(long **)(lVar8 + lVar12) + 0x20))();
      iVar5 = strcmp(param_1,__s2);
      uVar10 = (uint)uVar11;
      if (iVar5 == 0) {
        lVar8 = *(long *)this;
        puVar2 = (undefined8 *)(lVar8 + uVar11 * 0x10);
        uVar15 = puVar2[1];
        uVar13 = *puVar2;
        if (uVar10 < uVar1) {
          puVar2 = (undefined8 *)(lVar8 + (uVar11 + 1) * 0x10);
          uVar14 = *puVar2;
          puVar3 = (undefined8 *)(lVar8 + uVar11 * 0x10);
          puVar3[1] = puVar2[1];
          *puVar3 = uVar14;
          if (uVar1 != (uint)(uVar11 + 1)) {
            iVar5 = (param_2 - 2) - uVar10;
            do {
              iVar5 = iVar5 + -1;
              lVar8 = *(long *)this + lVar12;
              lVar12 = lVar12 + 0x10;
              *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar8 + 0x28);
              *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar8 + 0x20);
            } while (iVar5 != 0);
          }
        }
        else if (uVar1 < uVar10) {
          uVar7 = uVar11 - 1;
          puVar2 = (undefined8 *)(lVar8 + uVar7 * 0x10);
          uVar14 = *puVar2;
          puVar3 = (undefined8 *)(lVar8 + uVar11 * 0x10);
          puVar3[1] = puVar2[1];
          *puVar3 = uVar14;
          for (; uVar9 < uVar7; uVar7 = uVar7 - 1) {
            lVar8 = *(long *)this + lVar12;
            lVar12 = lVar12 + -0x10;
            *(undefined8 *)(lVar8 + -8) = *(undefined8 *)(lVar8 + -0x18);
            *(undefined8 *)(lVar8 + -0x10) = *(undefined8 *)(lVar8 + -0x20);
          }
        }
        puVar2 = (undefined8 *)(*(long *)this + uVar9 * 0x10);
        puVar2[1] = uVar15;
        *puVar2 = uVar13;
      }
      lVar8 = *(long *)this;
      uVar11 = (ulong)(uVar10 + 1);
    } while (uVar11 < (ulong)(*(long *)(this + 8) - lVar8 >> 4));
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


