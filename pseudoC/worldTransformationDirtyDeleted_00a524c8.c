// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: worldTransformationDirtyDeleted
// Entry Point: 00a524c8
// Size: 108 bytes
// Signature: undefined __cdecl worldTransformationDirtyDeleted(ScenegraphNode * param_1)


/* GsShape::worldTransformationDirtyDeleted(ScenegraphNode*) */

void GsShape::worldTransformationDirtyDeleted(ScenegraphNode *param_1)

{
  void **ppvVar1;
  
  ppvVar1 = *(void ***)(param_1 + 0x1f8);
  if (ppvVar1 != (void **)0x0) {
    if (*ppvVar1 != (void *)0x0) {
      operator_delete__(*ppvVar1);
    }
    *ppvVar1 = (void *)0x0;
    if (ppvVar1[1] != (void *)0x0) {
      operator_delete__(ppvVar1[1]);
    }
    ppvVar1[1] = (void *)0x0;
    if (ppvVar1[2] != (void *)0x0) {
      operator_delete__(ppvVar1[2]);
    }
    ppvVar1[2] = (void *)0x0;
    if (ppvVar1[3] != (void *)0x0) {
      operator_delete__(ppvVar1[3]);
    }
    operator_delete(ppvVar1);
    *(undefined8 *)(param_1 + 0x1f8) = 0;
  }
  return;
}


