// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkAndInitializeLandingCurves
// Entry Point: 00737198
// Size: 460 bytes
// Signature: undefined checkAndInitializeLandingCurves(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationAgent::checkAndInitializeLandingCurves() */

undefined4 VehicleNavigationAgent::checkAndInitializeLandingCurves(void)

{
  ulong *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  LandingCurve *in_x0;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  long lVar11;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  lVar8 = 0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar7 = 0;
  uVar10 = 0;
  uVar3 = *(ushort *)(in_x0 + 0x1376);
  uVar4 = *(ushort *)(in_x0 + 0x1378);
  uVar2 = *(ushort *)(*(long *)(in_x0 + 0x12a0) + 8) + 1 & 0xffff;
  do {
    lVar6 = 0;
    lVar9 = lVar8;
    do {
      lVar11 = 0;
      do {
        if (((uVar3 - 4) + (int)lVar6 & 0xffff) < uVar2 &&
            ((uVar4 - 4) + (int)lVar7 & 0xffff) < uVar2) {
          initializeLandingCurve(in_x0,(NodeId)&local_98);
          puVar1 = (ulong *)(*(long *)(in_x0 + 0x1298) + lVar9 + lVar11);
          if ((*puVar1 ^ local_98 | puVar1[1] ^ uStack_90 |
               puVar1[2] ^ local_88 | puVar1[3] ^ uStack_80 |
              puVar1[4] ^ local_78 | puVar1[5] ^ uStack_70) != 0) {
            uVar10 = 1;
            puVar1[3] = uStack_80;
            puVar1[2] = local_88;
            puVar1[5] = uStack_70;
            puVar1[4] = local_78;
            puVar1[1] = uStack_90;
            *puVar1 = local_98;
          }
        }
        lVar11 = lVar11 + 0x30;
      } while (lVar11 != 0x180);
      lVar9 = lVar9 + 0x180;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 10);
    lVar7 = lVar7 + 1;
    lVar8 = lVar8 + 0xf00;
  } while (lVar7 != 10);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


