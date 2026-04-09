// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setToDefault
// Entry Point: 00a5d08c
// Size: 172 bytes
// Signature: undefined setToDefault(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* UserAttribute::setToDefault() */

void UserAttribute::setToDefault(void)

{
  void **in_x0;
  undefined *puVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(in_x0 + 1)) {
  case 0:
    *(undefined4 *)(in_x0 + 1) = 0;
    *(undefined *)in_x0 = 0;
    return;
  case 1:
    uVar2 = 1;
    break;
  case 2:
    uVar2 = 2;
    break;
  case 3:
    if (*in_x0 != (void *)0x0) {
      operator_delete__(*in_x0);
    }
    puVar1 = (undefined *)operator_new__(1);
    uVar2 = 3;
    goto LAB_00a5d110;
  case 4:
    if (*in_x0 != (void *)0x0) {
      operator_delete__(*in_x0);
    }
    puVar1 = (undefined *)operator_new__(1);
    uVar2 = 4;
LAB_00a5d110:
    *in_x0 = puVar1;
    *puVar1 = 0;
    *(undefined4 *)(in_x0 + 1) = uVar2;
    return;
  case 5:
    uVar2 = 5;
    break;
  default:
    return;
  }
  *(undefined4 *)(in_x0 + 1) = uVar2;
  *(undefined4 *)in_x0 = 0;
  return;
}


