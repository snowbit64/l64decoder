// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_3<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
// Entry Point: 00bfcff0
// Size: 724 bytes
// Signature: void __cdecl __insertion_sort_3<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>(TempShaderData * param_1, TempShaderData * param_2, SortTempShaderByFirstId * param_3)


/* void std::__ndk1::__insertion_sort_3<CompiledShaderArchive::SortTempShaderByFirstId&,
   CompiledShaderArchive::TempShaderData*>(CompiledShaderArchive::TempShaderData*,
   CompiledShaderArchive::TempShaderData*, CompiledShaderArchive::SortTempShaderByFirstId&) */

void std::__ndk1::
     __insertion_sort_3<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
               (TempShaderData *param_1,TempShaderData *param_2,SortTempShaderByFirstId *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
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
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  __sort3<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
            (param_1,param_1 + 0x48,param_1 + 0x90,param_3);
  if (param_1 + 0xd8 != param_2) {
    lVar13 = 0;
    puVar11 = (undefined4 *)(param_1 + 0xd8);
    puVar12 = (undefined4 *)(param_1 + 0x90);
    do {
      puVar7 = puVar11;
      piVar10 = *(int **)(puVar7 + 2);
      piVar8 = *(int **)(puVar12 + 2);
      if (*piVar10 == *piVar8) {
        uVar3 = piVar10[1];
        if (uVar3 == piVar8[1]) {
          iVar5 = memcmp(*(void **)(piVar10 + 2),*(void **)(piVar8 + 2),(ulong)uVar3);
          if (iVar5 < 0) {
LAB_00bfd0c8:
            local_b0[0] = *puVar7;
            pvVar6 = (void *)0x0;
            uStack_88 = *(undefined8 *)(puVar7 + 10);
            local_90 = *(undefined8 *)(puVar7 + 8);
            local_a0 = *(void **)(puVar7 + 4);
            local_98 = *(undefined8 *)(puVar7 + 6);
            uStack_70 = *(undefined8 *)(puVar7 + 0x10);
            local_78 = *(undefined8 *)(puVar7 + 0xe);
            *(undefined8 *)(puVar7 + 2) = 0;
            *(undefined8 *)(puVar7 + 4) = 0;
            *(undefined8 *)(puVar7 + 6) = 0;
            *(undefined8 *)(puVar7 + 8) = 0;
            local_80 = *(undefined8 *)(puVar7 + 0xc);
            *(undefined8 *)(puVar7 + 10) = 0;
            *(undefined8 *)(puVar7 + 0xc) = 0;
            lVar14 = lVar13;
            local_a8 = piVar10;
            while( true ) {
              *(undefined4 *)(param_1 + lVar14 + 0xd8) = *(undefined4 *)(param_1 + lVar14 + 0x90);
              if (pvVar6 != (void *)0x0) {
                *(void **)(param_1 + lVar14 + 0xe8) = pvVar6;
                operator_delete(pvVar6);
                *(undefined8 *)(param_1 + lVar14 + 0xe8) = 0;
                *(undefined8 *)(param_1 + lVar14 + 0xf0) = 0;
              }
              uVar1 = *(undefined8 *)(param_1 + lVar14 + 0x98);
              uVar2 = *(undefined8 *)(param_1 + lVar14 + 0xa0);
              *(undefined8 *)(param_1 + lVar14 + 0x98) = 0;
              *(undefined8 *)(param_1 + lVar14 + 0xa0) = 0;
              uVar9 = *(undefined8 *)(param_1 + lVar14 + 0xa8);
              *(undefined8 *)(param_1 + lVar14 + 0xa8) = 0;
              pvVar6 = *(void **)(param_1 + lVar14 + 0xf8);
              *(undefined8 *)(param_1 + lVar14 + 0xe0) = uVar1;
              *(undefined8 *)(param_1 + lVar14 + 0xe8) = uVar2;
              *(undefined8 *)(param_1 + lVar14 + 0xf0) = uVar9;
              if (pvVar6 != (void *)0x0) {
                *(void **)(param_1 + lVar14 + 0x100) = pvVar6;
                operator_delete(pvVar6);
                *(undefined8 *)(param_1 + lVar14 + 0x100) = 0;
                *(undefined8 *)(param_1 + lVar14 + 0x108) = 0;
              }
              uVar1 = *(undefined8 *)(param_1 + lVar14 + 0xb0);
              uVar2 = *(undefined8 *)(param_1 + lVar14 + 0xb8);
              *(undefined8 *)(param_1 + lVar14 + 0xb0) = 0;
              *(undefined8 *)(param_1 + lVar14 + 0xb8) = 0;
              uVar9 = *(undefined8 *)(param_1 + lVar14 + 0xc0);
              *(undefined8 *)(param_1 + lVar14 + 0xc0) = 0;
              *(undefined8 *)(param_1 + lVar14 + 0xf8) = uVar1;
              *(undefined8 *)(param_1 + lVar14 + 0x100) = uVar2;
              *(undefined8 *)(param_1 + lVar14 + 0x108) = uVar9;
              *(undefined8 *)(param_1 + lVar14 + 0x118) = *(undefined8 *)(param_1 + lVar14 + 0xd0);
              *(undefined8 *)(param_1 + lVar14 + 0x110) = *(undefined8 *)(param_1 + lVar14 + 200);
              puVar11 = (undefined4 *)param_1;
              if (lVar14 == -0x90) goto LAB_00bfd1f8;
              if ((undefined4 *)(param_1 + lVar14 + 0x48) == local_b0) break;
              piVar8 = *(int **)(param_1 + lVar14 + 0x50);
              if (*local_a8 == *piVar8) {
                uVar3 = local_a8[1];
                if (uVar3 == piVar8[1]) {
                  iVar5 = memcmp(*(void **)(local_a8 + 2),*(void **)(piVar8 + 2),(ulong)uVar3);
                  if (-1 < iVar5) break;
                }
                else if ((uint)piVar8[1] <= uVar3) break;
              }
              else if (*piVar8 <= *local_a8) break;
              pvVar6 = *(void **)(param_1 + lVar14 + 0x98);
              lVar14 = lVar14 + -0x48;
            }
            puVar11 = (undefined4 *)(param_1 + lVar14 + 0x90);
LAB_00bfd1f8:
            *puVar11 = local_b0[0];
            pvVar6 = *(void **)(param_1 + lVar14 + 0x98);
            if (pvVar6 != (void *)0x0) {
              *(void **)(puVar11 + 4) = pvVar6;
              operator_delete(pvVar6);
              *(undefined8 *)(param_1 + lVar14 + 0x98) = 0;
              *(undefined8 *)(param_1 + lVar14 + 0xa0) = 0;
              *(undefined8 *)(param_1 + lVar14 + 0xa8) = 0;
            }
            uVar2 = local_98;
            uVar1 = local_a0;
            piVar8 = local_a8;
            local_a8 = (int *)0x0;
            local_a0 = (void *)0x0;
            local_98 = 0;
            *(int **)(param_1 + lVar14 + 0x98) = piVar8;
            *(undefined8 *)(puVar11 + 4) = uVar1;
            *(undefined8 *)(puVar11 + 6) = uVar2;
            pvVar6 = *(void **)(param_1 + lVar14 + 0xb0);
            if (pvVar6 != (void *)0x0) {
              *(void **)(puVar11 + 10) = pvVar6;
              operator_delete(pvVar6);
              *(undefined8 *)(param_1 + lVar14 + 0xb0) = 0;
              *(undefined8 *)(param_1 + lVar14 + 0xb8) = 0;
              *(undefined8 *)(param_1 + lVar14 + 0xc0) = 0;
            }
            uVar9 = local_80;
            uVar2 = uStack_88;
            uVar1 = local_90;
            local_90 = 0;
            uStack_88 = 0;
            local_80 = 0;
            *(undefined8 *)(param_1 + lVar14 + 0xb0) = uVar1;
            *(undefined8 *)(puVar11 + 10) = uVar2;
            *(undefined8 *)(puVar11 + 0xc) = uVar9;
            *(undefined8 *)(param_1 + lVar14 + 0xd0) = uStack_70;
            *(undefined8 *)(param_1 + lVar14 + 200) = local_78;
            if (local_a8 != (int *)0x0) {
              local_a0 = local_a8;
              operator_delete(local_a8);
            }
          }
        }
        else if (uVar3 < (uint)piVar8[1]) goto LAB_00bfd0c8;
      }
      else if (*piVar10 < *piVar8) goto LAB_00bfd0c8;
      lVar13 = lVar13 + 0x48;
      puVar11 = puVar7 + 0x12;
      puVar12 = puVar7;
    } while (puVar7 + 0x12 != (undefined4 *)param_2);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


