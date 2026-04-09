// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort3<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
// Entry Point: 00bfbed4
// Size: 1712 bytes
// Signature: uint __cdecl __sort3<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>(TempShaderData * param_1, TempShaderData * param_2, TempShaderData * param_3, SortTempShaderByFirstId * param_4)


/* unsigned int std::__ndk1::__sort3<CompiledShaderArchive::SortTempShaderByFirstId&,
   CompiledShaderArchive::TempShaderData*>(CompiledShaderArchive::TempShaderData*,
   CompiledShaderArchive::TempShaderData*, CompiledShaderArchive::TempShaderData*,
   CompiledShaderArchive::SortTempShaderByFirstId&) */

uint std::__ndk1::
     __sort3<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
               (TempShaderData *param_1,TempShaderData *param_2,TempShaderData *param_3,
               SortTempShaderByFirstId *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  void *pvVar13;
  int *piVar14;
  int *piVar15;
  void **ppvVar16;
  void **ppvVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
  if (param_2 != param_1) {
    piVar14 = *(int **)(param_2 + 8);
    piVar15 = *(int **)(param_1 + 8);
    iVar5 = *piVar14;
    if (iVar5 == *piVar15) {
      uVar6 = piVar14[1];
      if (uVar6 == piVar15[1]) {
        iVar4 = memcmp(*(void **)(piVar14 + 2),*(void **)(piVar15 + 2),(ulong)uVar6);
        if (iVar4 < 0) {
LAB_00bfbf54:
          if (param_3 == param_2) {
LAB_00bfc318:
            uVar1 = *(undefined8 *)(param_1 + 0x10);
            uVar21 = *(undefined8 *)(param_1 + 0x18);
            *(undefined8 *)(param_1 + 8) = 0;
            *(undefined8 *)(param_1 + 0x10) = 0;
            uVar10 = *(undefined8 *)(param_1 + 0x28);
            *(undefined8 *)(param_1 + 0x18) = 0;
            uVar2 = *(undefined4 *)param_1;
            ppvVar17 = (void **)(param_1 + 0x20);
            pvVar13 = *ppvVar17;
            uVar12 = *(undefined8 *)(param_1 + 0x30);
            *ppvVar17 = (void *)0x0;
            uVar22 = *(undefined8 *)(param_1 + 0x40);
            uVar20 = *(undefined8 *)(param_1 + 0x38);
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined4 *)param_1 = *(undefined4 *)param_2;
            puVar19 = (undefined8 *)(param_2 + 8);
            uVar11 = *(undefined8 *)(param_2 + 0x10);
            *(undefined8 *)(param_1 + 8) = *puVar19;
            *(undefined8 *)(param_1 + 0x10) = uVar11;
            *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
            *puVar19 = 0;
            *(undefined8 *)(param_2 + 0x10) = 0;
            *(undefined8 *)(param_2 + 0x18) = 0;
            pvVar7 = *ppvVar17;
            if (pvVar7 != (void *)0x0) {
              *(void **)(param_1 + 0x28) = pvVar7;
              operator_delete(pvVar7);
              *ppvVar17 = (void *)0x0;
              *(undefined8 *)(param_1 + 0x28) = 0;
              *(undefined8 *)(param_1 + 0x30) = 0;
            }
            *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
            *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
            *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
            uVar11 = *(undefined8 *)(param_2 + 0x38);
            *(undefined8 *)(param_2 + 0x20) = 0;
            *(undefined8 *)(param_2 + 0x28) = 0;
            *(undefined8 *)(param_2 + 0x30) = 0;
            *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
            *(undefined8 *)(param_1 + 0x38) = uVar11;
            pvVar7 = *(void **)(param_2 + 8);
            *(undefined4 *)param_2 = uVar2;
            if (pvVar7 != (void *)0x0) {
              *(void **)(param_2 + 0x10) = pvVar7;
              operator_delete(pvVar7);
            }
            pvVar7 = *(void **)(param_2 + 0x20);
            puVar18 = (undefined8 *)(param_2 + 0x38);
            *(int **)(param_2 + 8) = piVar15;
            *(undefined8 *)(param_2 + 0x10) = uVar1;
            *(undefined8 *)(param_2 + 0x18) = uVar21;
            if (pvVar7 != (void *)0x0) {
              *(void **)(param_2 + 0x28) = pvVar7;
              operator_delete(pvVar7);
            }
            *(void **)(param_2 + 0x20) = pvVar13;
            *(undefined8 *)(param_2 + 0x28) = uVar10;
            *(undefined8 *)(param_2 + 0x40) = uVar22;
            *puVar18 = uVar20;
            *(undefined8 *)(param_2 + 0x30) = uVar12;
            if (param_3 != param_2) {
              piVar14 = *(int **)(param_3 + 8);
              piVar15 = *(int **)(param_2 + 8);
              if (*piVar14 == *piVar15) {
                uVar6 = piVar14[1];
                if (uVar6 == piVar15[1]) {
                  iVar5 = memcmp(*(void **)(piVar14 + 2),*(void **)(piVar15 + 2),(ulong)uVar6);
                  if (iVar5 < 0) {
LAB_00bfc45c:
                    uVar2 = *(undefined4 *)param_2;
                    uVar1 = *(undefined8 *)(param_2 + 0x10);
                    uVar21 = *(undefined8 *)(param_2 + 0x18);
                    *(undefined8 *)(param_2 + 0x10) = 0;
                    *puVar19 = 0;
                    *(undefined8 *)(param_2 + 0x20) = 0;
                    *(undefined8 *)(param_2 + 0x18) = 0;
                    *(undefined8 *)(param_2 + 0x30) = 0;
                    *(undefined8 *)(param_2 + 0x28) = 0;
                    uVar22 = *(undefined8 *)(param_2 + 0x40);
                    uVar20 = *puVar18;
                    *(undefined4 *)param_2 = *(undefined4 *)param_3;
                    uVar11 = *(undefined8 *)(param_3 + 0x10);
                    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
                    *(undefined8 *)(param_2 + 0x10) = uVar11;
                    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
                    *(undefined8 *)(param_3 + 0x10) = 0;
                    *(undefined8 *)(param_3 + 0x18) = 0;
                    *(undefined8 *)(param_3 + 8) = 0;
                    pvVar7 = *(void **)(param_2 + 0x20);
                    if (pvVar7 != (void *)0x0) {
                      *(void **)(param_2 + 0x28) = pvVar7;
                      operator_delete(pvVar7);
                      *(undefined8 *)(param_2 + 0x20) = 0;
                      *(undefined8 *)(param_2 + 0x28) = 0;
                      *(undefined8 *)(param_2 + 0x30) = 0;
                    }
                    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
                    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
                    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
                    uVar11 = *(undefined8 *)(param_3 + 0x38);
                    *(undefined8 *)(param_3 + 0x20) = 0;
                    *(undefined8 *)(param_3 + 0x28) = 0;
                    *(undefined8 *)(param_3 + 0x30) = 0;
                    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_3 + 0x40);
                    *puVar18 = uVar11;
                    pvVar7 = *(void **)(param_3 + 8);
                    *(undefined4 *)param_3 = uVar2;
                    if (pvVar7 != (void *)0x0) {
                      *(void **)(param_3 + 0x10) = pvVar7;
                      operator_delete(pvVar7);
                    }
                    pvVar7 = *(void **)(param_3 + 0x20);
                    *(int **)(param_3 + 8) = piVar15;
                    *(undefined8 *)(param_3 + 0x10) = uVar1;
                    *(undefined8 *)(param_3 + 0x18) = uVar21;
                    if (pvVar7 != (void *)0x0) {
                      *(void **)(param_3 + 0x28) = pvVar7;
                      operator_delete(pvVar7);
                    }
                    uVar6 = 2;
                    *(void **)(param_3 + 0x20) = pvVar13;
                    *(undefined8 *)(param_3 + 0x28) = uVar10;
                    goto LAB_00bfc528;
                  }
                }
                else if (uVar6 < (uint)piVar15[1]) goto LAB_00bfc45c;
              }
              else if (*piVar14 < *piVar15) goto LAB_00bfc45c;
            }
            uVar6 = 1;
          }
          else {
            piVar9 = *(int **)(param_3 + 8);
            if (*piVar9 != iVar5) {
              if (*piVar9 < iVar5) goto LAB_00bfc13c;
              goto LAB_00bfc318;
            }
            uVar6 = piVar9[1];
            if (uVar6 == piVar14[1]) {
              iVar5 = memcmp(*(void **)(piVar9 + 2),*(void **)(piVar14 + 2),(ulong)uVar6);
              if (-1 < iVar5) goto LAB_00bfc318;
            }
            else if ((uint)piVar14[1] <= uVar6) goto LAB_00bfc318;
LAB_00bfc13c:
            uVar2 = *(undefined4 *)param_1;
            uVar1 = *(undefined8 *)(param_1 + 0x28);
            uVar12 = *(undefined8 *)(param_1 + 0x30);
            ppvVar17 = (void **)(param_1 + 0x20);
            pvVar13 = *ppvVar17;
            uVar21 = *(undefined8 *)(param_1 + 0x10);
            uVar10 = *(undefined8 *)(param_1 + 0x18);
            *(undefined8 *)(param_1 + 8) = 0;
            *(undefined8 *)(param_1 + 0x10) = 0;
            *ppvVar17 = (void *)0x0;
            uVar22 = *(undefined8 *)(param_1 + 0x40);
            uVar20 = *(undefined8 *)(param_1 + 0x38);
            *(undefined8 *)(param_1 + 0x18) = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined4 *)param_1 = *(undefined4 *)param_3;
            uVar11 = *(undefined8 *)(param_3 + 0x10);
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
            *(undefined8 *)(param_1 + 0x10) = uVar11;
            *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_3 + 0x18);
            *(undefined8 *)(param_3 + 8) = 0;
            *(undefined8 *)(param_3 + 0x10) = 0;
            *(undefined8 *)(param_3 + 0x18) = 0;
            pvVar7 = *ppvVar17;
            if (pvVar7 != (void *)0x0) {
              *(void **)(param_1 + 0x28) = pvVar7;
              operator_delete(pvVar7);
              *ppvVar17 = (void *)0x0;
              *(undefined8 *)(param_1 + 0x28) = 0;
              *(undefined8 *)(param_1 + 0x30) = 0;
            }
            *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_3 + 0x20);
            *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_3 + 0x28);
            *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_3 + 0x30);
            uVar11 = *(undefined8 *)(param_3 + 0x38);
            *(undefined8 *)(param_3 + 0x20) = 0;
            *(undefined8 *)(param_3 + 0x28) = 0;
            *(undefined8 *)(param_3 + 0x30) = 0;
            *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_3 + 0x40);
            *(undefined8 *)(param_1 + 0x38) = uVar11;
            pvVar7 = *(void **)(param_3 + 8);
            *(undefined4 *)param_3 = uVar2;
            if (pvVar7 != (void *)0x0) {
              *(void **)(param_3 + 0x10) = pvVar7;
              operator_delete(pvVar7);
            }
            pvVar7 = *(void **)(param_3 + 0x20);
            *(int **)(param_3 + 8) = piVar15;
            *(undefined8 *)(param_3 + 0x10) = uVar21;
            *(undefined8 *)(param_3 + 0x18) = uVar10;
            if (pvVar7 != (void *)0x0) {
              *(void **)(param_3 + 0x28) = pvVar7;
              operator_delete(pvVar7);
            }
            uVar6 = 1;
            *(void **)(param_3 + 0x20) = pvVar13;
            *(undefined8 *)(param_3 + 0x28) = uVar1;
