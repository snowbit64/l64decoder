// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d9b524
// Entry Point: 00d9b524
// Size: 224 bytes
// Signature: undefined FUN_00d9b524(void)


undefined8 FUN_00d9b524(long param_1,code **param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00d975a4(param_1,0,0,0);
  if ((int)uVar2 == 0) {
    if (param_2 == (code **)0x0) {
      do {
        if (*(int *)(param_1 + 0x3d34c) != 0) {
          return 0;
        }
        uVar2 = FUN_00d975a4(param_1,0,0,0);
      } while ((int)uVar2 == 0);
    }
    else {
      do {
        if (*(int *)(param_1 + 0x3d34c) != 0) {
          return 0;
        }
        iVar1 = (**param_2)(param_2,*(undefined8 *)(param_1 + 0x3d340),
                            ((*(long *)(param_1 + 0x3d328) + *(long *)(param_1 + 0x3d308)) -
                            *(long *)(param_1 + 0x3d318)) + *(long *)(param_1 + 0x3d300));
        if (iVar1 != 0) {
          return 10;
        }
        uVar2 = FUN_00d975a4(param_1,0,0,0);
      } while ((int)uVar2 == 0);
    }
  }
  return uVar2;
}


