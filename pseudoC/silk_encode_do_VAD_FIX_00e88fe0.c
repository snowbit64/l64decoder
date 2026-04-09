// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_encode_do_VAD_FIX
// Entry Point: 00e88fe0
// Size: 188 bytes
// Signature: undefined silk_encode_do_VAD_FIX(void)


void silk_encode_do_VAD_FIX(long param_1,int param_2)

{
  uint uVar1;
  undefined uVar2;
  
  silk_VAD_GetSA_Q8_c(param_1,param_1 + 0x13fa);
  if (param_2 == 0) {
    if (0xc < *(int *)(param_1 + 0x11b4)) {
      *(undefined4 *)(param_1 + 0x11b4) = 0xc;
    }
  }
  else if (0xc < *(int *)(param_1 + 0x11b4)) {
    uVar2 = 1;
    *(undefined8 *)(param_1 + 0x17d4) = 0;
    *(undefined *)(param_1 + 0x12ad) = 1;
    goto LAB_00e8907c;
  }
  uVar1 = *(uint *)(param_1 + 0x17d8);
  *(undefined *)(param_1 + 0x12ad) = 0;
  *(uint *)(param_1 + 0x17d8) = uVar1 + 1;
  if (9 < (int)uVar1) {
    if (uVar1 < 0x1e) {
      uVar2 = 0;
      goto LAB_00e8907c;
    }
    *(undefined4 *)(param_1 + 0x17d8) = 10;
  }
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x17d4) = 0;
LAB_00e8907c:
  *(undefined *)(param_1 + *(int *)(param_1 + 0x1684) + 0x1280) = uVar2;
  return;
}


