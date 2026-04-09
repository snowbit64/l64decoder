// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: zipClose
// Entry Point: 00e36648
// Size: 636 bytes
// Signature: undefined zipClose(void)


int zipClose(void *param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  void **__ptr;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  size_t sVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  void *pvVar16;
  undefined2 local_70 [4];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_1 == (void *)0x0) {
    iVar3 = -0x66;
  }
  else {
    if (*(int *)((long)param_1 + 0x70) == 1) {
      iVar3 = zipCloseFileInZipRaw64(param_1,0,0);
    }
    else {
      iVar3 = 0;
    }
    if (param_2 == (char *)0x0) {
      param_2 = *(char **)((long)param_1 + 0x10198);
    }
    lVar5 = call_ztell64(param_1,*(undefined8 *)((long)param_1 + 0x58));
    if (iVar3 == 0) {
      plVar15 = *(long **)((long)param_1 + 0x60);
      if (plVar15 == (long *)0x0) {
        lVar14 = 0;
        iVar3 = 0;
      }
      else {
        iVar3 = 0;
        lVar14 = 0;
        do {
          lVar10 = plVar15[2];
          if (iVar3 == 0) {
            if (lVar10 == 0) {
              iVar3 = 0;
            }
            else {
              lVar8 = (**(code **)((long)param_1 + 0x10))
                                (*(undefined8 *)((long)param_1 + 0x38),
                                 *(undefined8 *)((long)param_1 + 0x58),plVar15 + 4);
              lVar10 = plVar15[2];
              iVar3 = -(uint)(lVar8 != lVar10);
            }
          }
          else {
            iVar3 = -1;
          }
          plVar15 = (long *)*plVar15;
          lVar14 = lVar10 + lVar14;
        } while (plVar15 != (long *)0x0);
      }
    }
    else {
      lVar14 = 0;
    }
    __ptr = (void **)*(void **)((long)param_1 + 0x60);
    while (__ptr != (void **)0x0) {
      pvVar16 = *__ptr;
      free(__ptr);
      __ptr = (void **)pvVar16;
    }
    *(void **)((long)param_1 + 0x60) = (void *)0x0;
    *(undefined8 *)((long)param_1 + 0x68) = 0;
    if ((0xfffffffe < (ulong)(lVar5 - *(long *)((long)param_1 + 0x10188))) ||
       (0xffff < *(ulong *)((long)param_1 + 0x10190))) {
      uVar6 = call_ztell64(param_1,*(undefined8 *)((long)param_1 + 0x58));
      Write_Zip64EndOfCentralDirectoryRecord(param_1,lVar14,lVar5);
      Write_Zip64EndOfCentralDirectoryLocator(param_1,uVar6);
    }
    if ((iVar3 == 0) &&
       (iVar3 = Write_EndOfCentralDirectoryRecord(param_1,lVar14,lVar5), iVar3 == 0)) {
      if (param_2 == (char *)0x0) {
        uVar6 = *(undefined8 *)((long)param_1 + 0x58);
        uVar12 = 0;
        uVar13 = 0;
        local_70[0] = 0;
      }
      else {
        sVar7 = strlen(param_2);
        uVar6 = *(undefined8 *)((long)param_1 + 0x58);
        uVar12 = sVar7 & 0xffffffff;
        uVar13 = (uint)sVar7;
        local_70[0] = (undefined2)sVar7;
        if (0xffff < uVar13) {
          uVar13 = 1;
          local_70[0] = 0xffff;
        }
      }
      lVar5 = (**(code **)((long)param_1 + 0x10))
                        (*(undefined8 *)((long)param_1 + 0x38),uVar6,local_70,2);
      uVar11 = (uint)(lVar5 != 2);
      if ((lVar5 == 2) && (uVar13 != 0)) {
        uVar9 = (**(code **)((long)param_1 + 0x10))
                          (*(undefined8 *)((long)param_1 + 0x38),
                           *(undefined8 *)((long)param_1 + 0x58),param_2,uVar12);
        uVar11 = (uint)(uVar9 != uVar12);
      }
      iVar3 = -uVar11;
    }
    iVar4 = (**(code **)((long)param_1 + 0x28))
                      (*(undefined8 *)((long)param_1 + 0x38),*(undefined8 *)((long)param_1 + 0x58));
    iVar1 = iVar3;
    if (iVar3 == 0) {
      iVar1 = -1;
    }
    if (iVar4 != 0) {
      iVar3 = iVar1;
    }
    if (*(void **)((long)param_1 + 0x10198) != (void *)0x0) {
      free(*(void **)((long)param_1 + 0x10198));
    }
    free(param_1);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}


