// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPresets
// Entry Point: 00b0b25c
// Size: 1040 bytes
// Signature: undefined __thiscall setPresets(AudioReverbDesc * this, REVERB_PRESET_TYPES param_1)


/* AudioReverbDesc::setPresets(AudioReverbDesc::REVERB_PRESET_TYPES) */

void __thiscall AudioReverbDesc::setPresets(AudioReverbDesc *this,REVERB_PRESET_TYPES param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  switch(param_1) {
  default:
    uVar4 = 0x3f6429073ea1e8a3;
    uVar3 = 0x3f8000003f800000;
    uVar6 = 0x3f8000003f547ae1;
    uVar7 = 0x3be560423d4cd078;
    uVar8 = 0x3fa1249e00000000;
    goto LAB_00b0b38c;
  case 1:
    uVar4 = 0x3ea1e8a33ea1e8a3;
    uVar3 = 0x3f8000003f800000;
    uVar6 = 0x3f8000003e6b851f;
    uVar5 = 0x4120cccd00000000;
    uVar7 = 0x3ca3d70a3f00024b;
    uVar8 = 0x3fa0c59700000000;
    uVar2 = 0x3cf5c28f;
    goto LAB_00b0b394;
  case 2:
    uVar2 = 0x3db43958;
    uVar7 = 0x3e25e3543d56f601;
    uVar8 = 0x3f44abb400000000;
    uVar3 = 0x437a0000459c4000;
    *(undefined8 *)(this + 8) = 0x3cb7655c3ea1e8a3;
    *(undefined8 *)this = 0x3e99999a3f800000;
    *(undefined8 *)(this + 0x18) = 0x3f8000003f0a3d71;
    *(undefined8 *)(this + 0x10) = 0x3fbeb8523f800000;
    uVar4 = 0x3f8000003e000000;
    goto LAB_00b0b634;
  case 3:
    uVar1 = 0;
    uVar2 = 0x3c449ba6;
    uVar3 = 0x437a0000459c4000;
    *(undefined8 *)(this + 8) = 0x3f8000003ea1e8a3;
    *(undefined8 *)this = 0x3f8000003f800000;
    *(undefined8 *)(this + 0x18) = 0x3f8000003fc00000;
    *(undefined8 *)(this + 0x10) = 0x3fd333333f800000;
    uVar4 = 0x3e800000;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0x3c03126f3e5534bd;
    *(undefined8 *)(this + 0x30) = 0x3e87c26500000000;
    goto LAB_00b0b63c;
  case 4:
    uVar4 = 0x3ecbd4ae3ea1e8a3;
    uVar3 = 0x3f0000003f800000;
    uVar6 = 0x3f8000003f2b851f;
    uVar7 = 0x3be560423d9590a6;
    uVar8 = 0x3e12268100000000;
LAB_00b0b38c:
    uVar5 = 0x3fbeb8523f800000;
    uVar2 = 0x3c343958;
LAB_00b0b394:
    *(undefined8 *)(this + 8) = uVar4;
    *(undefined8 *)this = uVar3;
    uVar3 = 0x437a0000459c4000;
    break;
  case 6:
    uVar2 = 0x3cbc6a7f;
    uVar7 = 0x3cb439583e904d12;
    uVar8 = 0x3fb4ce1c00000000;
    uVar3 = 0x43b54000456b299a;
    *(undefined8 *)(this + 8) = 0x3f4b59143e809bd8;
    *(undefined8 *)this = 0x3f51eb853edb7cdd;
    *(undefined8 *)(this + 0x18) = 0x3fa7ae143f266666;
    *(undefined8 *)(this + 0x10) = 0x4030a3d73f004dcb;
    uVar4 = 0x3d8f5c293e322d0e;
    goto LAB_00b0b634;
  case 7:
    uVar2 = 0x3cbc6a7f;
    uVar7 = 0x3d1fbe773e36188b;
    uVar8 = 0x3f8f9e5a00000000;
    uVar3 = 0x43b54000456b299a;
    *(undefined8 *)(this + 8) = 0x3f353bf33e809bd8;
    *(undefined8 *)this = 0x3f4000003edb7cdd;
    *(undefined8 *)(this + 0x18) = 0x3fa7ae143f028f5c;
    *(undefined8 *)(this + 0x10) = 0x4087ae143f218666;
    uVar4 = 0x3d8f5c293e6c8b44;
    goto LAB_00b0b634;
  case 8:
    uVar2 = 0x3cdd2f1b;
    uVar7 = 0x3d9581063d813852;
    uVar8 = 0x3f64290700000000;
    uVar3 = 0x43b54000456b299a;
    *(undefined8 *)(this + 8) = 0x3f353bf33ea1e8a3;
    *(undefined8 *)this = 0x3f4000003edb7cdd;
    *(undefined8 *)(this + 0x18) = 0x3fa7ae143f028f5c;
    *(undefined8 *)(this + 0x10) = 0x40edc28f3f218666;
    uVar4 = 0x3d8f5c293e800000;
    goto LAB_00b0b634;
  case 9:
    uVar2 = 0x3cc49ba6;
    uVar7 = 0x3c23d70a3f353bf3;
    uVar8 = 0x3fe39eae00000000;
    uVar3 = 0x43b54000456b299a;
    *(undefined8 *)(this + 8) = 0x3f4b59143ea1e8a3;
    *(undefined8 *)this = 0x3f51eb853eba9fbe;
    *(undefined8 *)(this + 0x18) = 0x3fa7ae143f266666;
    *(undefined8 *)(this + 0x10) = 0x3fdc28f63f004dcb;
    uVar4 = 0x3d8f5c293df3b646;
    goto LAB_00b0b634;
  case 10:
    uVar6 = 0x3f8000003f4ccccd;
    uVar5 = 0x3fbeb8523f800000;
    uVar7 = 0x3ba3d70a3d4cd078;
    uVar8 = 0x3fa28f5c00000000;
    *(undefined8 *)(this + 8) = 0x3f2ccccd3f333333;
    *(undefined8 *)this = 0x3f8000003f800000;
    uVar3 = 0x437a000044a50000;
    uVar2 = 0x3c343958;
    break;
  case 0xb:
    uVar6 = 0x3f80000040911c43;
    uVar5 = 0x3f49a6b53eb97f63;
    uVar7 = 0x3dc91d153dbeab36;
    uVar8 = 0x3fa00d1b00000000;
    *(undefined8 *)(this + 8) = 0x3f5c5d643e94e3bd;
    *(undefined8 *)this = 0x3f8000003f800000;
    uVar3 = 0x439cdce745c0eef2;
    uVar2 = 0x3ca30553;
    break;
  case 0xc:
    uVar6 = 0x3f8000003e514e3c;
    uVar5 = 0x3db7e9103f0374bc;
    uVar7 = 0x3d81a36e3db3d07d;
    uVar8 = 0x3d6e632000000000;
    *(undefined8 *)(this + 8) = 0x3d3e76c93e487fcc;
    *(undefined8 *)this = 0x3f8000003f800000;
    uVar3 = 0x438881db453d53e7;
    uVar2 = 0x3de76c8b;
    break;
  case 0xd:
    *(undefined8 *)(this + 0x2c) = 0;
    uVar2 = 0x3c3e0ded;
    uVar3 = 0x4382b0dc45b09380;
    *(undefined4 *)(this + 0x20) = 0x3a83126f;
    *(undefined8 *)(this + 8) = 0x3f7134053fa542c4;
    *(undefined8 *)this = 0x3f8000003f800000;
    *(undefined8 *)(this + 0x18) = 0x3f80000040a00000;
    *(undefined8 *)(this + 0x10) = 0x3f3ac08340000000;
    uVar4 = 0x3e800000;
    uVar1 = 1;
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x34) = 0x400d6d5d;
    goto LAB_00b0b63c;
  case 0xe:
    uVar6 = 0x3f80000000000000;
    uVar5 = 0x3f0374bc;
    uVar7 = 0x3db717593c9374bc;
    uVar8 = 0x3e507c8500000000;
    *(undefined8 *)(this + 8) = 0x3d3e76c93e781d7e;
    *(undefined8 *)this = 0x3f8000003f800000;
    uVar3 = 0x434b3937455e0ac9;
    uVar2 = 0x3e8154ca;
    break;
  case 0xf:
    uVar6 = 0x3f8000004066ab36;
    uVar5 = 0x3f8299313f184b5e;
    uVar7 = 0x3cb923a33f607c85;
    uVar8 = 0x3f9c538f00000000;
    *(undefined8 *)(this + 8) = 0x3f1dd2f23f0b5dcc;
    *(undefined8 *)this = 0x3f8000003f800000;
    uVar3 = 0x434b395845acf0f4;
    uVar2 = 0x3d1930be;
  }
  uVar4 = 0x3e800000;
  *(undefined8 *)(this + 0x18) = uVar6;
  *(undefined8 *)(this + 0x10) = uVar5;
LAB_00b0b634:
  uVar1 = 1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = uVar7;
  *(undefined8 *)(this + 0x30) = uVar8;
LAB_00b0b63c:
  *(undefined4 *)(this + 0x38) = uVar2;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x48) = uVar4;
  *(undefined8 *)(this + 0x50) = 0x3e800000;
  *(undefined4 *)(this + 0x58) = 0x3f7e87d3;
  *(undefined8 *)(this + 0x5c) = uVar3;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = uVar1;
  return;
}


