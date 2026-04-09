// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMemorySize
// Entry Point: 00a94e2c
// Size: 1056 bytes
// Signature: undefined __cdecl getMemorySize(uint param_1, uint param_2, uint param_3, FORMAT param_4, TYPE param_5)


/* ImageUtil::getMemorySize(unsigned int, unsigned int, unsigned int, ImageDesc::FORMAT,
   ImageDesc::TYPE) */

uint ImageUtil::getMemorySize(uint param_1,uint param_2,uint param_3,FORMAT param_4,TYPE param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  switch(param_4) {
  case 1:
    if (param_5 - 1 < 8) {
      uVar1 = param_2 * param_1 * param_3 * *(int *)(&DAT_005175a0 + (long)(int)(param_5 - 1) * 4);
    }
    else {
      DebugUtil::message("Error","ImageUtil::getTypeMemorySize: invalid type",(char *)0x0,
                         "T:/src/base/2d/ImageUtil.cpp",800);
      uVar1 = 0;
    }
    break;
  case 2:
    if (param_5 - 1 < 8) {
      iVar2 = *(int *)(&DAT_005175a0 + (long)(int)(param_5 - 1) * 4);
    }
    else {
      DebugUtil::message("Error","ImageUtil::getTypeMemorySize: invalid type",(char *)0x0,
                         "T:/src/base/2d/ImageUtil.cpp",800);
      iVar2 = 0;
    }
    uVar1 = param_2 * param_1 * param_3 * iVar2 * 2;
    break;
  case 3:
  case 4:
    if (param_5 - 1 < 8) {
      iVar2 = *(int *)(&DAT_005175a0 + (long)(int)(param_5 - 1) * 4);
    }
    else {
      DebugUtil::message("Error","ImageUtil::getTypeMemorySize: invalid type",(char *)0x0,
                         "T:/src/base/2d/ImageUtil.cpp",800);
      iVar2 = 0;
    }
    uVar1 = param_2 * param_1 * param_3 * iVar2 * 3;
    break;
  case 5:
  case 6:
    if (param_5 - 1 < 8) {
      iVar2 = *(int *)(&DAT_005175a0 + (long)(int)(param_5 - 1) * 4);
    }
    else {
      DebugUtil::message("Error","ImageUtil::getTypeMemorySize: invalid type",(char *)0x0,
                         "T:/src/base/2d/ImageUtil.cpp",800);
      iVar2 = 0;
    }
    uVar1 = param_2 * param_1 * param_3 * iVar2 * 4;
    break;
  case 7:
  case 10:
  case 0xb:
    uVar3 = (param_2 + 3 >> 2) * (param_1 + 3 >> 2);
    uVar1 = 8;
    if (1 < uVar3) {
      uVar1 = uVar3 * 8;
    }
    break;
  case 8:
  case 9:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    uVar3 = (param_2 + 3 >> 2) * (param_1 + 3 >> 2);
    uVar1 = 0x10;
    if (1 < uVar3) {
      uVar1 = uVar3 * 0x10;
    }
    break;
  case 0x11:
  case 0x12:
    uVar1 = param_1 + 7;
    goto LAB_00a94f48;
  case 0x13:
  case 0x14:
    uVar1 = param_1 * 2 + 6;
LAB_00a94f48:
    uVar1 = (uVar1 & 0xfffffff8) * (param_2 + 3 >> 2);
    if (uVar1 < 0x21) {
      uVar1 = 0x20;
    }
    break;
  case 0x15:
  case 0x16:
  case 0x19:
    uVar1 = (param_1 * 2 + 6 & 0xfffffff8) * (param_2 + 3 >> 2);
    break;
  case 0x17:
  case 0x18:
  case 0x1a:
  case 0x1f:
    uVar1 = param_1 * 4 + 0xc;
    uVar3 = param_2 + 3 >> 2;
    goto LAB_00a94fbc;
  default:
    DebugUtil::message("Error","ImageUtil::getMemorySize: invalid pixel format",(char *)0x0,
                       "T:/src/base/2d/ImageUtil.cpp",0x36c);
    uVar1 = 0;
    break;
  case 0x1e:
    uVar1 = param_2 * param_1 * param_3 * 4;
    break;
  case 0x20:
    uVar1 = param_2 + 3 >> 2;
    uVar3 = (param_1 + 4) / 5;
    goto LAB_00a95098;
  case 0x21:
    uVar1 = param_1 + 4;
    uVar4 = 0xcccccccd;
    uVar3 = param_2 + 4;
    goto LAB_00a950e8;
  case 0x22:
    uVar1 = (uint)((ulong)(param_1 + 5) * 0xaaaaaaab >> 0x20);
    uVar3 = (uint)((ulong)(param_2 + 4) * 0xcccccccd >> 0x20);
    goto LAB_00a950f0;
  case 0x23:
    uVar1 = param_1 + 5;
    uVar4 = 0xaaaaaaab;
    uVar3 = param_2 + 5;
LAB_00a950e8:
    uVar1 = (uint)((ulong)uVar1 * (ulong)uVar4 >> 0x20);
    uVar3 = (uint)((ulong)uVar3 * (ulong)uVar4 >> 0x20);
LAB_00a950f0:
    uVar1 = uVar1 >> 2;
LAB_00a95138:
    uVar3 = uVar3 >> 2;
LAB_00a95160:
    iVar2 = uVar1 * uVar3;
    goto LAB_00a95164;
  case 0x24:
    uVar1 = (param_1 * 2 + 0xe & 0xfffffff0) * ((param_2 + 5) / 6);
    break;
  case 0x25:
    uVar1 = (uint)((ulong)(param_1 + 9) * 0xcccccccd >> 0x20);
    uVar3 = (uint)((ulong)(param_2 + 4) * 0xcccccccd >> 0x20);
    goto LAB_00a95134;
  case 0x26:
    uVar1 = (uint)((ulong)(param_1 + 9) * 0xcccccccd >> 0x20);
    uVar3 = (uint)((ulong)(param_2 + 5) * 0xaaaaaaab >> 0x20);
LAB_00a95134:
    uVar1 = uVar1 >> 3;
    goto LAB_00a95138;
  case 0x27:
    uVar1 = param_1 * 2 + 0xe;
    uVar3 = param_2 + 7 >> 3;
LAB_00a94fbc:
    uVar1 = (uVar1 & 0xfffffff0) * uVar3;
    break;
  case 0x28:
    uVar1 = param_2 + 7 >> 3;
    uVar3 = (param_1 + 9) / 10;
LAB_00a95098:
    iVar2 = uVar3 * uVar1;
LAB_00a95164:
    uVar1 = iVar2 << 4;
    break;
  case 0x29:
    uVar1 = param_1 + 9;
    uVar4 = 0xcccccccd;
    uVar3 = param_2 + 9;
    goto LAB_00a95150;
  case 0x2a:
    uVar1 = (uint)((ulong)(param_1 + 0xb) * 0xaaaaaaab >> 0x20);
    uVar3 = (uint)((ulong)(param_2 + 9) * 0xcccccccd >> 0x20);
    goto LAB_00a95158;
  case 0x2b:
    uVar1 = param_1 + 0xb;
    uVar4 = 0xaaaaaaab;
    uVar3 = param_2 + 0xb;
LAB_00a95150:
    uVar1 = (uint)((ulong)uVar1 * (ulong)uVar4 >> 0x20);
    uVar3 = (uint)((ulong)uVar3 * (ulong)uVar4 >> 0x20);
LAB_00a95158:
    uVar1 = uVar1 >> 3;
    uVar3 = uVar3 >> 3;
    goto LAB_00a95160;
  }
  return uVar1;
}


