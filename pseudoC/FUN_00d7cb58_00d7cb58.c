// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7cb58
// Entry Point: 00d7cb58
// Size: 456 bytes
// Signature: undefined FUN_00d7cb58(void)


void FUN_00d7cb58(long param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  void *pvVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  
  iVar6 = *(int *)(param_1 + 0x184);
  if (0 < iVar6) {
    lVar8 = *param_4;
    lVar1 = *(long *)(param_1 + 0x260) + (long)*(int *)(param_2 + 4);
    bVar3 = *(byte *)(lVar1 + 0xf2);
    bVar4 = *(byte *)(lVar1 + 0xe8);
    iVar7 = bVar3 - 1;
    uVar13 = (uint)bVar3;
    if (bVar4 == 0) {
      if (bVar3 < 2) {
        iVar7 = 0;
        do {
          if (*(int *)(param_1 + 0x74) != 0) goto LAB_00d7cd1c;
          iVar7 = iVar7 + uVar13;
        } while (iVar7 < iVar6);
      }
      else {
        iVar6 = 0;
        do {
          if (*(int *)(param_1 + 0x74) != 0) {
LAB_00d7cd1c:
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          jcopy_sample_rows(lVar8,iVar6,lVar8,iVar6 + 1,iVar7,0);
          iVar6 = iVar6 + uVar13;
        } while (iVar6 < *(int *)(param_1 + 0x184));
      }
    }
    else {
      lVar1 = (ulong)(bVar4 - 1) + 1;
      if (uVar13 < 2) {
        lVar14 = 0;
        lVar12 = 0;
        do {
          if (*(uint *)(param_1 + 0x74) != 0) {
            pvVar11 = *(void **)(lVar8 + lVar12 * 8);
            pvVar2 = (void *)((long)pvVar11 + (ulong)*(uint *)(param_1 + 0x74));
            pbVar9 = *(byte **)(param_3 + lVar14 * 8);
            do {
              memset(pvVar11,(uint)*pbVar9,(ulong)bVar4);
              pvVar11 = (void *)((long)pvVar11 + lVar1);
              pbVar9 = pbVar9 + 1;
            } while (pvVar11 < pvVar2);
            iVar6 = *(int *)(param_1 + 0x184);
          }
          lVar14 = lVar14 + 1;
          lVar12 = lVar12 + (ulong)bVar3;
        } while (lVar12 < iVar6);
      }
      else {
        lVar14 = 0;
        uVar10 = 0;
        do {
          if (*(uint *)(param_1 + 0x74) == 0) {
            uVar5 = 0;
          }
          else {
            pvVar11 = *(void **)(lVar8 + uVar10 * 8);
            pvVar2 = (void *)((long)pvVar11 + (ulong)*(uint *)(param_1 + 0x74));
            pbVar9 = *(byte **)(param_3 + lVar14 * 8);
            do {
              memset(pvVar11,(uint)*pbVar9,(ulong)bVar4);
              pvVar11 = (void *)((long)pvVar11 + lVar1);
              pbVar9 = pbVar9 + 1;
            } while (pvVar11 < pvVar2);
            uVar5 = *(undefined4 *)(param_1 + 0x74);
          }
          jcopy_sample_rows(lVar8,uVar10 & 0xffffffff,lVar8,(int)uVar10 + 1,iVar7,uVar5);
          lVar14 = lVar14 + 1;
          uVar10 = uVar10 + bVar3;
        } while ((int)uVar10 < *(int *)(param_1 + 0x184));
      }
    }
  }
  return;
}


