// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processConstraints
// Entry Point: 00f32aac
// Size: 412 bytes
// Signature: undefined processConstraints(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* InplaceSolverIslandCallback::processConstraints() */

void InplaceSolverIslandCallback::processConstraints(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  long in_x0;
  long lVar5;
  
  uVar1 = 0;
  if (*(int *)(in_x0 + 0x3c) != 0) {
    uVar1 = *(undefined8 *)(in_x0 + 0x48);
  }
  uVar2 = 0;
  if (*(int *)(in_x0 + 0x5c) != 0) {
    uVar2 = *(undefined8 *)(in_x0 + 0x68);
  }
  uVar3 = 0;
  if (*(int *)(in_x0 + 0x7c) != 0) {
    uVar3 = *(undefined8 *)(in_x0 + 0x88);
  }
  (**(code **)(**(long **)(in_x0 + 0x10) + 0x18))
            (*(long **)(in_x0 + 0x10),uVar1,*(int *)(in_x0 + 0x3c),uVar2,*(int *)(in_x0 + 0x5c),
             uVar3,*(int *)(in_x0 + 0x7c),*(undefined8 *)(in_x0 + 8),*(undefined8 *)(in_x0 + 0x28),
             *(undefined8 *)(in_x0 + 0x30));
  lVar5 = (long)*(int *)(in_x0 + 0x3c);
  if (*(int *)(in_x0 + 0x3c) < 0) {
    if (*(int *)(in_x0 + 0x40) < 0) {
      if ((*(long *)(in_x0 + 0x48) != 0) && (*(char *)(in_x0 + 0x50) != '\0')) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(undefined8 *)(in_x0 + 0x48) = 0;
      *(undefined4 *)(in_x0 + 0x40) = 0;
      *(undefined *)(in_x0 + 0x50) = 1;
    }
    do {
      *(undefined8 *)(*(long *)(in_x0 + 0x48) + lVar5 * 8) = 0;
      bVar4 = lVar5 != -1;
      lVar5 = lVar5 + 1;
    } while (bVar4);
  }
  lVar5 = (long)*(int *)(in_x0 + 0x5c);
  *(undefined4 *)(in_x0 + 0x3c) = 0;
  if (*(int *)(in_x0 + 0x5c) < 0) {
    if (*(int *)(in_x0 + 0x60) < 0) {
      if ((*(long *)(in_x0 + 0x68) != 0) && (*(char *)(in_x0 + 0x70) != '\0')) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(undefined8 *)(in_x0 + 0x68) = 0;
      *(undefined4 *)(in_x0 + 0x60) = 0;
      *(undefined *)(in_x0 + 0x70) = 1;
    }
    do {
      *(undefined8 *)(*(long *)(in_x0 + 0x68) + lVar5 * 8) = 0;
      bVar4 = lVar5 != -1;
      lVar5 = lVar5 + 1;
    } while (bVar4);
  }
  lVar5 = (long)*(int *)(in_x0 + 0x7c);
  *(undefined4 *)(in_x0 + 0x5c) = 0;
  if (*(int *)(in_x0 + 0x7c) < 0) {
    if (*(int *)(in_x0 + 0x80) < 0) {
      if ((*(long *)(in_x0 + 0x88) != 0) && (*(char *)(in_x0 + 0x90) != '\0')) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(undefined8 *)(in_x0 + 0x88) = 0;
      *(undefined4 *)(in_x0 + 0x80) = 0;
      *(undefined *)(in_x0 + 0x90) = 1;
    }
    do {
      *(undefined8 *)(*(long *)(in_x0 + 0x88) + lVar5 * 8) = 0;
      bVar4 = lVar5 != -1;
      lVar5 = lVar5 + 1;
    } while (bVar4);
  }
  *(undefined4 *)(in_x0 + 0x7c) = 0;
  return;
}


