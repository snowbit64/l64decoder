// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e09340
// Entry Point: 00e09340
// Size: 380 bytes
// Signature: undefined FUN_00e09340(void)


void FUN_00e09340(undefined8 param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  
  oggpack_write(param_1,3,8);
  oggpack_write(param_1,0x76,8);
  oggpack_write(param_1,0x6f,8);
  oggpack_write(param_1,0x72,8);
  oggpack_write(param_1,0x62,8);
  oggpack_write(param_1,0x69,8);
  oggpack_write(param_1,0x73,8);
  oggpack_write(param_1,0x35,0x20);
  lVar1 = 0;
  do {
    oggpack_write(param_1,"Xiph.Org libVorbis I 20180316 (Now 100% fewer shells)"[lVar1],8);
    lVar1 = lVar1 + 1;
  } while ((int)lVar1 != 0x35);
  oggpack_write(param_1,(long)*(int *)(param_2 + 2),0x20);
  if ((*(int *)(param_2 + 2) != 0) && (0 < *(int *)(param_2 + 2))) {
    lVar1 = 0;
    do {
      if (*(long *)(*param_2 + lVar1 * 8) == 0) {
        oggpack_write(param_1,0,0x20);
      }
      else {
        oggpack_write(param_1,(long)*(int *)(param_2[1] + lVar1 * 4),0x20);
        iVar2 = *(int *)(param_2[1] + lVar1 * 4);
        if (iVar2 != 0) {
          puVar3 = *(undefined **)(*param_2 + lVar1 * 8);
          do {
            iVar2 = iVar2 + -1;
            oggpack_write(param_1,*puVar3,8);
            puVar3 = puVar3 + 1;
          } while (iVar2 != 0);
        }
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_2 + 2));
  }
  oggpack_write(param_1,1,1);
  return;
}


