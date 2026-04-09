// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initSwitchProfile
// Entry Point: 00756d0c
// Size: 204 bytes
// Signature: undefined initSwitchProfile(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HardwareScalability::initSwitchProfile() */

void HardwareScalability::initSwitchProfile(void)

{
  undefined4 *in_x0;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined *)((long)in_x0 + 0x11) = 0;
  *in_x0 = 0;
  *(undefined8 *)(in_x0 + 0x32) = 0x10000000;
  *(undefined8 *)(in_x0 + 0x30) = 0;
  *(undefined8 *)(in_x0 + 0x36) = 0;
  *(undefined8 *)(in_x0 + 0x34) = 0x3f80000044fa0000;
  uVar1 = NEON_cmeq((ulong)(uint)in_x0[0x42],5,4);
  uVar2 = CONCAT44((int)uVar1,(int)uVar1);
  *(undefined8 *)(in_x0 + 0x22) = 2;
  *(undefined8 *)(in_x0 + 0x20) = 0x500000002;
  *(undefined8 *)(in_x0 + 0x26) = 0x2000000000;
  *(undefined8 *)(in_x0 + 0x24) = 4;
  *(undefined8 *)(in_x0 + 0x12) = 0;
  *(undefined8 *)(in_x0 + 0x10) = 0x3f8000003fc00000;
  *(undefined8 *)(in_x0 + 0x16) = 0x100000010;
  *(undefined8 *)(in_x0 + 0x14) = 0x80000000000;
  *(undefined8 *)(in_x0 + 0x1a) = 0x400000000;
  *(undefined8 *)(in_x0 + 0x18) = 0x100000000;
  *(undefined8 *)(in_x0 + 0x1e) = 0x100000001;
  *(undefined8 *)(in_x0 + 0x1c) = 0;
  *(undefined8 *)(in_x0 + 0x2a) = 0;
  *(undefined8 *)(in_x0 + 0x28) = 0x2000000001;
  *(undefined8 *)(in_x0 + 0x2e) = 0x3f00000000000001;
  *(undefined8 *)(in_x0 + 0x2c) = 0x100;
  *(undefined8 *)(in_x0 + 0x38) = 0;
  *(undefined8 *)(in_x0 + 10) = 0x3f8000003f400000;
  *(undefined8 *)(in_x0 + 8) = 0x3f8000003f800000;
  *(undefined8 *)(in_x0 + 0xe) = 0x3f800000;
  *(undefined8 *)(in_x0 + 0xc) = 0x3f8000003f400000;
  uVar1 = NEON_bif(0x3f99999a3f800000,0x3f8000003f400000,uVar2,1);
  uVar3 = (undefined4)uVar1;
  *(undefined8 *)(in_x0 + 5) = 0x100000001;
  uVar4 = 0x40000000;
  if (in_x0[0x42] != 5) {
    uVar4 = 0x3fb4fdf4;
  }
  uVar2 = NEON_bsl(uVar2,0x43800000780,0x2d000000500,1);
  *(undefined *)(in_x0 + 7) = 1;
  in_x0[0x12] = uVar4;
  *(ulong *)(in_x0 + 0xc) = CONCAT44(uVar3,(int)((ulong)uVar1 >> 0x20));
  *(ulong *)(in_x0 + 10) = CONCAT44(uVar3,uVar3);
  *(undefined8 *)(in_x0 + 2) = uVar2;
  return;
}


