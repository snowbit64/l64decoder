// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadFromJpegStruct
// Entry Point: 00a98060
// Size: 368 bytes
// Signature: undefined __cdecl loadFromJpegStruct(void * param_1, ORIGIN param_2, ImageDesc * param_3)


/* JPEGUtil::loadFromJpegStruct(void*, ImageDesc::ORIGIN, ImageDesc&) */

void JPEGUtil::loadFromJpegStruct(void *param_1,ORIGIN param_2,ImageDesc *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  void *__s;
  undefined8 uVar8;
  undefined4 uVar9;
  void *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  jpeg_start_decompress();
  iVar7 = *(int *)((long)param_1 + 0x74);
  *(int *)param_3 = iVar7;
  uVar1 = *(uint *)((long)param_1 + 0x78);
  *(uint *)(param_3 + 4) = uVar1;
  iVar2 = *(int *)((long)param_1 + 0x80);
  *(int *)(param_3 + 0x14) = iVar2;
  iVar3 = *(int *)((long)param_1 + 0x118);
  if (iVar3 == 8) {
    uVar9 = 1;
  }
  else {
    if (iVar3 != 0x10) {
      uVar8 = 0;
      goto LAB_00a9819c;
    }
    uVar9 = 3;
  }
  uVar4 = iVar2 * iVar7;
  *(undefined4 *)(param_3 + 0x18) = uVar9;
  uVar5 = uVar4 * uVar1;
  __s = operator_new__((ulong)uVar5);
  *(uint *)(param_3 + 0x20) = uVar5;
  *(void **)(param_3 + 0x28) = __s;
  memset(__s,0,(ulong)uVar5);
  if (iVar2 - 1U < 4) {
    *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(&DAT_004c4f90 + (long)(int)(iVar2 - 1U) * 4);
  }
  local_70 = __s;
  if (*(uint *)((long)param_1 + 0x98) < uVar1) {
    do {
      iVar7 = jpeg_read_scanlines(param_1,&local_70,1);
      local_70 = (void *)((long)local_70 + (ulong)uVar4);
      if (iVar7 == 0) break;
    } while (*(uint *)((long)param_1 + 0x98) < *(uint *)((long)param_1 + 0x78));
  }
  *(ORIGIN *)(param_3 + 0x44) = param_2;
  if (param_2 != 0) {
    iVar7 = iVar3 + 7;
    if (-1 < iVar3) {
      iVar7 = iVar3;
    }
    ImageUtil::flipY(*(uchar **)(param_3 + 0x28),*(uint *)(param_3 + 0x20),*(uint *)param_3,
                     *(uint *)(param_3 + 4),iVar7 >> 3,*(FORMAT *)(param_3 + 0x40),(char *)0x0,false
                    );
  }
  uVar8 = 1;
LAB_00a9819c:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


