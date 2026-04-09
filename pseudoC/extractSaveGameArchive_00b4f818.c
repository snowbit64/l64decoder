// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: extractSaveGameArchive
// Entry Point: 00b4f818
// Size: 332 bytes
// Signature: undefined __cdecl extractSaveGameArchive(char * param_1, uchar * param_2, uint param_3)


/* SaveGameArchiveUtil::extractSaveGameArchive(char const*, unsigned char const*, unsigned int) */

undefined4 SaveGameArchiveUtil::extractSaveGameArchive(char *param_1,uchar *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  uint local_264;
  int *local_260;
  char acStack_258 [512];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar6 = decompressData(param_2,param_3,(uchar **)&local_260,&local_264);
  if ((uVar6 & 1) != 0) {
    if (3 < local_264) {
      iVar9 = *local_260;
      if (iVar9 == 0) {
        uVar8 = 1;
      }
      else {
        puVar2 = (uint *)((long)local_260 + (ulong)local_264);
        piVar7 = local_260 + 1;
        do {
          puVar3 = (uint *)(piVar7 + 1);
          if ((puVar2 < puVar3) || (puVar2 < (uint *)((long)puVar3 + (ulong)(*piVar7 + 1)))) {
LAB_00b4f918:
            uVar8 = 0;
            goto LAB_00b4f91c;
          }
          puVar3 = (uint *)((long)puVar3 + (ulong)(*piVar7 + 4U & 0xfffffffc));
          puVar1 = puVar3 + 1;
          if ((puVar2 < puVar1) || (uVar4 = *puVar3, puVar2 < (uint *)((long)puVar1 + (ulong)uVar4))
             ) goto LAB_00b4f918;
          FUN_00b4f698(acStack_258);
          uVar6 = NativeFileUtil::writeFile(acStack_258,(uchar *)puVar1,uVar4);
          if ((uVar6 & 1) == 0) goto LAB_00b4f918;
          iVar9 = iVar9 + -1;
          piVar7 = (int *)((long)puVar1 + (ulong)(uVar4 + 3 & 0xfffffffc));
        } while (iVar9 != 0);
        uVar8 = 1;
LAB_00b4f91c:
        if (local_260 == (int *)0x0) goto LAB_00b4f930;
      }
      operator_delete__(local_260);
      goto LAB_00b4f930;
    }
    if (local_260 != (int *)0x0) {
      operator_delete__(local_260);
    }
  }
  uVar8 = 0;
LAB_00b4f930:
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


