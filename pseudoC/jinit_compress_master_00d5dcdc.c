// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_compress_master
// Entry Point: 00d5dcdc
// Size: 380 bytes
// Signature: undefined jinit_compress_master(void)


void jinit_compress_master(long *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  code **ppcVar4;
  int iVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 0xb) != 8) {
    lVar6 = *param_1;
    *(int *)(lVar6 + 0x2c) = *(int *)(param_1 + 0xb);
    ppcVar4 = (code **)*param_1;
    *(undefined4 *)(lVar6 + 0x28) = 0x10;
    (**ppcVar4)(param_1);
  }
  if (((*(int *)((long)param_1 + 0x34) == 0) || (uVar3 = *(uint *)(param_1 + 6), uVar3 == 0)) ||
     (iVar5 = *(int *)(param_1 + 7), iVar5 < 1)) {
    ppcVar4 = (code **)*param_1;
    *(undefined4 *)(ppcVar4 + 5) = 0x21;
    (**ppcVar4)(param_1);
    uVar3 = *(uint *)(param_1 + 6);
    iVar5 = *(int *)(param_1 + 7);
  }
  if ((long)iVar5 * (ulong)uVar3 >> 0x20 != 0) {
    ppcVar4 = (code **)*param_1;
    *(undefined4 *)(ppcVar4 + 5) = 0x48;
    (**ppcVar4)(param_1);
  }
  jpeg_calc_jpeg_dimensions(param_1);
  jinit_c_master_control(param_1,0);
  if (*(char *)(param_1 + 0x24) == '\0') {
    jinit_color_converter(param_1);
    jinit_downsampler(param_1);
    jinit_c_prep_controller(param_1,0);
    jinit_forward_dct(param_1);
    cVar1 = *(char *)((long)param_1 + 0x121);
  }
  else {
    jinit_forward_dct(param_1);
    cVar1 = *(char *)((long)param_1 + 0x121);
  }
  if (cVar1 == '\0') {
    jinit_huff_encoder(param_1);
    iVar5 = *(int *)(param_1 + 0x22);
  }
  else {
    jinit_arith_encoder(param_1);
    iVar5 = *(int *)(param_1 + 0x22);
  }
  if (iVar5 < 2) {
    bVar2 = *(char *)((long)param_1 + 0x122) != '\0';
  }
  else {
    bVar2 = true;
  }
  jinit_c_coef_controller(param_1,bVar2);
  jinit_c_main_controller(param_1,0);
  jinit_marker_writer(param_1);
  (**(code **)(param_1[1] + 0x30))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00d5de54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1[0x40])(param_1);
  return;
}


