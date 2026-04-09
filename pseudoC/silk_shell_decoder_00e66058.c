// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_shell_decoder
// Entry Point: 00e66058
// Size: 1032 bytes
// Signature: undefined silk_shell_decoder(void)


void silk_shell_decoder(short *param_1,undefined8 param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  
  if ((int)param_3 < 1) {
    iVar3 = 0;
    iVar7 = 0;
LAB_00e6618c:
    uVar8 = 0;
LAB_00e66190:
    *param_1 = 0;
    param_1[1] = 0;
    if ((int)uVar8 * 0x10000 < 1) goto LAB_00e66158;
LAB_00e661a8:
    sVar2 = (short)iVar3;
    sVar1 = ec_dec_icdf(param_2,silk_shell_code_table0 +
                                (byte)(&silk_shell_code_table_offsets)[uVar8 & 0xffff],8);
    param_1[2] = sVar1;
    param_1[3] = (short)uVar8 - sVar1;
    if (iVar3 * 0x10000 < 1) goto LAB_00e66170;
LAB_00e661d8:
    uVar5 = ec_dec_icdf(param_2,silk_shell_code_table1 +
                                (byte)(&silk_shell_code_table_offsets)[(uint)(int)sVar2],8);
    uVar6 = (int)sVar2 - uVar5;
    uVar8 = (ulong)uVar6;
    if ((int)(uVar5 * 0x10000) < 1) goto LAB_00e66258;
    sVar1 = ec_dec_icdf(param_2,silk_shell_code_table0 +
                                (byte)(&silk_shell_code_table_offsets)[(ulong)uVar5 & 0xffff],8);
    param_1[4] = sVar1;
    param_1[5] = (short)uVar5 - sVar1;
    if ((int)(uVar6 * 0x10000) < 1) goto LAB_00e66238;
LAB_00e66270:
    sVar1 = (short)iVar7;
    sVar2 = ec_dec_icdf(param_2,silk_shell_code_table0 +
                                (byte)(&silk_shell_code_table_offsets)[uVar8 & 0xffff],8);
    param_1[6] = sVar2;
    param_1[7] = (short)uVar8 - sVar2;
    if (iVar7 * 0x10000 < 1) goto LAB_00e66250;
LAB_00e662a0:
    iVar3 = ec_dec_icdf(param_2,silk_shell_code_table2 +
                                (byte)(&silk_shell_code_table_offsets)[(uint)(int)sVar1],8);
    iVar7 = sVar1 - iVar3;
    if (iVar3 * 0x10000 < 1) goto LAB_00e6634c;
    uVar5 = ec_dec_icdf(param_2,silk_shell_code_table1 +
                                (byte)(&silk_shell_code_table_offsets)[(uint)(int)(short)iVar3],8);
    uVar6 = (int)(short)iVar3 - uVar5;
    uVar8 = (ulong)uVar6;
    if ((int)(uVar5 * 0x10000) < 1) goto LAB_00e66354;
    sVar1 = ec_dec_icdf(param_2,silk_shell_code_table0 +
                                (byte)(&silk_shell_code_table_offsets)[(ulong)uVar5 & 0xffff],8);
    param_1[8] = sVar1;
    param_1[9] = (short)uVar5 - sVar1;
    if ((int)(uVar6 * 0x10000) < 1) goto LAB_00e66328;
LAB_00e6636c:
    sVar1 = (short)iVar7;
    sVar2 = ec_dec_icdf(param_2,silk_shell_code_table0 +
                                (byte)(&silk_shell_code_table_offsets)[uVar8 & 0xffff],8);
    param_1[10] = sVar2;
    param_1[0xb] = (short)uVar8 - sVar2;
    if (iVar7 * 0x10000 < 1) goto LAB_00e66340;
LAB_00e6639c:
    uVar5 = ec_dec_icdf(param_2,silk_shell_code_table1 +
                                (byte)(&silk_shell_code_table_offsets)[(uint)(int)sVar1],8);
    uVar6 = (int)sVar1 - uVar5;
    uVar8 = (ulong)uVar6;
    if (0 < (int)(uVar5 * 0x10000)) {
      sVar1 = ec_dec_icdf(param_2,silk_shell_code_table0 +
                                  (byte)(&silk_shell_code_table_offsets)[(ulong)uVar5 & 0xffff],8);
      param_1[0xc] = sVar1;
      param_1[0xd] = (short)uVar5 - sVar1;
      goto joined_r0x00e663f8;
    }
  }
  else {
    iVar3 = ec_dec_icdf(param_2,silk_shell_code_table3 +
                                (byte)(&silk_shell_code_table_offsets)[param_3],8);
    iVar7 = param_3 - iVar3;
    if (iVar3 * 0x10000 < 1) {
      iVar3 = 0;
      goto LAB_00e6618c;
    }
    iVar4 = ec_dec_icdf(param_2,silk_shell_code_table2 +
                                (byte)(&silk_shell_code_table_offsets)[(uint)(int)(short)iVar3],8);
    iVar3 = (short)iVar3 - iVar4;
    if (iVar4 * 0x10000 < 1) goto LAB_00e6618c;
    uVar5 = ec_dec_icdf(param_2,silk_shell_code_table1 +
                                (byte)(&silk_shell_code_table_offsets)[(uint)(int)(short)iVar4],8);
    uVar6 = (int)(short)iVar4 - uVar5;
    uVar8 = (ulong)uVar6;
    if ((int)(uVar5 * 0x10000) < 1) goto LAB_00e66190;
    sVar1 = ec_dec_icdf(param_2,silk_shell_code_table0 +
                                (byte)(&silk_shell_code_table_offsets)[(ulong)uVar5 & 0xffff],8);
    *param_1 = sVar1;
    param_1[1] = (short)uVar5 - sVar1;
    if (0 < (int)(uVar6 * 0x10000)) goto LAB_00e661a8;
LAB_00e66158:
    sVar2 = (short)iVar3;
    param_1[2] = 0;
    param_1[3] = 0;
    if (0 < iVar3 * 0x10000) goto LAB_00e661d8;
LAB_00e66170:
    uVar8 = 0;
LAB_00e66258:
    param_1[4] = 0;
    param_1[5] = 0;
    if (0 < (int)uVar8 * 0x10000) goto LAB_00e66270;
LAB_00e66238:
    sVar1 = (short)iVar7;
    param_1[6] = 0;
    param_1[7] = 0;
    if (0 < iVar7 * 0x10000) goto LAB_00e662a0;
LAB_00e66250:
    iVar7 = 0;
LAB_00e6634c:
    uVar8 = 0;
LAB_00e66354:
    param_1[8] = 0;
    param_1[9] = 0;
    if (0 < (int)uVar8 * 0x10000) goto LAB_00e6636c;
LAB_00e66328:
    sVar1 = (short)iVar7;
    param_1[10] = 0;
    param_1[0xb] = 0;
    if (0 < iVar7 * 0x10000) goto LAB_00e6639c;
LAB_00e66340:
    uVar8 = 0;
  }
  param_1[0xc] = 0;
  uVar6 = (uint)uVar8;
  param_1[0xd] = 0;
joined_r0x00e663f8:
  if ((int)(uVar6 * 0x10000) < 1) {
    sVar1 = 0;
    param_1[0xe] = 0;
  }
  else {
    sVar2 = ec_dec_icdf(param_2,silk_shell_code_table0 +
                                (byte)(&silk_shell_code_table_offsets)[uVar8 & 0xffff],8);
    sVar1 = (short)uVar8 - sVar2;
    param_1[0xe] = sVar2;
  }
  param_1[0xf] = sVar1;
  return;
}


