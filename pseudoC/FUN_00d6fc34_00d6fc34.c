// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6fc34
// Entry Point: 00d6fc34
// Size: 484 bytes
// Signature: undefined FUN_00d6fc34(void)


/* WARNING: Removing unreachable block (ram,0x00d6fde4) */

void FUN_00d6fc34(long *param_1)

{
  byte bVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  byte **ppbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  uVar8 = *(uint *)((long)param_1 + 0x21c);
  do {
    if (uVar8 == 0) {
      if (*(char *)(param_1[0x49] + 0x18) == '\0') {
        ppbVar9 = (byte **)param_1[5];
        if (ppbVar9[1] == (byte *)0x0) {
          cVar3 = (*(code *)ppbVar9[3])(param_1);
          if (cVar3 == '\0') goto LAB_00d71828;
          pbVar10 = *ppbVar9;
          pbVar5 = ppbVar9[1] + -1;
          uVar12 = (uint)*pbVar10;
          if (pbVar5 == (byte *)0x0) goto LAB_00d6fda0;
LAB_00d6fd68:
          pbVar11 = pbVar10 + 2;
          bVar1 = pbVar10[1];
        }
        else {
          pbVar10 = *ppbVar9;
          pbVar5 = ppbVar9[1] + -1;
          uVar12 = (uint)*pbVar10;
          if (pbVar5 != (byte *)0x0) goto LAB_00d6fd68;
LAB_00d6fda0:
          cVar3 = (*(code *)ppbVar9[3])(param_1);
          if (cVar3 == '\0') {
LAB_00d71828:
            if (*(long *)(lVar2 + 0x28) == lVar4) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(0);
          }
          pbVar5 = ppbVar9[1];
          pbVar11 = *ppbVar9 + 1;
          bVar1 = **ppbVar9;
        }
        uVar8 = (uint)bVar1;
        if ((uVar12 == 0xff) && (uVar8 == 0xd8)) {
          *(undefined4 *)((long)param_1 + 0x21c) = 0xd8;
          *ppbVar9 = pbVar11;
          ppbVar9[1] = pbVar5 + -1;
          uVar6 = 0xd7;
LAB_00d6fcc8:
                    /* WARNING: Could not recover jumptable at 0x00d6fcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_00d6fc90 + (ulong)*(ushort *)(&DAT_00548558 + uVar6 * 2) * 4))();
          return;
        }
        lVar7 = *param_1;
        *(undefined4 *)(lVar7 + 0x28) = 0x37;
        *(uint *)(lVar7 + 0x2c) = uVar12;
        *(uint *)(*param_1 + 0x30) = uVar8;
        (**(code **)*param_1)(param_1);
        *(uint *)((long)param_1 + 0x21c) = uVar8;
        *ppbVar9 = pbVar11;
        ppbVar9[1] = pbVar5 + -1;
      }
      else {
        cVar3 = FUN_00d6fa10(param_1);
        if (cVar3 == '\0') goto LAB_00d71828;
        uVar8 = *(uint *)((long)param_1 + 0x21c);
      }
    }
    uVar6 = (ulong)(uVar8 - 1);
    if (uVar8 - 1 < 0xfe) goto LAB_00d6fcc8;
    lVar7 = *param_1;
    *(undefined4 *)(lVar7 + 0x28) = 0x46;
    *(uint *)(lVar7 + 0x2c) = uVar8;
    (**(code **)*param_1)(param_1);
    uVar8 = 0;
    *(undefined4 *)((long)param_1 + 0x21c) = 0;
  } while( true );
}


