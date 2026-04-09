// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ToStringType
// Entry Point: 00ae2a6c
// Size: 720 bytes
// Signature: undefined __cdecl ToStringType(SpvSourceLanguage_ param_1, SpvReflectTypeDescription * param_2)


/* ToStringType(SpvSourceLanguage_, SpvReflectTypeDescription const&) */

void ToStringType(SpvSourceLanguage_ param_1,SpvReflectTypeDescription *param_2)

{
  int iVar1;
  undefined2 *in_x8;
  undefined4 uVar2;
  undefined2 uVar3;
  
  if (param_1 == 5) {
    if (*(int *)(param_2 + 4) == 0x17) {
      if (*(int *)(param_2 + 0x24) == 0x40) {
        iVar1 = *(int *)(param_2 + 0x2c);
        if (iVar1 == 4) {
          uVar2 = 0x34656c62;
        }
        else if (iVar1 == 3) {
          uVar2 = 0x33656c62;
        }
        else {
          if (iVar1 != 2) goto switchD_00ae2b30_caseD_17;
          uVar2 = 0x32656c62;
        }
        *(undefined *)in_x8 = 0xe;
        *(undefined4 *)((long)in_x8 + 1) = 0x62756f64;
        *(undefined4 *)(in_x8 + 2) = uVar2;
        *(undefined *)(in_x8 + 4) = 0;
        return;
      }
      if (*(int *)(param_2 + 0x24) != 0x20) goto switchD_00ae2b30_caseD_17;
      iVar1 = *(int *)(param_2 + 0x2c);
      if (iVar1 == 4) {
        uVar2 = 0x616f6c66;
        uVar3 = 0x3474;
      }
      else if (iVar1 == 3) {
        uVar2 = 0x616f6c66;
        uVar3 = 0x3374;
      }
      else {
        if (iVar1 != 2) goto switchD_00ae2b30_caseD_17;
        uVar2 = 0x616f6c66;
        uVar3 = 0x3274;
      }
      goto LAB_00ae2c3c;
    }
    switch(*(int *)(param_2 + 4)) {
    case 0x13:
switchD_00ae2b30_caseD_13:
      uVar2 = 0x64696f76;
      break;
    case 0x14:
switchD_00ae2b30_caseD_14:
      uVar2 = 0x6c6f6f62;
      break;
    case 0x15:
switchD_00ae2b30_caseD_15:
      if (*(int *)(param_2 + 0x28) != 0) {
        *(undefined *)in_x8 = 6;
        *(undefined4 *)((long)in_x8 + 1) = 0x746e69;
        return;
      }
      uVar2 = 0x746e6975;
      break;
    case 0x16:
switchD_00ae2b30_caseD_16:
      if (*(int *)(param_2 + 0x24) == 0x40) {
        uVar2 = 0x62756f64;
        uVar3 = 0x656c;
        goto LAB_00ae2c3c;
      }
      if (*(int *)(param_2 + 0x24) == 0x20) {
        uVar2 = 0x616f6c66;
        uVar3 = 0x74;
LAB_00ae2d2c:
        *(undefined *)in_x8 = 10;
        *(undefined4 *)((long)in_x8 + 1) = uVar2;
        *(undefined2 *)((long)in_x8 + 5) = uVar3;
        return;
      }
    case 0x1e:
switchD_00ae2b30_caseD_1e:
      uVar2 = 0x75727473;
      uVar3 = 0x7463;
LAB_00ae2c3c:
      *(undefined *)in_x8 = 0xc;
      *(undefined4 *)((long)in_x8 + 1) = uVar2;
      *(undefined2 *)((long)in_x8 + 5) = uVar3;
      *(undefined *)((long)in_x8 + 7) = 0;
      return;
    default:
switchD_00ae2b30_caseD_17:
      *in_x8 = 0;
      return;
    }
LAB_00ae2cb8:
    *(undefined *)in_x8 = 8;
    *(undefined4 *)((long)in_x8 + 1) = uVar2;
    *(undefined *)((long)in_x8 + 5) = 0;
    return;
  }
  if (*(int *)(param_2 + 4) == 0x17) {
    if (*(int *)(param_2 + 0x24) == 0x40) {
      iVar1 = *(int *)(param_2 + 0x2c);
      if (iVar1 == 4) {
        uVar2 = 0x63657664;
        uVar3 = 0x34;
      }
      else if (iVar1 == 3) {
        uVar2 = 0x63657664;
        uVar3 = 0x33;
      }
      else {
        if (iVar1 != 2) goto switchD_00ae2b30_caseD_17;
        uVar2 = 0x63657664;
        uVar3 = 0x32;
      }
      goto LAB_00ae2d2c;
    }
    if (*(int *)(param_2 + 0x24) != 0x20) goto switchD_00ae2b30_caseD_17;
    iVar1 = *(int *)(param_2 + 0x2c);
    if (iVar1 == 4) {
      uVar2 = 0x34636576;
    }
    else if (iVar1 == 3) {
      uVar2 = 0x33636576;
    }
    else {
      if (iVar1 != 2) goto switchD_00ae2b30_caseD_17;
      uVar2 = 0x32636576;
    }
    goto LAB_00ae2cb8;
  }
  switch(*(int *)(param_2 + 4)) {
  case 0x13:
    goto switchD_00ae2b30_caseD_13;
  case 0x14:
    goto switchD_00ae2b30_caseD_14;
  case 0x15:
    goto switchD_00ae2b30_caseD_15;
  case 0x16:
    goto switchD_00ae2b30_caseD_16;
  default:
    goto switchD_00ae2b30_caseD_17;
  case 0x1e:
    goto switchD_00ae2b30_caseD_1e;
  }
}


