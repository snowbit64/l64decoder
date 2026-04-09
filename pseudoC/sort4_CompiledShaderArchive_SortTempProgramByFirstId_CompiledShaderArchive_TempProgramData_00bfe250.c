// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
// Entry Point: 00bfe250
// Size: 580 bytes
// Signature: uint __cdecl __sort4<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>(TempProgramData * param_1, TempProgramData * param_2, TempProgramData * param_3, TempProgramData * param_4, SortTempProgramByFirstId * param_5)


/* unsigned int std::__ndk1::__sort4<CompiledShaderArchive::SortTempProgramByFirstId&,
   CompiledShaderArchive::TempProgramData*>(CompiledShaderArchive::TempProgramData*,
   CompiledShaderArchive::TempProgramData*, CompiledShaderArchive::TempProgramData*,
   CompiledShaderArchive::TempProgramData*, CompiledShaderArchive::SortTempProgramByFirstId&) */

uint std::__ndk1::
     __sort4<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
               (TempProgramData *param_1,TempProgramData *param_2,TempProgramData *param_3,
               TempProgramData *param_4,SortTempProgramByFirstId *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
  uVar5 = __sort3<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
                    (param_1,param_2,param_3,param_5);
  puVar10 = (undefined8 *)(param_4 + 0x18);
  puVar9 = (undefined8 *)(param_3 + 0x18);
  bVar4 = *(uint *)puVar9 <= *(uint *)puVar10;
  if ((*(uint *)puVar10 == *(uint *)puVar9) &&
     (bVar4 = *(uint *)(param_3 + 0x1c) <= *(uint *)(param_4 + 0x1c),
     *(uint *)(param_4 + 0x1c) == *(uint *)(param_3 + 0x1c))) {
    bVar4 = *(uint *)(param_3 + 0x24) <= *(uint *)(param_4 + 0x24);
  }
  uVar6 = uVar5;
  if (!bVar4) {
    uVar11 = *(undefined8 *)param_3;
    uVar1 = *(undefined8 *)(param_3 + 8);
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined8 *)param_3 = 0;
    uVar13 = *(undefined8 *)(param_3 + 0x20);
    uVar12 = *puVar9;
    uVar14 = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    *(undefined8 *)(param_3 + 8) = uVar14;
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_4 + 0x10);
    uVar14 = *puVar10;
    *(undefined8 *)param_4 = 0;
    *(undefined8 *)(param_4 + 8) = 0;
    *(undefined8 *)(param_4 + 0x10) = 0;
    *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_4 + 0x20);
    *puVar9 = uVar14;
    pvVar7 = *(void **)param_4;
    if (pvVar7 != (void *)0x0) {
      *(void **)(param_4 + 8) = pvVar7;
      operator_delete(pvVar7);
    }
    *(undefined8 *)param_4 = uVar11;
    *(undefined8 *)(param_4 + 8) = uVar1;
    *(undefined8 *)(param_4 + 0x10) = uVar2;
    uVar6 = uVar5 + 1;
    *(undefined8 *)(param_4 + 0x20) = uVar13;
    *puVar10 = uVar12;
    puVar10 = (undefined8 *)(param_2 + 0x18);
    bVar4 = *(uint *)puVar10 <= *(uint *)puVar9;
    if ((*(uint *)puVar9 == *(uint *)puVar10) &&
       (bVar4 = *(uint *)(param_2 + 0x1c) <= *(uint *)(param_3 + 0x1c),
       *(uint *)(param_3 + 0x1c) == *(uint *)(param_2 + 0x1c))) {
      if (*(uint *)(param_2 + 0x24) <= *(uint *)(param_3 + 0x24)) goto LAB_00bfe460;
    }
    else if (bVar4) goto LAB_00bfe460;
    uVar1 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    uVar11 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = 0;
    uVar14 = *(undefined8 *)(param_3 + 8);
    uVar13 = *(undefined8 *)(param_2 + 0x20);
    uVar12 = *puVar10;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 8) = uVar14;
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    uVar14 = *puVar9;
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    *puVar10 = uVar14;
    pvVar7 = *(void **)param_3;
    if (pvVar7 != (void *)0x0) {
      *(void **)(param_3 + 8) = pvVar7;
      operator_delete(pvVar7);
    }
    *(undefined8 *)param_3 = uVar11;
    *(undefined8 *)(param_3 + 8) = uVar1;
    uVar6 = uVar5 + 2;
    *(undefined8 *)(param_3 + 0x10) = uVar2;
    *(undefined8 *)(param_3 + 0x20) = uVar13;
    *puVar9 = uVar12;
    puVar9 = (undefined8 *)(param_1 + 0x18);
    bVar4 = *(uint *)puVar9 <= *(uint *)puVar10;
    if ((*(uint *)puVar10 == *(uint *)puVar9) &&
       (bVar4 = *(uint *)(param_1 + 0x1c) <= *(uint *)(param_2 + 0x1c),
       *(uint *)(param_2 + 0x1c) == *(uint *)(param_1 + 0x1c))) {
      bVar4 = *(uint *)(param_1 + 0x24) <= *(uint *)(param_2 + 0x24);
    }
    if (!bVar4) {
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
      uVar14 = *puVar10;
      *(undefined8 *)param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      *puVar9 = uVar14;
      pvVar7 = *(void **)param_2;
      if (pvVar7 != (void *)0x0) {
        *(void **)(param_2 + 8) = pvVar7;
        operator_delete(pvVar7);
      }
      uVar6 = uVar5 + 3;
      *(undefined8 *)param_2 = uVar11;
      *(undefined8 *)(param_2 + 8) = uVar1;
      *(undefined8 *)(param_2 + 0x10) = uVar2;
      *(undefined8 *)(param_2 + 0x20) = uVar13;
      *puVar10 = uVar12;
    }
  }
LAB_00bfe460:
  if (*(long *)(lVar3 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


