// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00711b5c
// Size: 228 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalPickFeedingTargetAction::update() */

undefined8 AnimalPickFeedingTargetAction::update(void)

{
  long in_x0;
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar2 = *(long *)(in_x0 + 0x30);
  uVar3 = *(uint *)(lVar2 + 0x17c);
  if (uVar3 == 0xffffffff) {
    lVar1 = *(long *)(in_x0 + 0x28);
    if (*(uint *)(lVar1 + 0xb8) != 0) {
      uVar6 = 0;
      pcVar7 = (char *)(lVar1 + 0xdc);
      fVar8 = -1.0;
      uVar4 = 0xffffffff;
      do {
        fVar9 = fVar8;
        uVar3 = uVar4;
        if ((*pcVar7 == '\0') && (*(int *)(pcVar7 + -4) == *(int *)(in_x0 + 0x38))) {
          fVar10 = *(float *)(pcVar7 + -8);
          fVar9 = fVar10;
          if (fVar10 <= 0.0 || fVar10 <= fVar8) {
            fVar9 = fVar8;
          }
          uVar3 = (uint)uVar6;
          if (fVar10 <= 0.0 || fVar10 <= fVar8) {
            uVar3 = uVar4;
          }
        }
        uVar6 = uVar6 + 1;
        pcVar7 = pcVar7 + 0x24;
        fVar8 = fVar9;
        uVar4 = uVar3;
      } while (*(uint *)(lVar1 + 0xb8) != uVar6);
      if (uVar3 != 0xffffffff) goto LAB_00711b78;
    }
    return 2;
  }
  lVar1 = *(long *)(in_x0 + 0x28);
  *(undefined4 *)(lVar2 + 0x17c) = 0xffffffff;
LAB_00711b78:
  *(uint *)(lVar2 + 0x40) = uVar3;
  lVar1 = lVar1 + (ulong)uVar3 * 0x24;
  *(undefined *)(lVar1 + 0xdc) = 1;
  uVar5 = *(undefined8 *)(lVar1 + 0xbc);
  *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar1 + 0xc4);
  *(undefined8 *)(lVar2 + 0x18) = uVar5;
  lVar2 = *(long *)(in_x0 + 0x30);
  uVar5 = *(undefined8 *)(lVar1 + 200);
  *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(lVar1 + 0xd0);
  *(undefined8 *)(lVar2 + 0x24) = uVar5;
  *(undefined *)(*(long *)(in_x0 + 0x30) + 0x34) = 1;
  return 1;
}


