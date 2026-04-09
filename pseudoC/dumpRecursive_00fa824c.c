// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dumpRecursive
// Entry Point: 00fa824c
// Size: 908 bytes
// Signature: undefined __cdecl dumpRecursive(CProfileIterator * param_1, int param_2)


/* CProfileManager::dumpRecursive(CProfileIterator*, int) */

void CProfileManager::dumpRecursive(CProfileIterator *param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  CProfileIterator *pCVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  timeval local_a8;
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  lVar8 = *(long *)param_1;
  lVar10 = *(long *)(lVar8 + 0x28);
  *(long *)(param_1 + 8) = lVar10;
  pCVar6 = param_1;
  if (lVar10 != 0) {
    if (*(long *)(lVar8 + 0x20) == 0) {
      gettimeofday(&local_a8,(__timezone_ptr_t)0x0);
      fVar15 = (float)(unkuint9)
                      (ulong)((local_a8.tv_usec + (local_a8.tv_sec - *DAT_02125d68) * 1000000) -
                             (DAT_02125d68[1] + ResetTime)) * 0.001;
    }
    else {
      fVar15 = *(float *)(lVar8 + 0xc);
    }
    iVar3 = FrameCounter;
    iVar12 = param_2;
    if (param_2 < 1) {
      puts("----------------------------------");
    }
    else {
      do {
        putchar(0x2e);
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      puts("----------------------------------");
      iVar12 = param_2;
      do {
        putchar(0x2e);
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    printf("Profiling: %s (total running time: %.3f ms) ---\n",(double)fVar15,
           **(undefined8 **)param_1);
    puVar9 = *(undefined8 **)(param_1 + 8);
    if (puVar9 == (undefined8 *)0x0) {
      fVar16 = 0.0;
      uVar11 = 0;
    }
    else if (param_2 < 1) {
      fVar16 = 0.0;
      uVar7 = 0;
      do {
        fVar17 = *(float *)((long)puVar9 + 0xc);
        fVar16 = fVar17 + fVar16;
        uVar11 = (int)uVar7 + 1;
        fVar13 = fVar17 * 100.0 * (1.0 / fVar15);
        if (fVar15 <= 1.192093e-07) {
          fVar13 = 0.0;
        }
        printf("%d -- %s (%.2f %%) :: %.3f ms / frame (%d calls)\n",(double)fVar13,
               (1.0 / (double)iVar3) * (double)fVar17,uVar7,*puVar9,(ulong)*(uint *)(puVar9 + 1));
        uVar7 = (ulong)uVar11;
        puVar9 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x30);
        *(undefined8 **)(param_1 + 8) = puVar9;
      } while (puVar9 != (undefined8 *)0x0);
    }
    else {
      fVar16 = 0.0;
      uVar11 = 0;
      do {
        fVar17 = *(float *)((long)puVar9 + 0xc);
        iVar12 = param_2;
        do {
          putchar(0x2e);
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        fVar13 = fVar17 * 100.0 * (1.0 / fVar15);
        uVar7 = (ulong)uVar11;
        fVar16 = fVar17 + fVar16;
        uVar11 = uVar11 + 1;
        if (fVar15 <= 1.192093e-07) {
          fVar13 = 0.0;
        }
        printf("%d -- %s (%.2f %%) :: %.3f ms / frame (%d calls)\n",(double)fVar13,
               (1.0 / (double)iVar3) * (double)fVar17,uVar7,**(undefined8 **)(param_1 + 8),
               (ulong)*(uint *)(*(undefined8 **)(param_1 + 8) + 1));
        puVar9 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x30);
        *(undefined8 **)(param_1 + 8) = puVar9;
      } while (puVar9 != (undefined8 *)0x0);
    }
    iVar12 = param_2;
    if (0 < param_2) {
      do {
        putchar(0x2e);
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    dVar14 = 0.0;
    if (1.192093e-07 < fVar15) {
      dVar14 = (double)(((fVar15 - fVar16) * 100.0) / fVar15);
    }
    uVar5 = printf("%s (%.3f %%) :: %.3f ms\n",dVar14,(double)(fVar15 - fVar16),"Unaccounted:");
    pCVar6 = (CProfileIterator *)(ulong)uVar5;
    if (uVar11 != 0) {
      uVar5 = 0;
      lVar8 = *(long *)param_1;
      iVar12 = 1;
      do {
        lVar8 = *(long *)(lVar8 + 0x28);
        bVar4 = lVar8 != 0;
        *(long *)(param_1 + 8) = lVar8;
        if ((uVar5 != 0) && (iVar3 = iVar12, lVar8 != 0)) {
          do {
            lVar8 = *(long *)(lVar8 + 0x30);
            bVar4 = lVar8 != 0;
            *(long *)(param_1 + 8) = lVar8;
            if (lVar8 == 0) break;
            bVar1 = iVar3 != 0;
            iVar3 = iVar3 + 1;
          } while (bVar1);
        }
        if (bVar4) {
          *(long *)param_1 = lVar8;
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar8 + 0x28);
        }
        pCVar6 = (CProfileIterator *)dumpRecursive(param_1,param_2 + 3);
        lVar10 = *(long *)(*(long *)param_1 + 0x20);
        lVar8 = *(long *)param_1;
        if (lVar10 != 0) {
          *(long *)param_1 = lVar10;
          lVar8 = lVar10;
        }
        uVar5 = uVar5 + 1;
        iVar12 = iVar12 + -1;
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar8 + 0x28);
      } while (uVar5 != uVar11);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pCVar6);
  }
  return;
}


