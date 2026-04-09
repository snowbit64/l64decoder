// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00888fd4
// Size: 104 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTMovementIsCloseToTarget::update() */

undefined4 BTMovementIsCloseToTarget::update(void)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  long in_x0;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  
  cVar2 = *(char *)(in_x0 + 0x39);
  fVar6 = (float)AnimalSteering::getDistanceToTarget();
  cVar3 = *(char *)(in_x0 + 0x38);
  uVar4 = 1;
  if (cVar3 == '\0') {
    uVar4 = 2;
  }
  uVar5 = 1;
  if (cVar3 != '\0') {
    uVar5 = 2;
  }
  if (fVar6 < *(float *)(in_x0 + 0x28)) {
    uVar4 = uVar5;
  }
  uVar5 = 3;
  if (cVar3 == '\0') {
    uVar1 = 1;
  }
  else {
    uVar1 = uVar5;
    uVar5 = 1;
  }
  if (fVar6 < *(float *)(in_x0 + 0x28)) {
    uVar5 = uVar1;
  }
  if (cVar2 != '\0') {
    uVar4 = uVar5;
  }
  return uVar4;
}


