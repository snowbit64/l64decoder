// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_shell_encoder
// Entry Point: 00e65d58
// Size: 768 bytes
// Signature: undefined silk_shell_encoder(void)


void silk_shell_encoder(undefined8 param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar1 = param_2[1] + *param_2;
  uVar2 = param_2[3] + param_2[2];
  uVar3 = param_2[5] + param_2[4];
  uVar4 = param_2[9] + param_2[8];
  uVar5 = param_2[0xb] + param_2[10];
  uVar6 = param_2[0xd] + param_2[0xc];
  uVar7 = param_2[7] + param_2[6];
  uVar8 = uVar2 + uVar1;
  uVar9 = param_2[0xf] + param_2[0xe];
  uVar10 = uVar5 + uVar4;
  uVar11 = uVar7 + uVar3;
  uVar12 = uVar11 + uVar8;
  uVar13 = uVar9 + uVar6;
  uVar14 = uVar13 + uVar10;
  if (0 < (int)(uVar14 + uVar12)) {
    ec_enc_icdf(param_1,uVar12,
                silk_shell_code_table3 + (byte)(&silk_shell_code_table_offsets)[uVar14 + uVar12],8);
  }
  if (0 < (int)uVar12) {
    ec_enc_icdf(param_1,uVar8,
                silk_shell_code_table2 + (byte)(&silk_shell_code_table_offsets)[uVar12],8);
  }
  if (0 < (int)uVar8) {
    ec_enc_icdf(param_1,uVar1,silk_shell_code_table1 + (byte)(&silk_shell_code_table_offsets)[uVar8]
                ,8);
  }
  if (0 < (int)uVar1) {
    ec_enc_icdf(param_1,*param_2,
                silk_shell_code_table0 + (byte)(&silk_shell_code_table_offsets)[uVar1],8);
  }
  if (0 < (int)uVar2) {
    ec_enc_icdf(param_1,param_2[2],
                silk_shell_code_table0 + (byte)(&silk_shell_code_table_offsets)[uVar2],8);
  }
  if (0 < (int)uVar11) {
    ec_enc_icdf(param_1,uVar3,
                silk_shell_code_table1 + (byte)(&silk_shell_code_table_offsets)[uVar11],8);
  }
  if (0 < (int)uVar3) {
    ec_enc_icdf(param_1,param_2[4],
                silk_shell_code_table0 + (byte)(&silk_shell_code_table_offsets)[uVar3],8);
  }
  if (0 < (int)uVar7) {
    ec_enc_icdf(param_1,param_2[6],
                silk_shell_code_table0 + (byte)(&silk_shell_code_table_offsets)[uVar7],8);
  }
  if (0 < (int)uVar14) {
    ec_enc_icdf(param_1,uVar10,
                silk_shell_code_table2 + (byte)(&silk_shell_code_table_offsets)[uVar14],8);
  }
  if (0 < (int)uVar10) {
    ec_enc_icdf(param_1,uVar4,
                silk_shell_code_table1 + (byte)(&silk_shell_code_table_offsets)[uVar10],8);
  }
  if (0 < (int)uVar4) {
    ec_enc_icdf(param_1,param_2[8],
                silk_shell_code_table0 + (byte)(&silk_shell_code_table_offsets)[uVar4],8);
  }
  if (0 < (int)uVar5) {
    ec_enc_icdf(param_1,param_2[10],
                silk_shell_code_table0 + (byte)(&silk_shell_code_table_offsets)[uVar5],8);
  }
  if (0 < (int)uVar13) {
    ec_enc_icdf(param_1,uVar6,
                silk_shell_code_table1 + (byte)(&silk_shell_code_table_offsets)[uVar13],8);
  }
  if (0 < (int)uVar6) {
    ec_enc_icdf(param_1,param_2[0xc],
                silk_shell_code_table0 + (byte)(&silk_shell_code_table_offsets)[uVar6],8);
  }
  if (0 < (int)uVar9) {
    ec_enc_icdf(param_1,param_2[0xe],
                silk_shell_code_table0 + (byte)(&silk_shell_code_table_offsets)[uVar9],8);
    return;
  }
  return;
}


