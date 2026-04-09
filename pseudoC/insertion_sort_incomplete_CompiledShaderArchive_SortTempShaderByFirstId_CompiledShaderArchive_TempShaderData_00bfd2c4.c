// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
// Entry Point: 00bfd2c4
// Size: 840 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>(TempShaderData * param_1, TempShaderData * param_2, SortTempShaderByFirstId * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<CompiledShaderArchive::SortTempShaderByFirstId&,
   CompiledShaderArchive::TempShaderData*>(CompiledShaderArchive::TempShaderData*,
   CompiledShaderArchive::TempShaderData*, CompiledShaderArchive::SortTempShaderByFirstId&) */

bool std::__ndk1::
     __insertion_sort_incomplete<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
               (TempShaderData *param_1,TempShaderData *param_2,SortTempShaderByFirstId *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  undefined uVar6;
  int iVar7;
  void *pvVar8;
  long lVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  int *piVar14;
  long lVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 local_b0 [2];
  int *local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar9 = (long)param_2 - (long)param_1 >> 3;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((ulong)(lVar9 * -0x71c71c71c71c71c7) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00bfd338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)(&UNK_00bfd33c +
                      (ulong)*(ushort *)(&DAT_005288fe + lVar9 * 0x1c71c71c71c71c72) * 4))(1);
    return (bool)uVar6;
  }
  __sort3<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
            (param_1,param_1 + 0x48,param_1 + 0x90,param_3);
  if (param_1 + 0xd8 == param_2) {
    bVar5 = true;
  }
  else {
    lVar9 = 0;
    iVar16 = 0;
    puVar17 = (undefined4 *)(param_1 + 0xd8);
    puVar13 = (undefined4 *)(param_1 + 0x90);
    do {
      puVar10 = puVar17;
      piVar14 = *(int **)(puVar10 + 2);
      piVar11 = *(int **)(puVar13 + 2);
      if (*piVar14 == *piVar11) {
        uVar3 = piVar14[1];
        if (uVar3 == piVar11[1]) {
          iVar7 = memcmp(*(void **)(piVar14 + 2),*(void **)(piVar11 + 2),(ulong)uVar3);
          if (iVar7 < 0) {
LAB_00bfd458:
            local_b0[0] = *puVar10;
            pvVar8 = (void *)0x0;
            uStack_88 = *(undefined8 *)(puVar10 + 10);
            local_90 = *(undefined8 *)(puVar10 + 8);
            local_a0 = *(void **)(puVar10 + 4);
            local_98 = *(undefined8 *)(puVar10 + 6);
            uStack_70 = *(undefined8 *)(puVar10 + 0x10);
            local_78 = *(undefined8 *)(puVar10 + 0xe);
            *(undefined8 *)(puVar10 + 2) = 0;
            *(undefined8 *)(puVar10 + 4) = 0;
            *(undefined8 *)(puVar10 + 6) = 0;
            *(undefined8 *)(puVar10 + 8) = 0;
            local_80 = *(undefined8 *)(puVar10 + 0xc);
            *(undefined8 *)(puVar10 + 10) = 0;
            *(undefined8 *)(puVar10 + 0xc) = 0;
            lVar15 = lVar9;
            local_a8 = piVar14;
            while( true ) {
              *(undefined4 *)(param_1 + lVar15 + 0xd8) = *(undefined4 *)(param_1 + lVar15 + 0x90);
              if (pvVar8 != (void *)0x0) {
                *(void **)(param_1 + lVar15 + 0xe8) = pvVar8;
                operator_delete(pvVar8);
                *(undefined8 *)(param_1 + lVar15 + 0xe8) = 0;
                *(undefined8 *)(param_1 + lVar15 + 0xf0) = 0;
              }
              uVar1 = *(undefined8 *)(param_1 + lVar15 + 0x98);
              uVar2 = *(undefined8 *)(param_1 + lVar15 + 0xa0);
              *(undefined8 *)(param_1 + lVar15 + 0x98) = 0;
              *(undefined8 *)(param_1 + lVar15 + 0xa0) = 0;
              uVar12 = *(undefined8 *)(param_1 + lVar15 + 0xa8);
              *(undefined8 *)(param_1 + lVar15 + 0xa8) = 0;
              pvVar8 = *(void **)(param_1 + lVar15 + 0xf8);
              *(undefined8 *)(param_1 + lVar15 + 0xe0) = uVar1;
              *(undefined8 *)(param_1 + lVar15 + 0xe8) = uVar2;
              *(undefined8 *)(param_1 + lVar15 + 0xf0) = uVar12;
              if (pvVar8 != (void *)0x0) {
                *(void **)(param_1 + lVar15 + 0x100) = pvVar8;
                operator_delete(pvVar8);
                *(undefined8 *)(param_1 + lVar15 + 0x100) = 0;
                *(undefined8 *)(param_1 + lVar15 + 0x108) = 0;
              }
              uVar1 = *(undefined8 *)(param_1 + lVar15 + 0xb0);
              uVar2 = *(undefined8 *)(param_1 + lVar15 + 0xb8);
              *(undefined8 *)(param_1 + lVar15 + 0xb0) = 0;
              *(undefined8 *)(param_1 + lVar15 + 0xb8) = 0;
              uVar12 = *(undefined8 *)(param_1 + lVar15 + 0xc0);
              *(undefined8 *)(param_1 + lVar15 + 0xc0) = 0;
              *(undefined8 *)(param_1 + lVar15 + 0xf8) = uVar1;
              *(undefined8 *)(param_1 + lVar15 + 0x100) = uVar2;
              *(undefined8 *)(param_1 + lVar15 + 0x108) = uVar12;
              *(undefined8 *)(param_1 + lVar15 + 0x118) = *(undefined8 *)(param_1 + lVar15 + 0xd0);
              *(undefined8 *)(param_1 + lVar15 + 0x110) = *(undefined8 *)(param_1 + lVar15 + 200);
              puVar17 = (undefined4 *)param_1;
              if (lVar15 == -0x90) goto LAB_00bfd584;
              if ((undefined4 *)(param_1 + lVar15 + 0x48) == local_b0) break;
              piVar11 = *(int **)(param_1 + lVar15 + 0x50);
              if (*local_a8 == *piVar11) {
                uVar3 = local_a8[1];
                if (uVar3 == piVar11[1]) {
                  iVar7 = memcmp(*(void **)(local_a8 + 2),*(void **)(piVar11 + 2),(ulong)uVar3);
                  if (-1 < iVar7) break;
                }
                else if ((uint)piVar11[1] <= uVar3) break;
              }
              else if (*piVar11 <= *local_a8) break;
              pvVar8 = *(void **)(param_1 + lVar15 + 0x98);
              lVar15 = lVar15 + -0x48;
            }
            puVar17 = (undefined4 *)(param_1 + lVar15 + 0x90);
LAB_00bfd584:
            *puVar17 = local_b0[0];
            pvVar8 = *(void **)(param_1 + lVar15 + 0x98);
            if (pvVar8 != (void *)0x0) {
              *(void **)(puVar17 + 4) = pvVar8;
              operator_delete(pvVar8);
              *(undefined8 *)(param_1 + lVar15 + 0x98) = 0;
              *(undefined8 *)(param_1 + lVar15 + 0xa0) = 0;
              *(undefined8 *)(param_1 + lVar15 + 0xa8) = 0;
            }
            *(int **)(param_1 + lVar15 + 0x98) = local_a8;
            *(void **)(puVar17 + 4) = local_a0;
            *(undefined8 *)(puVar17 + 6) = local_98;
            pvVar8 = *(void **)(param_1 + lVar15 + 0xb0);
            local_a0 = (void *)0x0;
            local_98 = 0;
            local_a8 = (int *)0x0;
            if (pvVar8 != (void *)0x0) {
              *(void **)(puVar17 + 10) = pvVar8;
              operator_delete(pvVar8);
              *(undefined8 *)(param_1 + lVar15 + 0xb0) = 0;
              *(undefined8 *)(param_1 + lVar15 + 0xb8) = 0;
              *(undefined8 *)(param_1 + lVar15 + 0xc0) = 0;
            }
            uVar12 = local_80;
            uVar2 = uStack_88;
            uVar1 = local_90;
            local_90 = 0;
            uStack_88 = 0;
            local_80 = 0;
            *(undefined8 *)(param_1 + lVar15 + 0xb0) = uVar1;
            *(undefined8 *)(puVar17 + 10) = uVar2;
            *(undefined8 *)(puVar17 + 0xc) = uVar12;
            *(undefined8 *)(param_1 + lVar15 + 0xd0) = uStack_70;
            *(undefined8 *)(param_1 + lVar15 + 200) = local_78;
            if (local_a8 != (int *)0x0) {
              local_a0 = local_a8;
              operator_delete(local_a8);
            }
            iVar16 = iVar16 + 1;
            if (iVar16 == 8) {
              bVar5 = puVar10 + 0x12 == (undefined4 *)param_2;
              goto LAB_00bfd77c;
            }
          }
        }
        else if (uVar3 < (uint)piVar11[1]) goto LAB_00bfd458;
      }
      else if (*piVar14 < *piVar11) goto LAB_00bfd458;
      lVar9 = lVar9 + 0x48;
      puVar17 = puVar10 + 0x12;
      puVar13 = puVar10;
    } while (puVar10 + 0x12 != (undefined4 *)param_2);
    bVar5 = true;
  }
LAB_00bfd77c:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}


