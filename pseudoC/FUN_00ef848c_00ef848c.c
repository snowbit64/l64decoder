// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ef848c
// Entry Point: 00ef848c
// Size: 196 bytes
// Signature: undefined FUN_00ef848c(void)


void FUN_00ef848c(void **param_1)

{
  byte bVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = *param_1;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar3 = param_1[1];
  if (pvVar3 == pvVar2) {
    param_1[1] = pvVar2;
    operator_delete(pvVar2);
    return;
  }
  do {
    if ((*(byte *)((long)pvVar3 + -0x18) & 1) == 0) {
      if ((*(byte *)((long)pvVar3 + -0x30) & 1) == 0) goto LAB_00ef84e8;
LAB_00ef8508:
      operator_delete(*(void **)((long)pvVar3 + -0x20));
      bVar1 = *(byte *)((long)pvVar3 + -0x58);
    }
    else {
      operator_delete(*(void **)((long)pvVar3 + -8));
      if ((*(byte *)((long)pvVar3 + -0x30) & 1) != 0) goto LAB_00ef8508;
LAB_00ef84e8:
      bVar1 = *(byte *)((long)pvVar3 + -0x58);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete(*(void **)((long)pvVar3 + -0x48));
    }
    pvVar3 = (void *)((long)pvVar3 + -0x58);
    if (pvVar3 == pvVar2) {
      param_1[1] = pvVar2;
      operator_delete(*param_1);
      return;
    }
  } while( true );
}


