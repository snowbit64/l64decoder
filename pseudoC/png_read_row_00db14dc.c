// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_read_row
// Entry Point: 00db14dc
// Size: 1056 bytes
// Signature: undefined png_read_row(void)


void png_read_row(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  byte *__src;
  undefined8 uVar6;
  uint uVar7;
  char *pcVar8;
  ushort *puVar9;
  long lVar10;
  size_t __n;
  uint local_60 [2];
  ulong local_58;
  undefined2 local_50;
  undefined local_4e;
  byte local_4d;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (param_1 == 0) goto LAB_00db18a0;
  if ((*(byte *)(param_1 + 0x168) >> 6 & 1) == 0) {
    png_read_start_row(param_1);
  }
  local_4d = *(byte *)(param_1 + 0x2a2);
  local_60[0] = *(uint *)(param_1 + 0x248);
  local_4e = *(undefined *)(param_1 + 0x2a3);
  local_50 = *(undefined2 *)(param_1 + 0x29f);
  if (local_4d < 8) {
    local_58 = (ulong)local_4d * (ulong)local_60[0] + 7 >> 3;
    cVar3 = *(char *)(param_1 + 0x29c);
  }
  else {
    local_58 = (ulong)(local_4d >> 3) * (ulong)local_60[0];
    cVar3 = *(char *)(param_1 + 0x29c);
  }
  if ((cVar3 != '\0') && ((*(byte *)(param_1 + 0x16c) >> 1 & 1) != 0)) {
    uVar7 = *(uint *)(param_1 + 0x24c);
    switch(*(undefined *)(param_1 + 0x29d)) {
    case 0:
      if ((uVar7 & 7) != 0) {
LAB_00db16f0:
        if (param_3 != 0) goto LAB_00db16f4;
LAB_00db1704:
        png_read_finish_row(param_1);
        goto LAB_00db18a0;
      }
      break;
    case 1:
      if (((uVar7 & 7) != 0) || (*(uint *)(param_1 + 0x230) < 5)) goto LAB_00db16f0;
      break;
    case 2:
      if ((uVar7 & 7) != 4) {
        if ((param_3 == 0) || ((uVar7 >> 2 & 1) == 0)) goto LAB_00db1704;
LAB_00db16f4:
        png_combine_row(param_1,param_3,1);
        goto LAB_00db1704;
      }
      break;
    case 3:
      if (((uVar7 & 3) != 0) || (*(uint *)(param_1 + 0x230) < 3)) goto LAB_00db16f0;
      break;
    case 4:
      if ((uVar7 & 3) != 2) {
        if ((param_3 != 0) && ((uVar7 >> 1 & 1) != 0)) goto LAB_00db16f4;
        goto LAB_00db1704;
      }
      break;
    case 5:
      if (((uVar7 & 1) != 0) || (*(uint *)(param_1 + 0x230) < 2)) goto LAB_00db16f0;
      break;
    default:
      if ((uVar7 & 1) == 0) goto LAB_00db1704;
    }
  }
  if ((*(byte *)(param_1 + 0x164) >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Invalid attempt to read row data");
  }
  **(undefined **)(param_1 + 0x260) = 0xff;
  __n = local_58 + 1;
  png_read_IDAT_data(param_1,*(undefined8 *)(param_1 + 0x260),__n);
  __src = *(byte **)(param_1 + 0x260);
  if (*__src != 0) {
    if (4 < *__src) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"bad adaptive filter value");
    }
    png_read_filter_row(param_1,local_60,__src + 1,*(long *)(param_1 + 600) + 1);
    __src = *(byte **)(param_1 + 0x260);
    __n = local_58 + 1;
  }
  memcpy(*(void **)(param_1 + 600),__src,__n);
  if ((((*(byte *)(param_1 + 0x418) >> 2 & 1) != 0) && (*(char *)(param_1 + 0x41c) == '@')) &&
     (((byte)local_50 >> 1 & 1) != 0)) {
    if (local_50._1_1_ == '\x10') {
      if ((byte)local_50 == 2) {
        lVar10 = 6;
      }
      else {
        if ((byte)local_50 != 6) goto LAB_00db17bc;
        lVar10 = 8;
      }
      if (local_60[0] != 0) {
        puVar9 = (ushort *)(*(long *)(param_1 + 0x260) + 3);
        uVar7 = local_60[0];
        do {
          uVar7 = uVar7 - 1;
          uVar4 = (((*puVar9 & 0xff00) << 0x10) >> 8 | (uint)*puVar9 << 0x18) >> 0x10;
          iVar1 = uVar4 + ((((puVar9[-1] & 0xff00) << 0x10) >> 8 | (uint)puVar9[-1] << 0x18) >> 0x10
                          );
          iVar2 = ((((puVar9[1] & 0xff00) << 0x10) >> 8 | (uint)puVar9[1] << 0x18) >> 0x10) + uVar4;
          *(char *)((long)puVar9 + -1) = (char)iVar1;
          *(char *)((long)puVar9 + 3) = (char)iVar2;
          *(char *)(puVar9 + -1) = (char)((uint)iVar1 >> 8);
          *(char *)(puVar9 + 1) = (char)((uint)iVar2 >> 8);
          puVar9 = (ushort *)((long)puVar9 + lVar10);
        } while (uVar7 != 0);
      }
    }
    else if (local_50._1_1_ == '\b') {
      if ((byte)local_50 == 2) {
        lVar10 = 3;
      }
      else {
        if ((byte)local_50 != 6) goto LAB_00db17bc;
        lVar10 = 4;
      }
      if (local_60[0] != 0) {
        pcVar8 = (char *)(*(long *)(param_1 + 0x260) + 3);
        uVar7 = local_60[0];
        do {
          uVar7 = uVar7 - 1;
          pcVar8[-2] = pcVar8[-1] + pcVar8[-2];
          *pcVar8 = *pcVar8 + pcVar8[-1];
          pcVar8 = pcVar8 + lVar10;
        } while (uVar7 != 0);
      }
    }
  }
LAB_00db17bc:
  if (*(int *)(param_1 + 0x16c) != 0) {
    png_do_read_transformations(param_1,local_60);
  }
  if (*(byte *)(param_1 + 0x2a7) == 0) {
    *(byte *)(param_1 + 0x2a7) = local_4d;
    if (*(byte *)(param_1 + 0x2a6) < local_4d) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"sequential row overflow");
    }
  }
  else if (*(byte *)(param_1 + 0x2a7) != local_4d) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal sequential row size calculation error");
  }
  if ((*(char *)(param_1 + 0x29c) == '\0') || ((*(uint *)(param_1 + 0x16c) >> 1 & 1) == 0)) {
    if (param_2 != 0) {
      png_combine_row(param_1,param_2,0xffffffff);
    }
    if (param_3 != 0) {
      uVar6 = 0xffffffff;
      param_2 = param_3;
      goto LAB_00db187c;
    }
  }
  else {
    if (*(byte *)(param_1 + 0x29d) < 6) {
      png_do_read_interlace(local_60,*(long *)(param_1 + 0x260) + 1);
    }
    if (param_3 != 0) {
      png_combine_row(param_1,param_3,1);
    }
    if (param_2 != 0) {
      uVar6 = 0;
LAB_00db187c:
      png_combine_row(param_1,param_2,uVar6);
    }
  }
  png_read_finish_row(param_1);
  if (*(code **)(param_1 + 0x338) != (code *)0x0) {
    (**(code **)(param_1 + 0x338))
              (param_1,*(undefined4 *)(param_1 + 0x24c),*(undefined *)(param_1 + 0x29d));
  }
LAB_00db18a0:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


