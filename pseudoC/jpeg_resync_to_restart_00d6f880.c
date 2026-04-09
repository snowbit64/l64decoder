// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_resync_to_restart
// Entry Point: 00d6f880
// Size: 400 bytes
// Signature: undefined jpeg_resync_to_restart(void)


undefined4 jpeg_resync_to_restart(long *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(uint *)((long)param_1 + 0x21c);
  lVar3 = *param_1;
  *(uint *)(lVar3 + 0x2c) = uVar1;
  lVar4 = *param_1;
  *(undefined4 *)(lVar3 + 0x28) = 0x7c;
  *(int *)(lVar4 + 0x30) = param_2;
  (**(code **)(*param_1 + 8))(param_1,0xffffffff);
  do {
    if (0xbf < (int)uVar1) {
      if (((uVar1 - 0xd8 < 0xfffffff8) || (uVar1 == (param_2 + 1U & 7 | 0xd0))) ||
         (uVar1 == (param_2 + 2U & 7 | 0xd0))) {
        lVar3 = *param_1;
        *(uint *)(lVar3 + 0x2c) = uVar1;
        lVar4 = *param_1;
        *(undefined4 *)(lVar3 + 0x28) = 99;
        *(undefined4 *)(lVar4 + 0x30) = 3;
        (**(code **)(*param_1 + 8))(param_1,4);
        return 1;
      }
      if ((uVar1 != (param_2 - 1U & 7 | 0xd0)) && (uVar1 != (param_2 + 6U & 7 | 0xd0))) {
        lVar3 = *param_1;
        *(uint *)(lVar3 + 0x2c) = uVar1;
        lVar4 = *param_1;
        *(undefined4 *)(lVar3 + 0x28) = 99;
        *(undefined4 *)(lVar4 + 0x30) = 1;
        (**(code **)(*param_1 + 8))(param_1,4);
        *(undefined4 *)((long)param_1 + 0x21c) = 0;
        return 1;
      }
    }
    lVar3 = *param_1;
    *(uint *)(lVar3 + 0x2c) = uVar1;
    lVar4 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 99;
    *(undefined4 *)(lVar4 + 0x30) = 2;
    (**(code **)(*param_1 + 8))(param_1,4);
    cVar2 = FUN_00d6fa10(param_1);
    if (cVar2 == '\0') {
      return 0;
    }
    uVar1 = *(uint *)((long)param_1 + 0x21c);
  } while( true );
}


