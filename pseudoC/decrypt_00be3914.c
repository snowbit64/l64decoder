// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decrypt
// Entry Point: 00be3914
// Size: 508 bytes
// Signature: undefined __thiscall decrypt(CustomCipher * this, uchar * param_1, uint param_2, uchar * param_3)


/* CustomCipher::decrypt(unsigned char const*, unsigned int, unsigned char*) */

int __thiscall CustomCipher::decrypt(CustomCipher *this,uchar *param_1,uint param_2,uchar *param_3)

{
  long lVar1;
  CustomCipher CVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)(this + 0x2b8) = 0xf0e0d0c0b0a0908;
  *(undefined8 *)(this + 0x2b0) = 0x706050403020100;
  *(undefined8 *)(this + 0x2c8) = 0x1f1e1d1c1b1a1918;
  *(undefined8 *)(this + 0x2c0) = 0x1716151413121110;
  *(undefined8 *)(this + 0x2d8) = 0x2f2e2d2c2b2a2928;
  *(undefined8 *)(this + 0x2d0) = 0x2726252423222120;
  *(undefined8 *)(this + 0x2e8) = 0x3f3e3d3c3b3a3938;
  *(undefined8 *)(this + 0x2e0) = 0x3736353433323130;
  *(undefined8 *)(this + 0x2f8) = 0x4f4e4d4c4b4a4948;
  *(undefined8 *)(this + 0x2f0) = 0x4746454443424140;
  *(undefined8 *)(this + 0x308) = 0x5f5e5d5c5b5a5958;
  *(undefined8 *)(this + 0x300) = 0x5756555453525150;
  *(undefined8 *)(this + 0x318) = 0x6f6e6d6c6b6a6968;
  *(undefined8 *)(this + 0x310) = 0x6766656463626160;
  *(undefined8 *)(this + 0x328) = 0x7f7e7d7c7b7a7978;
  *(undefined8 *)(this + 800) = 0x7776757473727170;
  *(undefined8 *)(this + 0x338) = 0x8f8e8d8c8b8a8988;
  *(undefined8 *)(this + 0x330) = 0x8786858483828180;
  *(undefined8 *)(this + 0x348) = 0x9f9e9d9c9b9a9998;
  *(undefined8 *)(this + 0x340) = 0x9796959493929190;
  bVar5 = 0;
  *(undefined8 *)(this + 0x358) = 0xafaeadacabaaa9a8;
  *(undefined8 *)(this + 0x350) = 0xa7a6a5a4a3a2a1a0;
  *(undefined8 *)(this + 0x368) = 0xbfbebdbcbbbab9b8;
  *(undefined8 *)(this + 0x360) = 0xb7b6b5b4b3b2b1b0;
  *(undefined8 *)(this + 0x378) = 0xcfcecdcccbcac9c8;
  *(undefined8 *)(this + 0x370) = 0xc7c6c5c4c3c2c1c0;
  *(undefined8 *)(this + 0x388) = 0xdfdedddcdbdad9d8;
  *(undefined8 *)(this + 0x380) = 0xd7d6d5d4d3d2d1d0;
  *(undefined8 *)(this + 0x398) = 0xefeeedecebeae9e8;
  *(undefined8 *)(this + 0x390) = 0xe7e6e5e4e3e2e1e0;
  *(undefined8 *)(this + 0x3a8) = 0xfffefdfcfbfaf9f8;
  *(undefined8 *)(this + 0x3a0) = 0xf7f6f5f4f3f2f1f0;
  lVar4 = 0;
  do {
    lVar1 = lVar4 + 1;
    CVar2 = this[lVar4 + 0x2b0];
    bVar5 = (char)CVar2 + bVar5 + (char)this[(ulong)(uint)((int)lVar4 % 0x10) + 0x2a0];
    this[lVar4 + 0x2b0] = this[(ulong)bVar5 + 0x2b0];
    this[(ulong)bVar5 + 0x2b0] = CVar2;
    lVar4 = lVar1;
  } while (lVar1 != 0x100);
  uVar6 = param_2 >> 3;
  uVar7 = 5;
  while (uVar6 = uVar6 - 1, uVar6 != 0) {
    local_70 = *(undefined8 *)param_1;
    (**(code **)(this + uVar7 * 8))(this,&local_70);
    *(undefined8 *)param_3 = local_70;
    uVar7 = (ulong)(((int)uVar7 + 2U) % 0x44);
    param_1 = (uchar *)((long)param_1 + 8);
    param_3 = (uchar *)((long)param_3 + 8);
  }
  local_70 = *(undefined8 *)param_1;
  (**(code **)(this + uVar7 * 8))(this,&local_70);
  uVar6 = (uint)local_70._7_1_;
  if (local_70._7_1_ < 9) {
    memcpy(param_3,&local_70,(ulong)(8 - local_70._7_1_));
  }
  else {
    uVar6 = 0;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return (param_2 & 0xfffffff8) - uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


