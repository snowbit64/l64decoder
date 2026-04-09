// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_row
// Entry Point: 00dc53d0
// Size: 888 bytes
// Signature: undefined png_write_row(void)


void png_write_row(long param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  char *pcVar7;
  ushort *puVar8;
  long lVar9;
  uint local_50 [2];
  size_t local_48;
  byte local_40;
  byte local_3f;
  byte local_3e;
  char local_3d;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == 0) goto LAB_00dc5700;
  if ((*(int *)(param_1 + 0x24c) != 0) || (*(char *)(param_1 + 0x29d) != '\0')) {
    if (*(char *)(param_1 + 0x29c) != '\0') goto LAB_00dc5414;
    goto switchD_00dc5554_caseD_7;
  }
  if ((*(byte *)(param_1 + 0x165) >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"png_write_info was never called before png_write_row");
  }
  png_write_start_row(param_1);
  if (*(char *)(param_1 + 0x29c) == '\0') goto switchD_00dc5554_caseD_7;
LAB_00dc5414:
  if ((*(byte *)(param_1 + 0x16c) >> 1 & 1) == 0) goto switchD_00dc5554_caseD_7;
  switch(*(undefined *)(param_1 + 0x29d)) {
  case 0:
    bVar5 = *(byte *)(param_1 + 0x24c) & 7;
    goto joined_r0x00dc5600;
  case 1:
    if (((*(byte *)(param_1 + 0x24c) & 7) == 0) && (4 < *(uint *)(param_1 + 0x230))) break;
    goto LAB_00dc5604;
  case 2:
    if ((*(uint *)(param_1 + 0x24c) & 7) != 4) goto LAB_00dc5604;
    break;
  case 3:
    if (((*(byte *)(param_1 + 0x24c) & 3) != 0) || (*(uint *)(param_1 + 0x230) < 3))
    goto LAB_00dc5604;
    break;
  case 4:
    if ((*(uint *)(param_1 + 0x24c) & 3) != 2) goto LAB_00dc5604;
    break;
  case 5:
    if (((*(byte *)(param_1 + 0x24c) & 1) != 0) || (*(uint *)(param_1 + 0x230) < 2))
    goto LAB_00dc5604;
    break;
  case 6:
    bVar5 = *(byte *)(param_1 + 0x24c) & 1;
joined_r0x00dc5600:
    if (bVar5 != 0) break;
    goto LAB_00dc5604;
  }
switchD_00dc5554_caseD_7:
  local_40 = *(byte *)(param_1 + 0x29f);
  local_3e = *(byte *)(param_1 + 0x2a4);
  local_3f = *(byte *)(param_1 + 0x2a1);
  local_50[0] = *(uint *)(param_1 + 0x23c);
  uVar6 = (uint)local_3f * (uint)local_3e;
  local_3d = (char)uVar6;
  if ((uVar6 & 0xff) < 8) {
    local_48 = ((ulong)uVar6 & 0xff) * (ulong)local_50[0] + 7 >> 3;
  }
  else {
    local_48 = (ulong)(uVar6 >> 3 & 0x1f) * (ulong)local_50[0];
  }
  memcpy((void *)(*(long *)(param_1 + 0x260) + 1),param_2,local_48);
  if ((((*(char *)(param_1 + 0x29c) != '\0') && (*(byte *)(param_1 + 0x29d) < 6)) &&
      ((*(byte *)(param_1 + 0x16c) >> 1 & 1) != 0)) &&
     (png_do_write_interlace(local_50,*(long *)(param_1 + 0x260) + 1), local_50[0] == 0)) {
LAB_00dc5604:
    png_write_finish_row(param_1);
    goto LAB_00dc5700;
  }
  if (*(int *)(param_1 + 0x16c) != 0) {
    png_do_write_transformations(param_1,local_50);
  }
  if ((local_3d != *(char *)(param_1 + 0x2a2)) || (local_3d != *(char *)(param_1 + 0x2a7))) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal write transform logic error");
  }
  if ((((*(byte *)(param_1 + 0x418) >> 2 & 1) != 0) && (*(char *)(param_1 + 0x41c) == '@')) &&
     ((local_40 >> 1 & 1) != 0)) {
    if (local_3f == 0x10) {
      if (local_40 == 2) {
        lVar9 = 6;
      }
      else {
        if (local_40 != 6) goto LAB_00dc56c0;
        lVar9 = 8;
      }
      if (local_50[0] != 0) {
        puVar8 = (ushort *)(*(long *)(param_1 + 0x260) + 3);
        uVar6 = local_50[0];
        do {
          uVar6 = uVar6 - 1;
          uVar1 = (((*puVar8 & 0xff00) << 0x10) >> 8 | (uint)*puVar8 << 0x18) >> 0x10;
          iVar2 = ((((puVar8[-1] & 0xff00) << 0x10) >> 8 | (uint)puVar8[-1] << 0x18) >> 0x10) -
                  uVar1;
          iVar3 = ((((puVar8[1] & 0xff00) << 0x10) >> 8 | (uint)puVar8[1] << 0x18) >> 0x10) - uVar1;
          *(char *)((long)puVar8 + -1) = (char)iVar2;
          *(char *)((long)puVar8 + 3) = (char)iVar3;
          *(char *)(puVar8 + -1) = (char)((uint)iVar2 >> 8);
          *(char *)(puVar8 + 1) = (char)((uint)iVar3 >> 8);
          puVar8 = (ushort *)((long)puVar8 + lVar9);
        } while (uVar6 != 0);
      }
    }
    else if (local_3f == 8) {
      if (local_40 == 2) {
        lVar9 = 3;
      }
      else {
        if (local_40 != 6) goto LAB_00dc56c0;
        lVar9 = 4;
      }
      if (local_50[0] != 0) {
        pcVar7 = (char *)(*(long *)(param_1 + 0x260) + 3);
        uVar6 = local_50[0];
        do {
          uVar6 = uVar6 - 1;
          pcVar7[-2] = pcVar7[-2] - pcVar7[-1];
          *pcVar7 = *pcVar7 - pcVar7[-1];
          pcVar7 = pcVar7 + lVar9;
        } while (uVar6 != 0);
      }
    }
  }
LAB_00dc56c0:
  if ((local_40 == 3) && (-1 < *(int *)(param_1 + 0x294))) {
    png_do_check_palette_indexes(param_1,local_50);
  }
  png_write_find_filter(param_1,local_50);
  if (*(code **)(param_1 + 0x340) != (code *)0x0) {
    (**(code **)(param_1 + 0x340))
              (param_1,*(undefined4 *)(param_1 + 0x24c),*(undefined *)(param_1 + 0x29d));
  }
LAB_00dc5700:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