LAB_00bfc528:
            *(undefined8 *)(param_3 + 0x40) = uVar22;
            *(undefined8 *)(param_3 + 0x38) = uVar20;
            *(undefined8 *)(param_3 + 0x30) = uVar12;
          }
          goto LAB_00bfc544;
        }
      }
      else if (uVar6 < (uint)piVar15[1]) goto LAB_00bfbf54;
    }
    else if (iVar5 < *piVar15) goto LAB_00bfbf54;
  }
  if (param_3 != param_2) {
    piVar14 = *(int **)(param_3 + 8);
    piVar15 = *(int **)(param_2 + 8);
    if (*piVar14 == *piVar15) {
      uVar6 = piVar14[1];
      if (uVar6 == piVar15[1]) {
        iVar5 = memcmp(*(void **)(piVar14 + 2),*(void **)(piVar15 + 2),(ulong)uVar6);
        if (iVar5 < 0) {
LAB_00bfbfe8:
          uVar10 = *(undefined8 *)(param_2 + 0x28);
          uVar1 = *(undefined8 *)(param_2 + 0x10);
          uVar12 = *(undefined8 *)(param_2 + 0x18);
          *(undefined8 *)(param_2 + 0x10) = 0;
          *(undefined8 *)(param_2 + 0x18) = 0;
          ppvVar17 = (void **)(param_2 + 0x20);
          pvVar13 = *ppvVar17;
          puVar18 = (undefined8 *)(param_2 + 8);
          *puVar18 = 0;
          *ppvVar17 = (void *)0x0;
          uVar2 = *(undefined4 *)param_2;
          uVar11 = *(undefined8 *)(param_2 + 0x30);
          *(undefined8 *)(param_2 + 0x28) = 0;
          *(undefined8 *)(param_2 + 0x30) = 0;
          uVar22 = *(undefined8 *)(param_2 + 0x40);
          uVar20 = *(undefined8 *)(param_2 + 0x38);
          *(undefined4 *)param_2 = *(undefined4 *)param_3;
          uVar21 = *(undefined8 *)(param_3 + 0x10);
          *puVar18 = *(undefined8 *)(param_3 + 8);
          *(undefined8 *)(param_2 + 0x10) = uVar21;
          *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
          puVar19 = (undefined8 *)(param_2 + 0x38);
          *(undefined8 *)(param_3 + 8) = 0;
          *(undefined8 *)(param_3 + 0x10) = 0;
          *(undefined8 *)(param_3 + 0x18) = 0;
          pvVar7 = *ppvVar17;
          if (pvVar7 != (void *)0x0) {
            *(void **)(param_2 + 0x28) = pvVar7;
            operator_delete(pvVar7);
            *ppvVar17 = (void *)0x0;
            *(undefined8 *)(param_2 + 0x28) = 0;
            *(undefined8 *)(param_2 + 0x30) = 0;
          }
          *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
          *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
          *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
          uVar21 = *(undefined8 *)(param_3 + 0x38);
          *(undefined8 *)(param_3 + 0x20) = 0;
          *(undefined8 *)(param_3 + 0x28) = 0;
          *(undefined8 *)(param_3 + 0x30) = 0;
          *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_3 + 0x40);
          *puVar19 = uVar21;
          pvVar7 = *(void **)(param_3 + 8);
          *(undefined4 *)param_3 = uVar2;
          if (pvVar7 != (void *)0x0) {
            *(void **)(param_3 + 0x10) = pvVar7;
            operator_delete(pvVar7);
          }
          pvVar7 = *(void **)(param_3 + 0x20);
          *(int **)(param_3 + 8) = piVar15;
          *(undefined8 *)(param_3 + 0x10) = uVar1;
          *(undefined8 *)(param_3 + 0x18) = uVar12;
          if (pvVar7 != (void *)0x0) {
            *(void **)(param_3 + 0x28) = pvVar7;
            operator_delete(pvVar7);
          }
          *(void **)(param_3 + 0x20) = pvVar13;
          *(undefined8 *)(param_3 + 0x28) = uVar10;
          *(undefined8 *)(param_3 + 0x40) = uVar22;
          *(undefined8 *)(param_3 + 0x38) = uVar20;
          *(undefined8 *)(param_3 + 0x30) = uVar11;
          if (param_2 != param_1) {
            piVar14 = *(int **)(param_2 + 8);
            piVar15 = *(int **)(param_1 + 8);
            if (*piVar14 == *piVar15) {
              uVar6 = piVar14[1];
              if (uVar6 == piVar15[1]) {
                iVar5 = memcmp(*(void **)(piVar14 + 2),*(void **)(piVar15 + 2),(ulong)uVar6);
                if (iVar5 < 0) {
LAB_00bfc224:
                  uVar2 = *(undefined4 *)param_1;
                  uVar1 = *(undefined8 *)(param_1 + 0x28);
                  uVar21 = *(undefined8 *)(param_1 + 0x30);
                  ppvVar16 = (void **)(param_1 + 0x20);
                  pvVar13 = *ppvVar16;
                  uVar12 = *(undefined8 *)(param_1 + 0x10);
                  uVar10 = *(undefined8 *)(param_1 + 0x18);
                  *(undefined8 *)(param_1 + 8) = 0;
                  *(undefined8 *)(param_1 + 0x10) = 0;
                  *ppvVar16 = (void *)0x0;
                  uVar22 = *(undefined8 *)(param_1 + 0x40);
                  uVar20 = *(undefined8 *)(param_1 + 0x38);
                  *(undefined8 *)(param_1 + 0x18) = 0;
                  *(undefined8 *)(param_1 + 0x28) = 0;
                  *(undefined8 *)(param_1 + 0x30) = 0;
                  *(undefined4 *)param_1 = *(undefined4 *)param_2;
                  uVar11 = *(undefined8 *)(param_2 + 0x10);
                  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
                  *(undefined8 *)(param_1 + 0x10) = uVar11;
                  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
                  *puVar18 = 0;
                  *(undefined8 *)(param_2 + 0x10) = 0;
                  *(undefined8 *)(param_2 + 0x18) = 0;
                  pvVar7 = *ppvVar16;
                  if (pvVar7 != (void *)0x0) {
                    *(void **)(param_1 + 0x28) = pvVar7;
                    operator_delete(pvVar7);
                    *ppvVar16 = (void *)0x0;
                    *(undefined8 *)(param_1 + 0x28) = 0;
                    *(undefined8 *)(param_1 + 0x30) = 0;
                  }
                  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
                  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
                  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
                  *ppvVar17 = (void *)0x0;
                  *(undefined8 *)(param_2 + 0x28) = 0;
                  *(undefined8 *)(param_2 + 0x30) = 0;
                  uVar11 = *puVar19;
                  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
                  *(undefined8 *)(param_1 + 0x38) = uVar11;
                  pvVar7 = *(void **)(param_2 + 8);
                  *(undefined4 *)param_2 = uVar2;
                  if (pvVar7 != (void *)0x0) {
                    *(void **)(param_2 + 0x10) = pvVar7;
                    operator_delete(pvVar7);
                  }
                  pvVar7 = *(void **)(param_2 + 0x20);
                  *(int **)(param_2 + 8) = piVar15;
                  *(undefined8 *)(param_2 + 0x10) = uVar12;
                  *(undefined8 *)(param_2 + 0x18) = uVar10;
                  if (pvVar7 != (void *)0x0) {
                    *(void **)(param_2 + 0x28) = pvVar7;
                    operator_delete(pvVar7);
                  }
                  uVar6 = 2;
                  *(void **)(param_2 + 0x20) = pvVar13;
                  *(undefined8 *)(param_2 + 0x28) = uVar1;
                  *(undefined8 *)(param_2 + 0x30) = uVar21;
                  *(undefined8 *)(param_2 + 0x40) = uVar22;
                  *puVar19 = uVar20;
                  goto LAB_00bfc544;
                }
              }
              else if (uVar6 < (uint)piVar15[1]) goto LAB_00bfc224;
            }
            else if (*piVar14 < *piVar15) goto LAB_00bfc224;
          }
          uVar6 = 1;
          goto LAB_00bfc544;
        }
      }
      else if (uVar6 < (uint)piVar15[1]) goto LAB_00bfbfe8;
    }
    else if (*piVar14 < *piVar15) goto LAB_00bfbfe8;
  }
  uVar6 = 0;
LAB_00bfc544:
  if (*(long *)(lVar3 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


