// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dbd818
// Entry Point: 00dbd818
// Size: 428 bytes
// Signature: undefined FUN_00dbd818(void)


void FUN_00dbd818(long param_1,undefined8 param_2,uint *param_3,undefined8 param_4,ulong *param_5,
                 int param_6)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x250)) {
    *(char **)(param_1 + 0x1a8) = "zstream unclaimed";
    return;
  }
  uVar4 = 2;
  if (param_6 != 0) {
    uVar4 = 4;
  }
  uVar8 = 0x400;
  *(undefined8 *)(param_1 + 400) = param_4;
  *(undefined4 *)(param_1 + 0x198) = 0;
  do {
    uVar7 = *(uint *)(param_1 + 0x180);
    uVar9 = uVar8;
    uVar1 = uVar4;
    if (uVar7 == 0) {
      uVar7 = *param_3;
      uVar9 = uVar7;
      if (uVar8 <= uVar7) {
        uVar9 = uVar8;
      }
      *param_3 = uVar7 - uVar9;
      if (uVar9 != 0) {
        png_read_data(param_1,param_2,uVar9);
        png_calculate_crc(param_1,param_2,uVar9);
      }
      *(undefined8 *)(param_1 + 0x178) = param_2;
      *(uint *)(param_1 + 0x180) = uVar9;
      uVar8 = *(uint *)(param_1 + 0x198);
      uVar7 = uVar9;
      if (uVar8 != 0) goto LAB_00dbd888;
LAB_00dbd8ec:
      uVar6 = *param_5;
      uVar5 = uVar6;
      if (0xfffffffe < uVar6) {
        uVar5 = 0xffffffff;
      }
      *(int *)(param_1 + 0x198) = (int)uVar5;
      *param_5 = uVar6 - uVar5;
      cVar2 = *(char *)(param_1 + 0x2a8);
      uVar8 = uVar9;
      if (*param_3 != 0) {
        uVar1 = 0;
      }
    }
    else {
      uVar8 = *(uint *)(param_1 + 0x198);
      if (uVar8 == 0) goto LAB_00dbd8ec;
LAB_00dbd888:
      uVar5 = (ulong)uVar8;
      cVar2 = *(char *)(param_1 + 0x2a8);
      uVar8 = uVar9;
      if (*param_3 != 0) {
        uVar1 = 0;
      }
    }
    if ((cVar2 != '\0') && (uVar7 != 0)) {
      if (**(char **)(param_1 + 0x178) < '\0') {
        iVar3 = -3;
        *(char **)(param_1 + 0x1a8) = "invalid window size (libpng)";
        goto LAB_00dbd994;
      }
      *(undefined *)(param_1 + 0x2a8) = 0;
    }
    iVar3 = inflate(param_1 + 0x178,uVar1);
    if (iVar3 != 0) {
      uVar5 = (ulong)*(uint *)(param_1 + 0x198);
      goto LAB_00dbd994;
    }
  } while ((*param_5 != 0) ||
          (uVar5 = (ulong)*(uint *)(param_1 + 0x198), *(uint *)(param_1 + 0x198) != 0));
  iVar3 = 0;
LAB_00dbd994:
  uVar6 = *param_5;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *param_5 = uVar6 + (uVar5 & 0xffffffff);
  png_zstream_error(param_1,iVar3);
  return;
}


