// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort3<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
// Entry Point: 00bfdf04
// Size: 844 bytes
// Signature: uint __cdecl __sort3<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>(TempProgramData * param_1, TempProgramData * param_2, TempProgramData * param_3, SortTempProgramByFirstId * param_4)


/* unsigned int std::__ndk1::__sort3<CompiledShaderArchive::SortTempProgramByFirstId&,
   CompiledShaderArchive::TempProgramData*>(CompiledShaderArchive::TempProgramData*,
   CompiledShaderArchive::TempProgramData*, CompiledShaderArchive::TempProgramData*,
   CompiledShaderArchive::SortTempProgramByFirstId&) */

uint std::__ndk1::
     __sort3<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
               (TempProgramData *param_1,TempProgramData *param_2,TempProgramData *param_3,
               SortTempProgramByFirstId *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  puVar8 = (undefined8 *)(param_2 + 0x18);
  uVar5 = *(uint *)puVar8;
  puVar9 = (undefined8 *)(param_1 + 0x18);
  bVar4 = *(uint *)puVar9 <= uVar5;
  if ((uVar5 == *(uint *)puVar9) &&
     (bVar4 = *(uint *)(param_1 + 0x1c) <= *(uint *)(param_2 + 0x1c),
     *(uint *)(param_2 + 0x1c) == *(uint *)(param_1 + 0x1c))) {
    bVar4 = *(uint *)(param_1 + 0x24) <= *(uint *)(param_2 + 0x24);
  }
  if (bVar4) {
    puVar10 = (undefined8 *)(param_3 + 0x18);
    bVar4 = uVar5 <= *(uint *)puVar10;
    if ((*(uint *)puVar10 == uVar5) &&
       (bVar4 = *(uint *)(param_2 + 0x1c) <= *(uint *)(param_3 + 0x1c),
       *(uint *)(param_3 + 0x1c) == *(uint *)(param_2 + 0x1c))) {
      if (*(uint *)(param_2 + 0x24) <= *(uint *)(param_3 + 0x24)) {
LAB_00bfe060:
        uVar5 = 0;
        goto LAB_00bfe21c;
      }
    }
    else if (bVar4) goto LAB_00bfe060;
    uVar1 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    uVar11 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = 0;
    uVar14 = *(undefined8 *)(param_3 + 8);
    uVar13 = *(undefined8 *)(param_2 + 0x20);
    uVar12 = *puVar8;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 8) = uVar14;
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    uVar14 = *puVar10;
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    *puVar8 = uVar14;
    pvVar6 = *(void **)param_3;
    if (pvVar6 != (void *)0x0) {
      *(void **)(param_3 + 8) = pvVar6;
      operator_delete(pvVar6);
    }
    *(undefined8 *)param_3 = uVar11;
    *(undefined8 *)(param_3 + 8) = uVar1;
    *(undefined8 *)(param_3 + 0x10) = uVar2;
    *(undefined8 *)(param_3 + 0x20) = uVar13;
    *puVar10 = uVar12;
    bVar4 = *(uint *)puVar9 <= *(uint *)puVar8;
    if ((*(uint *)puVar8 == *(uint *)puVar9) &&
       (bVar4 = *(uint *)(param_1 + 0x1c) <= *(uint *)(param_2 + 0x1c),
       *(uint *)(param_2 + 0x1c) == *(uint *)(param_1 + 0x1c))) {
      if (*(uint *)(param_2 + 0x24) < *(uint *)(param_1 + 0x24)) {
LAB_00bfe1b8:
        uVar1 = *(undefined8 *)(param_1 + 8);
        uVar2 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        uVar11 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = 0;
        uVar14 = *(undefined8 *)(param_2 + 8);
        uVar13 = *(undefined8 *)(param_1 + 0x20);
        uVar12 = *puVar9;
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(undefined8 *)(param_1 + 8) = uVar14;
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
        uVar14 = *puVar8;
        *(undefined8 *)param_2 = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
        *puVar9 = uVar14;
        pvVar6 = *(void **)param_2;
        if (pvVar6 != (void *)0x0) {
          *(void **)(param_2 + 8) = pvVar6;
          operator_delete(pvVar6);
        }
        *(undefined8 *)param_2 = uVar11;
        *(undefined8 *)(param_2 + 8) = uVar1;
        uVar5 = 2;
        *(undefined8 *)(param_2 + 0x10) = uVar2;
        *(undefined8 *)(param_2 + 0x20) = uVar13;
        *puVar8 = uVar12;
        goto LAB_00bfe21c;
      }
    }
    else if (!bVar4) goto LAB_00bfe1b8;
    goto LAB_00bfe218;
  }
  puVar10 = (undefined8 *)(param_3 + 0x18);
  bVar4 = uVar5 <= *(uint *)puVar10;
  if ((*(uint *)puVar10 == uVar5) &&
     (bVar4 = *(uint *)(param_2 + 0x1c) <= *(uint *)(param_3 + 0x1c),
     *(uint *)(param_3 + 0x1c) == *(uint *)(param_2 + 0x1c))) {
    if (*(uint *)(param_3 + 0x24) < *(uint *)(param_2 + 0x24)) goto LAB_00bfe06c;
LAB_00bfdfa4:
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar11 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    uVar14 = *(undefined8 *)(param_2 + 8);
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    uVar12 = *puVar9;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 8) = uVar14;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    uVar14 = *puVar8;
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *puVar9 = uVar14;
    pvVar6 = *(void **)param_2;
    if (pvVar6 != (void *)0x0) {
      *(void **)(param_2 + 8) = pvVar6;
      operator_delete(pvVar6);
    }
    *(undefined8 *)param_2 = uVar11;
    *(undefined8 *)(param_2 + 8) = uVar1;
    *(undefined8 *)(param_2 + 0x10) = uVar2;
    *(undefined8 *)(param_2 + 0x20) = uVar13;
    *puVar8 = uVar12;
    bVar4 = *(uint *)(param_2 + 0x18) <= *(uint *)puVar10;
    if ((*(uint *)puVar10 == *(uint *)(param_2 + 0x18)) &&
       (bVar4 = *(uint *)(param_2 + 0x1c) <= *(uint *)(param_3 + 0x1c),
       *(uint *)(param_3 + 0x1c) == *(uint *)(param_2 + 0x1c))) {
      if (*(uint *)(param_2 + 0x24) <= *(uint *)(param_3 + 0x24)) {
LAB_00bfe218:
        uVar5 = 1;
        goto LAB_00bfe21c;
      }
    }
    else if (bVar4) goto LAB_00bfe218;
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    uStack_78 = *(undefined8 *)(param_2 + 0x20);
    local_80 = *puVar8;
    *(undefined8 *)(param_2 + 0x10) = 0;
    uVar14 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 8) = uVar14;
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    uVar14 = *puVar10;
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    *puVar8 = uVar14;
    pvVar6 = *(void **)param_3;
    if (pvVar6 != (void *)0x0) {
      *(void **)(param_3 + 8) = pvVar6;
      operator_delete(pvVar6);
    }
    uVar5 = 2;
    *(undefined8 *)param_3 = uVar11;
    *(undefined8 *)(param_3 + 8) = uVar1;
    *(undefined8 *)(param_3 + 0x10) = uVar2;
  }
  else {
    if (bVar4) goto LAB_00bfdfa4;
LAB_00bfe06c:
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar11 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    uVar14 = *(undefined8 *)(param_3 + 8);
    uStack_78 = *(undefined8 *)(param_1 + 0x20);
    local_80 = *puVar9;
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
    *(undefined8 *)(param_1 + 8) = uVar14;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    uVar14 = *puVar10;
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    *puVar9 = uVar14;
    pvVar6 = *(void **)param_3;
    if (pvVar6 != (void *)0x0) {
      *(void **)(param_3 + 8) = pvVar6;
      operator_delete(pvVar6);
    }
    *(undefined8 *)param_3 = uVar11;
    *(undefined8 *)(param_3 + 8) = uVar1;
    uVar5 = 1;
    *(undefined8 *)(param_3 + 0x10) = uVar2;
  }
  *(undefined8 *)(param_3 + 0x20) = uStack_78;
  *puVar10 = local_80;
LAB_00bfe21c:
  if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


