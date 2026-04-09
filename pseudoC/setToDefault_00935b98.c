// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setToDefault
// Entry Point: 00935b98
// Size: 332 bytes
// Signature: undefined setToDefault(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainTransformGroupDesc::setToDefault() */

void TerrainTransformGroupDesc::setToDefault(void)

{
  long lVar1;
  byte bVar2;
  undefined2 *in_x0;
  long lVar3;
  long lVar4;
  
  if ((*(byte *)in_x0 & 1) == 0) {
    *in_x0 = 0;
  }
  else {
    **(undefined **)(in_x0 + 8) = 0;
    *(undefined8 *)(in_x0 + 4) = 0;
  }
  lVar1 = *(long *)(in_x0 + 0x1c);
  lVar3 = *(long *)(in_x0 + 0x20);
  *(undefined8 *)(in_x0 + 0x10) = 0x435c000042c80000;
  *(undefined8 *)(in_x0 + 0xc) = 0x45cccccd3fcccccd;
  *(undefined8 *)(in_x0 + 0x14) = 0x435c000042c80000;
  *(undefined4 *)(in_x0 + 0x18) = 0x40a00000;
  if (lVar3 != lVar1) {
    do {
      lVar3 = lVar3 + -0xa8;
      FUN_0093d8bc(in_x0 + 0x24,lVar3);
    } while (lVar3 != lVar1);
  }
  lVar3 = *(long *)(in_x0 + 0x40);
  lVar4 = *(long *)(in_x0 + 0x44);
  *(long *)(in_x0 + 0x20) = lVar1;
  if (lVar4 != lVar3) {
    do {
      lVar4 = lVar4 + -0x50;
      FUN_0093d76c(in_x0 + 0x48,lVar4);
    } while (lVar4 != lVar3);
  }
  *(long *)(in_x0 + 0x44) = lVar3;
  *(undefined4 *)(in_x0 + 0x5c) = 0xffffffff;
  *(undefined8 *)(in_x0 + 0x58) = 0x4320000000000011;
  *(undefined *)(in_x0 + 0x5e) = 1;
  *(undefined8 *)(in_x0 + 0x60) = 0;
  if ((*(byte *)(in_x0 + 100) & 1) == 0) {
    in_x0[100] = 0;
    bVar2 = *(byte *)(in_x0 + 0x70);
  }
  else {
    **(undefined **)(in_x0 + 0x6c) = 0;
    *(undefined8 *)(in_x0 + 0x68) = 0;
    bVar2 = *(byte *)(in_x0 + 0x70);
  }
  if ((bVar2 & 1) == 0) {
    in_x0[0x70] = 0;
    bVar2 = *(byte *)(in_x0 + 0x7c);
  }
  else {
    **(undefined **)(in_x0 + 0x78) = 0;
    *(undefined8 *)(in_x0 + 0x74) = 0;
    bVar2 = *(byte *)(in_x0 + 0x7c);
  }
  if ((bVar2 & 1) == 0) {
    in_x0[0x7c] = 0;
  }
  else {
    **(undefined **)(in_x0 + 0x84) = 0;
    *(undefined8 *)(in_x0 + 0x80) = 0;
  }
  *(undefined *)(in_x0 + 0x88) = 0;
  *(undefined8 *)(in_x0 + 0x8a) = 0x4400000000000000;
  return;
}


