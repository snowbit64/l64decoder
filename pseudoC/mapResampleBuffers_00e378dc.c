// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mapResampleBuffers
// Entry Point: 00e378dc
// Size: 612 bytes
// Signature: undefined mapResampleBuffers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Soloud::mapResampleBuffers() */

void SoLoud::Soloud::mapResampleBuffers(void)

{
  long lVar1;
  uint *puVar2;
  byte *pbVar3;
  long in_x0;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  void **ppvVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  byte local_470 [1024];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar5 = *(uint *)(in_x0 + 0x50);
  uVar11 = (ulong)uVar5;
  __memset_chk(local_470,0,uVar11,0x400);
  if (uVar5 != 0) {
    uVar6 = 0;
    lVar9 = *(long *)(in_x0 + 0x98);
    do {
      lVar10 = *(long *)(lVar9 + uVar6 * 8);
      puVar2 = (uint *)(in_x0 + 0x214ec);
      pbVar3 = local_470;
      uVar8 = uVar11;
      if (lVar10 != 0) {
        while( true ) {
          if ((lVar10 != 0) && (lVar10 == *(long *)(in_x0 + (ulong)*puVar2 * 8 + 0xa0))) {
            local_470[uVar6] = local_470[uVar6] | 1;
            *pbVar3 = *pbVar3 | 2;
          }
          if (uVar8 - 1 == 0) break;
          lVar10 = *(long *)(lVar9 + uVar6 * 8);
          puVar2 = puVar2 + 1;
          pbVar3 = pbVar3 + 1;
          uVar8 = uVar8 - 1;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar11);
    if (uVar5 != 0) {
      uVar6 = 0;
      do {
        if (((local_470[uVar6] & 1) == 0) &&
           (lVar9 = *(long *)(*(long *)(in_x0 + 0x98) + uVar6 * 8), lVar9 != 0)) {
          *(undefined8 *)(lVar9 + 0x1c8) = 0;
          *(undefined8 *)(*(long *)(*(long *)(in_x0 + 0x98) + uVar6 * 8) + 0x1d0) = 0;
          *(undefined8 *)(*(long *)(in_x0 + 0x98) + uVar6 * 8) = 0;
        }
        uVar6 = uVar6 + 1;
      } while (uVar11 != uVar6);
    }
  }
  uVar5 = *(uint *)(in_x0 + 0x224ec);
  if (uVar5 != 0) {
    uVar11 = 0;
    uVar4 = 0;
    do {
      if (((local_470[uVar11] >> 1 & 1) == 0) &&
         (lVar9 = *(long *)(in_x0 + (ulong)*(uint *)(in_x0 + uVar11 * 4 + 0x214ec) * 8 + 0xa0),
         lVar9 != 0)) {
        if (uVar4 < *(uint *)(in_x0 + 0x50)) {
          uVar8 = (ulong)uVar4;
          do {
            uVar5 = (uint)uVar8;
            if (*(long *)(*(long *)(in_x0 + 0x98) + uVar8 * 8) != 0) {
              uVar5 = 0xffffffff;
            }
            uVar6 = (ulong)uVar5;
            uVar8 = uVar8 + 1;
          } while (uVar5 == 0xffffffff && uVar8 < *(uint *)(in_x0 + 0x50));
        }
        else {
          uVar6 = 0xffffffff;
        }
        uVar8 = -(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3;
        *(long *)(*(long *)(in_x0 + 0x98) + uVar8) = lVar9;
        iVar12 = (int)uVar6;
        *(long *)(*(long *)(*(long *)(in_x0 + 0x98) + uVar8) + 0x1c8) =
             *(long *)(in_x0 + 0x90) + (long)iVar12 * 0x30;
        *(long *)(*(long *)(*(long *)(in_x0 + 0x98) + uVar8) + 0x1d0) =
             *(long *)(in_x0 + 0x90) + (long)(int)(iVar12 << 1 | 1) * 0x18;
        ppvVar7 = *(void ***)(*(long *)(*(long *)(in_x0 + 0x98) + uVar8) + 0x1c8);
        memset(*ppvVar7,0,(long)*(int *)(ppvVar7 + 2) << 2);
        ppvVar7 = *(void ***)(*(long *)(*(long *)(in_x0 + 0x98) + uVar8) + 0x1d0);
        memset(*ppvVar7,0,(long)*(int *)(ppvVar7 + 2) << 2);
        uVar4 = iVar12 + 1;
        uVar5 = *(uint *)(in_x0 + 0x224ec);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


