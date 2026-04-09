// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: workerThreadEntry
// Entry Point: 00b35b98
// Size: 552 bytes
// Signature: undefined __cdecl workerThreadEntry(bool * param_1)


/* ThreadedFileReader::workerThreadEntry(bool volatile&) */

void ThreadedFileReader::workerThreadEntry(bool *param_1)

{
  bool *pbVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  long **pplVar6;
  long **pplVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  long **pplVar14;
  long lVar15;
  undefined8 *puVar16;
  
  pbVar1 = param_1 + 0x98;
  FileReader::seek((ulonglong)pbVar1);
  lVar10 = 0;
  puVar2 = (undefined8 *)(param_1 + 0x80);
  plVar3 = (long *)(param_1 + 0x40);
  do {
    while( true ) {
      Semaphore::wait();
      puVar11 = puVar2;
      puVar13 = (undefined8 *)*puVar2;
      if ((undefined8 *)*puVar2 == (undefined8 *)0x0) break;
LAB_00b35d24:
      do {
        puVar16 = puVar13;
        puVar5 = puVar11;
        puVar11 = puVar16;
        puVar13 = (undefined8 *)*puVar16;
      } while ((undefined8 *)*puVar16 != (undefined8 *)0x0);
      *puVar5 = 0;
      FUN_00f27700(0xffffffff,*(long *)(param_1 + 0x78) + 8);
      if (*(int *)(puVar16 + 1) == 1) {
        lVar10 = puVar16[2];
        FileReader::seek((ulonglong)pbVar1);
      }
      else if (*(int *)(puVar16 + 1) == 0) {
        operator_delete(puVar16);
        return;
      }
      operator_delete(puVar16);
    }
    puVar11 = *(undefined8 **)(param_1 + 0x78);
    do {
      puVar13 = (undefined8 *)*puVar11;
      puVar5 = (undefined8 *)FUN_00f275d0(puVar13,0,puVar11);
    } while (puVar13 != puVar5);
    *puVar2 = puVar13;
    puVar11 = puVar2;
    if (puVar13 != (undefined8 *)0x0) goto LAB_00b35d24;
    pplVar6 = (long **)plVar3;
    pplVar14 = (long **)*plVar3;
    if ((long **)*plVar3 == (long **)0x0) {
      puVar11 = *(undefined8 **)(param_1 + 0x38);
      do {
        pplVar14 = (long **)*puVar11;
        pplVar6 = (long **)FUN_00f275d0(pplVar14,0,puVar11);
      } while (pplVar14 != pplVar6);
      *plVar3 = (long)pplVar14;
      pplVar6 = (long **)plVar3;
    }
    do {
      pplVar7 = pplVar14;
      plVar12 = (long *)pplVar6;
      pplVar6 = pplVar7;
      pplVar14 = (long **)*pplVar7;
    } while (*pplVar7 != (long *)0x0);
    *plVar12 = 0;
    FUN_00f27700(0xffffffff,*(long *)(param_1 + 0x38) + 8);
    pvVar9 = pplVar7[1];
    if (*(int *)(pplVar7 + 2) != *(int *)(param_1 + 8)) {
      if (pvVar9 != (void *)0x0) {
        operator_delete__(pvVar9);
      }
      operator_delete(pplVar7);
      pplVar7 = (long **)operator_new(0x20);
      uVar4 = *(uint *)(param_1 + 8);
      *pplVar7 = (long *)0x0;
                    /* try { // try from 00b35cc0 to 00b35cc7 has its CatchHandler @ 00b35dc0 */
      pvVar9 = operator_new__((ulong)uVar4);
      ((long *)pplVar7)[1] = (long)pvVar9;
      *(uint *)((long *)pplVar7 + 2) = uVar4;
      *(undefined4 *)((long)pplVar7 + 0x14) = 0;
      ((long *)pplVar7)[3] = 0;
    }
    ((long *)pplVar7)[3] = lVar10;
    uVar4 = FileReader::read(pbVar1,(uint)pvVar9);
    if ((int)uVar4 < 0) {
      do {
        lVar15 = *(long *)(param_1 + 0x28);
        *pplVar7 = (long *)lVar15;
        lVar8 = FUN_00f275d0(lVar15,pplVar7);
      } while (lVar15 != lVar8);
      FUN_00f27700(1,param_1 + 0x30);
    }
    else {
      *(uint *)((long)pplVar7 + 0x14) = uVar4;
      do {
        lVar15 = *(long *)(param_1 + 0x48);
        *pplVar7 = (long *)lVar15;
        lVar8 = FUN_00f275d0(lVar15,pplVar7);
      } while (lVar15 != lVar8);
      lVar10 = lVar10 + (ulong)uVar4;
      FUN_00f27700(1,param_1 + 0x50);
      Semaphore::post();
    }
  } while( true );
}


