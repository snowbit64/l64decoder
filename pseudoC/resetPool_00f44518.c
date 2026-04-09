// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resetPool
// Entry Point: 00f44518
// Size: 372 bytes
// Signature: undefined __cdecl resetPool(btDispatcher * param_1)


/* btDbvtBroadphase::resetPool(btDispatcher*) */

void btDbvtBroadphase::resetPool(btDispatcher *param_1)

{
  (**(code **)(*(long *)param_1 + 0x70))();
  if (*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x7c) == 0) {
    if (*(long *)(param_1 + 8) != 0) {
      FUN_00f41318(param_1 + 8);
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    if ((*(long *)(param_1 + 0x38) != 0) && (param_1[0x40] != (btDispatcher)0x0)) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    param_1[0x40] = (btDispatcher)0x1;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN_00f41318(param_1 + 0x68);
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
    if ((*(long *)(param_1 + 0x98) != 0) && (param_1[0xa0] != (btDispatcher)0x0)) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    param_1[0xa0] = (btDispatcher)0x1;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0xf4) = 0xa00000000;
    *(undefined8 *)(param_1 + 0xec) = 0x100000000;
    *(undefined2 *)(param_1 + 0x11d) = 0x100;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xfc) = 1;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0x10c) = 0;
    *(undefined8 *)(param_1 + 0x114) = 0;
    *(undefined8 *)(param_1 + 0x104) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00f44688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x78))(param_1);
  return;
}


