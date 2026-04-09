// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initPS4Profile
// Entry Point: 00756a20
// Size: 512 bytes
// Signature: undefined initPS4Profile(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HardwareScalability::initPS4Profile() */

void HardwareScalability::initPS4Profile(void)

{
  int iVar1;
  undefined4 *in_x0;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar1 = in_x0[0x42];
  if (iVar1 == 1) {
    *(undefined *)((long)in_x0 + 0x11) = 0;
    *(undefined8 *)(in_x0 + 10) = 0x3fa666663fa66666;
    *(undefined8 *)(in_x0 + 8) = 0x3f8000003f800000;
    *(undefined8 *)(in_x0 + 0xe) = 0x13fcccccd;
    *(undefined8 *)(in_x0 + 0xc) = 0x3fcccccd40000000;
    *(undefined8 *)(in_x0 + 0x1a) = 0x400000001;
    *(undefined8 *)(in_x0 + 0x18) = 3;
    *(undefined8 *)(in_x0 + 0x1e) = 0x100000003;
    *(undefined8 *)(in_x0 + 0x1c) = 0x3f80000000000005;
    *(undefined8 *)(in_x0 + 0x1b) = 0x500000008;
    *(undefined8 *)(in_x0 + 0x16) = 0x500000010;
    *(undefined8 *)(in_x0 + 0x14) = 0x80000000001;
    uVar3 = 0x3fcccccd;
    *(undefined8 *)(in_x0 + 0x2a) = 0x500000013;
    *(undefined8 *)(in_x0 + 0x28) = 0x2000000004;
    *(undefined8 *)(in_x0 + 0x2e) = 0x3f00000000000100;
    *(undefined8 *)(in_x0 + 0x2c) = 0x400010101;
    *(undefined8 *)(in_x0 + 0x22) = 0;
    *(undefined8 *)(in_x0 + 0x20) = 0x500000001;
    *(undefined8 *)(in_x0 + 0x12) = 0x240000000;
    *(undefined8 *)(in_x0 + 0x10) = 0x408000003f400000;
    *(undefined8 *)(in_x0 + 0x32) = 0x100000000;
    *(undefined8 *)(in_x0 + 0x30) = 2;
    *(undefined8 *)(in_x0 + 0x36) = 0;
    *(undefined8 *)(in_x0 + 0x34) = 0x3f800000459c4000;
    uVar4 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(in_x0 + 0x26) = 0x1003f800000;
    *(undefined8 *)(in_x0 + 0x24) = 4;
    *(undefined *)(in_x0 + 7) = 1;
    *(undefined8 *)(in_x0 + 0x38) = 0;
    *(undefined8 *)(in_x0 + 8) = uVar4;
    in_x0[5] = 3;
    in_x0[6] = 3;
    in_x0[0x2d] = 3;
    in_x0[0x12] = 0x40800000;
    *(undefined8 *)(in_x0 + 0x1f) = 0x100000001;
    *(undefined8 *)(in_x0 + 0x17) = 0x200000003;
    *in_x0 = 4;
  }
  else {
    *(undefined *)((long)in_x0 + 0x11) = 0;
    *(undefined8 *)(in_x0 + 0x1a) = 0x200000001;
    *(undefined8 *)(in_x0 + 0x18) = 2;
    *(undefined8 *)(in_x0 + 0x1e) = 0x100000003;
    *(undefined8 *)(in_x0 + 0x1c) = 0x3f80000000000005;
    *(undefined8 *)(in_x0 + 0x38) = 0;
    *(undefined8 *)(in_x0 + 0x2a) = 0x40000000f;
    *(undefined8 *)(in_x0 + 0x28) = 0x2000000004;
    *(undefined8 *)(in_x0 + 0x2e) = 0x3f00000000000100;
    *(undefined8 *)(in_x0 + 0x2c) = 0x300010101;
    *(undefined8 *)(in_x0 + 0x1b) = 0x500000004;
    in_x0[0x2a] = 0xf;
    *(undefined8 *)(in_x0 + 0x12) = 0x13f800000;
    *(undefined8 *)(in_x0 + 0x10) = 0x400000003f59999a;
    *(undefined8 *)(in_x0 + 0x16) = 0x300000010;
    *(undefined8 *)(in_x0 + 0x14) = 0x80000000000;
    in_x0[0x12] = 0x40000000;
    in_x0[5] = 2;
    in_x0[6] = 2;
    in_x0[0x2d] = 2;
    *in_x0 = 4;
    *(undefined8 *)(in_x0 + 0x22) = 0;
    *(undefined8 *)(in_x0 + 0x20) = 0x500000001;
    *(undefined8 *)(in_x0 + 0x26) = 0x1003f800000;
    *(undefined8 *)(in_x0 + 0x24) = 4;
    *(undefined8 *)(in_x0 + 10) = 0x3f8ccccd3f8ccccd;
    *(undefined8 *)(in_x0 + 8) = 0x3f8000003f800000;
    *(undefined8 *)(in_x0 + 0xe) = 0x13fb33333;
    *(undefined8 *)(in_x0 + 0xc) = 0x3fb333333fc00000;
    *(undefined *)(in_x0 + 7) = 1;
    *(undefined *)(in_x0 + 0x14) = 1;
    *(undefined8 *)(in_x0 + 0x32) = 0x100000000;
    *(undefined8 *)(in_x0 + 0x30) = 1;
    *(undefined8 *)(in_x0 + 0x36) = 0;
    *(undefined8 *)(in_x0 + 0x34) = 0x3f800000459c4000;
    in_x0[0x20] = 1;
    if (iVar1 == 2) {
      in_x0[0x1f] = 1;
      uVar4 = 0x3faaaaab3f800000;
      uVar2 = 0x3f3504f3;
    }
    else {
      if (iVar1 != 3) {
        uVar4 = NEON_fmov(0x3f800000,4);
        uVar3 = 0x3fb33333;
        *(undefined8 *)(in_x0 + 8) = uVar4;
        in_x0[0x1f] = 1;
        goto LAB_00756bf4;
      }
      uVar4 = 0x400000003f800000;
      uVar2 = 0x3f000000;
      in_x0[0x1f] = 1;
      in_x0[0x12] = 0x40800000;
    }
    uVar3 = 0x3fb33333;
    *(undefined8 *)(in_x0 + 8) = uVar4;
    in_x0[0x1d] = uVar2;
  }
LAB_00756bf4:
  in_x0[0xe] = uVar3;
  *(undefined *)((long)in_x0 + 0xb3) = 0;
  in_x0[0x1e] = 3;
  in_x0[0x28] = 1;
  *(undefined *)(in_x0 + 0xf) = 0;
  *(undefined8 *)(in_x0 + 2) = 0x43800000780;
  return;
}


