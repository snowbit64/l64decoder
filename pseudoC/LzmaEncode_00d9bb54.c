// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaEncode
// Entry Point: 00d9bb54
// Size: 504 bytes
// Signature: undefined LzmaEncode(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)


int LzmaEncode(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
              undefined8 param_9,code **param_10,undefined8 param_11)

{
  long lVar1;
  int iVar2;
  long lVar3;
  code *local_88;
  undefined8 uStack_80;
  long local_78;
  int local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar3 = (**param_10)(param_10,0x46a78);
  if (lVar3 == 0) {
    iVar2 = 2;
    if (*(long *)(lVar1 + 0x28) != local_68) goto LAB_00d9bd48;
  }
  else {
    LzmaEnc_Construct();
    iVar2 = LzmaEnc_SetProps(lVar3,param_5);
    if (iVar2 == 0) {
      iVar2 = LzmaEnc_WriteProperties(lVar3,param_6,param_7);
      if (iVar2 == 0) {
        local_70 = 0;
        *(undefined8 *)(lVar3 + 0xa0) = param_4;
        local_78 = *param_2;
        local_88 = FUN_00d9754c;
        *(code ***)(lVar3 + 0x3d320) = &local_88;
        *(undefined4 *)(lVar3 + 0x3d338) = param_8;
        *(undefined4 *)(lVar3 + 0x9c) = 1;
        *(undefined8 *)(lVar3 + 0x78) = param_3;
        *(undefined8 *)(lVar3 + 0xa0) = param_4;
        *(undefined4 *)(lVar3 + 0x3d360) = 1;
        uStack_80 = param_1;
        iVar2 = FUN_00d96f80(lVar3,0,param_10,param_11);
        if (iVar2 == 0) {
          iVar2 = FUN_00d9b524(lVar3,param_9);
        }
        if (local_70 != 0) {
          iVar2 = 7;
        }
        *param_2 = *param_2 - local_78;
      }
    }
    MatchFinder_Free(lVar3 + 0x38,param_11);
    (*param_10[1])(param_10,*(undefined8 *)(lVar3 + 0x33be8));
    (*param_10[1])(param_10,*(undefined8 *)(lVar3 + 0x3d368));
    *(undefined8 *)(lVar3 + 0x33be8) = 0;
    *(undefined8 *)(lVar3 + 0x3d368) = 0;
    (*param_10[1])(param_10,*(undefined8 *)(lVar3 + 0x3d318));
    *(undefined8 *)(lVar3 + 0x3d318) = 0;
    (*param_10[1])(param_10,lVar3);
    if (*(long *)(lVar1 + 0x28) != local_68) {
LAB_00d9bd48:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return iVar2;
}


