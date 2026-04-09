// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_3<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
// Entry Point: 00bfe7b8
// Size: 444 bytes
// Signature: void __cdecl __insertion_sort_3<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>(TempProgramData * param_1, TempProgramData * param_2, SortTempProgramByFirstId * param_3)


/* void std::__ndk1::__insertion_sort_3<CompiledShaderArchive::SortTempProgramByFirstId&,
   CompiledShaderArchive::TempProgramData*>(CompiledShaderArchive::TempProgramData*,
   CompiledShaderArchive::TempProgramData*, CompiledShaderArchive::SortTempProgramByFirstId&) */

void std::__ndk1::
     __insertion_sort_3<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
               (TempProgramData *param_1,TempProgramData *param_2,SortTempProgramByFirstId *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  uint uVar7;
  bool bVar8;
  void *pvVar9;
  void **ppvVar10;
  void *pvVar11;
  undefined8 uVar12;
  void **ppvVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  void **ppvVar17;
  TempProgramData *pTVar18;
  
  __sort3<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
            (param_1,param_1 + 0x28,param_1 + 0x50,param_3);
  if (param_1 + 0x78 != param_2) {
    lVar16 = 0;
    ppvVar17 = (void **)(param_1 + 0x78);
    ppvVar13 = (void **)(param_1 + 0x50);
    do {
      ppvVar10 = ppvVar17;
      uVar7 = *(uint *)(ppvVar10 + 3);
      if (uVar7 == *(uint *)(ppvVar13 + 3)) {
        uVar15 = *(uint *)((long)ppvVar10 + 0x1c);
        if (uVar15 == *(uint *)((long)ppvVar13 + 0x1c)) {
          if (*(uint *)((long)ppvVar10 + 0x24) < *(uint *)((long)ppvVar13 + 0x24)) {
LAB_00bfe8a0:
            pvVar11 = *ppvVar10;
            uVar1 = *(undefined4 *)(ppvVar10 + 4);
            uVar2 = *(uint *)((long)ppvVar10 + 0x24);
            *ppvVar10 = (void *)0x0;
            pvVar3 = ppvVar10[1];
            pvVar5 = ppvVar10[2];
            ppvVar10[1] = (void *)0x0;
            ppvVar10[2] = (void *)0x0;
            pTVar18 = param_1 + lVar16;
            lVar14 = lVar16;
            while( true ) {
              uVar4 = *(undefined8 *)(pTVar18 + 0x50);
              uVar6 = *(undefined8 *)(pTVar18 + 0x58);
              *(undefined8 *)(pTVar18 + 0x50) = 0;
              *(undefined8 *)(pTVar18 + 0x58) = 0;
              uVar12 = *(undefined8 *)(pTVar18 + 0x60);
              *(undefined8 *)(pTVar18 + 0x60) = 0;
              *(undefined8 *)(pTVar18 + 0x78) = uVar4;
              *(undefined8 *)(pTVar18 + 0x80) = uVar6;
              *(undefined8 *)(pTVar18 + 0x88) = uVar12;
              *(undefined8 *)(pTVar18 + 0x98) = *(undefined8 *)(pTVar18 + 0x70);
              *(undefined8 *)(pTVar18 + 0x90) = *(undefined8 *)(pTVar18 + 0x68);
              if (lVar14 == -0x50) break;
              bVar8 = *(uint *)(param_1 + lVar14 + 0x40) <= uVar7;
              if ((uVar7 == *(uint *)(param_1 + lVar14 + 0x40)) &&
                 (bVar8 = *(uint *)(param_1 + lVar14 + 0x44) <= uVar15,
                 uVar15 == *(uint *)(param_1 + lVar14 + 0x44))) {
                bVar8 = *(uint *)(param_1 + lVar14 + 0x4c) <= uVar2;
              }
              if (bVar8) {
                ppvVar17 = (void **)(param_1 + lVar14 + 0x50);
                pvVar9 = *ppvVar17;
                if (pvVar9 == (void *)0x0) goto LAB_00bfe820;
                goto LAB_00bfe818;
              }
              pvVar9 = *(void **)(pTVar18 + 0x50);
              lVar14 = lVar14 + -0x28;
              pTVar18 = param_1 + lVar14;
              if (pvVar9 != (void *)0x0) {
                *(void **)(pTVar18 + 0x80) = pvVar9;
                operator_delete(pvVar9);
                *(undefined8 *)(pTVar18 + 0x80) = 0;
                *(undefined8 *)(pTVar18 + 0x88) = 0;
              }
            }
            pvVar9 = *(void **)param_1;
            ppvVar17 = (void **)param_1;
            if (pvVar9 != (void *)0x0) {
LAB_00bfe818:
              ppvVar17[1] = pvVar9;
              operator_delete(pvVar9);
            }
LAB_00bfe820:
            ppvVar17[2] = pvVar5;
            *ppvVar17 = pvVar11;
            ppvVar17[1] = pvVar3;
            *(uint *)(param_1 + lVar14 + 0x68) = uVar7;
            *(uint *)((long)ppvVar17 + 0x24) = uVar2;
            *(uint *)((long)ppvVar17 + 0x1c) = uVar15;
            *(undefined4 *)(ppvVar17 + 4) = uVar1;
          }
        }
        else if (uVar15 < *(uint *)((long)ppvVar13 + 0x1c)) goto LAB_00bfe8a0;
      }
      else if (uVar7 < *(uint *)(ppvVar13 + 3)) {
        uVar15 = *(uint *)((long)ppvVar10 + 0x1c);
        goto LAB_00bfe8a0;
      }
      lVar16 = lVar16 + 0x28;
      ppvVar17 = ppvVar10 + 5;
      ppvVar13 = ppvVar10;
    } while (ppvVar10 + 5 != (void **)param_2);
  }
  return;
}


