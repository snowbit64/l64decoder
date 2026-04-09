// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0088f5d8
// Size: 48 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTDogIsHoldingBall::update() */

undefined4 BTDogIsHoldingBall::update(void)

{
  long in_x0;
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(*(long *)(in_x0 + 0x28) + 0x110);
  if ((lVar2 != 0) && (lVar3 = *(long *)(*(long *)(in_x0 + 0x28) + 0xf8), lVar3 != 0)) {
    uVar1 = 1;
    if (*(long *)(lVar3 + 0x20) != lVar2) {
      uVar1 = 2;
    }
    return uVar1;
  }
  return 2;
}


