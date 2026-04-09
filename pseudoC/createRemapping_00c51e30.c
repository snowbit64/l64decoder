// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRemapping
// Entry Point: 00c51e30
// Size: 116 bytes
// Signature: undefined createRemapping(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Struct::createRemapping() */

void IR_Struct::createRemapping(void)

{
  void *pvVar1;
  IR_Struct *in_x0;
  void *pvVar2;
  void **ppvVar3;
  
  ppvVar3 = *(void ***)(in_x0 + 0x48);
  if (ppvVar3 != (void **)0x0) {
    pvVar2 = *ppvVar3;
    if (pvVar2 != (void *)0x0) {
      ppvVar3[1] = pvVar2;
      operator_delete(pvVar2);
    }
    operator_delete(ppvVar3);
  }
  ppvVar3 = (void **)operator_new(0x18);
                    /* try { // try from 00c51e6c to 00c51e73 has its CatchHandler @ 00c51ea4 */
  StructFieldRemapping::StructFieldRemapping((StructFieldRemapping *)ppvVar3,in_x0);
  pvVar2 = *ppvVar3;
  pvVar1 = ppvVar3[1];
  *(void ***)(in_x0 + 0x48) = ppvVar3;
  if (pvVar1 == pvVar2) {
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    operator_delete(ppvVar3);
    *(undefined8 *)(in_x0 + 0x48) = 0;
  }
  return;
}


